/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EFACC
 * Mangled: sub_4EFACC
 * Demangled: sub_4EFACC
 *
 * Callers: 4
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F0E8C  sub_4F0E8C
 *   0x00000000004F17E0  sub_4F17E0
 *
 * Callees: 36
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F0E8C  sub_4F0E8C
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F21A8  sub_4F21A8
 *   0x00000000004F2368  sub_4F2368
 *   0x00000000004F2614  sub_4F2614
 *   0x00000000004F28AC  sub_4F28AC
 *   0x00000000004F2C18  sub_4F2C18
 *   0x00000000004F2CCC  sub_4F2CCC
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FDBA0  sub_4FDBA0
 *   0x00000000004FDC7C  sub_4FDC7C
 *   0x00000000004FDC94  sub_4FDC94
 *   0x00000000004FDD3C  sub_4FDD3C
 *   0x00000000004FDD58  sub_4FDD58
 *   0x00000000004FDD68  sub_4FDD68
 *   0x00000000004FDE2C  sub_4FDE2C
 *   0x00000000004FE030  sub_4FE030
 *   0x00000000004FE088  sub_4FE088
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FE2E8  sub_4FE2E8
 *   0x00000000004FE340  sub_4FE340
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FEA48  sub_4FEA48
 *   0x00000000004FED28  sub_4FED28
 *   0x00000000004FF07C  sub_4FF07C
 *   0x00000000005001D0  sub_5001D0
 *   0x000000000050072C  sub_50072C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500970  sub_500970
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 433
 *   insn=0x00000000004EFAE8 string=0x00000000004EFAEC "["
 *   insn=0x00000000004EFAEC string=0x00000000004EFAF0 "h"
 *   insn=0x00000000004EFAF8 string=0x00000000004EFAFC "h"
 *   insn=0x00000000004EFAFC string=0x00000000004EFB00 "\t"
 *   insn=0x00000000004EFB08 string=0x00000000004EFB0C "I"
 *   insn=0x00000000004EFB08 string=0x00000000004F0358 "t"
 *   insn=0x00000000004EFB0C string=0x00000000004EFB14 "(y"
 *   insn=0x00000000004EFB0C string=0x0000000000599DF8 ",]"
 *   insn=0x00000000004EFB14 string=0x00000000004EFB18 "t"
 *   insn=0x00000000004EFB18 string=0x00000000004EFB1C ""
 *   insn=0x00000000004EFB20 string=0x00000000004EFB58 "u"
 *   insn=0x00000000004EFB20 string=0x00000000004EFE9C "u"
 *   insn=0x00000000004EFB20 string=0x00000000004F0004 "t"
 *   insn=0x00000000004EFB20 string=0x00000000004F010C "u"
 *   insn=0x00000000004EFB20 string=0x00000000004F0218 "u"
 *   insn=0x00000000004EFB28 string=0x00000000004EFB2C "t"
 *   insn=0x00000000004EFB4C string=0x00000000004EFB50 "u"
 *   insn=0x00000000004EFB54 string=0x00000000004F0708 "A"
 *   insn=0x00000000004EFB58 string=0x00000000004EFB5C ""
 *   insn=0x00000000004EFB8C string=0x00000000004EFB90 "h"
 *   insn=0x00000000004EFB98 string=0x00000000004EFB9C "v"
 *   insn=0x00000000004EFB98 string=0x00000000004EFBCC "y"
 *   insn=0x00000000004EFBA8 string=0x00000000004EFBAC "A"
 *   insn=0x00000000004EFBAC string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004EFBB0 string=0x00000000004EFBB4 "!"
 *   insn=0x00000000004EFBC4 string=0x00000000004EFBC8 "hC"
 *   insn=0x00000000004EFBD4 string=0x00000000004EFBD8 "h"
 *   insn=0x00000000004EFBE0 string=0x00000000004F039C "w"
 *   insn=0x00000000004EFBF0 string=0x00000000004EFBF4 "w"
 *   insn=0x00000000004EFBF0 string=0x00000000004F086C "A"
 *   insn=0x00000000004EFBF4 string=0x00000000004EFBF8 "A"
 *   insn=0x00000000004EFBF8 string=0x00000000004EFC00 "b"
 *   insn=0x00000000004EFBF8 string=0x000000000059A1B0 "(for index)"
 *   insn=0x00000000004EFC08 string=0x00000000004EFC0C "YC"
 *   insn=0x00000000004EFC18 string=0x00000000004EFC1C "c\t"
 *   insn=0x00000000004EFC1C string=0x00000000004EFC20 "A"
 *   insn=0x00000000004EFC20 string=0x00000000004EFC28 "b"
 *   insn=0x00000000004EFC20 string=0x000000000059A1BC "(for limit)"
 *   insn=0x00000000004EFC2C string=0x00000000004EFC30 "PC"
 *   insn=0x00000000004EFC3C string=0x00000000004EFC40 "Z\t"
 *   insn=0x00000000004EFC40 string=0x00000000004EFC44 "A"
 *   insn=0x00000000004EFC44 string=0x00000000004EFC4C "B"
 *   insn=0x00000000004EFC44 string=0x000000000059A1C8 "(for step)"
 *   insn=0x00000000004EFC50 string=0x00000000004EFC54 "GC"
 *   insn=0x00000000004EFC60 string=0x00000000004EFC64 "Q\t"
 *   insn=0x00000000004EFC70 string=0x00000000004EFC74 "M\t"
 *   insn=0x00000000004EFC74 string=0x00000000004EFC78 "h"
 *   insn=0x00000000004EFC80 string=0x00000000004EFC84 "x"
 *   insn=0x00000000004EFC90 string=0x00000000004EFC94 "A"
 *   insn=0x00000000004EFC98 string=0x00000000004EFC9C "!"
 *   insn=0x00000000004EFCAC string=0x00000000004EFCB0 ".C"
 *   insn=0x00000000004EFCB4 string=0x00000000004EFCB8 "oC"
 *   insn=0x00000000004EFCC4 string=0x00000000004EFCC8 "#"
 *   insn=0x00000000004EFCC8 string=0x00000000004EFCCC "`"
 *   insn=0x00000000004EFCD0 string=0x00000000004EFCD4 ";:"
 *   insn=0x00000000004EFCD4 string=0x00000000004EFCD8 "h"
 *   insn=0x00000000004EFCE0 string=0x00000000004EFCE4 "x"
 *   insn=0x00000000004EFCF0 string=0x00000000004EFCF4 "A"
 *   insn=0x00000000004EFCF8 string=0x00000000004EFCFC "!"
 *   insn=0x00000000004EFD14 string=0x00000000004EFD18 "WC"
 *   insn=0x00000000004EFD24 string=0x00000000004EFD28 ""
 *   insn=0x00000000004EFD28 string=0x00000000004EFD2C "`"
 *   insn=0x00000000004EFD30 string=0x00000000004EFD34 "#:"
 *   insn=0x00000000004EFD34 string=0x00000000004EFD38 "h"
 *   insn=0x00000000004EFD3C string=0x00000000004EFD40 "Aq"
 *   insn=0x00000000004EFD44 string=0x00000000004EFD48 "KC"
 *   insn=0x00000000004EFD58 string=0x00000000004EFD5C "`"
 *   insn=0x00000000004EFD6C string=0x00000000004EFD70 "AC"
 *   insn=0x00000000004EFD70 string=0x00000000004EFD74 "h"
 *   insn=0x00000000004EFD78 string=0x00000000004EFD7C "!@"
 *   insn=0x00000000004EFD7C string=0x00000000004F0580 "U"
 *   insn=0x00000000004EFD80 string=0x00000000004EFD84 "<C"
 *   insn=0x00000000004EFD84 string=0x00000000004EFD88 "h"
 *   insn=0x00000000004EFD88 string=0x00000000004EFD8C "t"
 *   insn=0x00000000004EFD94 string=0x00000000004EFD98 "u"
 *   insn=0x00000000004EFD94 string=0x00000000004EFDC8 "u"
 *   insn=0x00000000004EFDA0 string=0x00000000004EFDA4 "bB"
 *   insn=0x00000000004EFDA4 string=0x00000000004EFDA8 "A"
 *   insn=0x00000000004EFDAC string=0x00000000004EFDB0 "!"
 *   insn=0x00000000004EFDCC string=0x00000000004EFDD0 ")C"
 *   insn=0x00000000004EFE04 string=0x00000000004EFE08 "h"
 *   insn=0x00000000004EFE14 string=0x00000000004EFE18 "\t)A9\n"
 *   insn=0x00000000004EFE18 string=0x00000000004EFE1C "\n"
 *   insn=0x00000000004EFE1C string=0x00000000004EFE20 ")"
 *   insn=0x00000000004EFE20 string=0x00000000004EFE24 ""
 *   insn=0x00000000004EFE24 string=0x00000000004EFE28 "\t)"
 *   insn=0x00000000004EFE28 string=0x00000000004EFE2C "I"
 *   insn=0x00000000004EFE2C string=0x00000000004EFE30 "j"
 *   insn=0x00000000004EFE30 string=0x00000000004EFE34 "1@"
 *   insn=0x00000000004EFE34 string=0x00000000004EFE38 ")"
 *   insn=0x00000000004EFE38 string=0x00000000004EFE3C "(\t"
 *   insn=0x00000000004EFE3C string=0x00000000004EFE40 "c"
 *   insn=0x00000000004EFE40 string=0x00000000004EFE44 "g"
 *   insn=0x00000000004EFE68 string=0x00000000004EFE6C ")"
 *   insn=0x00000000004EFE6C string=0x00000000004EFE70 ""
 *   insn=0x00000000004EFE70 string=0x00000000004EFE74 "("
 *   insn=0x00000000004EFE74 string=0x00000000004EFE78 "\n\t"
 *   insn=0x00000000004EFE7C string=0x00000000004F0E34 "h"
 *   insn=0x00000000004EFE90 string=0x00000000004EFE94 "b "
 *   insn=0x00000000004EFEA4 string=0x00000000004EFEA8 ""
 *   insn=0x00000000004EFEA4 string=0x00000000004FDD58 "0@"
 *   insn=0x00000000004EFEF0 string=0x00000000004EFEF4 "h"
 *   insn=0x00000000004EFEF4 string=0x00000000004EFEF8 "\t"
 *   insn=0x00000000004EFEF8 string=0x00000000004EFEFC ")"
 *   insn=0x00000000004EFEFC string=0x00000000004EFF00 "*="
 *   insn=0x00000000004EFF00 string=0x00000000004EFF04 "_%"
 *   insn=0x00000000004EFF04 string=0x00000000004EFF08 "\t"
 *   insn=0x00000000004EFF0C string=0x00000000004EFF10 "A"
 *   insn=0x00000000004EFF10 string=0x000000000059A00A "chunk has too many syntax levels"
 *   insn=0x00000000004EFF1C string=0x00000000004EFF20 " B"
 *   insn=0x00000000004EFF24 string=0x00000000004EFF2C "h"
 *   insn=0x00000000004EFF2C string=0x00000000004EFF30 ""
 *   insn=0x00000000004EFF38 string=0x00000000004EFF3C "#"
 *   insn=0x00000000004EFF44 string=0x00000000004EFF78 "h"
 *   insn=0x00000000004EFF4C string=0x00000000004EFF50 "h"
 *   insn=0x00000000004EFF58 string=0x00000000004EFF5C "a"
 *   insn=0x00000000004EFF5C string=0x00000000004EFF68 "h"
 *   insn=0x00000000004EFF68 string=0x00000000004EFF6C "\t)A9\t="
 *   insn=0x00000000004EFF6C string=0x00000000004EFF70 "\t="
 *   insn=0x00000000004EFF84 string=0x00000000004EFF88 "\t"
 *   insn=0x00000000004EFF8C string=0x00000000004EFF90 ")"
 *   insn=0x00000000004EFF90 string=0x00000000004EFF94 "\t"
 *   insn=0x00000000004EFF94 string=0x00000000004EFF98 "@"
 *   insn=0x00000000004EFFA4 string=0x00000000004EFFA8 "k"
 *   insn=0x00000000004EFFB0 string=0x00000000004EFFB4 "a"
 *   insn=0x00000000004EFFB4 string=0x00000000004EFFC0 "`"
 *   insn=0x00000000004EFFC4 string=0x00000000004EFFC8 "-<"
 *   insn=0x00000000004EFFD0 string=0x00000000004EFFD4 "H<"
 *   insn=0x00000000004EFFD4 string=0x00000000004EFFD8 "w"
 *   insn=0x00000000004EFFE4 string=0x00000000004EFFE8 ";@9hQ"
 *   insn=0x00000000004EFFE8 string=0x00000000004EFFEC "hQ"
 *   insn=0x00000000004EFFEC string=0x00000000004EFFF0 "7@9"
 *   insn=0x00000000004EFFF4 string=0x00000000004EFFF8 "9"
 *   insn=0x00000000004EFFF8 string=0x00000000004EFFFC "x"
 *   insn=0x00000000004F0000 string=0x00000000004F0A04 "A"
 *   insn=0x00000000004F000C string=0x00000000004F0010 "h"
 *   insn=0x00000000004F0014 string=0x00000000004F0018 "\t"
 *   insn=0x00000000004F0018 string=0x00000000004F001C "?m"
 *   insn=0x00000000004F001C string=0x00000000004F0020 "h<"
 *   insn=0x00000000004F0024 string=0x00000000004F0028 "I!"
 *   insn=0x00000000004F002C string=0x00000000004F0034 "?"
 *   insn=0x00000000004F0044 string=0x00000000004F0048 "=7"
 *   insn=0x00000000004F0048 string=0x00000000004FDD3C ""
 *   insn=0x00000000004F004C string=0x00000000004F0050 "y"
 *   insn=0x00000000004F0058 string=0x00000000004F005C "h"
 *   insn=0x00000000004F0064 string=0x00000000004F0068 "u"
 *   insn=0x00000000004F0064 string=0x00000000004F0098 "u"
 *   insn=0x00000000004F0074 string=0x00000000004F0078 "A"
 *   insn=0x00000000004F007C string=0x00000000004F0080 "!"
 *   insn=0x00000000004F0090 string=0x00000000004F0094 "5B"
 *   insn=0x00000000004F009C string=0x00000000004F00A0 "uB"
 *   insn=0x00000000004F00A0 string=0x00000000004F00A4 "v"
 *   insn=0x00000000004F00B4 string=0x00000000004F00B8 "W\t"
 *   insn=0x00000000004F00BC string=0x00000000004F00C0 "!"
 *   insn=0x00000000004F00C0 string=0x00000000004F00E4 "h"
 *   insn=0x00000000004F00C8 string=0x00000000004F00CC "8"
 *   insn=0x00000000004F00E8 string=0x00000000004F00EC "`"
 *   insn=0x00000000004F0104 string=0x00000000004F0108 "`"
 *   insn=0x00000000004F010C string=0x00000000004F0110 "V"
 *   insn=0x00000000004F0110 string=0x00000000004F0114 ""
 *   insn=0x00000000004F0120 string=0x00000000004F0124 "\n"
 *   insn=0x00000000004F013C string=0x00000000004FDC94 "_"
 *   insn=0x00000000004F0144 string=0x00000000004F0148 "97"
 *   insn=0x00000000004F0148 string=0x00000000004FDE2C "0@"
 *   insn=0x00000000004F014C string=0x00000000004F0150 "IB"
 *   insn=0x00000000004F0168 string=0x00000000004F016C "A"
 *   insn=0x00000000004F016C string=0x00000000004F0174 "`"
 *   insn=0x00000000004F017C string=0x00000000004F0180 "h"
 *   insn=0x00000000004F018C string=0x00000000004F0190 "x"
 *   insn=0x00000000004F0190 string=0x00000000004F0194 "A""
 *   insn=0x00000000004F0198 string=0x00000000004F019C "dA"
 *   insn=0x00000000004F01BC string=0x00000000004F01C0 "-B"
 *   insn=0x00000000004F01C4 string=0x00000000004F01C8 "1"
 *   insn=0x00000000004F01C8 string=0x00000000004F01CC "h"
 *   insn=0x00000000004F01E0 string=0x00000000004F01E4 "o6"
 *   insn=0x00000000004F01FC string=0x00000000004F0200 "7"
 *   insn=0x00000000004F0204 string=0x00000000004F0208 "B"
 *   insn=0x00000000004F0210 string=0x00000000004F0214 "-"
 *   insn=0x00000000004F0244 string=0x00000000004F0248 "a"
 *   insn=0x00000000004F0248 string=0x00000000004F0254 "`"
 *   insn=0x00000000004F0260 string=0x00000000004F0264 ""
 *   insn=0x00000000004F028C string=0x00000000004F0290 "h"
 *   insn=0x00000000004F0298 string=0x00000000004F029C "x"
 *   insn=0x00000000004F029C string=0x00000000004F02A0 "a "
 *   insn=0x00000000004F02A4 string=0x00000000004F02A8 "!A"
 *   insn=0x00000000004F02A8 string=0x00000000004F02AC "A"
 *   insn=0x00000000004F02B0 string=0x00000000004F02B4 "!"
 *   insn=0x00000000004F02B8 string=0x00000000004F02BC "F"
 *   insn=0x00000000004F02DC string=0x00000000004F02E0 "06"
 *   insn=0x00000000004F02F0 string=0x00000000004FDD68 "0@"
 *   insn=0x00000000004F0300 string=0x00000000004F0304 "e"
 *   insn=0x00000000004F030C string=0x00000000004F0310 "h"
 *   insn=0x00000000004F0314 string=0x00000000004F0318 "("
 *   insn=0x00000000004F0318 string=0x00000000004F031C "b2@9"
 *   insn=0x00000000004F0328 string=0x00000000004F032C "\n"
 *   insn=0x00000000004F0328 string=0x00000000004F09C4 "h6@9"
 *   insn=0x00000000004F0330 string=0x00000000004F0334 "\t1@"
 *   insn=0x00000000004F0334 string=0x00000000004F0338 "l"
 *   insn=0x00000000004F0338 string=0x00000000004F033C "J"
 *   insn=0x00000000004F0340 string=0x00000000004F0344 "k"
 *   insn=0x00000000004F0348 string=0x00000000004F034C ""0"
 *   insn=0x00000000004F0354 string=0x00000000004F099C "l"
 *   insn=0x00000000004F0364 string=0x00000000004F0368 "c"
 *   insn=0x00000000004F037C string=0x00000000004F0380 "@"
 *   insn=0x00000000004F0380 string=0x00000000004F0384 ")"
 *   insn=0x00000000004F0384 string=0x00000000004F0388 "\nii"
 *   insn=0x00000000004F0388 string=0x00000000004F038C "JY\t"
 *   insn=0x00000000004F038C string=0x00000000004F0390 "J"
 *   insn=0x00000000004F0390 string=0x00000000004F0394 "\ni)"
 *   insn=0x00000000004F039C string=0x00000000004F03A0 "A"
 *   insn=0x00000000004F03A0 string=0x000000000059A1D3 "(for generator)"
 *   insn=0x00000000004F03B0 string=0x00000000004F03B4 "oA"
 *   insn=0x00000000004F03C0 string=0x00000000004F03C4 "y"
 *   insn=0x00000000004F03C4 string=0x00000000004F03C8 "A"
 *   insn=0x00000000004F03C8 string=0x00000000004F03D0 "b"
 *   insn=0x00000000004F03C8 string=0x000000000059A1E3 "(for state)"
 *   insn=0x00000000004F03D4 string=0x00000000004F03D8 "fA"
 *   insn=0x00000000004F03E8 string=0x00000000004F03EC "o"
 *   insn=0x00000000004F03EC string=0x00000000004F03F0 "A"
 *   insn=0x00000000004F03F0 string=0x000000000059A1EF "(for control)"
 *   insn=0x00000000004F03FC string=0x00000000004F0400 "\A"
 *   insn=0x00000000004F040C string=0x00000000004F0410 "f"
 *   insn=0x00000000004F041C string=0x00000000004F0420 "b"
 *   insn=0x00000000004F0420 string=0x00000000004F0424 "h"
 *   insn=0x00000000004F0428 string=0x00000000004F042C "!"
 *   insn=0x00000000004F042C string=0x00000000004F0430 "X"
 *   insn=0x00000000004F0440 string=0x00000000004F0444 "h"
 *   insn=0x00000000004F044C string=0x00000000004F0450 "z"
 *   insn=0x00000000004F044C string=0x00000000004F047C "z"
 *   insn=0x00000000004F0474 string=0x00000000004F0478 "<A"
 *   insn=0x00000000004F0480 string=0x00000000004F0484 "|A"
 *   insn=0x00000000004F0490 string=0x00000000004F0494 "<"
 *   insn=0x00000000004F0494 string=0x00000000004F0498 "D"
 *   insn=0x00000000004F0498 string=0x00000000004F049C "h"
 *   insn=0x00000000004F04B4 string=0x00000000004F04B8 "y"
 *   insn=0x00000000004F04B8 string=0x00000000004F04BC "a!"
 *   insn=0x00000000004F04C4 string=0x00000000004F04C8 "A"
 *   insn=0x00000000004F04CC string=0x00000000004F04D0 "!"
 *   insn=0x00000000004F04E0 string=0x00000000004F04E4 "!A"
 *   insn=0x00000000004F04E8 string=0x00000000004F04EC "bA"
 *   insn=0x00000000004F04EC string=0x00000000004F04F0 "y"
 *   insn=0x00000000004F0500 string=0x00000000004F0504 "h"
 *   insn=0x00000000004F0514 string=0x00000000004F0518 "WA"
 *   insn=0x00000000004F0518 string=0x00000000004F051C "`"
 *   insn=0x00000000004F0520 string=0x00000000004F0524 "'8"
 *   insn=0x00000000004F0530 string=0x00000000004F0534 ""
 *   insn=0x00000000004F0534 string=0x00000000004F0538 "h"
 *   insn=0x00000000004F0538 string=0x00000000004F053C "Z"
 *   insn=0x00000000004F057C string=0x00000000004F0BAC "@"
 *   insn=0x00000000004F059C string=0x00000000004F05A0 "v"
 *   insn=0x00000000004F059C string=0x00000000004F05F4 "v"
 *   insn=0x00000000004F05A8 string=0x00000000004F05AC "`@"
 *   insn=0x00000000004F05D0 string=0x00000000004F05D4 "(A"
 *   insn=0x00000000004F05D4 string=0x00000000004F05D8 "h"
 *   insn=0x00000000004F05DC string=0x00000000004F05E0 "9"
 *   insn=0x00000000004F060C string=0x00000000004F0610 "h"
 *   insn=0x00000000004F0638 string=0x00000000004F063C "h"
 *   insn=0x00000000004F064C string=0x00000000004F0650 "\tA"
 *   insn=0x00000000004F0650 string=0x00000000004F0654 "`"
 *   insn=0x00000000004F066C string=0x00000000004F0670 "h"
 *   insn=0x00000000004F0690 string=0x00000000004F0694 "S"
 *   insn=0x00000000004F0694 string=0x00000000004F0698 "`"
 *   insn=0x00000000004F06A4 string=0x00000000004F06A8 "`"
 *   insn=0x00000000004F06B0 string=0x00000000005001D0 ""
 *   insn=0x00000000004F06C0 string=0x00000000004F06C4 "t5"
 *   insn=0x00000000004F06D4 string=0x00000000004F06D8 "B!"
 *   insn=0x00000000004F06E0 string=0x00000000004F06E4 "m"
 *   insn=0x00000000004F06F8 string=0x00000000004F06FC "t\t"
 *   insn=0x00000000004F0708 string=0x000000000059A1FD "no loop to break"
 *   insn=0x00000000004F0720 string=0x00000000004F0724 "a"
 *   insn=0x00000000004F0734 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F074C string=0x00000000004F0750 "Q5"
 *   insn=0x00000000004F0768 string=0x00000000004F076C "("
 *   insn=0x00000000004F0778 string=0x00000000004F077C "\t,"
 *   insn=0x00000000004F077C string=0x00000000004F0780 "\n"
 *   insn=0x00000000004F0784 string=0x00000000004F0788 "\t1@"
 *   insn=0x00000000004F0788 string=0x00000000004F078C "l"
 *   insn=0x00000000004F078C string=0x00000000004F0790 "J"
 *   insn=0x00000000004F0794 string=0x00000000004F0798 "k"
 *   insn=0x00000000004F079C string=0x00000000004F07A0 "B'"
 *   insn=0x00000000004F07A4 string=0x00000000004F07A8 "K"
 *   insn=0x00000000004F07A8 string=0x00000000004F0CD4 "l"
 *   insn=0x00000000004F07B0 string=0x00000000004F07B4 "`"
 *   insn=0x00000000004F07C0 string=0x00000000004F07C4 "d"
 *   insn=0x00000000004F07C4 string=0x00000000004F07C8 "h"
 *   insn=0x00000000004F07DC string=0x00000000004F07E0 "`"
 *   insn=0x00000000004F07E4 string=0x00000000004F07E8 "v7"
 *   insn=0x00000000004F07F4 string=0x00000000004F07F8 "W"
 *   insn=0x00000000004F07F8 string=0x00000000004F07FC "h"
 *   insn=0x00000000004F0810 string=0x00000000004F0814 "5"
 *   insn=0x00000000004F0818 string=0x00000000004F081C "H2"
 *   insn=0x00000000004F0838 string=0x00000000004F083C "!"
 *   insn=0x00000000004F0848 string=0x00000000004F084C "@"
 *   insn=0x00000000004F084C string=0x00000000004F0850 ")"
 *   insn=0x00000000004F0850 string=0x00000000004F0854 "\nii"
 *   insn=0x00000000004F0854 string=0x00000000004F0858 "j"
 *   insn=0x00000000004F0858 string=0x00000000004F085C "\ni)"
 *   insn=0x00000000004F086C string=0x000000000059A19B "'=' or 'in' expected"
 *   insn=0x00000000004F0874 string=0x00000000004F0878 "<@"
 *   insn=0x00000000004F089C string=0x00000000004F08A0 "j"
 *   insn=0x00000000004F08A4 string=0x00000000004F08A8 "K)A9I"
 *   insn=0x00000000004F08A8 string=0x00000000004F08AC "I"
 *   insn=0x00000000004F08AC string=0x00000000004F08B0 "h"
 *   insn=0x00000000004F08B0 string=0x00000000004F08B4 ""
 *   insn=0x00000000004F08B4 string=0x00000000004F08B8 "H)"
 *   insn=0x00000000004F08B8 string=0x00000000004F08BC "H1@"
 *   insn=0x00000000004F08BC string=0x00000000004F08C0 ")"
 *   insn=0x00000000004F08C0 string=0x00000000004F08C4 "b"
 *   insn=0x00000000004F08C4 string=0x00000000004F08D0 "n"
 *   insn=0x00000000004F08CC string=0x00000000004F0924 "J"
 *   insn=0x00000000004F08EC string=0x00000000004F08F0 "N"
 *   insn=0x00000000004F0908 string=0x00000000004F090C "0"
 *   insn=0x00000000004F090C string=0x00000000004F0910 "1"
 *   insn=0x00000000004F0910 string=0x00000000004F0914 "\n"
 *   insn=0x00000000004F0914 string=0x00000000004F0918 "(\n"
 *   insn=0x00000000004F0918 string=0x00000000004F091C "!"
 *   insn=0x00000000004F0924 string=0x00000000004F0928 "k"
 *   insn=0x00000000004F0928 string=0x00000000004F092C "J"
 *   insn=0x00000000004F0930 string=0x00000000004F0934 "J"
 *   insn=0x00000000004F0934 string=0x00000000004F0938 "K%@x"
 *   insn=0x00000000004F093C string=0x00000000004F0940 "+"
 *   insn=0x00000000004F0940 string=0x00000000004F0944 "h\t"
 *   insn=0x00000000004F0948 string=0x00000000004F094C "9"
 *   insn=0x00000000004F0954 string=0x00000000004F0958 "m"
 *   insn=0x00000000004F0970 string=0x00000000004F0974 "0zpx/zox"
 *   insn=0x00000000004F0974 string=0x00000000004F0978 "/zox"
 *   insn=0x00000000004F0980 string=0x00000000004F0984 "P"
 *   insn=0x00000000004F0984 string=0x00000000004F0988 "O"
 *   insn=0x00000000004F098C string=0x00000000004F0990 "\t"
 *   insn=0x00000000004F0994 string=0x00000000004F0998 "L"
 *   insn=0x00000000004F099C string=0x00000000004F09A0 ""
 *   insn=0x00000000004F09AC string=0x00000000004F09B0 "k"
 *   insn=0x00000000004F09B0 string=0x00000000004F09B4 "L"
 *   insn=0x00000000004F09B8 string=0x00000000004F09BC ""
 *   insn=0x00000000004F09C8 string=0x00000000004F09CC "a"
 *   insn=0x00000000004F09D8 string=0x00000000004F09DC "j4"
 *   insn=0x00000000004F09E8 string=0x00000000004F09EC "a\n@"
 *   insn=0x00000000004F0A1C string=0x00000000004F0A20 "a"
 *   insn=0x00000000004F0A2C string=0x00000000004F0A30 "U4"
 *   insn=0x00000000004F0A38 string=0x00000000004F0A3C "Y4"
 *   insn=0x00000000004F0A4C string=0x00000000004F0A50 "`"
 *   insn=0x00000000004F0A68 string=0x00000000004F0A6C "("
 *   insn=0x00000000004F0A78 string=0x00000000004F0A7C ")"
 *   insn=0x00000000004F0A7C string=0x00000000004F0A80 "\n"
 *   insn=0x00000000004F0A84 string=0x00000000004F0A88 "\t1@"
 *   insn=0x00000000004F0A88 string=0x00000000004F0A8C "l"
 *   insn=0x00000000004F0A8C string=0x00000000004F0A90 "J"
 *   insn=0x00000000004F0A94 string=0x00000000004F0A98 "k"
 *   insn=0x00000000004F0A9C string=0x00000000004F0AA0 "b"
 *   insn=0x00000000004F0AA8 string=0x00000000004F0AF8 "l"
 *   insn=0x00000000004F0AB0 string=0x00000000004F0AB4 "m"
 *   insn=0x00000000004F0ACC string=0x00000000004F0AD0 "0zpx/zox"
 *   insn=0x00000000004F0AD0 string=0x00000000004F0AD4 "/zox"
 *   insn=0x00000000004F0ADC string=0x00000000004F0AE0 "P"
 *   insn=0x00000000004F0AE0 string=0x00000000004F0AE4 "O"
 *   insn=0x00000000004F0AE8 string=0x00000000004F0AEC "\t"
 *   insn=0x00000000004F0AF0 string=0x00000000004F0AF4 "L"
 *   insn=0x00000000004F0AF8 string=0x00000000004F0AFC ""
 *   insn=0x00000000004F0B08 string=0x00000000004F0B0C "k"
 *   insn=0x00000000004F0B0C string=0x00000000004F0B10 "L"
 *   insn=0x00000000004F0B14 string=0x00000000004F0B18 ""
 *   insn=0x00000000004F0B24 string=0x00000000004F0B28 "a"
 *   insn=0x00000000004F0B4C string=0x00000000004F0B50 "s"
 *   insn=0x00000000004F0B60 string=0x00000000004F0B64 "t"
 *   insn=0x00000000004F0B84 string=0x00000000004F0B88 "=4"
 *   insn=0x00000000004F0B88 string=0x00000000004FDC7C ""
 *   insn=0x00000000004F0B90 string=0x00000000004F0B94 "=5"
 *   insn=0x00000000004F0BBC string=0x00000000004F0BC0 "6"
 *   insn=0x00000000004F0BC8 string=0x00000000004F0BCC "h"
 *   insn=0x00000000004F0BD0 string=0x00000000004F0BD4 "("
 *   insn=0x00000000004F0BD4 string=0x00000000004F0BD8 "b2@9"
 *   insn=0x00000000004F0BE4 string=0x00000000004F0BE8 "\n"
 *   insn=0x00000000004F0BE4 string=0x00000000004F0E00 "h6@9"
 *   insn=0x00000000004F0BEC string=0x00000000004F0BF0 "\t1@"
 *   insn=0x00000000004F0BF0 string=0x00000000004F0BF4 "l"
 *   insn=0x00000000004F0BF4 string=0x00000000004F0BF8 "J"
 *   insn=0x00000000004F0BFC string=0x00000000004F0C00 "k"
 *   insn=0x00000000004F0C04 string=0x00000000004F0C08 "b"
 *   insn=0x00000000004F0C10 string=0x00000000004F0C60 "l"
 *   insn=0x00000000004F0C18 string=0x00000000004F0C1C "m"
 *   insn=0x00000000004F0C34 string=0x00000000004F0C38 "0zpx/zox"
 *   insn=0x00000000004F0C38 string=0x00000000004F0C3C "/zox"
 *   insn=0x00000000004F0C44 string=0x00000000004F0C48 "P"
 *   insn=0x00000000004F0C48 string=0x00000000004F0C4C "O"
 *   insn=0x00000000004F0C50 string=0x00000000004F0C54 "\t"
 *   insn=0x00000000004F0C60 string=0x00000000004F0C64 ""
 *   insn=0x00000000004F0C70 string=0x00000000004F0C74 "k"
 *   insn=0x00000000004F0C74 string=0x00000000004F0C78 "L"
 *   insn=0x00000000004F0C7C string=0x00000000004F0C80 ""
 *   insn=0x00000000004F0C80 string=0x00000000004F0C84 "^"
 *   insn=0x00000000004F0C8C string=0x00000000004F0C90 "m"
 *   insn=0x00000000004F0CA8 string=0x00000000004F0CAC "0zpx/zox"
 *   insn=0x00000000004F0CAC string=0x00000000004F0CB0 "/zox"
 *   insn=0x00000000004F0CB8 string=0x00000000004F0CBC "P"
 *   insn=0x00000000004F0CBC string=0x00000000004F0CC0 "O"
 *   insn=0x00000000004F0CC4 string=0x00000000004F0CC8 "\t"
 *   insn=0x00000000004F0CCC string=0x00000000004F0CD0 "L"
 *   insn=0x00000000004F0CD4 string=0x00000000004F0CD8 ""
 *   insn=0x00000000004F0CE4 string=0x00000000004F0CE8 "k"
 *   insn=0x00000000004F0CE8 string=0x00000000004F0CEC "L"
 *   insn=0x00000000004F0CF0 string=0x00000000004F0CF4 ""
 *   insn=0x00000000004F0D00 string=0x00000000004F0D04 "a"
 *   insn=0x00000000004F0D24 string=0x00000000004F0D28 "A4"
 *   insn=0x00000000004F0D28 string=0x00000000004F0D2C "`"
 *   insn=0x00000000004F0D40 string=0x00000000004F0D44 "h"
 *   insn=0x00000000004F0D48 string=0x00000000004F0D4C "("
 *   insn=0x00000000004F0D4C string=0x00000000004F0D50 "b2@9"
 *   insn=0x00000000004F0D58 string=0x00000000004F0D5C ")"
 *   insn=0x00000000004F0D5C string=0x00000000004F0D60 "\n"
 *   insn=0x00000000004F0D64 string=0x00000000004F0D68 "\t1@"
 *   insn=0x00000000004F0D68 string=0x00000000004F0D6C "l"
 *   insn=0x00000000004F0D6C string=0x00000000004F0D70 "J"
 *   insn=0x00000000004F0D74 string=0x00000000004F0D78 "k"
 *   insn=0x00000000004F0D7C string=0x00000000004F0D80 "b"
 *   insn=0x00000000004F0D88 string=0x00000000004F0DD8 "l"
 *   insn=0x00000000004F0D90 string=0x00000000004F0D94 "m"
 *   insn=0x00000000004F0DAC string=0x00000000004F0DB0 "0zpx/zox"
 *   insn=0x00000000004F0DB0 string=0x00000000004F0DB4 "/zox"
 *   insn=0x00000000004F0DBC string=0x00000000004F0DC0 "P"
 *   insn=0x00000000004F0DC0 string=0x00000000004F0DC4 "O"
 *   insn=0x00000000004F0DC8 string=0x00000000004F0DCC "\t"
 *   insn=0x00000000004F0DD0 string=0x00000000004F0DD4 "L"
 *   insn=0x00000000004F0DD8 string=0x00000000004F0DDC ""
 *   insn=0x00000000004F0DE8 string=0x00000000004F0DEC "k"
 *   insn=0x00000000004F0DEC string=0x00000000004F0DF0 "L"
 *   insn=0x00000000004F0DF4 string=0x00000000004F0DF8 ""
 *   insn=0x00000000004F0E04 string=0x00000000004F0E08 "a"
 *   insn=0x00000000004F0E14 string=0x00000000004F0E18 "[3"
 *   insn=0x00000000004F0E24 string=0x00000000004F0E28 "a\n@"
 *   insn=0x00000000004F0E3C string=0x00000000004F0E40 "A"
 *   insn=0x00000000004F0E74 string=0x00000000004F0E78 "r"
 *   insn=0x00000000004F0E80 string=0x00000000004F0E84 "o"
 *   insn=0x00000000004F0E88 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EFACC(__int64 a1)
{
  unsigned int v2; // w20
  __int64 v3; // x20
  __int64 *v4; // x21
  int v5; // w22
  int v6; // w8
  __int64 v7; // x21
  char v8; // w8
  _QWORD *v9; // x22
  const char *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x25
  int v13; // w8
  __int64 v14; // x23
  unsigned int v15; // w22
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  _QWORD *v19; // x24
  const char *v20; // x0
  __int64 v21; // x0
  _QWORD *v22; // x24
  const char *v23; // x0
  __int64 v24; // x0
  int v25; // w8
  __int64 v26; // x20
  _QWORD *v27; // x21
  const char *v28; // x0
  __int64 v29; // x0
  __int64 v30; // x21
  int v31; // w8
  __int64 *v32; // x8
  __int64 v33; // x10
  unsigned __int8 v34; // w9
  __int64 result; // x0
  __int64 v36; // x2
  unsigned int v37; // w0
  char v38; // w9
  unsigned int v39; // w22
  __int64 v40; // x10
  __int64 v41; // x8
  unsigned int v42; // w10
  unsigned int v43; // w8
  int v44; // w23
  unsigned int v45; // w20
  __int64 v46; // x23
  __int64 *v47; // x24
  int v48; // w25
  int v49; // w8
  unsigned __int8 *v50; // x20
  int v51; // w8
  __int64 v52; // x1
  unsigned int k; // w21
  _QWORD *v54; // x21
  const char *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x21
  __int64 v58; // x22
  int v59; // w8
  __int64 v60; // x2
  __int64 v61; // x21
  unsigned int v62; // w0
  unsigned int v63; // w23
  _QWORD *v64; // x24
  const char *v65; // x0
  __int64 v66; // x0
  int v67; // w8
  unsigned int v68; // w0
  __int64 v69; // x21
  unsigned int v70; // w23
  char v71; // w8
  unsigned int v72; // w22
  _QWORD *v73; // x24
  const char *v74; // x0
  __int64 v75; // x0
  unsigned int v76; // w0
  __int64 v77; // x19
  __int64 v78; // x9
  __int64 v79; // x8
  unsigned int v80; // w2
  __int64 v81; // x14
  int v82; // w9
  __int64 v83; // x10
  unsigned __int64 v84; // x11
  __int64 v85; // x11
  __int64 v86; // x20
  __int64 v87; // x23
  unsigned int v88; // w22
  __int64 v89; // x0
  __int64 v90; // x0
  unsigned int v91; // w24
  __int64 v92; // x0
  int v93; // w8
  unsigned int v94; // w25
  _QWORD *v95; // x26
  const char *v96; // x0
  __int64 v97; // x0
  __int64 v98; // x26
  unsigned int v99; // w28
  _QWORD *v100; // x25
  const char *v101; // x0
  __int64 v102; // x0
  unsigned int v103; // w25
  unsigned int i; // w26
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  __int64 v110; // x20
  __int64 v111; // x24
  int v112; // w25
  char v113; // w23
  _QWORD *v114; // x22
  const char *v115; // x0
  __int64 v116; // x0
  __int64 v117; // x22
  int v118; // w8
  unsigned int j; // w21
  unsigned int v120; // w0
  __int64 v121; // x23
  __int64 v122; // x9
  __int64 v123; // x8
  unsigned int v124; // w2
  __int64 v125; // x14
  int v126; // w9
  __int64 v127; // x10
  unsigned __int64 v128; // x11
  __int64 v129; // x11
  int v130; // w22
  __int64 *v131; // x10
  char v132; // w11
  __int64 v133; // x9
  int v134; // w8
  __int64 v135; // x9
  __int64 v136; // x12
  __int64 v137; // x15
  unsigned __int16 *v138; // x14
  __int64 v139; // x15
  __int64 v140; // x16
  unsigned int v141; // t1
  int v142; // w13
  unsigned __int16 *v143; // x10
  unsigned int v144; // t1
  _BOOL8 v145; // x12
  unsigned __int64 v146; // x13
  __int64 v147; // x14
  __int64 v148; // x16
  __int64 v149; // x15
  __int64 v150; // x13
  __int64 v151; // x0
  __int64 v152; // x1
  unsigned int v153; // w0
  __int64 v154; // x20
  __int64 v155; // x9
  __int64 v156; // x8
  unsigned int v157; // w2
  __int64 v158; // x14
  int v159; // w9
  __int64 v160; // x10
  unsigned __int64 v161; // x11
  __int64 v162; // x11
  _BOOL8 v163; // x12
  unsigned __int64 v164; // x13
  __int64 v165; // x14
  __int64 v166; // x16
  __int64 v167; // x15
  __int64 v168; // x13
  __int64 v169; // x19
  __int64 v170; // x1
  __int64 v171; // x0
  unsigned int v172; // w24
  unsigned int v173; // w0
  __int64 v174; // x19
  __int64 v175; // x9
  __int64 v176; // x8
  unsigned int v177; // w2
  __int64 v178; // x14
  int v179; // w9
  __int64 v180; // x10
  unsigned __int64 v181; // x11
  __int64 v182; // x11
  _BOOL8 v183; // x12
  unsigned __int64 v184; // x13
  __int64 v185; // x14
  __int64 v186; // x16
  __int64 v187; // x15
  __int64 v188; // x13
  _BOOL8 v189; // x12
  unsigned __int64 v190; // x13
  __int64 v191; // x14
  __int64 v192; // x16
  __int64 v193; // x15
  __int64 v194; // x13
  __int64 v195; // x9
  __int64 v196; // x14
  int v197; // w9
  __int64 v198; // x10
  unsigned __int64 v199; // x11
  __int64 v200; // x11
  _BOOL8 v201; // x12
  unsigned __int64 v202; // x13
  __int64 v203; // x14
  __int64 v204; // x16
  __int64 v205; // x15
  __int64 v206; // x13
  __int64 *v207; // [xsp+0h] [xbp-A0h] BYREF
  int v208; // [xsp+8h] [xbp-98h]
  char v209; // [xsp+Ch] [xbp-94h]
  __int16 v210; // [xsp+Dh] [xbp-93h]
  __int64 v211; // [xsp+10h] [xbp-90h] BYREF
  int v212; // [xsp+18h] [xbp-88h]
  char v213; // [xsp+1Ch] [xbp-84h]
  char v214; // [xsp+1Dh] [xbp-83h]
  char v215; // [xsp+1Eh] [xbp-82h]
  __int64 v216; // [xsp+28h] [xbp-78h] BYREF
  int v217; // [xsp+30h] [xbp-70h] BYREF
  char v218; // [xsp+34h] [xbp-6Ch]
  char v219; // [xsp+35h] [xbp-6Bh]
  char v220; // [xsp+36h] [xbp-6Ah]
  __int64 v221; // [xsp+38h] [xbp-68h]
  __int64 v222; // [xsp+48h] [xbp-58h]

  v222 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_DWORD *)(a1 + 4);
  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 0x102:
      sub_500A74(a1);
      v3 = *(_QWORD *)(a1 + 48);
      v4 = *(__int64 **)(v3 + 40);
      if ( !v4 )
        goto LABEL_93;
      v5 = 0;
      while ( !*((_BYTE *)v4 + 14) )
      {
        v6 = *((unsigned __int8 *)v4 + 13);
        v4 = (__int64 *)*v4;
        v5 |= v6;
        if ( !v4 )
LABEL_93:
          sub_500968(a1, "no loop to break");
      }
      if ( v5 )
        sub_4FDB84(*(_QWORD *)(a1 + 48), 35);
      v120 = sub_4FDBA0(v3);
      sub_4FDC94(v3, v4 + 1, v120);
      return 1;
    case 0x103:
      sub_500A74(a1);
      sub_4F0E8C(a1);
      v36 = 259;
      goto LABEL_91;
    case 0x108:
      v7 = *(_QWORD *)(a1 + 48);
      v212 = -1;
      v215 = 1;
      v8 = *(_BYTE *)(v7 + 74);
      v214 = 0;
      v213 = v8;
      v211 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v7 + 40) = &v211;
      sub_500A74(a1);
      if ( *(_DWORD *)(a1 + 16) != 285 )
      {
        v9 = *(_QWORD **)(a1 + 56);
        v10 = (const char *)sub_50072C(a1, 285);
        v11 = sub_4EF3D4(v9, "'%s' expected", v10);
        sub_500968(a1, v11);
      }
      v12 = *(_QWORD *)(a1 + 24);
      sub_500A74(a1);
      v13 = *(_DWORD *)(a1 + 16);
      if ( v13 == 44 || v13 == 267 )
      {
        v87 = *(_QWORD *)(a1 + 48);
        v88 = *(_DWORD *)(v87 + 60);
        v89 = sub_500970(a1, "(for generator)", 15);
        sub_4F21A8(a1, v89, 0);
        v90 = sub_500970(a1, "(for state)", 11);
        v91 = 1;
        sub_4F21A8(a1, v90, 1);
        v92 = sub_500970(a1, "(for control)", 13);
        sub_4F21A8(a1, v92, 2);
        sub_4F21A8(a1, v12, 3);
        v93 = *(_DWORD *)(a1 + 16);
        if ( v93 == 44 )
        {
          v94 = 4;
          do
          {
            sub_500A74(a1);
            if ( *(_DWORD *)(a1 + 16) != 285 )
            {
              v95 = *(_QWORD **)(a1 + 56);
              v96 = (const char *)sub_50072C(a1, 285);
              v97 = sub_4EF3D4(v95, "'%s' expected", v96);
              sub_500968(a1, v97);
            }
            v98 = *(_QWORD *)(a1 + 24);
            sub_500A74(a1);
            v99 = v94 + 1;
            sub_4F21A8(a1, v98, v94);
            v93 = *(_DWORD *)(a1 + 16);
            ++v94;
          }
          while ( v93 == 44 );
          v91 = v99 - 3;
        }
        if ( v93 != 267 )
        {
          v100 = *(_QWORD **)(a1 + 56);
          v101 = (const char *)sub_50072C(a1, 267);
          v102 = sub_4EF3D4(v100, "'%s' expected", v101);
          sub_500968(a1, v102);
        }
        sub_500A74(a1);
        v103 = *(_DWORD *)(a1 + 4);
        sub_4F1154(a1, &v216, 0);
        for ( i = 1; *(_DWORD *)(a1 + 16) == 44; ++i )
        {
          sub_500A74(a1);
          sub_4FE5C0(*(_QWORD *)(a1 + 48), &v216);
          sub_4F1154(a1, &v216, 0);
        }
        sub_4F2C18(a1, 3, i, &v216);
        sub_4FE030(v87, 3);
        v105 = a1;
        v106 = v88;
        v107 = v103;
        v108 = v91;
        v109 = 0;
      }
      else
      {
        if ( v13 != 61 )
          sub_500968(a1, "'=' or 'in' expected");
        v14 = *(_QWORD *)(a1 + 48);
        v15 = *(_DWORD *)(v14 + 60);
        v16 = sub_500970(a1, "(for index)", 11);
        sub_4F21A8(a1, v16, 0);
        v17 = sub_500970(a1, "(for limit)", 11);
        sub_4F21A8(a1, v17, 1);
        v18 = sub_500970(a1, "(for step)", 10);
        sub_4F21A8(a1, v18, 2);
        sub_4F21A8(a1, v12, 3);
        if ( *(_DWORD *)(a1 + 16) != 61 )
        {
          v19 = *(_QWORD **)(a1 + 56);
          v20 = (const char *)sub_50072C(a1, 61);
          v21 = sub_4EF3D4(v19, "'%s' expected", v20);
          sub_500968(a1, v21);
        }
        sub_500A74(a1);
        sub_4F1154(a1, &v216, 0);
        sub_4FE5C0(*(_QWORD *)(a1 + 48), &v216);
        if ( *(_DWORD *)(a1 + 16) != 44 )
        {
          v22 = *(_QWORD **)(a1 + 56);
          v23 = (const char *)sub_50072C(a1, 44);
          v24 = sub_4EF3D4(v22, "'%s' expected", v23);
          sub_500968(a1, v24);
        }
        sub_500A74(a1);
        sub_4F1154(a1, &v216, 0);
        sub_4FE5C0(*(_QWORD *)(a1 + 48), &v216);
        if ( *(_DWORD *)(a1 + 16) == 44 )
        {
          sub_500A74(a1);
          sub_4F1154(a1, &v216, 0);
          sub_4FE5C0(*(_QWORD *)(a1 + 48), &v216);
        }
        else
        {
          v172 = *(_DWORD *)(v14 + 60);
          v173 = sub_4FE2E8(v14, 1.0);
          sub_4FDC7C(v14, 1, v172, v173);
          sub_4FE088(v14, 1);
        }
        v108 = 1;
        v109 = 1;
        v105 = a1;
        v106 = v15;
        v107 = v2;
      }
      sub_4F28AC(v105, v106, v107, v108, v109);
      sub_4F1098(a1, 262, 264, v2);
      v174 = *(_QWORD *)(v7 + 40);
      v175 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)v174;
      v176 = *(_QWORD *)(v175 + 48);
      v177 = *(unsigned __int8 *)(v174 + 12);
      v178 = *(unsigned __int8 *)(v176 + 74);
      if ( (unsigned int)v178 <= v177 )
        goto LABEL_166;
      v179 = *(_DWORD *)(v176 + 48);
      v180 = *(_QWORD *)(*(_QWORD *)v176 + 48LL);
      v181 = (unsigned __int8)(v178 - 1 - v177) + 1LL;
      if ( v181 < 2 )
      {
        v182 = *(unsigned __int8 *)(v176 + 74);
        do
        {
LABEL_148:
          v188 = *(unsigned __int16 *)(v176 + 2LL * (unsigned __int8)--v182 + 196);
          *(_DWORD *)(v180 + 16 * v188 + 12) = v179;
        }
        while ( (unsigned __int8)v182 > v177 );
        goto LABEL_165;
      }
      v183 = (((_BYTE)v178 - 1 - (_BYTE)v177) & 1) == 0;
      v184 = v181 - v183;
      v182 = v178 - (v181 - v183);
      v185 = v178 + 254;
      do
      {
        v186 = *(unsigned __int16 *)(v176 + 196 + 2LL * (unsigned __int8)v185);
        v187 = *(unsigned __int16 *)(v176 + 196 + 2LL * (unsigned __int8)(v185 + 1));
        v184 -= 2LL;
        v185 -= 2;
        *(_DWORD *)(v180 + 16 * v187 + 12) = v179;
        *(_DWORD *)(v180 + 16 * v186 + 12) = v179;
      }
      while ( v184 );
      if ( v183 )
        goto LABEL_148;
      goto LABEL_165;
    case 0x109:
      sub_500A74(a1);
      if ( *(_DWORD *)(a1 + 16) != 285 )
      {
        v54 = *(_QWORD **)(a1 + 56);
        v55 = (const char *)sub_50072C(a1, 285);
        v56 = sub_4EF3D4(v54, "'%s' expected", v55);
        sub_500968(a1, v56);
      }
      v57 = *(_QWORD *)(a1 + 24);
      sub_500A74(a1);
      v58 = *(_QWORD *)(a1 + 48);
      if ( (unsigned int)sub_4F2614(v58, v57, &v216, 1) == 8 )
        v217 = sub_4FE100(v58, v57);
      while ( 1 )
      {
        v59 = *(_DWORD *)(a1 + 16);
        if ( v59 != 46 )
          break;
        sub_4F2368(a1, &v216);
      }
      if ( v59 == 58 )
      {
        sub_4F2368(a1, &v216);
        v60 = 1;
      }
      else
      {
        v60 = 0;
      }
      sub_4F17E0(a1, &v211, v60, v2);
      sub_4FED28(*(_QWORD *)(a1 + 48), &v216, &v211);
      sub_5001D0(*(_QWORD *)(a1 + 48), v2);
      return 0;
    case 0x10A:
      v61 = *(_QWORD *)(a1 + 48);
      LODWORD(v211) = -1;
      while ( 1 )
      {
        sub_500A74(a1);
        sub_4F1154(a1, &v216, 0);
        if ( (_DWORD)v216 == 1 )
          LODWORD(v216) = 3;
        sub_4FF07C(*(_QWORD *)(a1 + 48), &v216);
        v63 = HIDWORD(v221);
        if ( *(_DWORD *)(a1 + 16) != 274 )
        {
          v64 = *(_QWORD **)(a1 + 56);
          v65 = (const char *)sub_50072C(a1, 274);
          v66 = sub_4EF3D4(v64, "'%s' expected", v65);
          sub_500968(a1, v66);
        }
        sub_500A74(a1);
        sub_4F0E8C(a1);
        v67 = *(_DWORD *)(a1 + 16);
        if ( v67 != 261 )
          break;
        v62 = sub_4FDBA0(v61);
        sub_4FDC94(v61, &v211, v62);
        sub_4FDE2C(v61, v63);
      }
      if ( v67 == 260 )
      {
        v68 = sub_4FDBA0(v61);
        sub_4FDC94(v61, &v211, v68);
        sub_4FDE2C(v61, v63);
        sub_500A74(a1);
        sub_4F0E8C(a1);
      }
      else
      {
        sub_4FDC94(v61, &v211, v63);
      }
      sub_4FDE2C(v61, (unsigned int)v211);
      v36 = 266;
LABEL_91:
      sub_4F1098(a1, 262, v36, v2);
      return 0;
    case 0x10C:
      sub_500A74(a1);
      v25 = *(_DWORD *)(a1 + 16);
      if ( v25 != 265 )
      {
        v110 = 0;
        v111 = 1;
        v112 = 1;
        v113 = 1;
        if ( v25 != 285 )
        {
LABEL_80:
          v114 = *(_QWORD **)(a1 + 56);
          v115 = (const char *)sub_50072C(a1, 285);
          v116 = sub_4EF3D4(v114, "'%s' expected", v115);
          sub_500968(a1, v116);
        }
        while ( 1 )
        {
          v117 = *(_QWORD *)(a1 + 24);
          sub_500A74(a1);
          sub_4F21A8(a1, v117, (unsigned int)v110);
          v118 = *(_DWORD *)(a1 + 16);
          if ( v118 != 44 )
            break;
          sub_500A74(a1);
          ++v113;
          ++v112;
          ++v111;
          ++v110;
          if ( *(_DWORD *)(a1 + 16) != 285 )
            goto LABEL_80;
        }
        if ( v118 == 61 )
        {
          sub_500A74(a1);
          sub_4F1154(a1, &v216, 0);
          for ( j = 1; *(_DWORD *)(a1 + 16) == 44; ++j )
          {
            sub_500A74(a1);
            sub_4FE5C0(*(_QWORD *)(a1 + 48), &v216);
            sub_4F1154(a1, &v216, 0);
          }
        }
        else
        {
          j = 0;
          LODWORD(v216) = 0;
        }
        v130 = v110 + 1;
        sub_4F2C18(a1, (unsigned int)(v110 + 1), j, &v216);
        v131 = *(__int64 **)(a1 + 48);
        v132 = *((_BYTE *)v131 + 74);
        v133 = *v131;
        *((_BYTE *)v131 + 74) = v132 + v110 + 1;
        v134 = *((_DWORD *)v131 + 12);
        v135 = *(_QWORD *)(v133 + 48);
        if ( (unsigned __int64)(v110 + 1) < 2 )
        {
          v136 = v130;
LABEL_115:
          v142 = -(int)v136;
          v143 = (unsigned __int16 *)v131 + (unsigned __int8)(v132 + v113) - v136 + 98;
          do
          {
            v144 = *v143++;
            ++v142;
            *(_DWORD *)(v135 + 16LL * v144 + 8) = v134;
          }
          while ( v142 );
          return 0;
        }
        v137 = v113 & 1;
        v136 = v137 + v112 - 1 - v110;
        v138 = (unsigned __int16 *)v131 + (unsigned __int8)(v132 + v113) - (__int64)v130 + 99;
        v139 = v111 - v137;
        do
        {
          v140 = *(v138 - 1);
          v141 = *v138;
          v138 += 2;
          v139 -= 2;
          *(_DWORD *)(v135 + 16 * v140 + 8) = v134;
          *(_DWORD *)(v135 + 16LL * v141 + 8) = v134;
        }
        while ( v139 );
        if ( (v110 & 1) == 0 )
          goto LABEL_115;
        return 0;
      }
      sub_500A74(a1);
      v26 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 16) != 285 )
      {
        v27 = *(_QWORD **)(a1 + 56);
        v28 = (const char *)sub_50072C(a1, 285);
        v29 = sub_4EF3D4(v27, "'%s' expected", v28);
        sub_500968(a1, v29);
      }
      v30 = *(_QWORD *)(a1 + 24);
      sub_500A74(a1);
      sub_4F21A8(a1, v30, 0);
      v31 = *(_DWORD *)(v26 + 60);
      v221 = -1;
      LODWORD(v216) = 6;
      v217 = v31;
      sub_4FE088(v26, 1);
      v32 = *(__int64 **)(a1 + 48);
      v33 = *v32;
      v34 = *((_BYTE *)v32 + 74) + 1;
      *((_BYTE *)v32 + 74) = v34;
      *(_DWORD *)(*(_QWORD *)(v33 + 48) + 16LL * *((unsigned __int16 *)v32 + v34 + 97) + 8) = *((_DWORD *)v32 + 12);
      sub_4F17E0(a1, &v211, 0, *(unsigned int *)(a1 + 4));
      sub_4FED28(v26, &v216, &v211);
      result = 0;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 48LL)
                + 16LL * *(unsigned __int16 *)(v26 + 2LL * *(unsigned __int8 *)(v26 + 74) + 194)
                + 8) = *(_DWORD *)(v26 + 48);
      return result;
    case 0x110:
      v7 = *(_QWORD *)(a1 + 48);
      v37 = sub_4FDD58(v7);
      v212 = -1;
      v215 = 1;
      v38 = *(_BYTE *)(v7 + 74);
      v214 = 0;
      v39 = v37;
      v213 = v38;
      v40 = *(_QWORD *)(v7 + 40);
      v208 = -1;
      v209 = v38;
      v210 = 0;
      v207 = &v211;
      v211 = v40;
      *(_QWORD *)(v7 + 40) = &v207;
      sub_500A74(a1);
      v41 = *(_QWORD *)(a1 + 56);
      v42 = (unsigned __int16)++*(_WORD *)(v41 + 96);
      if ( v42 >= 0xC9 )
        sub_5007A0(a1, "chunk has too many syntax levels", 0);
      do
      {
        v43 = *(_DWORD *)(a1 + 16) - 260;
        if ( v43 <= 0x1B && ((1 << v43) & 0x8010007) != 0 )
          break;
        v44 = sub_4EFACC(a1);
        if ( *(_DWORD *)(a1 + 16) == 59 )
          sub_500A74(a1);
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 60LL) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 74LL);
      }
      while ( !v44 );
      --*(_WORD *)(*(_QWORD *)(a1 + 56) + 96LL);
      sub_4F1098(a1, 276, 272, v2);
      sub_4F1154(a1, &v216, 0);
      if ( (_DWORD)v216 == 1 )
        LODWORD(v216) = 3;
      sub_4FF07C(*(_QWORD *)(a1 + 48), &v216);
      v45 = HIDWORD(v221);
      if ( (_BYTE)v210 )
      {
        v46 = *(_QWORD *)(a1 + 48);
        v47 = *(__int64 **)(v46 + 40);
        if ( !v47 )
LABEL_126:
          sub_500968(a1, "no loop to break");
        v48 = 0;
        while ( !*((_BYTE *)v47 + 14) )
        {
          v49 = *((unsigned __int8 *)v47 + 13);
          v47 = (__int64 *)*v47;
          v48 |= v49;
          if ( !v47 )
            goto LABEL_126;
        }
        if ( v48 )
          sub_4FDB84(*(_QWORD *)(a1 + 48), 35);
        v153 = sub_4FDBA0(v46);
        sub_4FDC94(v46, v47 + 1, v153);
        sub_4FDE2C(*(_QWORD *)(a1 + 48), v45);
        v154 = *(_QWORD *)(v7 + 40);
        v155 = *(_QWORD *)(v7 + 24);
        *(_QWORD *)(v7 + 40) = *(_QWORD *)v154;
        v156 = *(_QWORD *)(v155 + 48);
        v157 = *(unsigned __int8 *)(v154 + 12);
        v158 = *(unsigned __int8 *)(v156 + 74);
        if ( (unsigned int)v158 <= v157 )
          goto LABEL_137;
        v159 = *(_DWORD *)(v156 + 48);
        v160 = *(_QWORD *)(*(_QWORD *)v156 + 48LL);
        v161 = (unsigned __int8)(v158 - 1 - v157) + 1LL;
        if ( v161 >= 2 )
        {
          v163 = (((_BYTE)v158 - 1 - (_BYTE)v157) & 1) == 0;
          v164 = v161 - v163;
          v162 = v158 - (v161 - v163);
          v165 = v158 + 254;
          do
          {
            v166 = *(unsigned __int16 *)(v156 + 196 + 2LL * (unsigned __int8)v165);
            v167 = *(unsigned __int16 *)(v156 + 196 + 2LL * (unsigned __int8)(v165 + 1));
            v164 -= 2LL;
            v165 -= 2;
            *(_DWORD *)(v160 + 16 * v167 + 12) = v159;
            *(_DWORD *)(v160 + 16 * v166 + 12) = v159;
          }
          while ( v164 );
          if ( !v163 )
            goto LABEL_136;
        }
        else
        {
          v162 = *(unsigned __int8 *)(v156 + 74);
        }
        do
        {
          v168 = *(unsigned __int16 *)(v156 + 2LL * (unsigned __int8)--v162 + 196);
          *(_DWORD *)(v160 + 16 * v168 + 12) = v159;
        }
        while ( (unsigned __int8)v162 > v157 );
LABEL_136:
        *(_BYTE *)(v156 + 74) = v157;
LABEL_137:
        if ( *(_BYTE *)(v154 + 13) )
          sub_4FDB84(v7, 35);
        *(_DWORD *)(v7 + 60) = *(unsigned __int8 *)(v7 + 74);
        sub_4FDE2C(v7, *(unsigned int *)(v154 + 8));
        v169 = *(_QWORD *)(a1 + 48);
        v170 = (unsigned int)sub_4FDBA0(v7);
        v171 = v169;
        goto LABEL_158;
      }
      v121 = *(_QWORD *)(v7 + 40);
      v122 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)v121;
      v123 = *(_QWORD *)(v122 + 48);
      v124 = *(unsigned __int8 *)(v121 + 12);
      v125 = *(unsigned __int8 *)(v123 + 74);
      if ( (unsigned int)v125 <= v124 )
        goto LABEL_155;
      v126 = *(_DWORD *)(v123 + 48);
      v127 = *(_QWORD *)(*(_QWORD *)v123 + 48LL);
      v128 = (unsigned __int8)(v125 - 1 - v124) + 1LL;
      if ( v128 >= 2 )
      {
        v189 = (((_BYTE)v125 - 1 - (_BYTE)v124) & 1) == 0;
        v190 = v128 - v189;
        v129 = v125 - (v128 - v189);
        v191 = v125 + 254;
        do
        {
          v192 = *(unsigned __int16 *)(v123 + 196 + 2LL * (unsigned __int8)v191);
          v193 = *(unsigned __int16 *)(v123 + 196 + 2LL * (unsigned __int8)(v191 + 1));
          v190 -= 2LL;
          v191 -= 2;
          *(_DWORD *)(v127 + 16 * v193 + 12) = v126;
          *(_DWORD *)(v127 + 16 * v192 + 12) = v126;
        }
        while ( v190 );
        if ( !v189 )
          goto LABEL_154;
      }
      else
      {
        v129 = *(unsigned __int8 *)(v123 + 74);
      }
      do
      {
        v194 = *(unsigned __int16 *)(v123 + 2LL * (unsigned __int8)--v129 + 196);
        *(_DWORD *)(v127 + 16 * v194 + 12) = v126;
      }
      while ( (unsigned __int8)v129 > v124 );
LABEL_154:
      *(_BYTE *)(v123 + 74) = v124;
LABEL_155:
      if ( *(_BYTE *)(v121 + 13) )
        sub_4FDB84(v7, 35);
      *(_DWORD *)(v7 + 60) = *(unsigned __int8 *)(v7 + 74);
      sub_4FDE2C(v7, *(unsigned int *)(v121 + 8));
      v171 = *(_QWORD *)(a1 + 48);
      v170 = v45;
LABEL_158:
      sub_4FDD68(v171, v170, v39);
      v174 = *(_QWORD *)(v7 + 40);
      v195 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)v174;
      v176 = *(_QWORD *)(v195 + 48);
      v177 = *(unsigned __int8 *)(v174 + 12);
      v196 = *(unsigned __int8 *)(v176 + 74);
      if ( (unsigned int)v196 <= v177 )
        goto LABEL_166;
      v197 = *(_DWORD *)(v176 + 48);
      v198 = *(_QWORD *)(*(_QWORD *)v176 + 48LL);
      v199 = (unsigned __int8)(v196 - 1 - v177) + 1LL;
      if ( v199 >= 2 )
      {
        v201 = (((_BYTE)v196 - 1 - (_BYTE)v177) & 1) == 0;
        v202 = v199 - v201;
        v200 = v196 - (v199 - v201);
        v203 = v196 + 254;
        do
        {
          v204 = *(unsigned __int16 *)(v176 + 196 + 2LL * (unsigned __int8)v203);
          v205 = *(unsigned __int16 *)(v176 + 196 + 2LL * (unsigned __int8)(v203 + 1));
          v202 -= 2LL;
          v203 -= 2;
          *(_DWORD *)(v198 + 16 * v205 + 12) = v197;
          *(_DWORD *)(v198 + 16 * v204 + 12) = v197;
        }
        while ( v202 );
        if ( !v201 )
          goto LABEL_165;
      }
      else
      {
        v200 = *(unsigned __int8 *)(v176 + 74);
      }
      do
      {
        v206 = *(unsigned __int16 *)(v176 + 2LL * (unsigned __int8)--v200 + 196);
        *(_DWORD *)(v198 + 16 * v206 + 12) = v197;
      }
      while ( (unsigned __int8)v200 > v177 );
LABEL_165:
      *(_BYTE *)(v176 + 74) = v177;
LABEL_166:
      if ( *(_BYTE *)(v174 + 13) )
        sub_4FDB84(v7, 35);
      v151 = v7;
      *(_DWORD *)(v7 + 60) = *(unsigned __int8 *)(v7 + 74);
      v152 = *(unsigned int *)(v174 + 8);
LABEL_169:
      sub_4FDE2C(v151, v152);
      return 0;
    case 0x111:
      v50 = *(unsigned __int8 **)(a1 + 48);
      sub_500A74(a1);
      v51 = *(_DWORD *)(a1 + 16);
      v52 = 0;
      if ( (unsigned int)(v51 - 260) <= 0x1B && ((1 << (v51 - 4)) & 0x8010007) != 0 )
      {
        k = 0;
      }
      else
      {
        k = 0;
        if ( v51 != 59 )
        {
          sub_4F1154(a1, &v216, 0);
          for ( k = 1; *(_DWORD *)(a1 + 16) == 44; ++k )
          {
            sub_500A74(a1);
            sub_4FE5C0(*(_QWORD *)(a1 + 48), &v216);
            sub_4F1154(a1, &v216, 0);
          }
          if ( (unsigned int)(v216 - 13) > 1 )
          {
            if ( k == 1 )
            {
              v52 = (unsigned int)sub_4FEA48(v50, &v216);
            }
            else
            {
              sub_4FE5C0(v50, &v216);
              v52 = v50[74];
            }
          }
          else
          {
            sub_4FE340(v50, &v216, 0xFFFFFFFFLL);
            if ( k == 1 && (_DWORD)v216 == 13 )
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50 + 24LL) + 4LL * v217) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50 + 24LL)
                                                                                       + 4LL * v217)
                                                                           & 0xFFFFFFC0
                                                                           | 0x1D;
            v52 = v50[74];
            k = -1;
          }
        }
      }
      sub_4FDD3C(v50, v52, k);
      return 1;
    case 0x115:
      v69 = *(_QWORD *)(a1 + 48);
      sub_500A74(a1);
      v70 = sub_4FDD58(v69);
      sub_4F1154(a1, &v216, 0);
      if ( (_DWORD)v216 == 1 )
        LODWORD(v216) = 3;
      sub_4FF07C(*(_QWORD *)(a1 + 48), &v216);
      v217 = -1;
      v220 = 1;
      v71 = *(_BYTE *)(v69 + 74);
      v219 = 0;
      v72 = HIDWORD(v221);
      v218 = v71;
      v216 = *(_QWORD *)(v69 + 40);
      *(_QWORD *)(v69 + 40) = &v216;
      if ( *(_DWORD *)(a1 + 16) != 259 )
      {
        v73 = *(_QWORD **)(a1 + 56);
        v74 = (const char *)sub_50072C(a1, 259);
        v75 = sub_4EF3D4(v73, "'%s' expected", v74);
        sub_500968(a1, v75);
      }
      sub_500A74(a1);
      sub_4F0E8C(a1);
      v76 = sub_4FDBA0(v69);
      sub_4FDD68(v69, v76, v70);
      sub_4F1098(a1, 262, 277, v2);
      v77 = *(_QWORD *)(v69 + 40);
      v78 = *(_QWORD *)(v69 + 24);
      *(_QWORD *)(v69 + 40) = *(_QWORD *)v77;
      v79 = *(_QWORD *)(v78 + 48);
      v80 = *(unsigned __int8 *)(v77 + 12);
      v81 = *(unsigned __int8 *)(v79 + 74);
      if ( (unsigned int)v81 <= v80 )
        goto LABEL_123;
      v82 = *(_DWORD *)(v79 + 48);
      v83 = *(_QWORD *)(*(_QWORD *)v79 + 48LL);
      v84 = (unsigned __int8)(v81 - 1 - v80) + 1LL;
      if ( v84 >= 2 )
      {
        v145 = (((_BYTE)v81 - 1 - (_BYTE)v80) & 1) == 0;
        v146 = v84 - v145;
        v85 = v81 - (v84 - v145);
        v147 = v81 + 254;
        do
        {
          v148 = *(unsigned __int16 *)(v79 + 196 + 2LL * (unsigned __int8)v147);
          v149 = *(unsigned __int16 *)(v79 + 196 + 2LL * (unsigned __int8)(v147 + 1));
          v146 -= 2LL;
          v147 -= 2;
          *(_DWORD *)(v83 + 16 * v149 + 12) = v82;
          *(_DWORD *)(v83 + 16 * v148 + 12) = v82;
        }
        while ( v146 );
        if ( !v145 )
        {
LABEL_122:
          *(_BYTE *)(v79 + 74) = v80;
LABEL_123:
          if ( *(_BYTE *)(v77 + 13) )
            sub_4FDB84(v69, 35);
          *(_DWORD *)(v69 + 60) = *(unsigned __int8 *)(v69 + 74);
          sub_4FDE2C(v69, *(unsigned int *)(v77 + 8));
          v151 = v69;
          v152 = v72;
          goto LABEL_169;
        }
      }
      else
      {
        v85 = *(unsigned __int8 *)(v79 + 74);
      }
      do
      {
        v150 = *(unsigned __int16 *)(v79 + 2LL * (unsigned __int8)--v85 + 196);
        *(_DWORD *)(v83 + 16 * v150 + 12) = v82;
      }
      while ( (unsigned __int8)v85 > v80 );
      goto LABEL_122;
    default:
      v86 = *(_QWORD *)(a1 + 48);
      sub_4F1CF4(a1, &v217);
      if ( v217 == 13 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v86 + 24LL) + 4LL * (int)v221) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v86 + 24LL)
                                                                                      + 4LL * (int)v221)
                                                                          & 0xFF803FFF
                                                                          | 0x4000;
      }
      else
      {
        v216 = 0;
        sub_4F2CCC(a1, &v216, 1);
      }
      return 0;
  }
}

