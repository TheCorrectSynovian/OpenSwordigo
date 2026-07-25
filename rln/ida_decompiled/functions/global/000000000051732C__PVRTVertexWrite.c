/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051732C
 * Mangled: _Z15PVRTVertexWritePv13EPVRTDataTypeiPK12PVRTVECTOR4f
 * Demangled: PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Callers: 1
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 331
 *   insn=0x0000000000517338 string=0x000000000051733C "T"
 *   insn=0x0000000000517340 string=0x0000000000517344 "("
 *   insn=0x0000000000517350 string=0x0000000000517354 "hA"
 *   insn=0x0000000000517354 string=0x0000000000517358 ")"
 *   insn=0x0000000000517358 string=0x0000000000517360 "(y"
 *   insn=0x0000000000517358 string=0x000000000059B9C4 "D"
 *   insn=0x0000000000517360 string=0x0000000000517364 ""
 *   insn=0x0000000000517368 string=0x000000000051736C "_"
 *   insn=0x0000000000517368 string=0x0000000000517388 "_"
 *   insn=0x0000000000517368 string=0x00000000005173A4 "_"
 *   insn=0x0000000000517368 string=0x00000000005173C8 "_"
 *   insn=0x0000000000517368 string=0x00000000005173E4 "_"
 *   insn=0x0000000000517368 string=0x0000000000517408 "_"
 *   insn=0x0000000000517368 string=0x0000000000517460 "_"
 *   insn=0x0000000000517368 string=0x000000000051747C "_"
 *   insn=0x0000000000517368 string=0x0000000000517498 "_"
 *   insn=0x0000000000517368 string=0x00000000005174B4 "_"
 *   insn=0x0000000000517368 string=0x00000000005174D0 "_"
 *   insn=0x0000000000517368 string=0x00000000005174EC "_"
 *   insn=0x0000000000517368 string=0x0000000000517508 "_"
 *   insn=0x000000000051736C string=0x0000000000517370 "K"
 *   insn=0x0000000000517370 string=0x0000000000517374 "_"
 *   insn=0x0000000000517378 string=0x000000000051737C "!"
 *   insn=0x000000000051737C string=0x0000000000517540 "k"
 *   insn=0x0000000000517384 string=0x00000000005175CC "l"
 *   insn=0x000000000051738C string=0x0000000000517390 "_ "
 *   insn=0x0000000000517394 string=0x0000000000517398 "B"
 *   insn=0x00000000005173A0 string=0x00000000005176D4 "*"
 *   insn=0x00000000005173AC string=0x00000000005173B0 "`D@"
 *   insn=0x00000000005173B0 string=0x00000000005173B4 ""
 *   insn=0x00000000005173B4 string=0x00000000005173B8 "\t"
 *   insn=0x00000000005173B8 string=0x00000000005173BC "i"
 *   insn=0x00000000005173CC string=0x00000000005173D0 "_ "
 *   insn=0x00000000005173D4 string=0x00000000005173D8 "b"
 *   insn=0x00000000005173D8 string=0x0000000000517704 "\tq}"
 *   insn=0x00000000005173E0 string=0x0000000000517744 "j\t"
 *   insn=0x00000000005173EC string=0x00000000005173F0 "`D@"
 *   insn=0x00000000005173F0 string=0x00000000005173F4 ""
 *   insn=0x00000000005173F4 string=0x00000000005173F8 "\t"
 *   insn=0x00000000005173F8 string=0x00000000005173FC "i"
 *   insn=0x000000000051740C string=0x0000000000517410 "_ "
 *   insn=0x0000000000517418 string=0x000000000051741C "\t"
 *   insn=0x000000000051741C string=0x0000000000517420 "j"
 *   insn=0x0000000000517420 string=0x0000000000517424 "_"
 *   insn=0x0000000000517428 string=0x000000000051742C "i"
 *   insn=0x0000000000517428 string=0x0000000000517BA0 "\tq}"
 *   insn=0x000000000051742C string=0x0000000000517430 "?"
 *   insn=0x0000000000517430 string=0x0000000000517434 "i;"
 *   insn=0x0000000000517438 string=0x000000000051743C "+"
 *   insn=0x000000000051743C string=0x0000000000517440 "j"
 *   insn=0x0000000000517440 string=0x0000000000517444 "k"
 *   insn=0x0000000000517444 string=0x0000000000517448 ""
 *   insn=0x0000000000517448 string=0x000000000051744C "IE@"
 *   insn=0x000000000051744C string=0x0000000000517450 ""
 *   insn=0x0000000000517450 string=0x0000000000517454 "iE"
 *   insn=0x0000000000517464 string=0x0000000000517468 "_ "
 *   insn=0x0000000000517470 string=0x0000000000517768 "\tq}"
 *   insn=0x0000000000517478 string=0x00000000005177A0 "+"
 *   insn=0x000000000051747C string=0x0000000000517480 "K"
 *   insn=0x0000000000517480 string=0x0000000000517484 "_"
 *   insn=0x000000000051748C string=0x00000000005177C8 "k"
 *   insn=0x0000000000517494 string=0x0000000000517854 "l"
 *   insn=0x000000000051749C string=0x00000000005174A0 "_"
 *   insn=0x00000000005174A8 string=0x00000000005178D8 ""
 *   insn=0x00000000005174AC string=0x00000000005174B0 " "
 *   insn=0x00000000005174B0 string=0x0000000000517930 "-"
 *   insn=0x00000000005174B4 string=0x00000000005174B8 ""
 *   insn=0x00000000005174B8 string=0x00000000005174BC "_"
 *   insn=0x00000000005174C4 string=0x00000000005179C0 "k"
 *   insn=0x00000000005174C8 string=0x00000000005174CC "^"
 *   insn=0x00000000005174CC string=0x0000000000517A44 "l"
 *   insn=0x00000000005174D0 string=0x00000000005174D4 "k5"
 *   insn=0x00000000005174D4 string=0x00000000005174D8 "_ "
 *   insn=0x00000000005174E0 string=0x0000000000517AC0 "\tq}"
 *   insn=0x00000000005174E8 string=0x0000000000517AF8 "+"
 *   insn=0x00000000005174F0 string=0x00000000005174F4 "_ "
 *   insn=0x00000000005174F8 string=0x00000000005174FC ""1"
 *   insn=0x00000000005174FC string=0x0000000000517B20 "\tq}"
 *   insn=0x0000000000517504 string=0x0000000000517B60 "j\t"
 *   insn=0x000000000051750C string=0x0000000000517510 "("
 *   insn=0x0000000000517518 string=0x000000000051751C "aD@"
 *   insn=0x000000000051751C string=0x0000000000517520 ""
 *   insn=0x0000000000517520 string=0x0000000000517524 "! "
 *   insn=0x0000000000517524 string=0x0000000000517528 ")"
 *   insn=0x0000000000517528 string=0x000000000051752C "i"
 *   insn=0x000000000051752C string=0x0000000000517530 "a"
 *   insn=0x0000000000517538 string=0x000000000051753C ":"
 *   insn=0x0000000000517540 string=0x0000000000517544 "`"
 *   insn=0x0000000000517544 string=0x0000000000517548 "\ty"
 *   insn=0x000000000051754C string=0x0000000000517550 "j"
 *   insn=0x0000000000517550 string=0x0000000000517554 "k"
 *   insn=0x000000000051755C string=0x0000000000517560 "C"
 *   insn=0x0000000000517560 string=0x0000000000517564 "J!"
 *   insn=0x0000000000517564 string=0x0000000000517568 "B "
 *   insn=0x0000000000517568 string=0x000000000051756C "H  "
 *   insn=0x000000000051756C string=0x0000000000517570 "D"
 *   insn=0x0000000000517578 string=0x000000000051757C "H  "
 *   insn=0x000000000051757C string=0x0000000000517580 "c "
 *   insn=0x0000000000517588 string=0x000000000051758C "h  "
 *   insn=0x000000000051758C string=0x0000000000517590 "d"
 *   insn=0x0000000000517594 string=0x0000000000517598 "M"
 *   insn=0x000000000051759C string=0x00000000005175A0 "h  "
 *   insn=0x00000000005175A4 string=0x00000000005175A8 "B"
 *   insn=0x00000000005175A8 string=0x00000000005175AC "m"
 *   insn=0x00000000005175AC string=0x00000000005175B0 "M"
 *   insn=0x00000000005175B4 string=0x00000000005175B8 "m"
 *   insn=0x00000000005175B8 string=0x00000000005175BC "k\t"
 *   insn=0x00000000005175C0 string=0x00000000005175C4 "?"
 *   insn=0x00000000005175C8 string=0x000000000051761C "_"
 *   insn=0x00000000005175D4 string=0x00000000005175D8 "j\t"
 *   insn=0x00000000005175D8 string=0x00000000005175DC "k"
 *   insn=0x00000000005175DC string=0x00000000005175E0 ""
 *   insn=0x00000000005175E4 string=0x00000000005175E8 "BE@"
 *   insn=0x00000000005175E8 string=0x00000000005175EC "B "
 *   insn=0x00000000005175EC string=0x00000000005175F0 "H  "
 *   insn=0x00000000005175F0 string=0x00000000005175F4 "C"
 *   insn=0x00000000005175F4 string=0x00000000005175F8 "`  "
 *   insn=0x00000000005175FC string=0x0000000000517600 "H  "
 *   insn=0x0000000000517600 string=0x0000000000517604 "`"
 *   insn=0x0000000000517608 string=0x000000000051760C "I"
 *   insn=0x000000000051760C string=0x0000000000517610 ""
 *   insn=0x0000000000517610 string=0x0000000000517614 "i"
 *   insn=0x000000000051762C string=0x0000000000517630 "("
 *   insn=0x000000000051763C string=0x00000000001FBC40 "0'"
 *   insn=0x000000000051764C string=0x0000000000517650 ""
 *   insn=0x0000000000517650 string=0x0000000000517654 "("
 *   insn=0x0000000000517654 string=0x0000000000517658 "H"
 *   insn=0x0000000000517658 string=0x000000000051765C ""
 *   insn=0x000000000051765C string=0x0000000000517660 "h"
 *   insn=0x0000000000517660 string=0x0000000000517664 "G"
 *   insn=0x0000000000517678 string=0x000000000051767C ""
 *   insn=0x0000000000517680 string=0x0000000000517684 "\tq}"
 *   insn=0x0000000000517688 string=0x000000000051768C "j@"
 *   insn=0x000000000051768C string=0x0000000000517690 "k""
 *   insn=0x0000000000517698 string=0x000000000051769C "A"
 *   insn=0x000000000051769C string=0x00000000005176A0 "J"
 *   insn=0x00000000005176A4 string=0x00000000005176A8 "!"
 *   insn=0x00000000005176A8 string=0x00000000005176AC "B"
 *   insn=0x00000000005176AC string=0x00000000005176B0 "!"
 *   insn=0x00000000005176B0 string=0x00000000005176B4 "B"
 *   insn=0x00000000005176B4 string=0x00000000005176B8 "!(a"
 *   insn=0x00000000005176B8 string=0x00000000005176BC "B(a"
 *   insn=0x00000000005176BC string=0x00000000005176C0 "a"
 *   insn=0x00000000005176C0 string=0x00000000005176C4 "kA"
 *   insn=0x00000000005176C8 string=0x00000000005176CC "?"
 *   insn=0x00000000005176D4 string=0x00000000005176D8 "@"
 *   insn=0x00000000005176D8 string=0x00000000005176DC "j\t"
 *   insn=0x00000000005176DC string=0x00000000005176E0 "k"
 *   insn=0x00000000005176E0 string=0x00000000005176E4 ""
 *   insn=0x00000000005176E4 string=0x00000000005176E8 "AE@"
 *   insn=0x00000000005176E8 string=0x00000000005176EC ""
 *   insn=0x00000000005176EC string=0x00000000005176F0 "! "
 *   insn=0x00000000005176F0 string=0x00000000005176F4 ")"
 *   insn=0x00000000005176F4 string=0x00000000005176F8 "i%"
 *   insn=0x00000000005176F8 string=0x00000000005176FC "a"
 *   insn=0x00000000005176FC string=0x0000000000517700 " "
 *   insn=0x0000000000517704 string=0x0000000000517708 "j@"
 *   insn=0x0000000000517708 string=0x000000000051770C "k""
 *   insn=0x0000000000517710 string=0x0000000000517714 "@"
 *   insn=0x0000000000517714 string=0x0000000000517718 "J"
 *   insn=0x0000000000517720 string=0x0000000000517724 "!"
 *   insn=0x0000000000517728 string=0x000000000051772C "!(a"
 *   insn=0x000000000051772C string=0x0000000000517730 "`"
 *   insn=0x0000000000517730 string=0x0000000000517734 "kA"
 *   insn=0x0000000000517738 string=0x000000000051773C "?"
 *   insn=0x0000000000517744 string=0x0000000000517748 "k"
 *   insn=0x0000000000517748 string=0x000000000051774C ""
 *   insn=0x000000000051774C string=0x0000000000517750 "@E@"
 *   insn=0x0000000000517750 string=0x0000000000517754 ""
 *   insn=0x0000000000517754 string=0x0000000000517758 "\t"
 *   insn=0x0000000000517758 string=0x000000000051775C "i%"
 *   insn=0x0000000000517760 string=0x0000000000517764 ""
 *   insn=0x0000000000517768 string=0x000000000051776C "j@"
 *   insn=0x000000000051776C string=0x0000000000517770 "kB"
 *   insn=0x0000000000517774 string=0x0000000000517778 "@"
 *   insn=0x0000000000517778 string=0x000000000051777C "J"
 *   insn=0x0000000000517784 string=0x0000000000517788 "!"
 *   insn=0x0000000000517788 string=0x000000000051778C "`"
 *   insn=0x000000000051778C string=0x0000000000517790 "k"
 *   insn=0x0000000000517790 string=0x0000000000517794 "!"
 *   insn=0x0000000000517794 string=0x0000000000517798 "?"
 *   insn=0x0000000000517798 string=0x000000000051779C " "
 *   insn=0x00000000005177A0 string=0x00000000005177A4 "j"
 *   insn=0x00000000005177A4 string=0x00000000005177A8 "k"
 *   insn=0x00000000005177A8 string=0x00000000005177AC ""
 *   insn=0x00000000005177AC string=0x00000000005177B0 "@E@"
 *   insn=0x00000000005177B0 string=0x00000000005177B4 ""
 *   insn=0x00000000005177B4 string=0x00000000005177B8 "\t"
 *   insn=0x00000000005177B8 string=0x00000000005177BC "iE"
 *   insn=0x00000000005177C8 string=0x00000000005177CC "`"
 *   insn=0x00000000005177CC string=0x00000000005177D0 "\ty"
 *   insn=0x00000000005177D4 string=0x00000000005177D8 "j"
 *   insn=0x00000000005177D8 string=0x00000000005177DC "k"
 *   insn=0x00000000005177E4 string=0x00000000005177E8 "C"
 *   insn=0x00000000005177E8 string=0x00000000005177EC "J!"
 *   insn=0x00000000005177EC string=0x00000000005177F0 "B "
 *   insn=0x00000000005177F0 string=0x00000000005177F4 "H  "
 *   insn=0x00000000005177F4 string=0x00000000005177F8 "D"
 *   insn=0x0000000000517800 string=0x0000000000517804 "H  "
 *   insn=0x0000000000517804 string=0x0000000000517808 "c "
 *   insn=0x0000000000517810 string=0x0000000000517814 "h  "
 *   insn=0x0000000000517814 string=0x0000000000517818 "d"
 *   insn=0x000000000051781C string=0x0000000000517820 "M"
 *   insn=0x0000000000517824 string=0x0000000000517828 "h  "
 *   insn=0x000000000051782C string=0x0000000000517830 "B"
 *   insn=0x0000000000517830 string=0x0000000000517834 "m"
 *   insn=0x0000000000517834 string=0x0000000000517838 "M"
 *   insn=0x000000000051783C string=0x0000000000517840 "m"
 *   insn=0x0000000000517840 string=0x0000000000517844 "k\t"
 *   insn=0x0000000000517848 string=0x000000000051784C "?"
 *   insn=0x0000000000517850 string=0x00000000005178A4 "_"
 *   insn=0x000000000051785C string=0x0000000000517860 "j\t"
 *   insn=0x0000000000517860 string=0x0000000000517864 "k"
 *   insn=0x0000000000517864 string=0x0000000000517868 ""
 *   insn=0x000000000051786C string=0x0000000000517870 "BE@"
 *   insn=0x0000000000517870 string=0x0000000000517874 "B "
 *   insn=0x0000000000517874 string=0x0000000000517878 "H  "
 *   insn=0x0000000000517878 string=0x000000000051787C "C"
 *   insn=0x000000000051787C string=0x0000000000517880 "`  "
 *   insn=0x0000000000517884 string=0x0000000000517888 "H  "
 *   insn=0x0000000000517888 string=0x000000000051788C "`"
 *   insn=0x0000000000517890 string=0x0000000000517894 "I"
 *   insn=0x0000000000517894 string=0x0000000000517898 ""
 *   insn=0x0000000000517898 string=0x000000000051789C "i"
 *   insn=0x00000000005178B4 string=0x00000000005178B8 "("
 *   insn=0x00000000005178C8 string=0x00000000005178CC "\t"
 *   insn=0x00000000005178CC string=0x00000000005178D0 "h"
 *   insn=0x00000000005178D8 string=0x00000000005178DC "\tu~"
 *   insn=0x00000000005178E8 string=0x00000000005178EC " "
 *   insn=0x00000000005178EC string=0x00000000005178F0 "a"
 *   insn=0x00000000005178F4 string=0x00000000005178F8 "c"
 *   insn=0x0000000000517904 string=0x0000000000517908 "k"
 *   insn=0x000000000051791C string=0x0000000000517920 "D"
 *   insn=0x0000000000517924 string=0x0000000000517928 "?"
 *   insn=0x000000000051792C string=0x0000000000517980 "_"
 *   insn=0x0000000000517934 string=0x0000000000517938 "+"
 *   insn=0x000000000051793C string=0x0000000000517940 "j"
 *   insn=0x0000000000517944 string=0x0000000000517948 ""
 *   insn=0x0000000000517950 string=0x0000000000517954 "AE@"
 *   insn=0x0000000000517954 string=0x0000000000517958 "! "
 *   insn=0x0000000000517958 string=0x000000000051795C "-"
 *   insn=0x0000000000517970 string=0x0000000000517974 ""
 *   insn=0x0000000000517974 string=0x0000000000517978 "mE"
 *   insn=0x0000000000517980 string=0x0000000000517984 ","
 *   insn=0x0000000000517990 string=0x0000000000517994 "("
 *   insn=0x0000000000517994 string=0x0000000000517998 ""
 *   insn=0x00000000005179AC string=0x00000000005179B0 ")\t*Q\n*h"
 *   insn=0x00000000005179B0 string=0x00000000005179B4 "Q\n*h"
 *   insn=0x00000000005179B4 string=0x00000000005179B8 "h"
 *   insn=0x00000000005179B8 string=0x00000000005179BC "q"
 *   insn=0x00000000005179C0 string=0x00000000005179C4 "`"
 *   insn=0x00000000005179C4 string=0x00000000005179C8 "\ty"
 *   insn=0x00000000005179CC string=0x00000000005179D0 "j"
 *   insn=0x00000000005179D0 string=0x00000000005179D4 "k"
 *   insn=0x00000000005179DC string=0x00000000005179E0 "C"
 *   insn=0x00000000005179E0 string=0x00000000005179E4 "J!"
 *   insn=0x00000000005179E4 string=0x00000000005179E8 "H  "
 *   insn=0x00000000005179E8 string=0x00000000005179EC "D"
 *   insn=0x00000000005179F4 string=0x00000000005179F8 "H  "
 *   insn=0x0000000000517A00 string=0x0000000000517A04 "h  "
 *   insn=0x0000000000517A04 string=0x0000000000517A08 "d"
 *   insn=0x0000000000517A0C string=0x0000000000517A10 "M"
 *   insn=0x0000000000517A14 string=0x0000000000517A18 "h  "
 *   insn=0x0000000000517A1C string=0x0000000000517A20 "B"
 *   insn=0x0000000000517A20 string=0x0000000000517A24 "m"
 *   insn=0x0000000000517A24 string=0x0000000000517A28 "M"
 *   insn=0x0000000000517A2C string=0x0000000000517A30 "m"
 *   insn=0x0000000000517A30 string=0x0000000000517A34 "k\t"
 *   insn=0x0000000000517A34 string=0x0000000000517A38 "A"
 *   insn=0x0000000000517A38 string=0x0000000000517A3C "?"
 *   insn=0x0000000000517A40 string=0x0000000000517A90 "_"
 *   insn=0x0000000000517A4C string=0x0000000000517A50 "j\t"
 *   insn=0x0000000000517A50 string=0x0000000000517A54 "k"
 *   insn=0x0000000000517A54 string=0x0000000000517A58 ""
 *   insn=0x0000000000517A5C string=0x0000000000517A60 "BE@"
 *   insn=0x0000000000517A60 string=0x0000000000517A64 "H  "
 *   insn=0x0000000000517A64 string=0x0000000000517A68 "C"
 *   insn=0x0000000000517A68 string=0x0000000000517A6C "`  "
 *   insn=0x0000000000517A70 string=0x0000000000517A74 "H  "
 *   insn=0x0000000000517A74 string=0x0000000000517A78 "`"
 *   insn=0x0000000000517A7C string=0x0000000000517A80 "I"
 *   insn=0x0000000000517A80 string=0x0000000000517A84 ""
 *   insn=0x0000000000517A84 string=0x0000000000517A88 "i"
 *   insn=0x0000000000517AA0 string=0x0000000000517AA4 "("
 *   insn=0x0000000000517AAC string=0x0000000000517AB0 "d"
 *   insn=0x0000000000517AB4 string=0x0000000000517AB8 "h"
 *   insn=0x0000000000517AB8 string=0x0000000000517ABC "1"
 *   insn=0x0000000000517AC0 string=0x0000000000517AC4 "j@"
 *   insn=0x0000000000517AC4 string=0x0000000000517AC8 "kB"
 *   insn=0x0000000000517ACC string=0x0000000000517AD0 "@"
 *   insn=0x0000000000517AD0 string=0x0000000000517AD4 "J"
 *   insn=0x0000000000517ADC string=0x0000000000517AE0 "!"
 *   insn=0x0000000000517AE0 string=0x0000000000517AE4 "`"
 *   insn=0x0000000000517AE4 string=0x0000000000517AE8 "k"
 *   insn=0x0000000000517AE8 string=0x0000000000517AEC "!"
 *   insn=0x0000000000517AEC string=0x0000000000517AF0 "?"
 *   insn=0x0000000000517AF0 string=0x0000000000517AF4 "`"
 *   insn=0x0000000000517AF8 string=0x0000000000517AFC "j"
 *   insn=0x0000000000517AFC string=0x0000000000517B00 "k"
 *   insn=0x0000000000517B00 string=0x0000000000517B04 ""
 *   insn=0x0000000000517B04 string=0x0000000000517B08 "@E@"
 *   insn=0x0000000000517B08 string=0x0000000000517B0C ""
 *   insn=0x0000000000517B0C string=0x0000000000517B10 "\t"
 *   insn=0x0000000000517B10 string=0x0000000000517B14 "iE"
 *   insn=0x0000000000517B20 string=0x0000000000517B24 "j@"
 *   insn=0x0000000000517B24 string=0x0000000000517B28 "k""
 *   insn=0x0000000000517B2C string=0x0000000000517B30 "@"
 *   insn=0x0000000000517B30 string=0x0000000000517B34 "J"
 *   insn=0x0000000000517B3C string=0x0000000000517B40 "!"
 *   insn=0x0000000000517B44 string=0x0000000000517B48 "!(a"
 *   insn=0x0000000000517B48 string=0x0000000000517B4C "`"
 *   insn=0x0000000000517B4C string=0x0000000000517B50 "kA"
 *   insn=0x0000000000517B54 string=0x0000000000517B58 "?"
 *   insn=0x0000000000517B58 string=0x0000000000517B5C " "
 *   insn=0x0000000000517B60 string=0x0000000000517B64 "k"
 *   insn=0x0000000000517B64 string=0x0000000000517B68 ""
 *   insn=0x0000000000517B68 string=0x0000000000517B6C "@E@"
 *   insn=0x0000000000517B6C string=0x0000000000517B70 ""
 *   insn=0x0000000000517B70 string=0x0000000000517B74 "\t"
 *   insn=0x0000000000517B74 string=0x0000000000517B78 "i%"
 *   insn=0x0000000000517B88 string=0x0000000000517B8C "A"
 *   insn=0x0000000000517BA0 string=0x0000000000517BA4 "j@"
 *   insn=0x0000000000517BA4 string=0x0000000000517BA8 "kB"
 *   insn=0x0000000000517BAC string=0x0000000000517BB0 "@"
 *   insn=0x0000000000517BB0 string=0x0000000000517BB4 "J"
 *   insn=0x0000000000517BB8 string=0x0000000000517BBC "`"
 *   insn=0x0000000000517BBC string=0x0000000000517BC0 "k"
 *   insn=0x0000000000517BC0 string=0x0000000000517BC4 "a"
 *   insn=0x0000000000517BC4 string=0x0000000000517BC8 "?"
 *   insn=0x0000000000517BCC string=0x0000000000517BD0 ""
 *   insn=0x0000000000517BD4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int32x4_t __fastcall PVRTVertexWrite(unsigned __int64 a1, int a2, int a3, float *a4, int32x4_t result)
{
  _BYTE *v5; // x19
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x8
  float v9; // t1
  __int64 v10; // x9
  __int64 v11; // x8
  float v12; // t1
  __int64 v13; // x9
  float *v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x8
  int v17; // t1
  __int64 v18; // x9
  __int64 v19; // x9
  __int64 v20; // x9
  __int64 v21; // x9
  __int64 v22; // x9
  __int64 v23; // x9
  __int64 v24; // x8
  float v25; // t1
  float *v26; // x10
  _BYTE *v27; // x11
  __int64 v28; // x12
  float v29; // s2
  float v30; // s3
  float v31; // s2
  float v32; // s4
  float v33; // s5
  float v34; // s3
  float v36; // s4
  int v37; // w13
  float v38; // s2
  float *v40; // x10
  char *v41; // x11
  __int64 v42; // x8
  float v43; // t1
  float v44; // s2
  float v45; // s3
  float v46; // s4
  float32x4_t *v48; // x10
  int16x4_t *v49; // x11
  __int64 v50; // x12
  float32x4_t v51; // q1
  float32x4_t v52; // q2
  float *v53; // x10
  _WORD *v54; // x11
  __int64 v55; // x8
  float v56; // t1
  float32x4_t *v57; // x10
  int16x4_t *v58; // x11
  __int64 v59; // x12
  float32x4_t v60; // q0
  float32x4_t v61; // q1
  float *v62; // x10
  _WORD *v63; // x11
  __int64 v64; // x8
  float v65; // t1
  float32x4_t *v66; // x10
  int32x4_t *v67; // x11
  __int64 v68; // x12
  float32x4_t v69; // q0
  float32x4_t v70; // q1
  float *v71; // x10
  _DWORD *v72; // x11
  __int64 v73; // x8
  float v74; // t1
  float *v75; // x10
  _BYTE *v76; // x11
  __int64 v77; // x12
  float v78; // s2
  float v79; // s3
  float v80; // s2
  float v81; // s4
  float v82; // s5
  float v83; // s3
  float v85; // s4
  int v86; // w13
  float v87; // s2
  float *v89; // x10
  char *v90; // x11
  __int64 v91; // x8
  float v92; // t1
  float v93; // s2
  float v94; // s3
  float v95; // s4
  int8x16_t *v97; // x10
  float32x4_t v98; // q1
  int32x4_t v99; // q2
  int8x16_t v100; // q3
  __int64 v101; // x11
  float32x4_t *v102; // x12
  float32x4_t v103; // t1
  float *v104; // x10
  unsigned int *v105; // x11
  __int64 v106; // x8
  float v107; // t1
  int v108; // w13
  float *v109; // x10
  _BYTE *v110; // x11
  __int64 v111; // x12
  float v112; // s2
  float v113; // s3
  float v114; // s4
  float v115; // s5
  float v117; // s4
  int v118; // w13
  float v119; // s2
  float *v121; // x10
  char *v122; // x11
  __int64 v123; // x8
  float v124; // t1
  float v125; // s2
  float v126; // s3
  float v127; // s4
  float32x4_t *v129; // x10
  int32x4_t *v130; // x11
  __int64 v131; // x12
  float32x4_t v132; // q0
  float32x4_t v133; // q1
  float *v134; // x10
  _DWORD *v135; // x11
  __int64 v136; // x8
  float v137; // t1
  float32x4_t *v138; // x10
  int16x4_t *v139; // x11
  __int64 v140; // x12
  float32x4_t v141; // q0
  float32x4_t v142; // q1
  float *v143; // x10
  _WORD *v144; // x11
  __int64 v145; // x8
  float v146; // t1
  int32x4_t *v147; // x10
  int32x4_t *v148; // x11
  __int64 v149; // x12
  int32x4_t v150; // q1
  unsigned int v151[3]; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v152; // [xsp+18h] [xbp-18h]

  v5 = (_BYTE *)a1;
  v152 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 1:
      if ( a3 < 1 )
        return result;
      if ( (unsigned int)a3 < 8 || (unsigned __int64)&a4[a3] > a1 && a1 + 4LL * (unsigned int)a3 > (unsigned __int64)a4 )
      {
        v13 = 0;
LABEL_24:
        v14 = &a4[v13];
        v15 = (_DWORD *)(a1 + 4 * v13);
        v16 = (unsigned int)a3 - v13;
        do
        {
          v17 = *(_DWORD *)v14++;
          --v16;
          *v15++ = v17;
        }
        while ( v16 );
        return result;
      }
      v13 = a3 & 0xFFFFFFF8;
      v147 = (int32x4_t *)(a4 + 4);
      v148 = (int32x4_t *)(a1 + 16);
      v149 = v13;
      do
      {
        result = v147[-1];
        v150 = *v147;
        v147 += 2;
        v149 -= 8;
        v148[-1] = result;
        *v148 = v150;
        v148 += 2;
      }
      while ( v149 );
      if ( v13 != a3 )
        goto LABEL_24;
      return result;
    case 2:
      if ( a3 < 1 )
        return result;
      if ( (unsigned int)a3 < 8 )
      {
        v18 = 0;
LABEL_110:
        v71 = &a4[v18];
        v72 = (_DWORD *)(a1 + 4 * v18);
        v73 = (unsigned int)a3 - v18;
        do
        {
          v74 = *v71++;
          result.n128_f32[0] = v74;
          --v73;
          *v72++ = (int)v74;
        }
        while ( v73 );
        return result;
      }
      v18 = a3 & 0xFFFFFFF8;
      v66 = (float32x4_t *)(a4 + 4);
      v67 = (int32x4_t *)(a1 + 16);
      v68 = v18;
      do
      {
        v69 = v66[-1];
        v70 = *v66;
        v66 += 2;
        v68 -= 8;
        result = vcvtq_s32_f32(v69);
        v67[-1] = result;
        *v67 = vcvtq_s32_f32(v70);
        v67 += 2;
      }
      while ( v68 );
      if ( v18 != a3 )
        goto LABEL_110;
      return result;
    case 3:
      if ( a3 < 1 )
        return result;
      if ( (unsigned int)a3 < 8 )
      {
        v10 = 0;
LABEL_104:
        v62 = &a4[v10];
        v63 = (_WORD *)(a1 + 2 * v10);
        v64 = (unsigned int)a3 - v10;
        do
        {
          v65 = *v62++;
          result.n128_f32[0] = v65;
          --v64;
          *v63++ = (int)v65;
        }
        while ( v64 );
        return result;
      }
      v10 = a3 & 0xFFFFFFF8;
      v57 = (float32x4_t *)(a4 + 4);
      v58 = (int16x4_t *)(a1 + 8);
      v59 = v10;
      do
      {
        v60 = v57[-1];
        v61 = *v57;
        v57 += 2;
        v59 -= 8;
        result = vcvtq_u32_f32(v60);
        result.n128_u64[0] = vmovn_s32(result).n64_u64[0];
        v58[-1].n64_u64[0] = result.n128_u64[0];
        v58->n64_u64[0] = vmovn_s32(vcvtq_u32_f32(v61)).n64_u64[0];
        v58 += 2;
      }
      while ( v59 );
      if ( v10 != a3 )
        goto LABEL_104;
      return result;
    case 4:
      if ( a3 < 1 )
      {
        a3 = 0;
        goto LABEL_153;
      }
      if ( a3 == 1 )
      {
        v19 = 0;
LABEL_139:
        result.n128_u32[0] = 1132396544;
        v89 = &a4[v19];
        v90 = (char *)v151 + v19;
        v91 = (unsigned int)a3 - v19;
        do
        {
          v92 = *v89++;
          v93 = v92 * 255.0;
          if ( (float)(v92 * 255.0) <= 0.0 )
            v94 = 0.0;
          else
            v94 = v93;
          if ( v94 <= 255.0 )
            v95 = 0.0;
          else
            v95 = 255.0;
          if ( v93 <= 0.0 || v94 > 255.0 )
            v93 = v95;
          --v91;
          *v90++ = (int)v93;
        }
        while ( v91 );
        goto LABEL_152;
      }
      result.n128_u32[0] = 1132396544;
      v19 = a3 & 0xFFFFFFFE;
      v75 = a4 + 1;
      v76 = (char *)v151 + 1;
      v77 = v19;
      do
      {
        v79 = *(v75 - 1);
        v78 = *v75;
        v75 += 2;
        v80 = v78 * 255.0;
        if ( v80 <= 0.0 )
          v81 = 0.0;
        else
          v81 = v80;
        if ( v81 <= 255.0 )
          v82 = 0.0;
        else
          v82 = 255.0;
        v83 = v79 * 255.0;
        if ( v80 <= 0.0 || v81 > 255.0 )
          v80 = v82;
        if ( v83 <= 0.0 )
          v85 = 0.0;
        else
          v85 = v83;
        v86 = (int)v80;
        if ( v85 <= 255.0 )
          v87 = 0.0;
        else
          v87 = 255.0;
        if ( v83 > 0.0 && v85 <= 255.0 )
          v87 = v83;
        *v76 = v86;
        v77 -= 2;
        *(v76 - 1) = (int)v87;
        v76 += 2;
      }
      while ( v77 );
      if ( v19 != a3 )
        goto LABEL_139;
LABEL_152:
      if ( a3 > 3 )
        goto LABEL_154;
LABEL_153:
      memset((char *)v151 + a3, 0, (unsigned int)(3 - a3) + 1LL);
LABEL_154:
      *(_DWORD *)v5 = bswap32(v151[0]);
      return result;
    case 5:
    case 6:
      if ( a3 < 1 )
      {
        a3 = 0;
        goto LABEL_90;
      }
      if ( a3 == 1 )
      {
        v6 = 0;
      }
      else
      {
        result.n128_u32[0] = 1132396544;
        v6 = a3 & 0xFFFFFFFE;
        v26 = a4 + 1;
        v27 = (char *)v151 + 1;
        v28 = v6;
        do
        {
          v30 = *(v26 - 1);
          v29 = *v26;
          v26 += 2;
          v31 = v29 * 255.0;
          if ( v31 <= 0.0 )
            v32 = 0.0;
          else
            v32 = v31;
          if ( v32 <= 255.0 )
            v33 = 0.0;
          else
            v33 = 255.0;
          v34 = v30 * 255.0;
          if ( v31 <= 0.0 || v32 > 255.0 )
            v31 = v33;
          if ( v34 <= 0.0 )
            v36 = 0.0;
          else
            v36 = v34;
          v37 = (int)v31;
          if ( v36 <= 255.0 )
            v38 = 0.0;
          else
            v38 = 255.0;
          if ( v34 > 0.0 && v36 <= 255.0 )
            v38 = v34;
          *v27 = v37;
          v28 -= 2;
          *(v27 - 1) = (int)v38;
          v27 += 2;
        }
        while ( v28 );
        if ( v6 == a3 )
        {
LABEL_89:
          if ( a3 > 3 )
          {
LABEL_91:
            *(_DWORD *)v5 = (HIBYTE(v151[0]) << 24) | (LOBYTE(v151[0]) << 16) | (BYTE1(v151[0]) << 8) | BYTE2(v151[0]);
            return result;
          }
LABEL_90:
          memset((char *)v151 + a3, 0, (unsigned int)(3 - a3) + 1LL);
          goto LABEL_91;
        }
      }
      result.n128_u32[0] = 1132396544;
      v40 = &a4[v6];
      v41 = (char *)v151 + v6;
      v42 = (unsigned int)a3 - v6;
      do
      {
        v43 = *v40++;
        v44 = v43 * 255.0;
        if ( (float)(v43 * 255.0) <= 0.0 )
          v45 = 0.0;
        else
          v45 = v44;
        if ( v45 <= 255.0 )
          v46 = 0.0;
        else
          v46 = 255.0;
        if ( v44 <= 0.0 || v45 > 255.0 )
          v44 = v46;
        --v42;
        *v41++ = (int)v44;
      }
      while ( v42 );
      goto LABEL_89;
    case 7:
      if ( a3 < 1 )
      {
        a3 = 0;
        goto LABEL_207;
      }
      if ( a3 == 1 )
      {
        v21 = 0;
LABEL_193:
        result.n128_u32[0] = 1132396544;
        v121 = &a4[v21];
        v122 = (char *)v151 + v21;
        v123 = (unsigned int)a3 - v21;
        do
        {
          v124 = *v121++;
          v125 = v124;
          if ( v124 <= 0.0 )
            v126 = 0.0;
          else
            v126 = v125;
          if ( v126 <= 255.0 )
            v127 = 0.0;
          else
            v127 = 255.0;
          if ( v125 <= 0.0 || v126 > 255.0 )
            v125 = v127;
          --v123;
          *v122++ = (int)v125;
        }
        while ( v123 );
        goto LABEL_206;
      }
      result.n128_u32[0] = 1132396544;
      v21 = a3 & 0xFFFFFFFE;
      v109 = a4 + 1;
      v110 = (char *)v151 + 1;
      v111 = v21;
      do
      {
        v113 = *(v109 - 1);
        v112 = *v109;
        v109 += 2;
        if ( v112 <= 0.0 )
          v114 = 0.0;
        else
          v114 = v112;
        if ( v114 <= 255.0 )
          v115 = 0.0;
        else
          v115 = 255.0;
        if ( v112 <= 0.0 || v114 > 255.0 )
          v112 = v115;
        if ( v113 <= 0.0 )
          v117 = 0.0;
        else
          v117 = v113;
        v118 = (int)v112;
        if ( v117 <= 255.0 )
          v119 = 0.0;
        else
          v119 = 255.0;
        if ( v113 > 0.0 && v117 <= 255.0 )
          v119 = v113;
        *v110 = v118;
        v111 -= 2;
        *(v110 - 1) = (int)v119;
        v110 += 2;
      }
      while ( v111 );
      if ( v21 != a3 )
        goto LABEL_193;
LABEL_206:
      if ( a3 > 3 )
        goto LABEL_208;
LABEL_207:
      memset((char *)v151 + a3, 0, (unsigned int)(3 - a3) + 1LL);
LABEL_208:
      *(_DWORD *)v5 = v151[0];
      return result;
    case 8:
      if ( a3 < 1 )
      {
        a3 = 0;
        goto LABEL_165;
      }
      if ( (unsigned int)a3 >= 4 )
      {
        v20 = a3 & 0xFFFFFFFC;
        v97 = (int8x16_t *)v151;
        result.n128_u64[0] = 0x100000001LL;
        result.n128_u64[1] = 0x100000001LL;
        v98 = vdupq_n_s32(0x43FF8000u);
        v99 = vdupq_n_s32(0xFFFFFE01);
        v100.n128_u64[0] = 0x300000003LL;
        v100.n128_u64[1] = 0x300000003LL;
        v101 = v20;
        v102 = (float32x4_t *)a4;
        do
        {
          v103 = *v102++;
          v101 -= 4;
          *v97++ = vandq_s8(vminq_s32(vmaxq_s32(vcvtq_s32_f32(vmulq_f32(v103, v98)), v99), result), v100);
        }
        while ( v101 );
        if ( v20 == a3 )
          goto LABEL_164;
      }
      else
      {
        v20 = 0;
      }
      result.n128_u32[0] = 1140817920;
      v104 = &a4[v20];
      v105 = &v151[v20];
      v106 = (unsigned int)a3 - v20;
      do
      {
        v107 = *v104++;
        v108 = (int)(float)(v107 * 511.0);
        if ( v108 <= -511 )
          v108 = -511;
        if ( v108 >= 511 )
          LOWORD(v108) = 511;
        --v106;
        *v105++ = v108 & 0x3FF;
      }
      while ( v106 );
LABEL_164:
      if ( a3 > 2 )
        goto LABEL_166;
LABEL_165:
      memset(&v151[a3], 0, 4LL * (unsigned int)(2 - a3) + 4);
LABEL_166:
      *(_DWORD *)v5 = v151[0] | (v151[1] << 10) | (v151[2] << 20);
      return result;
    case 9:
      if ( a3 < 1 )
        return result;
      if ( (unsigned int)a3 < 8 )
      {
        v22 = 0;
LABEL_212:
        v134 = &a4[v22];
        v135 = (_DWORD *)(a1 + 4 * v22);
        v136 = (unsigned int)a3 - v22;
        do
        {
          v137 = *v134++;
          result.n128_f32[0] = v137;
          --v136;
          *v135++ = vcvts_n_s32_f32(v137, 0x10u);
        }
        while ( v136 );
        return result;
      }
      v22 = a3 & 0xFFFFFFF8;
      v129 = (float32x4_t *)(a4 + 4);
      v130 = (int32x4_t *)(a1 + 16);
      v131 = v22;
      do
      {
        v132 = v129[-1];
        v133 = *v129;
        v129 += 2;
        v131 -= 8;
        result = vcvtq_n_s32_f32(v132, 0x10u);
        v130[-1] = result;
        *v130 = vcvtq_n_s32_f32(v133, 0x10u);
        v130 += 2;
      }
      while ( v131 );
      if ( v22 != a3 )
        goto LABEL_212;
      return result;
    case 10:
      if ( a3 >= 1 )
      {
        v11 = (unsigned int)a3;
        do
        {
          v12 = *a4++;
          result.n128_f32[0] = v12;
          --v11;
          *v5++ = (int)v12;
        }
        while ( v11 );
      }
      return result;
    case 11:
      if ( a3 < 1 )
        return result;
      if ( (unsigned int)a3 < 8 )
      {
        v23 = 0;
LABEL_218:
        v143 = &a4[v23];
        v144 = (_WORD *)(a1 + 2 * v23);
        v145 = (unsigned int)a3 - v23;
        do
        {
          v146 = *v143++;
          result.n128_f32[0] = v146;
          --v145;
          *v144++ = (int)v146;
        }
        while ( v145 );
        return result;
      }
      v23 = a3 & 0xFFFFFFF8;
      v138 = (float32x4_t *)(a4 + 4);
      v139 = (int16x4_t *)(a1 + 8);
      v140 = v23;
      do
      {
        v141 = v138[-1];
        v142 = *v138;
        v138 += 2;
        v140 -= 8;
        result = vcvtq_s32_f32(v141);
        result.n128_u64[0] = vmovn_s32(result).n64_u64[0];
        v139[-1].n64_u64[0] = result.n128_u64[0];
        v139->n64_u64[0] = vmovn_s32(vcvtq_s32_f32(v142)).n64_u64[0];
        v139 += 2;
      }
      while ( v140 );
      if ( v23 != a3 )
        goto LABEL_218;
      return result;
    case 12:
      if ( a3 < 1 )
        return result;
      if ( (unsigned int)a3 < 8 )
      {
        v7 = 0;
LABEL_98:
        result.n128_u32[0] = 1191181824;
        v53 = &a4[v7];
        v54 = (_WORD *)(a1 + 2 * v7);
        v55 = (unsigned int)a3 - v7;
        do
        {
          v56 = *v53++;
          --v55;
          *v54++ = (int)(float)(v56 * 32767.0);
        }
        while ( v55 );
        return result;
      }
      v7 = a3 & 0xFFFFFFF8;
      v48 = (float32x4_t *)(a4 + 4);
      v49 = (int16x4_t *)(a1 + 8);
      result = vdupq_n_s32(0x46FFFE00u);
      v50 = v7;
      do
      {
        v51 = v48[-1];
        v52 = *v48;
        v48 += 2;
        v50 -= 8;
        v49[-1].n64_u64[0] = vmovn_s32(vcvtq_s32_f32(vmulq_f32(v51, result))).n64_u64[0];
        v49->n64_u64[0] = vmovn_s32(vcvtq_s32_f32(vmulq_f32(v52, result))).n64_u64[0];
        v49 += 2;
      }
      while ( v50 );
      if ( v7 != a3 )
        goto LABEL_98;
      return result;
    case 13:
      if ( a3 >= 1 )
      {
        v8 = (unsigned int)a3;
        do
        {
          v9 = *a4++;
          result.n128_f32[0] = v9;
          --v8;
          *v5++ = (int)v9;
        }
        while ( v8 );
      }
      return result;
    case 14:
      if ( a3 >= 1 )
      {
        result.n128_u32[0] = 1123942400;
        v24 = (unsigned int)a3;
        do
        {
          v25 = *a4++;
          --v24;
          *v5++ = (int)(float)(v25 * 127.0);
        }
        while ( v24 );
      }
      return result;
    default:
      return result;
  }
}

