# OpenSwordigo IDA / Hex-Rays Evidence Exporter v2
#
# Intended for IDA 9.x + IDAPython + Hex-Rays.
#
# Exports:
#   ida_decompiled/
#     functions/
#       Caver/
#         Scene/
#         SceneObject/
#         RenderingContext/
#         ...
#       boost/
#       google/
#       global/
#     index.tsv
#     failures.tsv
#     callgraph.tsv
#     strings.tsv
#     libswordigo_ida.c
#
# IMPORTANT:
#   This is RE evidence, NOT reconstructed source code.
#   Addresses are preserved so IDA/Ghidra/ASM can be cross-referenced.

import idaapi
import ida_funcs
import ida_hexrays
import ida_name
import ida_nalt
import idautils
import idc

import os
import re
import traceback


# ============================================================
# CONFIG
# ============================================================

OUTPUT_DIR = os.path.expanduser(
    "~/SwordigoDesktop/OpenSoozis/"
)

FUNCTION_DIR = os.path.join(OUTPUT_DIR, "functions")

INDEX_FILE = os.path.join(OUTPUT_DIR, "index.tsv")
FAIL_FILE = os.path.join(OUTPUT_DIR, "failures.tsv")
CALLGRAPH_FILE = os.path.join(OUTPUT_DIR, "callgraph.tsv")
STRINGS_FILE = os.path.join(OUTPUT_DIR, "strings.tsv")
COMBINED_FILE = os.path.join(OUTPUT_DIR, "libswordigo_ida.c")


# ============================================================
# HELPERS
# ============================================================

def safe_component(s):
    """
    Convert arbitrary C++ identifier text into a safe filename component.
    """

    if not s:
        return "_unknown"

    s = s.strip()

    replacements = {
        "<": "_",
        ">": "_",
        ":": "_",
        "/": "_",
        "\\": "_",
        "*": "_ptr",
        "&": "_ref",
        " ": "_",
        ",": "_",
        "(": "_",
        ")": "_",
        "[": "_",
        "]": "_",
        "?": "_",
        "\"": "_",
        "'": "_",
        "|": "_",
    }

    for old, new in replacements.items():
        s = s.replace(old, new)

    s = re.sub(r"_+", "_", s)

    if len(s) > 180:
        s = s[:180]

    return s.strip("_") or "_unknown"


def get_raw_name(ea):
    name = ida_name.get_name(ea)

    if not name:
        name = "sub_%X" % ea

    return name


def get_demangled_name(ea):
    raw = get_raw_name(ea)

    demangled = ida_name.demangle_name(
        raw,
        ida_name.MNG_SHORT_FORM
    )

    if demangled:
        return demangled

    return raw


def remove_signature(name):
    """
    Convert:
        Caver::Scene::LoadFromFile(std::string const&)
    into:
        Caver::Scene::LoadFromFile
    """

    pos = name.find("(")

    if pos != -1:
        name = name[:pos]

    return name.strip()


def split_cpp_name(name):
    """
    Best-effort namespace/class decomposition.

    Caver::Scene::LoadFromFile
        -> ["Caver", "Scene", "LoadFromFile"]

    We deliberately do NOT try to perfectly parse templates.
    """

    name = remove_signature(name)

    # Avoid splitting :: occurring inside templates perfectly;
    # for Swordigo symbols this simple method is generally useful.
    parts = name.split("::")

    return [p for p in parts if p]


def function_output_path(ea, demangled):
    parts = split_cpp_name(demangled)

    addr = "%016X" % ea

    if len(parts) >= 2:
        directories = parts[:-1]
        function_name = parts[-1]
    else:
        directories = ["global"]
        function_name = parts[0] if parts else "unknown"

    safe_dirs = [safe_component(x) for x in directories]

    directory = os.path.join(
        FUNCTION_DIR,
        *safe_dirs
    )

    os.makedirs(directory, exist_ok=True)

    filename = "%s__%s.c" % (
        addr,
        safe_component(function_name)
    )

    return os.path.join(directory, filename)


def clean_text(text):
    if text is None:
        return ""

    return str(text).replace("\r\n", "\n")


# ============================================================
# XREF / CALLGRAPH
# ============================================================

def get_callers(func_ea):
    callers = set()

    for xref in idautils.XrefsTo(func_ea, 0):

        caller_func = ida_funcs.get_func(xref.frm)

        if caller_func:
            callers.add(caller_func.start_ea)

    return sorted(callers)


def get_callees(func_ea):
    callees = set()

    func = ida_funcs.get_func(func_ea)

    if not func:
        return []

    for item_ea in idautils.FuncItems(func_ea):

        for xref in idautils.XrefsFrom(item_ea, 0):

            target_func = ida_funcs.get_func(xref.to)

            if target_func:
                target_ea = target_func.start_ea

                if target_ea != func_ea:
                    callees.add(target_ea)

    return sorted(callees)


# ============================================================
# STRING REFERENCES
# ============================================================

def get_string_at(ea):
    try:
        raw = idc.get_strlit_contents(ea)

        if raw is None:
            return None

        if isinstance(raw, bytes):
            return raw.decode("utf-8", errors="replace")

        return str(raw)

    except Exception:
        return None


def get_referenced_strings(func_ea):
    result = []

    func = ida_funcs.get_func(func_ea)

    if not func:
        return result

    seen = set()

    for item_ea in idautils.FuncItems(func_ea):

        for xref in idautils.XrefsFrom(item_ea, 0):

            s = get_string_at(xref.to)

            if s is None:
                continue

            key = (xref.to, s)

            if key in seen:
                continue

            seen.add(key)

            result.append(
                (
                    item_ea,
                    xref.to,
                    s
                )
            )

    return result


# ============================================================
# DECOMPILATION
# ============================================================

def decompile_function(ea):
    cfunc = ida_hexrays.decompile(ea)

    if not cfunc:
        raise RuntimeError("Hex-Rays returned no cfunc")

    return clean_text(cfunc)


# ============================================================
# FUNCTION HEADER
# ============================================================

def build_header(ea, raw_name, demangled, callers, callees, strings):
    lines = []

    lines.append("/*")
    lines.append(" * OpenSwordigo reverse-engineering evidence")
    lines.append(" *")
    lines.append(" * Source: IDA Pro / Hex-Rays")
    lines.append(" * Address: 0x%016X" % ea)
    lines.append(" * Mangled: %s" % raw_name)
    lines.append(" * Demangled: %s" % demangled)
    lines.append(" *")
    lines.append(" * Callers: %d" % len(callers))

    for caller in callers:
        lines.append(
            " *   0x%016X  %s" %
            (
                caller,
                get_demangled_name(caller)
            )
        )

    lines.append(" *")
    lines.append(" * Callees: %d" % len(callees))

    for callee in callees:
        lines.append(
            " *   0x%016X  %s" %
            (
                callee,
                get_demangled_name(callee)
            )
        )

    lines.append(" *")
    lines.append(" * Referenced strings: %d" % len(strings))

    for insn_ea, string_ea, value in strings:

        value = value.replace("\n", "\\n")
        value = value.replace("\t", "\\t")

        if len(value) > 160:
            value = value[:157] + "..."

        lines.append(
            " *   insn=0x%016X string=0x%016X \"%s\"" %
            (
                insn_ea,
                string_ea,
                value
            )
        )

    lines.append(" *")
    lines.append(" * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.")
    lines.append(" */")
    lines.append("")
    lines.append("")

    return "\n".join(lines)


# ============================================================
# MAIN
# ============================================================

def main():

    print("=" * 70)
    print("OpenSwordigo IDA Evidence Exporter v2")
    print("=" * 70)

    if not ida_hexrays.init_hexrays_plugin():
        print("ERROR: Hex-Rays decompiler is unavailable.")
        return

    os.makedirs(OUTPUT_DIR, exist_ok=True)
    os.makedirs(FUNCTION_DIR, exist_ok=True)

    functions = list(idautils.Functions())

    total = len(functions)

    print("Functions:", total)
    print("Output:", OUTPUT_DIR)
    print()

    decompiled_count = 0
    failed_count = 0

    with open(INDEX_FILE, "w", encoding="utf-8") as index_fp, \
         open(FAIL_FILE, "w", encoding="utf-8") as fail_fp, \
         open(CALLGRAPH_FILE, "w", encoding="utf-8") as call_fp, \
         open(STRINGS_FILE, "w", encoding="utf-8") as strings_fp, \
         open(COMBINED_FILE, "w", encoding="utf-8") as combined_fp:

        index_fp.write(
            "address\tmangled\tdemangled\tfile\tcallers\tcallees\tstrings\n"
        )

        fail_fp.write(
            "address\tmangled\tdemangled\treason\n"
        )

        call_fp.write(
            "caller_address\tcaller_name\tcallee_address\tcallee_name\n"
        )

        strings_fp.write(
            "function_address\tfunction_name\tinstruction_address\t"
            "string_address\tstring\n"
        )

        combined_fp.write(
            "/*\n"
            " * OpenSwordigo IDA combined Hex-Rays evidence export\n"
            " * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.\n"
            " */\n\n"
        )

        for index, ea in enumerate(functions, 1):

            raw_name = get_raw_name(ea)
            demangled = get_demangled_name(ea)

            print(
                "[%d/%d] %016X %s" %
                (
                    index,
                    total,
                    ea,
                    demangled
                )
            )

            callers = get_callers(ea)
            callees = get_callees(ea)
            referenced_strings = get_referenced_strings(ea)

            # ------------------------------------------------
            # Export call graph
            # ------------------------------------------------

            for callee in callees:

                call_fp.write(
                    "%016X\t%s\t%016X\t%s\n" %
                    (
                        ea,
                        demangled.replace("\t", " "),
                        callee,
                        get_demangled_name(callee).replace("\t", " ")
                    )
                )

            # ------------------------------------------------
            # Export strings
            # ------------------------------------------------

            for insn_ea, string_ea, value in referenced_strings:

                clean_value = (
                    value
                    .replace("\t", "\\t")
                    .replace("\n", "\\n")
                    .replace("\r", "\\r")
                )

                strings_fp.write(
                    "%016X\t%s\t%016X\t%016X\t%s\n" %
                    (
                        ea,
                        demangled.replace("\t", " "),
                        insn_ea,
                        string_ea,
                        clean_value
                    )
                )

            # ------------------------------------------------
            # Hex-Rays
            # ------------------------------------------------

            try:

                pseudocode = decompile_function(ea)

                output_path = function_output_path(
                    ea,
                    demangled
                )

                header = build_header(
                    ea,
                    raw_name,
                    demangled,
                    callers,
                    callees,
                    referenced_strings
                )

                with open(
                    output_path,
                    "w",
                    encoding="utf-8"
                ) as fp:

                    fp.write(header)
                    fp.write(pseudocode)
                    fp.write("\n")

                relative_path = os.path.relpath(
                    output_path,
                    OUTPUT_DIR
                )

                index_fp.write(
                    "%016X\t%s\t%s\t%s\t%d\t%d\t%d\n" %
                    (
                        ea,
                        raw_name.replace("\t", " "),
                        demangled.replace("\t", " "),
                        relative_path,
                        len(callers),
                        len(callees),
                        len(referenced_strings)
                    )
                )

                # Combined export
                combined_fp.write(
                    "\n\n"
                    "/* ========================================================\n"
                    " * 0x%016X\n"
                    " * %s\n"
                    " * ======================================================== */\n\n"
                    %
                    (
                        ea,
                        demangled
                    )
                )

                combined_fp.write(pseudocode)
                combined_fp.write("\n")

                decompiled_count += 1

            except Exception as exc:

                failed_count += 1

                reason = "%s: %s" % (
                    type(exc).__name__,
                    str(exc)
                )

                reason = (
                    reason
                    .replace("\t", " ")
                    .replace("\n", " ")
                )

                fail_fp.write(
                    "%016X\t%s\t%s\t%s\n" %
                    (
                        ea,
                        raw_name.replace("\t", " "),
                        demangled.replace("\t", " "),
                        reason
                    )
                )

                print(
                    "    FAILED:",
                    reason
                )

            # Flush occasionally in case IDA crashes.
            if index % 100 == 0:

                index_fp.flush()
                fail_fp.flush()
                call_fp.flush()
                strings_fp.flush()
                combined_fp.flush()

    print()
    print("=" * 70)
    print("IDA EXPORT COMPLETE")
    print("Decompiled:", decompiled_count)
    print("Failed:    ", failed_count)
    print("Output:    ", OUTPUT_DIR)
    print("=" * 70)


if __name__ == "__main__":
    try:
        main()

    except Exception:
        print()
        print("FATAL EXPORTER ERROR")
        print(traceback.format_exc())