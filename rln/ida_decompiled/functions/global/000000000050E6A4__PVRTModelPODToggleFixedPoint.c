/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050E6A4
 * Mangled: _Z28PVRTModelPODToggleFixedPointR9SPODScene
 * Demangled: PVRTModelPODToggleFixedPoint(SPODScene &)
 *
 * Callers: 1
 *   0x00000000001F6700  PVRTModelPODToggleFixedPoint(SPODScene &)
 *
 * Callees: 0
 *
 * Referenced strings: 337
 *   insn=0x000000000050E6A4 string=0x000000000050E6A8 ""
 *   insn=0x000000000050E6A8 string=0x000000000050E6AC "i*"
 *   insn=0x000000000050E6AC string=0x000000000050E6B0 "H"
 *   insn=0x000000000050E6AC string=0x000000000050EBF8 "("
 *   insn=0x000000000050E6B0 string=0x000000000050E6B4 "\t"
 *   insn=0x000000000050E6B0 string=0x000000000050E718 "(@"
 *   insn=0x000000000050E6BC string=0x000000000050E6C0 "%\n"
 *   insn=0x000000000050E6C0 string=0x000000000050E6C4 "`A@"
 *   insn=0x000000000050E6C4 string=0x000000000050E6C8 "a@"
 *   insn=0x000000000050E6C8 string=0x000000000050E6CC "l\t@"
 *   insn=0x000000000050E6D0 string=0x000000000050E6D4 "-"
 *   insn=0x000000000050E6D4 string=0x000000000050E6D8 "`A"
 *   insn=0x000000000050E6D8 string=0x000000000050E6DC "m"
 *   insn=0x000000000050E6DC string=0x000000000050E6E0 "L"
 *   insn=0x000000000050E6E0 string=0x000000000050E6E4 "x@"
 *   insn=0x000000000050E6E0 string=0x000000000050E708 ""
 *   insn=0x000000000050E6E4 string=0x000000000050E6E8 ""
 *   insn=0x000000000050E6E8 string=0x000000000050E6EC "m"
 *   insn=0x000000000050E6F4 string=0x000000000050E6F8 "k"
 *   insn=0x000000000050E6F8 string=0x000000000050E6FC ""
 *   insn=0x000000000050E708 string=0x000000000050E70C ""
 *   insn=0x000000000050E710 string=0x000000000050E714 "c"
 *   insn=0x000000000050E71C string=0x000000000050E720 "\t"
 *   insn=0x000000000050E71C string=0x000000000050E770 "H@"
 *   insn=0x000000000050E724 string=0x000000000050E728 ")Q"
 *   insn=0x000000000050E728 string=0x000000000050E72C " "
 *   insn=0x000000000050E72C string=0x000000000050E730 "!"
 *   insn=0x000000000050E730 string=0x000000000050E734 """
 *   insn=0x000000000050E734 string=0x000000000050E738 ""
 *   insn=0x000000000050E738 string=0x000000000050E73C "\n"
 *   insn=0x000000000050E73C string=0x000000000050E740 " "
 *   insn=0x000000000050E740 string=0x000000000050E744 "+"
 *   insn=0x000000000050E744 string=0x000000000050E748 "A"
 *   insn=0x000000000050E748 string=0x000000000050E74C "!"
 *   insn=0x000000000050E750 string=0x000000000050E754 "*"
 *   insn=0x000000000050E754 string=0x000000000050E758 " "
 *   insn=0x000000000050E758 string=0x000000000050E75C "+"
 *   insn=0x000000000050E75C string=0x000000000050E760 "\n(@"
 *   insn=0x000000000050E760 string=0x000000000050E764 ")"
 *   insn=0x000000000050E774 string=0x000000000050EB30 "h@"
 *   insn=0x000000000050E77C string=0x000000000050E780 "\n(@"
 *   insn=0x000000000050E784 string=0x000000000050E788 ")\t"
 *   insn=0x000000000050E788 string=0x000000000050E78C "l"
 *   insn=0x000000000050E790 string=0x000000000050E7A0 ")\t"
 *   insn=0x000000000050E798 string=0x000000000050E79C "6"
 *   insn=0x000000000050E7AC string=0x000000000050E7B0 "."
 *   insn=0x000000000050E7B4 string=0x000000000050E7B8 "h"
 *   insn=0x000000000050E7CC string=0x000000000050E7D0 ")"
 *   insn=0x000000000050E7D4 string=0x000000000050E7D8 ""
 *   insn=0x000000000050E7D8 string=0x000000000050E7DC "m"
 *   insn=0x000000000050E7DC string=0x000000000050E7E0 "%"
 *   insn=0x000000000050E7F8 string=0x000000000050E7FC "1""
 *   insn=0x000000000050E804 string=0x000000000050E808 "!d"
 *   insn=0x000000000050E808 string=0x000000000050E80C "a"
 *   insn=0x000000000050E820 string=0x000000000050E840 ""
 *   insn=0x000000000050E84C string=0x000000000050E850 "."
 *   insn=0x000000000050E86C string=0x000000000050E870 "l"
 *   insn=0x000000000050E874 string=0x000000000050E884 ")\t"
 *   insn=0x000000000050E87C string=0x000000000050E880 "6"
 *   insn=0x000000000050E890 string=0x000000000050E894 "."
 *   insn=0x000000000050E898 string=0x000000000050E89C "h"
 *   insn=0x000000000050E8B0 string=0x000000000050E8B4 ")"
 *   insn=0x000000000050E8B8 string=0x000000000050E8BC ""
 *   insn=0x000000000050E8BC string=0x000000000050E8C0 "m"
 *   insn=0x000000000050E8C0 string=0x000000000050E8C4 "%"
 *   insn=0x000000000050E8DC string=0x000000000050E8E0 "1""
 *   insn=0x000000000050E8E8 string=0x000000000050E8EC "!d"
 *   insn=0x000000000050E8EC string=0x000000000050E8F0 "a"
 *   insn=0x000000000050E904 string=0x000000000050E924 ""
 *   insn=0x000000000050E930 string=0x000000000050E934 "."
 *   insn=0x000000000050E950 string=0x000000000050E954 "l"
 *   insn=0x000000000050E958 string=0x000000000050E968 ")\t"
 *   insn=0x000000000050E960 string=0x000000000050E964 "7"
 *   insn=0x000000000050E96C string=0x000000000050E970 "x@"
 *   insn=0x000000000050E974 string=0x000000000050E978 "M"
 *   insn=0x000000000050E998 string=0x000000000050E99C ")"
 *   insn=0x000000000050E9A0 string=0x000000000050E9A4 ""
 *   insn=0x000000000050E9A4 string=0x000000000050E9A8 "m"
 *   insn=0x000000000050E9A8 string=0x000000000050E9AC "%"
 *   insn=0x000000000050E9C4 string=0x000000000050E9C8 "1""
 *   insn=0x000000000050E9D0 string=0x000000000050E9D4 "!d"
 *   insn=0x000000000050E9D4 string=0x000000000050E9D8 "a"
 *   insn=0x000000000050E9EC string=0x000000000050EA0C ""
 *   insn=0x000000000050EA18 string=0x000000000050EA1C "."
 *   insn=0x000000000050EA38 string=0x000000000050EA3C "l"
 *   insn=0x000000000050EA40 string=0x000000000050EA50 ")\t"
 *   insn=0x000000000050EA48 string=0x000000000050EA4C "5"
 *   insn=0x000000000050EA48 string=0x000000000050EAF8 "\n)\t"
 *   insn=0x000000000050EA4C string=0x000000000050EB20 "\nH@"
 *   insn=0x000000000050EA50 string=0x000000000050EA54 "k)@"
 *   insn=0x000000000050EA5C string=0x000000000050EA60 ","
 *   insn=0x000000000050EA64 string=0x000000000050EA68 "h"
 *   insn=0x000000000050EA7C string=0x000000000050EA80 "("
 *   insn=0x000000000050EA88 string=0x000000000050EA8C "k"
 *   insn=0x000000000050EA8C string=0x000000000050EA90 "$"
 *   insn=0x000000000050EA94 string=0x000000000050EA98 "nA"
 *   insn=0x000000000050EAB4 string=0x000000000050EAB8 "!d"
 *   insn=0x000000000050EAB8 string=0x000000000050EABC "a"
 *   insn=0x000000000050EAD4 string=0x000000000050EAD8 "k\t"
 *   insn=0x000000000050EAD8 string=0x000000000050EADC "mE@"
 *   insn=0x000000000050EAF0 string=0x000000000050EAF4 "k"
 *   insn=0x000000000050EAF8 string=0x000000000050EAFC "J-@"
 *   insn=0x000000000050EAFC string=0x000000000050EB00 "\n"
 *   insn=0x000000000050EB00 string=0x000000000050EB04 "l"
 *   insn=0x000000000050EB04 string=0x000000000050EB08 "JI,"
 *   insn=0x000000000050EB08 string=0x000000000050EB0C "@"
 *   insn=0x000000000050EB0C string=0x000000000050EB10 "k"
 *   insn=0x000000000050EB14 string=0x000000000050EB18 "L"
 *   insn=0x000000000050EB20 string=0x000000000050EB24 ""
 *   insn=0x000000000050EB34 string=0x000000000050EB38 "\t8@"
 *   insn=0x000000000050EB34 string=0x000000000050EB88 "8@"
 *   insn=0x000000000050EB3C string=0x000000000050EB40 ")a"
 *   insn=0x000000000050EB40 string=0x000000000050EB44 "!"
 *   insn=0x000000000050EB44 string=0x000000000050EB48 """
 *   insn=0x000000000050EB48 string=0x000000000050EB4C ""
 *   insn=0x000000000050EB4C string=0x000000000050EB50 "\n"
 *   insn=0x000000000050EB50 string=0x000000000050EB54 " "
 *   insn=0x000000000050EB54 string=0x000000000050EB58 "+"
 *   insn=0x000000000050EB58 string=0x000000000050EB5C "!"
 *   insn=0x000000000050EB5C string=0x000000000050EB60 "L"
 *   insn=0x000000000050EB64 string=0x000000000050EB68 " "
 *   insn=0x000000000050EB68 string=0x000000000050EB6C " "
 *   insn=0x000000000050EB6C string=0x000000000050EB70 "+)?) "
 *   insn=0x000000000050EB70 string=0x000000000050EB74 " "
 *   insn=0x000000000050EB74 string=0x000000000050EB78 ","
 *   insn=0x000000000050EB78 string=0x000000000050EB7C "\nh@"
 *   insn=0x000000000050EB88 string=0x000000000050EB8C "h"
 *   insn=0x000000000050EB8C string=0x000000000050EB90 "\t @"
 *   insn=0x000000000050EB94 string=0x000000000050EB98 ")"
 *   insn=0x000000000050EB98 string=0x000000000050EB9C "!"
 *   insn=0x000000000050EB9C string=0x000000000050EBA0 """
 *   insn=0x000000000050EBA0 string=0x000000000050EBA4 ""
 *   insn=0x000000000050EBA8 string=0x000000000050EBAC " "
 *   insn=0x000000000050EBAC string=0x000000000050EBB0 " "
 *   insn=0x000000000050EBB0 string=0x000000000050EBB4 " "
 *   insn=0x000000000050EBB4 string=0x000000000050EBB8 "`"
 *   insn=0x000000000050EBB8 string=0x000000000050EBBC " "
 *   insn=0x000000000050EBBC string=0x000000000050EBC0 "@"
 *   insn=0x000000000050EBC0 string=0x000000000050EBC4 " "
 *   insn=0x000000000050EBC4 string=0x000000000050EBC8 "\n8@"
 *   insn=0x000000000050EBC8 string=0x000000000050EBCC ")a"
 *   insn=0x000000000050EBD0 string=0x000000000050EBD4 "C"
 *   insn=0x000000000050EBDC string=0x000000000050EBE0 ""
 *   insn=0x000000000050EBE0 string=0x000000000050EBE4 ")"
 *   insn=0x000000000050EBE4 string=0x000000000050EBE8 "@"
 *   insn=0x000000000050EBE8 string=0x000000000050EBEC "\t "
 *   insn=0x000000000050EBF0 string=0x000000000050EBF4 "w"
 *   insn=0x000000000050EBF4 string=0x000000000050F1D0 "|@"
 *   insn=0x000000000050EBF8 string=0x000000000050EBFC "x@"
 *   insn=0x000000000050EBF8 string=0x000000000050EC7C "(@"
 *   insn=0x000000000050EBFC string=0x000000000050EC00 "m"
 *   insn=0x000000000050EC00 string=0x000000000050EC04 "\n"
 *   insn=0x000000000050EC14 string=0x000000000050EC18 "m"
 *   insn=0x000000000050EC1C string=0x000000000050EC20 "/)"
 *   insn=0x000000000050EC2C string=0x000000000050EC30 "B"
 *   insn=0x000000000050EC30 string=0x000000000050EC34 "c"
 *   insn=0x000000000050EC34 string=0x000000000050EC38 "B"
 *   insn=0x000000000050EC38 string=0x000000000050EC3C "c "
 *   insn=0x000000000050EC44 string=0x000000000050EC48 "N"
 *   insn=0x000000000050EC48 string=0x000000000050EC4C "+"
 *   insn=0x000000000050EC48 string=0x000000000050EC70 ")"
 *   insn=0x000000000050EC5C string=0x000000000050EC60 "B"
 *   insn=0x000000000050EC60 string=0x000000000050EC64 "B "
 *   insn=0x000000000050EC68 string=0x000000000050EC6C "a"
 *   insn=0x000000000050EC70 string=0x000000000050EC74 "?"
 *   insn=0x000000000050EC74 string=0x000000000050EC78 "C"
 *   insn=0x000000000050EC80 string=0x000000000050EC84 "\n"
 *   insn=0x000000000050EC80 string=0x000000000050ECF4 "H@"
 *   insn=0x000000000050EC84 string=0x000000000050EC88 "k"
 *   insn=0x000000000050EC88 string=0x000000000050EC8C "`"
 *   insn=0x000000000050EC98 string=0x000000000050EC9C "JQ"
 *   insn=0x000000000050ECA0 string=0x000000000050ECA4 "C"
 *   insn=0x000000000050ECA4 string=0x000000000050ECA8 "D"
 *   insn=0x000000000050ECA8 string=0x000000000050ECAC ")"
 *   insn=0x000000000050ECAC string=0x000000000050ECB0 "?"
 *   insn=0x000000000050ECB0 string=0x000000000050ECB4 "c"
 *   insn=0x000000000050ECB4 string=0x000000000050ECB8 "c "
 *   insn=0x000000000050ECB8 string=0x000000000050ECBC "C"
 *   insn=0x000000000050ECBC string=0x000000000050ECC0 "C"
 *   insn=0x000000000050ECC8 string=0x000000000050ECCC "D"
 *   insn=0x000000000050ECCC string=0x000000000050ECD0 "D"
 *   insn=0x000000000050ECD0 string=0x000000000050ECD4 "c"
 *   insn=0x000000000050ECD4 string=0x000000000050ECD8 "c"
 *   insn=0x000000000050ECD8 string=0x000000000050ECDC "C"
 *   insn=0x000000000050ECE0 string=0x000000000050ECE4 "c "
 *   insn=0x000000000050ECE4 string=0x000000000050ECE8 "C"
 *   insn=0x000000000050ECE8 string=0x000000000050ECEC "J"
 *   insn=0x000000000050ECF4 string=0x000000000050ECF8 "("
 *   insn=0x000000000050ECF8 string=0x000000000050ECFC "j"
 *   insn=0x000000000050ECF8 string=0x000000000050F0BC "h@"
 *   insn=0x000000000050ECFC string=0x000000000050ED00 "@"
 *   insn=0x000000000050ED08 string=0x000000000050ED0C "(@"
 *   insn=0x000000000050ED10 string=0x000000000050ED14 ",-\n"
 *   insn=0x000000000050ED1C string=0x000000000050ED2C "--\n"
 *   insn=0x000000000050ED24 string=0x000000000050ED28 "6"
 *   insn=0x000000000050ED24 string=0x000000000050EDD4 ".-\n"
 *   insn=0x000000000050ED38 string=0x000000000050ED3C "."
 *   insn=0x000000000050ED40 string=0x000000000050ED44 "h"
 *   insn=0x000000000050ED58 string=0x000000000050ED5C ")"
 *   insn=0x000000000050ED60 string=0x000000000050ED64 ""
 *   insn=0x000000000050ED64 string=0x000000000050ED68 "m"
 *   insn=0x000000000050ED68 string=0x000000000050ED6C "%"
 *   insn=0x000000000050ED84 string=0x000000000050ED88 "1""
 *   insn=0x000000000050ED8C string=0x000000000050ED90 "!d"
 *   insn=0x000000000050ED90 string=0x000000000050ED94 "Bd"
 *   insn=0x000000000050ED94 string=0x000000000050ED98 "a"
 *   insn=0x000000000050ED98 string=0x000000000050ED9C "!d"
 *   insn=0x000000000050ED9C string=0x000000000050EDA0 "!"
 *   insn=0x000000000050EDA4 string=0x000000000050EDA8 "0"
 *   insn=0x000000000050EDAC string=0x000000000050EDCC ""
 *   insn=0x000000000050EDD8 string=0x000000000050EDDC "."
 *   insn=0x000000000050EDEC string=0x000000000050EDF0 "!"
 *   insn=0x000000000050EDF0 string=0x000000000050EDF4 "! "
 *   insn=0x000000000050EDF8 string=0x000000000050EDFC "a"
 *   insn=0x000000000050EE00 string=0x000000000050EE10 "--\n"
 *   insn=0x000000000050EE08 string=0x000000000050EE0C "6"
 *   insn=0x000000000050EE08 string=0x000000000050EEB8 ".-\n"
 *   insn=0x000000000050EE1C string=0x000000000050EE20 "."
 *   insn=0x000000000050EE24 string=0x000000000050EE28 "h"
 *   insn=0x000000000050EE3C string=0x000000000050EE40 ")"
 *   insn=0x000000000050EE44 string=0x000000000050EE48 ""
 *   insn=0x000000000050EE48 string=0x000000000050EE4C "m"
 *   insn=0x000000000050EE4C string=0x000000000050EE50 "%"
 *   insn=0x000000000050EE68 string=0x000000000050EE6C "1""
 *   insn=0x000000000050EE70 string=0x000000000050EE74 "!d"
 *   insn=0x000000000050EE74 string=0x000000000050EE78 "Bd"
 *   insn=0x000000000050EE78 string=0x000000000050EE7C "a"
 *   insn=0x000000000050EE7C string=0x000000000050EE80 "!d"
 *   insn=0x000000000050EE80 string=0x000000000050EE84 "!"
 *   insn=0x000000000050EE88 string=0x000000000050EE8C "0"
 *   insn=0x000000000050EE90 string=0x000000000050EEB0 ""
 *   insn=0x000000000050EEBC string=0x000000000050EEC0 "."
 *   insn=0x000000000050EED0 string=0x000000000050EED4 "!"
 *   insn=0x000000000050EED4 string=0x000000000050EED8 "! "
 *   insn=0x000000000050EEDC string=0x000000000050EEE0 "a"
 *   insn=0x000000000050EEE4 string=0x000000000050EEF4 "--\n"
 *   insn=0x000000000050EEEC string=0x000000000050EEF0 "7"
 *   insn=0x000000000050EEEC string=0x000000000050EFA0 ".-\n"
 *   insn=0x000000000050EEF8 string=0x000000000050EEFC "x@"
 *   insn=0x000000000050EF00 string=0x000000000050EF04 "M"
 *   insn=0x000000000050EF24 string=0x000000000050EF28 ")"
 *   insn=0x000000000050EF2C string=0x000000000050EF30 ""
 *   insn=0x000000000050EF30 string=0x000000000050EF34 "m"
 *   insn=0x000000000050EF34 string=0x000000000050EF38 "%"
 *   insn=0x000000000050EF50 string=0x000000000050EF54 "1""
 *   insn=0x000000000050EF58 string=0x000000000050EF5C "!d"
 *   insn=0x000000000050EF5C string=0x000000000050EF60 "Bd"
 *   insn=0x000000000050EF60 string=0x000000000050EF64 "a"
 *   insn=0x000000000050EF64 string=0x000000000050EF68 "!d"
 *   insn=0x000000000050EF68 string=0x000000000050EF6C "!"
 *   insn=0x000000000050EF70 string=0x000000000050EF74 "0"
 *   insn=0x000000000050EF78 string=0x000000000050EF98 ""
 *   insn=0x000000000050EFA4 string=0x000000000050EFA8 "."
 *   insn=0x000000000050EFB8 string=0x000000000050EFBC "!"
 *   insn=0x000000000050EFBC string=0x000000000050EFC0 "! "
 *   insn=0x000000000050EFC4 string=0x000000000050EFC8 "a"
 *   insn=0x000000000050EFCC string=0x000000000050EFDC ",-\n"
 *   insn=0x000000000050EFD4 string=0x000000000050EFD8 "6"
 *   insn=0x000000000050EFD4 string=0x000000000050F084 "+-\n"
 *   insn=0x000000000050EFD8 string=0x000000000050F0B0 ")"
 *   insn=0x000000000050EFE0 string=0x000000000050EFE4 "x@"
 *   insn=0x000000000050EFE8 string=0x000000000050EFEC "-"
 *   insn=0x000000000050EFF0 string=0x000000000050EFF4 "h"
 *   insn=0x000000000050F008 string=0x000000000050F00C ")"
 *   insn=0x000000000050F014 string=0x000000000050F018 "l"
 *   insn=0x000000000050F018 string=0x000000000050F01C "%"
 *   insn=0x000000000050F03C string=0x000000000050F040 "!d"
 *   insn=0x000000000050F040 string=0x000000000050F044 "Bd"
 *   insn=0x000000000050F044 string=0x000000000050F048 "a"
 *   insn=0x000000000050F048 string=0x000000000050F04C "!d"
 *   insn=0x000000000050F04C string=0x000000000050F050 "!"
 *   insn=0x000000000050F054 string=0x000000000050F058 "/"
 *   insn=0x000000000050F084 string=0x000000000050F088 "k-@"
 *   insn=0x000000000050F088 string=0x000000000050F08C "+"
 *   insn=0x000000000050F090 string=0x000000000050F094 "kI-"
 *   insn=0x000000000050F094 string=0x000000000050F098 "a"
 *   insn=0x000000000050F09C string=0x000000000050F0A0 "!"
 *   insn=0x000000000050F0A0 string=0x000000000050F0A4 "! "
 *   insn=0x000000000050F0A4 string=0x000000000050F0A8 "a"
 *   insn=0x000000000050F0A8 string=0x000000000050F0AC "a"
 *   insn=0x000000000050F0B0 string=0x000000000050F0B4 "?"
 *   insn=0x000000000050F0C0 string=0x000000000050F0C4 "\n8@"
 *   insn=0x000000000050F0C0 string=0x000000000050F138 "8@"
 *   insn=0x000000000050F0C4 string=0x000000000050F0C8 "k"
 *   insn=0x000000000050F0C8 string=0x000000000050F0CC "`"
 *   insn=0x000000000050F0CC string=0x000000000050F0D0 ""
 *   insn=0x000000000050F0D4 string=0x000000000050F0D8 "Ja"
 *   insn=0x000000000050F0D8 string=0x000000000050F0DC "a"
 *   insn=0x000000000050F0DC string=0x000000000050F0E0 "B"
 *   insn=0x000000000050F0E0 string=0x000000000050F0E4 "C"
 *   insn=0x000000000050F0E4 string=0x000000000050F0E8 ")"
 *   insn=0x000000000050F0E8 string=0x000000000050F0EC "?"
 *   insn=0x000000000050F0EC string=0x000000000050F0F0 "B"
 *   insn=0x000000000050F0F0 string=0x000000000050F0F4 "B"
 *   insn=0x000000000050F0F4 string=0x000000000050F0F8 "B"
 *   insn=0x000000000050F0FC string=0x000000000050F100 "B "
 *   insn=0x000000000050F100 string=0x000000000050F104 "B"
 *   insn=0x000000000050F104 string=0x000000000050F108 "B"
 *   insn=0x000000000050F108 string=0x000000000050F10C "c"
 *   insn=0x000000000050F10C string=0x000000000050F110 "c "
 *   insn=0x000000000050F110 string=0x000000000050F114 "C"
 *   insn=0x000000000050F114 string=0x000000000050F118 "C"
 *   insn=0x000000000050F118 string=0x000000000050F11C "B"
 *   insn=0x000000000050F11C string=0x000000000050F120 "B"
 *   insn=0x000000000050F120 string=0x000000000050F124 "B"
 *   insn=0x000000000050F124 string=0x000000000050F128 "b"
 *   insn=0x000000000050F128 string=0x000000000050F12C "B "
 *   insn=0x000000000050F12C string=0x000000000050F130 "B"
 *   insn=0x000000000050F130 string=0x000000000050F134 "c"
 *   insn=0x000000000050F13C string=0x000000000050F140 "\n @"
 *   insn=0x000000000050F140 string=0x000000000050F144 ""
 *   insn=0x000000000050F148 string=0x000000000050F14C "`"
 *   insn=0x000000000050F14C string=0x000000000050F150 "J"
 *   insn=0x000000000050F150 string=0x000000000050F154 "B"
 *   insn=0x000000000050F154 string=0x000000000050F158 ")"
 *   insn=0x000000000050F158 string=0x000000000050F15C "?"
 *   insn=0x000000000050F15C string=0x000000000050F160 "!"
 *   insn=0x000000000050F160 string=0x000000000050F164 "!"
 *   insn=0x000000000050F164 string=0x000000000050F168 "A"
 *   insn=0x000000000050F168 string=0x000000000050F16C "A"
 *   insn=0x000000000050F16C string=0x000000000050F170 "B"
 *   insn=0x000000000050F170 string=0x000000000050F174 "B"
 *   insn=0x000000000050F174 string=0x000000000050F178 "B"
 *   insn=0x000000000050F178 string=0x000000000050F17C "b"
 *   insn=0x000000000050F17C string=0x000000000050F180 "!"
 *   insn=0x000000000050F180 string=0x000000000050F184 "B"
 *   insn=0x000000000050F184 string=0x000000000050F188 "!"
 *   insn=0x000000000050F188 string=0x000000000050F18C "A\t?"
 *   insn=0x000000000050F18C string=0x000000000050F190 "Ja"
 *   insn=0x000000000050F198 string=0x000000000050F19C "h"
 *   insn=0x000000000050F1A4 string=0x000000000050F1A8 ""
 *   insn=0x000000000050F1A8 string=0x000000000050F1AC "!"
 *   insn=0x000000000050F1B0 string=0x000000000050F1B4 "!#"
 *   insn=0x000000000050F1BC string=0x000000000050F1C0 "B"
 *   insn=0x000000000050F1C0 string=0x000000000050F1C4 "B"
 *   insn=0x000000000050F1D0 string=0x000000000050F1D4 ""
 *   insn=0x000000000050F1D4 string=0x000000000050F1D8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t *__fastcall PVRTModelPODToggleFixedPoint(float32x4_t *result)
{
  unsigned __int64 v1; // x8
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x11
  __int64 v5; // x12
  unsigned int v6; // w13
  unsigned __int32 v7; // w11
  float *v8; // x12
  unsigned __int64 v9; // x8
  __int64 v10; // x9
  unsigned int v11; // w10
  float32x4_t v12; // q0
  unsigned int v13; // w11
  unsigned __int64 i; // x8
  unsigned __int64 v15; // x10
  unsigned __int64 v16; // x11
  int *v17; // x11
  int v18; // w12
  int v19; // t1
  int v20; // w13
  uint32x4_t *v21; // x13
  __int64 v22; // x14
  __int64 v23; // x15
  unsigned int v24; // w16
  uint32x4_t *v25; // x16
  uint32x4_t v26; // q0
  __int64 v27; // x17
  uint32x4_t v28; // q1
  uint32x4_t v29; // q2
  uint32x4_t v30; // q3
  __int64 v31; // x14
  unsigned int *v32; // x13
  unsigned int v33; // w15
  unsigned int v34; // t1
  __int64 v35; // x14
  float *v36; // x12
  int v37; // w13
  uint32x4_t *v38; // x13
  __int64 v39; // x14
  __int64 v40; // x15
  unsigned int v41; // w16
  uint32x4_t *v42; // x16
  uint32x4_t v43; // q0
  __int64 v44; // x17
  uint32x4_t v45; // q1
  uint32x4_t v46; // q2
  uint32x4_t v47; // q3
  __int64 v48; // x14
  unsigned int *v49; // x13
  unsigned int v50; // w15
  unsigned int v51; // t1
  __int64 v52; // x14
  float *v53; // x12
  int v54; // w13
  uint32x4_t *v55; // x14
  __int64 v56; // x13
  __int64 v57; // x15
  unsigned int v58; // w16
  uint32x4_t *v59; // x16
  uint32x4_t v60; // q0
  __int64 v61; // x17
  uint32x4_t v62; // q1
  uint32x4_t v63; // q2
  uint32x4_t v64; // q3
  __int64 v65; // x13
  unsigned int *v66; // x14
  unsigned int v67; // w15
  unsigned int v68; // t1
  __int64 v69; // x14
  float *v70; // x12
  int v71; // w11
  uint32x4_t *v72; // x11
  __int64 v73; // x12
  __int64 v74; // x13
  unsigned int v75; // w14
  uint32x4_t *v76; // x14
  uint32x4_t v77; // q0
  __int64 v78; // x15
  uint32x4_t v79; // q1
  uint32x4_t v80; // q2
  uint32x4_t v81; // q3
  __int64 v82; // x12
  unsigned int *v83; // x11
  unsigned int v84; // w13
  unsigned int v85; // t1
  __int64 v86; // x10
  float *v87; // x10
  unsigned __int64 v88; // x8
  float *v89; // x9
  unsigned int v90; // w10
  unsigned int v91; // w11
  float32x4_t v92; // q1
  unsigned int v93; // w12
  unsigned __int64 v94; // x8
  __int64 v95; // x9
  float32x4_t v96; // q1
  float32x4_t v97; // q2
  float32x4_t v98; // q3
  unsigned int v99; // w8
  int32x4_t v100; // q0
  unsigned __int32 v101; // w11
  unsigned __int64 v102; // x10
  unsigned __int64 v103; // x9
  float32x2_t v104; // d1
  unsigned __int64 v105; // x15
  __int64 v106; // x14
  float v107; // s3
  float *v108; // x14
  unsigned __int32 v109; // w15
  unsigned __int64 v110; // x8
  unsigned __int64 v111; // x9
  float32x2_t v112; // d1
  __int64 v113; // x10
  float32x4_t v114; // q2
  int32x2_t v115; // d4
  int32x4_t v116; // q3
  unsigned __int64 v117; // x8
  __int64 v118; // x9
  unsigned __int64 v119; // x11
  int v120; // w12
  int v121; // w13
  uint32x4_t *v122; // x13
  __int64 v123; // x14
  __int64 v124; // x15
  unsigned int v125; // w16
  uint32x4_t *v126; // x16
  uint32x4_t v127; // q1
  __int64 v128; // x17
  uint32x4_t v129; // q2
  uint32x4_t v130; // q3
  uint32x4_t v131; // q4
  __int64 v132; // x14
  unsigned int *v133; // x13
  unsigned int v134; // w15
  unsigned int v135; // t1
  __int64 v136; // x14
  float *v137; // x14
  int v138; // w13
  uint32x4_t *v139; // x13
  __int64 v140; // x14
  __int64 v141; // x15
  unsigned int v142; // w16
  uint32x4_t *v143; // x16
  uint32x4_t v144; // q1
  __int64 v145; // x17
  uint32x4_t v146; // q2
  uint32x4_t v147; // q3
  uint32x4_t v148; // q4
  __int64 v149; // x14
  unsigned int *v150; // x13
  unsigned int v151; // w15
  unsigned int v152; // t1
  __int64 v153; // x14
  float *v154; // x14
  int v155; // w13
  uint32x4_t *v156; // x14
  __int64 v157; // x13
  __int64 v158; // x15
  unsigned int v159; // w16
  uint32x4_t *v160; // x16
  uint32x4_t v161; // q1
  __int64 v162; // x17
  uint32x4_t v163; // q2
  uint32x4_t v164; // q3
  uint32x4_t v165; // q4
  __int64 v166; // x13
  unsigned int *v167; // x14
  unsigned int v168; // w15
  unsigned int v169; // t1
  __int64 v170; // x14
  float *v171; // x14
  int v172; // w12
  uint32x4_t *v173; // x12
  __int64 v174; // x13
  __int64 v175; // x14
  unsigned int v176; // w15
  uint32x4_t *v177; // x15
  uint32x4_t v178; // q1
  __int64 v179; // x16
  uint32x4_t v180; // q2
  uint32x4_t v181; // q3
  uint32x4_t v182; // q4
  __int64 v183; // x13
  unsigned int *v184; // x12
  unsigned int v185; // w14
  unsigned int v186; // t1
  __int64 v187; // x11
  float *v188; // x11
  unsigned __int64 v189; // x8
  unsigned __int64 v190; // x9
  float *v191; // x10
  float32x4_t v192; // q1
  int v193; // s3
  int v194; // s4
  int32x4_t v195; // q2
  int v196; // s3
  unsigned __int64 v197; // x8
  unsigned __int64 v198; // x9
  float32x4_t v199; // q0
  __int64 v200; // x10
  int32x4_t v201; // q2
  int32x4_t v202; // q1
  int32x4_t v203; // q3
  float v204; // s1
  float32x4_t v205; // q2

  v1 = result[1].n128_u32[2];
  if ( (result[7].n128_u8[12] & 1) != 0 )
  {
    if ( (_DWORD)v1 )
    {
      v101 = result[7].n128_u32[2];
      v102 = result[2].n128_u64[0];
      v103 = 0;
      v104.n64_u64[0] = vdup_n_s32(0x37800000u).n64_u64[0];
      do
      {
        v105 = v102 + 24 * v103;
        v106 = *(_QWORD *)(v105 + 16);
        v107 = (float)*(int *)(v105 + 12) * 0.000015259;
        *(float32x2_t *)(v105 + 4) = vmul_f32(vcvt_f32_s32(*(int32x2_t *)(v105 + 4)), v104);
        *(float *)(v105 + 12) = v107;
        if ( v106 && v101 )
        {
          v108 = (float *)(v106 + 4LL * (v101 - 1));
          v109 = v101;
          do
          {
            --v109;
            *v108 = (float)*(int *)v108 * 0.000015259;
            --v108;
          }
          while ( v109 );
        }
        ++v103;
      }
      while ( v103 < v1 );
    }
    v110 = result[2].n128_u32[2];
    if ( (_DWORD)v110 )
    {
      v111 = 0;
      v112.n64_u64[0] = vdup_n_s32(0x37800000u).n64_u64[0];
      v113 = result[3].n128_u64[0] + 20;
      v114 = vdupq_n_s32(0x37800000u);
      do
      {
        v115.n64_u64[0] = *(unsigned __int64 *)(v113 - 16);
        ++v111;
        *(float *)(v113 - 8) = (float)*(int *)(v113 - 8) * 0.000015259;
        v116 = *(int32x4_t *)v113;
        *(float32x2_t *)(v113 - 16) = vmul_f32(vcvt_f32_s32(v115), v112);
        v115.n64_u32[0] = *(_DWORD *)(v113 + 16);
        *(float32x4_t *)v113 = vmulq_f32(vcvtq_f32_s32(v116), v114);
        *(float *)(v113 + 16) = (float)v115.n64_i32[0] * 0.000015259;
        v113 += 40;
      }
      while ( v111 < v110 );
    }
    v117 = result[4].n128_u32[2];
    if ( !(_DWORD)v117 )
    {
LABEL_198:
      v189 = result[6].n128_u32[2];
      if ( (_DWORD)v189 )
      {
        v190 = 0;
        v191 = (float *)(result[7].n128_u64[0] + 88);
        v192 = vdupq_n_s32(0x37800000u);
        do
        {
          v193 = *((_DWORD *)v191 - 2);
          v194 = *((_DWORD *)v191 - 1);
          ++v190;
          *(float32x4_t *)(v191 - 10) = vmulq_f32(vcvtq_f32_s32(*(int32x4_t *)(v191 - 10)), v192);
          *(v191 - 1) = (float)v194 * 0.000015259;
          v195 = *(int32x4_t *)(v191 - 6);
          *(v191 - 2) = (float)v193 * 0.000015259;
          v196 = *(_DWORD *)v191;
          *(float32x4_t *)(v191 - 6) = vmulq_f32(vcvtq_f32_s32(v195), v192);
          *v191 = (float)v196 * 0.000015259;
          v191 += 44;
        }
        while ( v190 < v189 );
      }
      v197 = result[3].n128_u32[2];
      if ( (_DWORD)v197 )
      {
        v198 = 0;
        v199 = vdupq_n_s32(0x37800000u);
        v200 = result[4].n128_u64[0] + 308;
        do
        {
          v201 = *(int32x4_t *)v200;
          ++v198;
          *(float32x4_t *)(v200 + 16) = vmulq_f32(vcvtq_f32_s32(*(int32x4_t *)(v200 + 16)), v199);
          v202 = *(int32x4_t *)(v200 - 32);
          v203 = *(int32x4_t *)(v200 - 16);
          *(float32x4_t *)v200 = vmulq_f32(vcvtq_f32_s32(v201), v199);
          *(float32x4_t *)(v200 - 32) = vmulq_f32(vcvtq_f32_s32(v202), v199);
          *(float32x4_t *)(v200 - 16) = vmulq_f32(vcvtq_f32_s32(v203), v199);
          v200 += 344;
        }
        while ( v198 < v197 );
      }
      v204 = (float)result[1].n128_i32[1] * 0.000015259;
      v205 = vmulq_f32(vcvtq_f32_s32(*result), vdupq_n_s32(0x37800000u));
      result[1].n128_f32[0] = (float)result[1].n128_i32[0] * 0.000015259;
      result[1].n128_f32[1] = v204;
      *result = v205;
      goto LABEL_205;
    }
    v118 = 0;
    while ( 1 )
    {
      v119 = result[5].n128_u64[0];
      v120 = *(_DWORD *)(v119 + 96 * v118 + 24);
      if ( (v120 & 1) != 0 )
      {
        v122 = *(uint32x4_t **)(v119 + 96 * v118 + 32);
        v123 = result[7].n128_u32[2];
        if ( !v122 )
        {
          v121 = 3 * v123;
          if ( !(3 * (_DWORD)v123) )
            goto LABEL_137;
          goto LABEL_134;
        }
        if ( (_DWORD)v123 )
        {
          if ( (unsigned int)v123 > 7 )
          {
            v124 = (unsigned int)v123 & 0xFFFFFFF8;
            v126 = v122 + 1;
            v127 = 0u;
            v128 = v124;
            v129 = 0u;
            do
            {
              v130 = v126[-1];
              v131 = *v126;
              v128 -= 8;
              v126 += 2;
              v127 = vmaxq_u32(v127, v130);
              v129 = vmaxq_u32(v129, v131);
            }
            while ( v128 );
            v125 = vmaxvq_u32(vmaxq_u32(v127, v129));
            if ( v124 != v123 )
              goto LABEL_129;
          }
          else
          {
            v124 = 0;
            v125 = 0;
LABEL_129:
            v132 = v123 - v124;
            v133 = (unsigned int *)v122 + v124;
            do
            {
              v135 = *v133++;
              v134 = v135;
              if ( v125 < v135 )
                v125 = v134;
              --v132;
            }
            while ( v132 );
          }
          v121 = v125 + 3;
          if ( v125 == -3 )
            goto LABEL_137;
          goto LABEL_134;
        }
        v121 = 3;
      }
      else
      {
        v121 = 3;
      }
LABEL_134:
      v136 = *(_QWORD *)(v119 + 96 * v118 + 40);
      if ( v136 )
      {
        v137 = (float *)(v136 + 4LL * (unsigned int)(v121 - 1));
        do
        {
          --v121;
          *v137 = (float)*(int *)v137 * 0.000015259;
          --v137;
        }
        while ( v121 );
      }
LABEL_137:
      if ( (v120 & 2) != 0 )
      {
        v139 = *(uint32x4_t **)(v119 + 96 * v118 + 48);
        v140 = result[7].n128_u32[2];
        if ( !v139 )
        {
          v138 = 4 * v140;
          if ( !(4 * (_DWORD)v140) )
            goto LABEL_157;
          goto LABEL_154;
        }
        if ( (_DWORD)v140 )
        {
          if ( (unsigned int)v140 > 7 )
          {
            v141 = (unsigned int)v140 & 0xFFFFFFF8;
            v143 = v139 + 1;
            v144 = 0u;
            v145 = v141;
            v146 = 0u;
            do
            {
              v147 = v143[-1];
              v148 = *v143;
              v145 -= 8;
              v143 += 2;
              v144 = vmaxq_u32(v144, v147);
              v146 = vmaxq_u32(v146, v148);
            }
            while ( v145 );
            v142 = vmaxvq_u32(vmaxq_u32(v144, v146));
            if ( v141 != v140 )
              goto LABEL_149;
          }
          else
          {
            v141 = 0;
            v142 = 0;
LABEL_149:
            v149 = v140 - v141;
            v150 = (unsigned int *)v139 + v141;
            do
            {
              v152 = *v150++;
              v151 = v152;
              if ( v142 < v152 )
                v142 = v151;
              --v149;
            }
            while ( v149 );
          }
          v138 = v142 + 4;
          if ( v142 == -4 )
            goto LABEL_157;
          goto LABEL_154;
        }
        v138 = 4;
      }
      else
      {
        v138 = 4;
      }
LABEL_154:
      v153 = *(_QWORD *)(v119 + 96 * v118 + 56);
      if ( v153 )
      {
        v154 = (float *)(v153 + 4LL * (unsigned int)(v138 - 1));
        do
        {
          --v138;
          *v154 = (float)*(int *)v154 * 0.000015259;
          --v154;
        }
        while ( v138 );
      }
LABEL_157:
      if ( (v120 & 4) != 0 )
      {
        v156 = *(uint32x4_t **)(v119 + 96 * v118 + 64);
        v157 = result[7].n128_u32[2];
        if ( !v156 )
        {
          v155 = 7 * v157;
          if ( !v155 )
            goto LABEL_177;
          goto LABEL_174;
        }
        if ( (_DWORD)v157 )
        {
          if ( (unsigned int)v157 > 7 )
          {
            v158 = (unsigned int)v157 & 0xFFFFFFF8;
            v160 = v156 + 1;
            v161 = 0u;
            v162 = v158;
            v163 = 0u;
            do
            {
              v164 = v160[-1];
              v165 = *v160;
              v162 -= 8;
              v160 += 2;
              v161 = vmaxq_u32(v161, v164);
              v163 = vmaxq_u32(v163, v165);
            }
            while ( v162 );
            v159 = vmaxvq_u32(vmaxq_u32(v161, v163));
            if ( v158 != v157 )
              goto LABEL_169;
          }
          else
          {
            v158 = 0;
            v159 = 0;
LABEL_169:
            v166 = v157 - v158;
            v167 = (unsigned int *)v156 + v158;
            do
            {
              v169 = *v167++;
              v168 = v169;
              if ( v159 < v169 )
                v159 = v168;
              --v166;
            }
            while ( v166 );
          }
          v155 = v159 + 7;
          if ( v159 == -7 )
            goto LABEL_177;
          goto LABEL_174;
        }
        v155 = 7;
      }
      else
      {
        v155 = 7;
      }
LABEL_174:
      v170 = *(_QWORD *)(v119 + 96 * v118 + 72);
      if ( v170 )
      {
        v171 = (float *)(v170 + 4LL * (unsigned int)(v155 - 1));
        do
        {
          --v155;
          *v171 = (float)*(int *)v171 * 0.000015259;
          --v171;
        }
        while ( v155 );
      }
LABEL_177:
      if ( (v120 & 8) == 0 )
      {
        v172 = 16;
        goto LABEL_194;
      }
      v173 = *(uint32x4_t **)(v119 + 96 * v118 + 80);
      v174 = result[7].n128_u32[2];
      if ( !v173 )
      {
        v172 = 16 * v174;
        if ( 16 * (_DWORD)v174 )
          goto LABEL_194;
        goto LABEL_197;
      }
      if ( !(_DWORD)v174 )
      {
        v172 = 16;
LABEL_194:
        v187 = *(_QWORD *)(v119 + 96 * v118 + 88);
        if ( v187 )
        {
          v188 = (float *)(v187 + 4LL * (unsigned int)(v172 - 1));
          do
          {
            --v172;
            *v188 = (float)*(int *)v188 * 0.000015259;
            --v188;
          }
          while ( v172 );
        }
        goto LABEL_197;
      }
      if ( (unsigned int)v174 > 7 )
      {
        v175 = (unsigned int)v174 & 0xFFFFFFF8;
        v177 = v173 + 1;
        v178 = 0u;
        v179 = v175;
        v180 = 0u;
        do
        {
          v181 = v177[-1];
          v182 = *v177;
          v179 -= 8;
          v177 += 2;
          v178 = vmaxq_u32(v178, v181);
          v180 = vmaxq_u32(v180, v182);
        }
        while ( v179 );
        v176 = vmaxvq_u32(vmaxq_u32(v178, v180));
        if ( v175 == v174 )
          goto LABEL_193;
      }
      else
      {
        v175 = 0;
        v176 = 0;
      }
      v183 = v174 - v175;
      v184 = (unsigned int *)v173 + v175;
      do
      {
        v186 = *v184++;
        v185 = v186;
        if ( v176 < v186 )
          v176 = v185;
        --v183;
      }
      while ( v183 );
LABEL_193:
      v172 = v176 + 16;
      if ( v176 != -16 )
        goto LABEL_194;
LABEL_197:
      if ( ++v118 >= v117 )
        goto LABEL_198;
    }
  }
  if ( (_DWORD)v1 )
  {
    v2 = result[2].n128_u64[0];
    v3 = 0;
    do
    {
      v4 = v2 + 24 * v3;
      v5 = *(_QWORD *)(v4 + 16);
      v6 = vcvts_n_s32_f32(*(float *)(v4 + 12), 0x10u);
      *(int32x2_t *)(v4 + 4) = vcvt_n_s32_f32(*(float32x2_t *)(v4 + 4), 0x10u);
      *(_DWORD *)(v4 + 12) = v6;
      if ( v5 )
      {
        v7 = result[7].n128_u32[2];
        if ( v7 )
        {
          v8 = (float *)(v5 + 4LL * (v7 - 1));
          do
          {
            --v7;
            *(_DWORD *)v8 = vcvts_n_s32_f32(*v8, 0x10u);
            --v8;
          }
          while ( v7 );
        }
      }
      ++v3;
    }
    while ( v3 < result[1].n128_u32[2] );
  }
  if ( result[2].n128_u32[2] )
  {
    v9 = 0;
    v10 = result[3].n128_u64[0] + 20;
    do
    {
      ++v9;
      v11 = vcvts_n_s32_f32(*(float *)(v10 - 8), 0x10u);
      v12 = *(float32x4_t *)v10;
      v13 = vcvts_n_s32_f32(*(float *)(v10 + 16), 0x10u);
      *(int32x2_t *)(v10 - 16) = vcvt_n_s32_f32(*(float32x2_t *)(v10 - 16), 0x10u);
      *(_DWORD *)(v10 - 8) = v11;
      *(int32x4_t *)v10 = vcvtq_n_s32_f32(v12, 0x10u);
      *(_DWORD *)(v10 + 16) = v13;
      v10 += 40;
    }
    while ( v9 < result[2].n128_u32[2] );
  }
  if ( result[4].n128_u32[2] )
  {
    for ( i = 0; i < result[4].n128_u32[2]; ++i )
    {
      v15 = result[5].n128_u64[0];
      v16 = v15 + 96 * i;
      v19 = *(_DWORD *)(v16 + 24);
      v17 = (int *)(v16 + 24);
      LOBYTE(v18) = v19;
      if ( (v19 & 1) != 0 )
      {
        v21 = *(uint32x4_t **)(v15 + 96 * i + 32);
        v22 = result[7].n128_u32[2];
        if ( !v21 )
        {
          v20 = 3 * v22;
          if ( !(3 * (_DWORD)v22) )
            goto LABEL_35;
          goto LABEL_31;
        }
        if ( (_DWORD)v22 )
        {
          if ( (unsigned int)v22 > 7 )
          {
            v23 = (unsigned int)v22 & 0xFFFFFFF8;
            v25 = v21 + 1;
            v26 = 0u;
            v27 = v23;
            v28 = 0u;
            do
            {
              v29 = v25[-1];
              v30 = *v25;
              v27 -= 8;
              v25 += 2;
              v26 = vmaxq_u32(v26, v29);
              v28 = vmaxq_u32(v28, v30);
            }
            while ( v27 );
            v24 = vmaxvq_u32(vmaxq_u32(v26, v28));
            if ( v23 != v22 )
              goto LABEL_26;
          }
          else
          {
            v23 = 0;
            v24 = 0;
LABEL_26:
            v31 = v22 - v23;
            v32 = (unsigned int *)v21 + v23;
            do
            {
              v34 = *v32++;
              v33 = v34;
              if ( v24 < v34 )
                v24 = v33;
              --v31;
            }
            while ( v31 );
          }
          v20 = v24 + 3;
          if ( v24 == -3 )
            goto LABEL_35;
          goto LABEL_31;
        }
        v20 = 3;
      }
      else
      {
        v20 = 3;
      }
LABEL_31:
      v35 = *(_QWORD *)(v15 + 96 * i + 40);
      if ( v35 )
      {
        v36 = (float *)(v35 + 4LL * (unsigned int)(v20 - 1));
        do
        {
          --v20;
          *(_DWORD *)v36 = vcvts_n_s32_f32(*v36, 0x10u);
          --v36;
        }
        while ( v20 );
        v18 = *v17;
      }
LABEL_35:
      if ( (v18 & 2) != 0 )
      {
        v38 = *(uint32x4_t **)(v15 + 96 * i + 48);
        v39 = result[7].n128_u32[2];
        if ( !v38 )
        {
          v37 = 4 * v39;
          if ( !(4 * (_DWORD)v39) )
            goto LABEL_56;
          goto LABEL_52;
        }
        if ( (_DWORD)v39 )
        {
          if ( (unsigned int)v39 > 7 )
          {
            v40 = (unsigned int)v39 & 0xFFFFFFF8;
            v42 = v38 + 1;
            v43 = 0u;
            v44 = v40;
            v45 = 0u;
            do
            {
              v46 = v42[-1];
              v47 = *v42;
              v44 -= 8;
              v42 += 2;
              v43 = vmaxq_u32(v43, v46);
              v45 = vmaxq_u32(v45, v47);
            }
            while ( v44 );
            v41 = vmaxvq_u32(vmaxq_u32(v43, v45));
            if ( v40 != v39 )
              goto LABEL_47;
          }
          else
          {
            v40 = 0;
            v41 = 0;
LABEL_47:
            v48 = v39 - v40;
            v49 = (unsigned int *)v38 + v40;
            do
            {
              v51 = *v49++;
              v50 = v51;
              if ( v41 < v51 )
                v41 = v50;
              --v48;
            }
            while ( v48 );
          }
          v37 = v41 + 4;
          if ( v41 == -4 )
            goto LABEL_56;
          goto LABEL_52;
        }
        v37 = 4;
      }
      else
      {
        v37 = 4;
      }
LABEL_52:
      v52 = *(_QWORD *)(v15 + 96 * i + 56);
      if ( v52 )
      {
        v53 = (float *)(v52 + 4LL * (unsigned int)(v37 - 1));
        do
        {
          --v37;
          *(_DWORD *)v53 = vcvts_n_s32_f32(*v53, 0x10u);
          --v53;
        }
        while ( v37 );
        v18 = *v17;
      }
LABEL_56:
      if ( (v18 & 4) != 0 )
      {
        v55 = *(uint32x4_t **)(v15 + 96 * i + 64);
        v56 = result[7].n128_u32[2];
        if ( !v55 )
        {
          v54 = 7 * v56;
          if ( !v54 )
            goto LABEL_77;
          goto LABEL_73;
        }
        if ( (_DWORD)v56 )
        {
          if ( (unsigned int)v56 > 7 )
          {
            v57 = (unsigned int)v56 & 0xFFFFFFF8;
            v59 = v55 + 1;
            v60 = 0u;
            v61 = v57;
            v62 = 0u;
            do
            {
              v63 = v59[-1];
              v64 = *v59;
              v61 -= 8;
              v59 += 2;
              v60 = vmaxq_u32(v60, v63);
              v62 = vmaxq_u32(v62, v64);
            }
            while ( v61 );
            v58 = vmaxvq_u32(vmaxq_u32(v60, v62));
            if ( v57 != v56 )
              goto LABEL_68;
          }
          else
          {
            v57 = 0;
            v58 = 0;
LABEL_68:
            v65 = v56 - v57;
            v66 = (unsigned int *)v55 + v57;
            do
            {
              v68 = *v66++;
              v67 = v68;
              if ( v58 < v68 )
                v58 = v67;
              --v65;
            }
            while ( v65 );
          }
          v54 = v58 + 7;
          if ( v58 == -7 )
            goto LABEL_77;
          goto LABEL_73;
        }
        v54 = 7;
      }
      else
      {
        v54 = 7;
      }
LABEL_73:
      v69 = *(_QWORD *)(v15 + 96 * i + 72);
      if ( v69 )
      {
        v70 = (float *)(v69 + 4LL * (unsigned int)(v54 - 1));
        do
        {
          --v54;
          *(_DWORD *)v70 = vcvts_n_s32_f32(*v70, 0x10u);
          --v70;
        }
        while ( v54 );
        v18 = *v17;
      }
LABEL_77:
      if ( (v18 & 8) == 0 )
      {
        v71 = 16;
        goto LABEL_94;
      }
      v72 = *(uint32x4_t **)(v15 + 96 * i + 80);
      v73 = result[7].n128_u32[2];
      if ( !v72 )
      {
        v71 = 16 * v73;
        if ( 16 * (_DWORD)v73 )
          goto LABEL_94;
        continue;
      }
      if ( !(_DWORD)v73 )
      {
        v71 = 16;
LABEL_94:
        v86 = *(_QWORD *)(v15 + 96 * i + 88);
        if ( v86 )
        {
          v87 = (float *)(v86 + 4LL * (unsigned int)(v71 - 1));
          do
          {
            --v71;
            *(_DWORD *)v87 = vcvts_n_s32_f32(*v87, 0x10u);
            --v87;
          }
          while ( v71 );
        }
        continue;
      }
      if ( (unsigned int)v73 > 7 )
      {
        v74 = (unsigned int)v73 & 0xFFFFFFF8;
        v76 = v72 + 1;
        v77 = 0u;
        v78 = v74;
        v79 = 0u;
        do
        {
          v80 = v76[-1];
          v81 = *v76;
          v78 -= 8;
          v76 += 2;
          v77 = vmaxq_u32(v77, v80);
          v79 = vmaxq_u32(v79, v81);
        }
        while ( v78 );
        v75 = vmaxvq_u32(vmaxq_u32(v77, v79));
        if ( v74 == v73 )
          goto LABEL_93;
      }
      else
      {
        v74 = 0;
        v75 = 0;
      }
      v82 = v73 - v74;
      v83 = (unsigned int *)v72 + v74;
      do
      {
        v85 = *v83++;
        v84 = v85;
        if ( v75 < v85 )
          v75 = v84;
        --v82;
      }
      while ( v82 );
LABEL_93:
      v71 = v75 + 16;
      if ( v75 != -16 )
        goto LABEL_94;
    }
  }
  if ( result[6].n128_u32[2] )
  {
    v88 = 0;
    v89 = (float *)(result[7].n128_u64[0] + 88);
    do
    {
      ++v88;
      v90 = vcvts_n_s32_f32(*(v89 - 1), 0x10u);
      v91 = vcvts_n_s32_f32(*(v89 - 2), 0x10u);
      v92 = *(float32x4_t *)(v89 - 6);
      v93 = vcvts_n_s32_f32(*v89, 0x10u);
      *(int32x4_t *)(v89 - 10) = vcvtq_n_s32_f32(*(float32x4_t *)(v89 - 10), 0x10u);
      *((_DWORD *)v89 - 2) = v91;
      *((_DWORD *)v89 - 1) = v90;
      *(int32x4_t *)(v89 - 6) = vcvtq_n_s32_f32(v92, 0x10u);
      *(_DWORD *)v89 = v93;
      v89 += 44;
    }
    while ( v88 < result[6].n128_u32[2] );
  }
  if ( result[3].n128_u32[2] )
  {
    v94 = 0;
    v95 = result[4].n128_u64[0] + 308;
    do
    {
      v96 = *(float32x4_t *)v95;
      v97 = *(float32x4_t *)(v95 - 32);
      v98 = *(float32x4_t *)(v95 - 16);
      ++v94;
      *(int32x4_t *)(v95 + 16) = vcvtq_n_s32_f32(*(float32x4_t *)(v95 + 16), 0x10u);
      *(int32x4_t *)v95 = vcvtq_n_s32_f32(v96, 0x10u);
      *(int32x4_t *)(v95 - 16) = vcvtq_n_s32_f32(v98, 0x10u);
      *(int32x4_t *)(v95 - 32) = vcvtq_n_s32_f32(v97, 0x10u);
      v95 += 344;
    }
    while ( v94 < result[3].n128_u32[2] );
  }
  v99 = vcvts_n_s32_f32(result[1].n128_f32[1], 0x10u);
  v100 = vcvtq_n_s32_f32(*result, 0x10u);
  result[1].n128_u32[0] = vcvts_n_s32_f32(result[1].n128_f32[0], 0x10u);
  result[1].n128_u32[1] = v99;
  *result = v100;
LABEL_205:
  result[7].n128_u32[3] ^= 1u;
  return result;
}

