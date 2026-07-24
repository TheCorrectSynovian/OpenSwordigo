//@category OpenSwordigo
//@author OpenSwordigo

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.HashSet;
import java.util.Set;

public class ExportOpenSwordigo extends GhidraScript {

    private static final int DECOMPILE_TIMEOUT_SECONDS = 120;

    private String sanitize(String s) {
        if (s == null || s.isEmpty()) {
            return "unnamed";
        }

        return s
            .replace("::", "__")
            .replaceAll("[^A-Za-z0-9_.~+-]", "_")
            .replaceAll("_+", "_");
    }

    private String classify(Function f) {
        String name = f.getName(true);

        if (name.startsWith("Caver::Proto::")) {
            return "Caver/Proto";
        }

        if (name.startsWith("Caver::")) {
            return "Caver";
        }

        if (name.startsWith("boost::")) {
            return "third_party/boost";
        }

        if (name.startsWith("std::")) {
            return "third_party/std";
        }

        if (name.startsWith("lua") ||
            name.startsWith("lua_") ||
            name.startsWith("luaL_")) {
            return "third_party/lua";
        }

        if (f.isExternal()) {
            return "external";
        }

        return "unknown";
    }

    private String hexAddress(Address a) {
        return a.toString().replace("0x", "");
    }

    @Override
    public void run() throws Exception {

        String[] args = getScriptArgs();

        if (args.length < 1) {
            printerr(
                "Usage: ExportOpenSwordigo.java <output-directory>"
            );
            return;
        }

        File outputRoot = new File(args[0]);
        File functionsRoot = new File(outputRoot, "functions");

        outputRoot.mkdirs();
        functionsRoot.mkdirs();

        File indexFile = new File(outputRoot, "index.tsv");
        File failuresFile = new File(outputRoot, "failures.tsv");
        File allFile = new File(outputRoot, "all_decompiled.c");

        PrintWriter index = new PrintWriter(
            new OutputStreamWriter(
                new FileOutputStream(indexFile),
                StandardCharsets.UTF_8
            )
        );

        PrintWriter failures = new PrintWriter(
            new OutputStreamWriter(
                new FileOutputStream(failuresFile),
                StandardCharsets.UTF_8
            )
        );

        PrintWriter all = new PrintWriter(
            new OutputStreamWriter(
                new FileOutputStream(allFile),
                StandardCharsets.UTF_8
            )
        );

        index.println(
            "address\tname\tfull_name\tcategory\tfile\tthunk\texternal"
        );

        failures.println(
            "address\tname\treason"
        );

        DecompInterface decompiler = new DecompInterface();

        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.setSimplificationStyle("decompile");

        if (!decompiler.openProgram(currentProgram)) {
            printerr("Could not initialize decompiler.");
            index.close();
            failures.close();
            all.close();
            return;
        }

        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);

        int total = currentProgram
            .getFunctionManager()
            .getFunctionCount();

        int processed = 0;
        int succeeded = 0;
        int failed = 0;

        Set<String> usedPaths = new HashSet<>();

        println("============================================");
        println(" OpenSwordigo Ghidra Bulk Decompiler");
        println(" Program: " + currentProgram.getName());
        println(" Functions: " + total);
        println(" Output: " + outputRoot.getAbsolutePath());
        println("============================================");

        while (functions.hasNext() && !monitor.isCancelled()) {

            Function function = functions.next();
            processed++;

            Address entry = function.getEntryPoint();
            String address = hexAddress(entry);
            String fullName = function.getName(true);
            String shortName = function.getName();

            if (processed % 100 == 0 || processed == 1) {
                println(
                    "[" + processed + "/" + total + "] " +
                    address + " " + fullName
                );
            }

            try {
                DecompileResults results =
                    decompiler.decompileFunction(
                        function,
                        DECOMPILE_TIMEOUT_SECONDS,
                        monitor
                    );

                if (!results.decompileCompleted()) {
                    failed++;

                    String reason = results.getErrorMessage();

                    failures.println(
                        address + "\t" +
                        fullName.replace('\t', ' ') + "\t" +
                        String.valueOf(reason).replace('\t', ' ')
                    );

                    failures.flush();
                    continue;
                }

                String cCode =
                    results.getDecompiledFunction().getC();

                String category = classify(function);

                File categoryDir =
                    new File(functionsRoot, category);

                categoryDir.mkdirs();

                String baseName =
                    address + "__" + sanitize(fullName);

                if (baseName.length() > 180) {
                    baseName =
                        address + "__" + sanitize(shortName);

                    if (baseName.length() > 180) {
                        baseName =
                            address + "__function";
                    }
                }

                String relativePath =
                    "functions/" +
                    category + "/" +
                    baseName + ".c";

                // Address normally guarantees uniqueness, but keep this safe.
                if (usedPaths.contains(relativePath)) {
                    relativePath =
                        "functions/" +
                        category + "/" +
                        baseName + "__dup.c";
                }

                usedPaths.add(relativePath);

                File outFile =
                    new File(outputRoot, relativePath);

                try (
                    PrintWriter writer =
                        new PrintWriter(
                            new OutputStreamWriter(
                                new FileOutputStream(outFile),
                                StandardCharsets.UTF_8
                            )
                        )
                ) {
                    writer.println("/*");
                    writer.println(
                        " * OpenSwordigo reverse-engineering evidence"
                    );
                    writer.println(
                        " * Ghidra program: " +
                        currentProgram.getName()
                    );
                    writer.println(
                        " * Address: " + entry
                    );
                    writer.println(
                        " * Function: " + fullName
                    );
                    writer.println(
                        " * Signature: " +
                        function.getSignature().toString()
                    );
                    writer.println(
                        " * Thunk: " + function.isThunk()
                    );
                    writer.println(
                        " * External: " + function.isExternal()
                    );
                    writer.println(
                        " *"
                    );
                    writer.println(
                        " * GENERATED EVIDENCE. NOT CLEAN SOURCE."
                    );
                    writer.println(" */");
                    writer.println();
                    writer.println(cCode);
                }

                index.println(
                    address + "\t" +
                    shortName.replace('\t', ' ') + "\t" +
                    fullName.replace('\t', ' ') + "\t" +
                    category + "\t" +
                    relativePath + "\t" +
                    function.isThunk() + "\t" +
                    function.isExternal()
                );

                all.println();
                all.println();
                all.println(
                    "/* ======================================= */"
                );
                all.println(
                    "/* " + address + " : " + fullName + " */"
                );
                all.println(
                    "/* ======================================= */"
                );
                all.println();
                all.println(cCode);

                succeeded++;

                if (succeeded % 25 == 0) {
                    index.flush();
                    all.flush();
                }

            }
            catch (Exception e) {

                failed++;

                failures.println(
                    address + "\t" +
                    fullName.replace('\t', ' ') + "\t" +
                    e.toString().replace('\t', ' ')
                );

                failures.flush();

                printerr(
                    "FAILED " +
                    address + " " +
                    fullName + ": " +
                    e
                );
            }
        }

        index.close();
        failures.close();
        all.close();

        decompiler.dispose();

        println("");
        println("============================================");
        println(" EXPORT COMPLETE");
        println(" Processed : " + processed);
        println(" Decompiled: " + succeeded);
        println(" Failed    : " + failed);
        println(" Output    : " + outputRoot.getAbsolutePath());
        println("============================================");
    }
}

