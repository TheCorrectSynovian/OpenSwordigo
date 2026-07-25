import idaapi
import idautils
import ida_funcs
import ida_hexrays
import ida_name
import ida_nalt
import os
import re

OUT = os.path.expanduser(
    "~/SwordigoDesktop/OpenSwordigo/rln/ida_decompiled"
)

os.makedirs(OUT, exist_ok=True)

if not ida_hexrays.init_hexrays_plugin():
    raise RuntimeError("Hex-Rays decompiler is not available")

output_file = os.path.join(OUT, "libswordigo_ida.c")

functions = list(idautils.Functions())

ok = 0
failed = 0

with open(output_file, "w", encoding="utf-8") as out:

    out.write("/*\n")
    out.write(" * OpenSwordigo reverse-engineering evidence\n")
    out.write(" * Generated using IDA Pro + Hex-Rays\n")
    out.write(" * NOT ORIGINAL SOURCE CODE\n")
    out.write(" */\n\n")

    for i, ea in enumerate(functions, 1):

        func = ida_funcs.get_func(ea)
        if not func:
            continue

        name = ida_name.get_name(ea)

        print(f"[{i}/{len(functions)}] {ea:016X} {name}")

        out.write("\n\n")
        out.write("/* ============================================================ */\n")
        out.write(f"/* Address: 0x{ea:X} */\n")
        out.write(f"/* Function: {name} */\n")
        out.write("/* ============================================================ */\n\n")

        try:
            cfunc = ida_hexrays.decompile(ea)

            if cfunc:
                out.write(str(cfunc))
                out.write("\n")
                ok += 1
            else:
                out.write("/* DECOMPILATION FAILED */\n")
                failed += 1

        except Exception as e:
            out.write(f"/* DECOMPILATION ERROR: {e} */\n")
            failed += 1

print()
print("======================================")
print("IDA EXPORT COMPLETE")
print("Decompiled:", ok)
print("Failed:    ", failed)
print("Output:    ", output_file)
print("======================================")
