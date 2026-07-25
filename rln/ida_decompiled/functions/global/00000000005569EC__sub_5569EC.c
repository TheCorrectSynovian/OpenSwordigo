/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005569EC
 * Mangled: sub_5569EC
 * Demangled: sub_5569EC
 *
 * Callers: 2
 *   0x000000000055857C  sub_55857C
 *   0x00000000005586A4  sub_5586A4
 *
 * Callees: 15
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x000000000054F6AC  sub_54F6AC
 *   0x0000000000554914  sub_554914
 *   0x0000000000554B08  sub_554B08
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x0000000000567BD4  sub_567BD4
 *   0x000000000056857C  sub_56857C
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000568F74  sub_568F74
 *   0x0000000000569074  sub_569074
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 272
 *   insn=0x0000000000556A24 string=0x0000000000556A28 "!"
 *   insn=0x0000000000556A44 string=0x0000000000556A48 " '@"
 *   insn=0x0000000000556A4C string=0x0000000000556A50 " /@"
 *   insn=0x0000000000556A4C string=0x0000000000556A60 "|"
 *   insn=0x0000000000556A68 string=0x0000000000556A6C "!"
 *   insn=0x0000000000556A98 string=0x0000000000556A9C "B`"
 *   insn=0x0000000000556AA0 string=0x0000000000556AA4 "yA"
 *   insn=0x0000000000556AB0 string=0x0000000000556AB4 " k@"
 *   insn=0x0000000000556AB8 string=0x0000000000556ABC ";"
 *   insn=0x0000000000556AC4 string=0x0000000000556AC8 " "
 *   insn=0x0000000000556AC8 string=0x0000000000556ACC "@"
 *   insn=0x0000000000556B10 string=0x0000000000556C2C "7"
 *   insn=0x0000000000556B14 string=0x0000000000556B18 " X`xa"
 *   insn=0x0000000000556B18 string=0x0000000000556B1C "a"
 *   insn=0x0000000000556B1C string=0x0000000000556B20 " "
 *   insn=0x0000000000556B1C string=0x0000000000556B28 "7"
 *   insn=0x0000000000556B24 string=0x0000000000556C34 " '@"
 *   insn=0x0000000000556B30 string=0x0000000000556B34 "@#"
 *   insn=0x0000000000556B44 string=0x0000000000556B48 "_"
 *   insn=0x0000000000556B60 string=0x0000000000556B64 "_"
 *   insn=0x0000000000556B64 string=0x0000000000556B68 " "
 *   insn=0x0000000000556B68 string=0x0000000000556B6C "?"
 *   insn=0x0000000000556B6C string=0x0000000000556B70 "@"
 *   insn=0x0000000000556B70 string=0x0000000000556BF8 "7"
 *   insn=0x0000000000556B80 string=0x0000000000556B84 "_"
 *   insn=0x0000000000556B94 string=0x0000000000556B98 "c@"
 *   insn=0x0000000000556B98 string=0x0000000000556B9C "`"
 *   insn=0x0000000000556BB0 string=0x0000000000556BB4 " "
 *   insn=0x0000000000556BB8 string=0x0000000000556BBC "3"
 *   insn=0x0000000000556BC0 string=0x0000000000556BC4 "_"
 *   insn=0x0000000000556BC4 string=0x0000000000556BC8 "!"
 *   insn=0x0000000000556BD0 string=0x0000000000556BD4 "?"
 *   insn=0x0000000000556BD4 string=0x0000000000556BD8 ""@"
 *   insn=0x0000000000556BD8 string=0x0000000000556BDC " "
 *   insn=0x0000000000556BEC string=0x0000000000556BF0 "?"
 *   insn=0x0000000000556C24 string=0x0000000000556C28 "i"
 *   insn=0x0000000000556C38 string=0x0000000000556C3C " /@"
 *   insn=0x0000000000556C50 string=0x0000000000556C54 "@"
 *   insn=0x0000000000556C54 string=0x0000000000556C9C ":"
 *   insn=0x0000000000556C68 string=0x0000000000556C6C "?"
 *   insn=0x0000000000556C6C string=0x0000000000556C70 "`L"
 *   insn=0x0000000000556C70 string=0x0000000000556C74 "?"
 *   insn=0x0000000000556C74 string=0x0000000000556C78 "7"
 *   insn=0x0000000000556CB4 string=0x0000000000556CB8 "@,"
 *   insn=0x0000000000556CB8 string=0x0000000000557240 " @"
 *   insn=0x0000000000556CCC string=0x0000000000556CD0 "_"
 *   insn=0x0000000000556CE0 string=0x0000000000556CE4 "@"
 *   insn=0x0000000000556CE8 string=0x0000000000556CEC "`5"
 *   insn=0x0000000000556CEC string=0x0000000000557398 " @"
 *   insn=0x0000000000556CF0 string=0x0000000000556CF4 "?"
 *   insn=0x0000000000556CF4 string=0x0000000000556CF8 " "
 *   insn=0x0000000000556CF8 string=0x0000000000556CFC ""@"
 *   insn=0x0000000000556CFC string=0x0000000000556D00 "Bhw"
 *   insn=0x0000000000556D00 string=0x0000000000556D04 "_"
 *   insn=0x0000000000556D20 string=0x0000000000556D24 " "
 *   insn=0x0000000000556D28 string=0x0000000000556D2C " "
 *   insn=0x0000000000556D30 string=0x0000000000556D34 "u"
 *   insn=0x0000000000556D40 string=0x0000000000556D44 "q"
 *   insn=0x0000000000556DBC string=0x0000000000556DC0 " %"
 *   insn=0x0000000000556DD4 string=0x0000000000556DD8 "_"
 *   insn=0x0000000000556DD8 string=0x0000000000556DDC " "
 *   insn=0x0000000000556DDC string=0x0000000000556DE0 "?"
 *   insn=0x0000000000556DE0 string=0x0000000000556DE4 "@"
 *   insn=0x0000000000556DE4 string=0x0000000000556EEC "7"
 *   insn=0x0000000000556DE8 string=0x0000000000556DEC "@ "
 *   insn=0x0000000000556E00 string=0x0000000000556E04 "B"
 *   insn=0x0000000000556E0C string=0x000000000055720C " '@"
 *   insn=0x0000000000556E14 string=0x0000000000556E18 "CKB"
 *   insn=0x0000000000556E1C string=0x0000000000556E20 """
 *   insn=0x0000000000556E20 string=0x0000000000556E24 "$"
 *   insn=0x0000000000556E28 string=0x0000000000556E2C "c"
 *   insn=0x0000000000556E2C string=0x0000000000556E30 "S"
 *   insn=0x0000000000556E2C string=0x000000000059E580 "-0123456789"
 *   insn=0x0000000000556E34 string=0x0000000000556E38 "wh`8"
 *   insn=0x0000000000556E3C string=0x0000000000556E40 " "
 *   insn=0x0000000000556E48 string=0x0000000000556E60 "7h"8"
 *   insn=0x0000000000556E58 string=0x0000000000556E5C """
 *   insn=0x0000000000556E6C string=0x0000000000556E70 "_"
 *   insn=0x0000000000556E70 string=0x0000000000556E74 "a"
 *   insn=0x0000000000556E7C string=0x0000000000556E80 " "
 *   insn=0x0000000000556E88 string=0x0000000000556E8C "_"
 *   insn=0x0000000000556E90 string=0x0000000000556E94 "!"
 *   insn=0x0000000000556EA4 string=0x0000000000556EA8 " "
 *   insn=0x0000000000556EAC string=0x0000000000556EB0 "3"
 *   insn=0x0000000000556EB4 string=0x0000000000556EB8 "_"
 *   insn=0x0000000000556EB8 string=0x0000000000556EBC "!"
 *   insn=0x0000000000556EC4 string=0x0000000000556EC8 "?"
 *   insn=0x0000000000556ECC string=0x0000000000556ED0 " "
 *   insn=0x0000000000556EE0 string=0x0000000000556EE4 "?"
 *   insn=0x0000000000556EF4 string=0x0000000000556EF8 " "
 *   insn=0x0000000000556EF8 string=0x0000000000556EFC "?"
 *   insn=0x0000000000556F50 string=0x0000000000556F54 "c@"
 *   insn=0x0000000000556F54 string=0x0000000000556F58 "`"
 *   insn=0x0000000000556F70 string=0x0000000000556F74 "?"
 *   insn=0x0000000000556F74 string=0x0000000000556F78 "b<"
 *   insn=0x0000000000556F78 string=0x0000000000556F7C "!"
 *   insn=0x0000000000556F8C string=0x0000000000556F90 "7"
 *   insn=0x0000000000556FA8 string=0x0000000000556FAC " 4"
 *   insn=0x0000000000556FAC string=0x0000000000556FB0 "w"
 *   insn=0x0000000000556FCC string=0x0000000000556FD0 "kE"
 *   insn=0x0000000000556FD0 string=0x0000000000556FD4 "@"
 *   insn=0x0000000000556FE8 string=0x0000000000556FEC "B"
 *   insn=0x0000000000556FFC string=0x0000000000557000 "@&"
 *   insn=0x0000000000557008 string=0x000000000055700C "a$"
 *   insn=0x000000000055701C string=0x0000000000557020 "?"
 *   insn=0x0000000000557020 string=0x0000000000557024 " %"
 *   insn=0x0000000000557034 string=0x0000000000557038 ""
 *   insn=0x0000000000557064 string=0x0000000000557080 " '@"
 *   insn=0x000000000055706C string=0x0000000000557070 "!+@"
 *   insn=0x0000000000557070 string=0x0000000000557074 "!"
 *   insn=0x0000000000557078 string=0x000000000055707C " "
 *   insn=0x000000000055707C string=0x00000000005570A0 "!/@"
 *   insn=0x0000000000557084 string=0x0000000000557088 " /@"
 *   insn=0x000000000055708C string=0x0000000000557090 " "
 *   insn=0x00000000005570A8 string=0x00000000005570AC " "
 *   insn=0x00000000005570B4 string=0x00000000005570B8 "?"
 *   insn=0x00000000005570B8 string=0x00000000005570BC "B5"
 *   insn=0x00000000005570BC string=0x00000000005570C0 "!"
 *   insn=0x00000000005570BC string=0x0000000000557764 "X"
 *   insn=0x00000000005570C4 string=0x00000000005570C8 "7"
 *   insn=0x00000000005570E0 string=0x00000000005570E4 "?"
 *   insn=0x00000000005570E4 string=0x00000000005570E8 ""'"
 *   insn=0x00000000005570E8 string=0x00000000005570EC " "
 *   insn=0x00000000005570F4 string=0x00000000005570F8 "!@"
 *   insn=0x00000000005570FC string=0x0000000000557100 "!hw"
 *   insn=0x0000000000557100 string=0x0000000000557104 "?"
 *   insn=0x0000000000557104 string=0x0000000000557108 "!"
 *   insn=0x0000000000557110 string=0x0000000000557114 "@"
 *   insn=0x0000000000557114 string=0x000000000055713C "s"
 *   insn=0x000000000055711C string=0x0000000000557120 "?"
 *   insn=0x0000000000557120 string=0x0000000000557124 "b"
 *   insn=0x0000000000557124 string=0x0000000000557128 "!"
 *   insn=0x0000000000557140 string=0x0000000000557144 "a"
 *   insn=0x0000000000557148 string=0x000000000055714C "`"
 *   insn=0x0000000000557150 string=0x0000000000557154 "8"
 *   insn=0x0000000000557158 string=0x000000000055715C "_"
 *   insn=0x0000000000557168 string=0x000000000055716C "?"
 *   insn=0x000000000055716C string=0x0000000000557170 "b"
 *   insn=0x0000000000557170 string=0x0000000000557174 " "
 *   insn=0x0000000000557178 string=0x000000000055717C "@"
 *   insn=0x0000000000557190 string=0x0000000000557194 "?"
 *   insn=0x0000000000557198 string=0x000000000055719C "!"
 *   insn=0x000000000055719C string=0x00000000005571A0 "?"
 *   insn=0x00000000005571A0 string=0x00000000005571A4 "@"
 *   insn=0x00000000005571B0 string=0x00000000005571B4 "@"
 *   insn=0x00000000005571B4 string=0x00000000005571B8 "o"
 *   insn=0x00000000005571C0 string=0x00000000005571C4 "?"
 *   insn=0x00000000005571C8 string=0x00000000005571CC """
 *   insn=0x00000000005571CC string=0x00000000005571D0 "_"
 *   insn=0x00000000005571D0 string=0x00000000005571D4 "@"
 *   insn=0x00000000005571D8 string=0x00000000005571DC "l"
 *   insn=0x00000000005571E0 string=0x00000000005571E4 "!"
 *   insn=0x00000000005571E4 string=0x00000000005571E8 "a"
 *   insn=0x00000000005571EC string=0x00000000005571F0 "p"
 *   insn=0x00000000005571FC string=0x0000000000557200 "B"
 *   insn=0x0000000000557200 string=0x0000000000557204 ""
 *   insn=0x0000000000557204 string=0x0000000000557208 "@"
 *   insn=0x0000000000557214 string=0x00000000005572C8 " "
 *   insn=0x0000000000557218 string=0x000000000055721C "`"
 *   insn=0x000000000055721C string=0x0000000000557220 " c@"
 *   insn=0x0000000000557224 string=0x0000000000557228 "-"
 *   insn=0x000000000055722C string=0x0000000000557230 " "
 *   insn=0x0000000000557240 string=0x0000000000557244 """
 *   insn=0x000000000055724C string=0x000000000055744C """
 *   insn=0x0000000000557268 string=0x000000000055726C "?"
 *   insn=0x0000000000557270 string=0x0000000000557274 "!"
 *   insn=0x0000000000557274 string=0x0000000000557278 "?"
 *   insn=0x0000000000557278 string=0x000000000055727C "@"
 *   insn=0x0000000000557288 string=0x000000000055728C " "
 *   insn=0x0000000000557298 string=0x000000000055729C "?"
 *   insn=0x000000000055729C string=0x00000000005572A0 """
 *   insn=0x00000000005572A0 string=0x00000000005572A4 "7"
 *   insn=0x00000000005572BC string=0x00000000005572C0 "7"
 *   insn=0x00000000005572C0 string=0x00000000005572C4 "N"
 *   insn=0x00000000005572CC string=0x00000000005572D0 " +@"
 *   insn=0x00000000005572DC string=0x00000000005572E0 "`"
 *   insn=0x00000000005572F8 string=0x00000000005572FC "3"
 *   insn=0x0000000000557308 string=0x000000000055730C "_"
 *   insn=0x000000000055731C string=0x0000000000557320 "Z?"
 *   insn=0x0000000000557340 string=0x0000000000557344 "_"
 *   insn=0x000000000055735C string=0x0000000000557360 ""
 *   insn=0x0000000000557364 string=0x0000000000557368 "!"
 *   insn=0x0000000000557368 string=0x000000000055736C "["
 *   insn=0x0000000000557370 string=0x0000000000557374 "u"
 *   insn=0x0000000000557378 string=0x000000000055737C "!"
 *   insn=0x00000000005573A0 string=0x00000000005573A4 "A"
 *   insn=0x00000000005573A8 string=0x00000000005573AC "d"
 *   insn=0x00000000005573B0 string=0x00000000005573B4 "!(@"
 *   insn=0x00000000005573B4 string=0x00000000005573B8 " "
 *   insn=0x00000000005573BC string=0x00000000005573C0 "\"
 *   insn=0x00000000005573C4 string=0x00000000005573C8 "!(@"
 *   insn=0x00000000005573C8 string=0x00000000005573CC " "
 *   insn=0x00000000005573DC string=0x00000000005573E0 "!$@"
 *   insn=0x00000000005573E0 string=0x00000000005573E4 " "
 *   insn=0x00000000005573EC string=0x00000000005573F0 "!$@"
 *   insn=0x00000000005573F0 string=0x00000000005573F4 " "
 *   insn=0x00000000005573F8 string=0x00000000005573FC "i"
 *   insn=0x0000000000557404 string=0x0000000000557408 "?"
 *   insn=0x000000000055740C string=0x0000000000557410 "!"
 *   insn=0x0000000000557420 string=0x0000000000557424 "!$@"
 *   insn=0x0000000000557424 string=0x0000000000557428 " "
 *   insn=0x000000000055742C string=0x0000000000557430 "h"
 *   insn=0x000000000055743C string=0x0000000000557440 "!$@"
 *   insn=0x0000000000557440 string=0x0000000000557444 " "
 *   insn=0x0000000000557444 string=0x0000000000557448 "L"
 *   insn=0x0000000000557450 string=0x0000000000557454 "A$@"
 *   insn=0x0000000000557454 string=0x0000000000557458 " "
 *   insn=0x0000000000557458 string=0x000000000055745C "~"
 *   insn=0x0000000000557460 string=0x0000000000557464 "!$@"
 *   insn=0x0000000000557464 string=0x0000000000557468 " "
 *   insn=0x0000000000557470 string=0x0000000000557474 "!$@"
 *   insn=0x0000000000557474 string=0x0000000000557478 " "
 *   insn=0x000000000055747C string=0x0000000000557480 "~"
 *   insn=0x0000000000557484 string=0x0000000000557488 "!$@"
 *   insn=0x0000000000557488 string=0x000000000055748C " "
 *   insn=0x000000000055749C string=0x00000000005574A0 "@"
 *   insn=0x00000000005574AC string=0x00000000005574B0 "#"
 *   insn=0x00000000005574CC string=0x00000000005574D0 "`"
 *   insn=0x00000000005574F0 string=0x00000000005574F4 " @"
 *   insn=0x00000000005574F8 string=0x00000000005574FC "!"
 *   insn=0x00000000005574FC string=0x0000000000557500 "c"
 *   insn=0x0000000000557500 string=0x000000000053CA8C "E"
 *   insn=0x000000000055750C string=0x0000000000557510 " "
 *   insn=0x0000000000557514 string=0x0000000000557518 " "
 *   insn=0x0000000000557520 string=0x0000000000557698 " c@"
 *   insn=0x000000000055753C string=0x0000000000557540 "r"
 *   insn=0x000000000055754C string=0x0000000000557550 "n"
 *   insn=0x0000000000557560 string=0x000000000055757C " /@"
 *   insn=0x0000000000557564 string=0x0000000000557568 "h"
 *   insn=0x0000000000557568 string=0x000000000055756C "!#@"
 *   insn=0x000000000055756C string=0x0000000000557570 "!"
 *   insn=0x0000000000557578 string=0x0000000000557594 "!'@"
 *   insn=0x0000000000557580 string=0x0000000000557584 " '@"
 *   insn=0x0000000000557584 string=0x0000000000557588 "@"
 *   insn=0x000000000055759C string=0x00000000005575A0 "`"
 *   insn=0x00000000005575A8 string=0x00000000005575AC "?"
 *   insn=0x00000000005575AC string=0x00000000005575B0 "b\n"
 *   insn=0x00000000005575B0 string=0x00000000005575B4 "!"
 *   insn=0x00000000005575B0 string=0x00000000005576FC "r"
 *   insn=0x00000000005575BC string=0x00000000005575C0 "7"
 *   insn=0x00000000005575CC string=0x00000000005575D0 "!$@"
 *   insn=0x00000000005575D0 string=0x00000000005575D4 " "
 *   insn=0x00000000005575DC string=0x00000000005575E0 "!(@"
 *   insn=0x00000000005575E0 string=0x00000000005575E4 " "
 *   insn=0x00000000005575EC string=0x00000000005575F0 "T"
 *   insn=0x00000000005575F4 string=0x00000000005575F8 ">"
 *   insn=0x0000000000557618 string=0x000000000055761C ":"
 *   insn=0x0000000000557634 string=0x0000000000557638 ";+@"
 *   insn=0x0000000000557634 string=0x0000000000557690 ";#@"
 *   insn=0x0000000000557638 string=0x000000000055763C "4"
 *   insn=0x000000000055764C string=0x0000000000557650 "."
 *   insn=0x000000000055765C string=0x0000000000557660 "*"
 *   insn=0x0000000000557678 string=0x000000000055767C "c"
 *   insn=0x0000000000557688 string=0x000000000055768C "J"
 *   insn=0x00000000005576AC string=0x00000000005576B0 "a{t"
 *   insn=0x00000000005576B4 string=0x00000000005576B8 "A"
 *   insn=0x00000000005576C8 string=0x00000000005576CC "?"
 *   insn=0x00000000005576D0 string=0x00000000005576D4 "!"
 *   insn=0x00000000005576E8 string=0x00000000005576EC "!(@"
 *   insn=0x00000000005576EC string=0x00000000005576F0 " "
 *   insn=0x0000000000557704 string=0x0000000000557708 "!(@"
 *   insn=0x0000000000557708 string=0x000000000055770C " "
 *   insn=0x0000000000557718 string=0x000000000055771C " "
 *   insn=0x0000000000557720 string=0x0000000000557724 " "
 *   insn=0x000000000055773C string=0x0000000000557740 "h"
 *   insn=0x0000000000557758 string=0x000000000055775C "a"
 *   insn=0x0000000000557764 string=0x0000000000557768 "X"
 *   insn=0x000000000055777C string=0x0000000000557780 "`"
 *   insn=0x0000000000557784 string=0x0000000000557788 "V"
 *   insn=0x0000000000557798 string=0x000000000055779C "`"
 *   insn=0x00000000005577A0 string=0x00000000005577A4 "O"
 *   insn=0x00000000005577A8 string=0x00000000005577AC "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5569EC(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 *v8; // x19
  void *v9; // x20
  __int64 v10; // x25
  int v11; // w1
  int v12; // w21
  unsigned int v13; // w0
  int v14; // w23
  _QWORD *v15; // x0
  _QWORD *v16; // x0
  int v17; // w19
  int v18; // w1
  int *v19; // x1
  int v20; // w0
  __int64 v21; // x26
  __int64 v22; // x23
  _QWORD *v23; // x1
  __int64 v24; // x19
  _QWORD *v25; // x0
  int v26; // w24
  int v27; // w1
  _QWORD *v28; // x0
  _BOOL4 v29; // w19
  unsigned int *v30; // x0
  _QWORD *v31; // x20
  unsigned int *v32; // x0
  _QWORD *v34; // x0
  wchar_t v35; // w23
  _QWORD *v36; // x0
  int v37; // w19
  int v38; // w1
  wchar_t *v39; // x0
  char *v40; // x1
  __int64 v41; // x2
  __int64 v42; // x19
  char v43; // w23
  char *v44; // x0
  unsigned __int64 v45; // x1
  int *v46; // x1
  int v47; // w0
  _BOOL4 v48; // w19
  unsigned int v49; // w0
  unsigned __int64 v50; // x1
  __int64 v51; // x0
  __int64 v52; // x2
  _BOOL4 v53; // w19
  unsigned __int64 v54; // x1
  wchar_t *v55; // x1
  wchar_t v56; // w0
  __int64 v57; // x1
  unsigned __int64 v58; // x1
  int *v59; // x1
  int v60; // w0
  wchar_t *v61; // x1
  wchar_t v62; // w1
  wchar_t *v63; // x1
  wchar_t v64; // w2
  wchar_t *v65; // x0
  wchar_t v66; // w0
  wchar_t *v67; // x1
  wchar_t v68; // w1
  wchar_t *v69; // x1
  char *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x19
  char *v73; // x0
  unsigned __int64 v74; // x1
  __int64 v75; // x1
  _BOOL4 v76; // w19
  unsigned __int64 v77; // x1
  __int64 v78; // x27
  unsigned __int64 i; // x20
  _BOOL4 v80; // w23
  unsigned __int64 v81; // x1
  _BOOL4 v83; // [xsp+6Ch] [xbp+6Ch]
  int v84; // [xsp+74h] [xbp+74h]
  unsigned __int64 v87; // [xsp+A8h] [xbp+A8h]
  unsigned __int8 v88; // [xsp+B0h] [xbp+B0h]
  int v89; // [xsp+B4h] [xbp+B4h]
  __int64 v90; // [xsp+C8h] [xbp+C8h]
  _QWORD *v91; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v92; // [xsp+D8h] [xbp+D8h]
  _QWORD *v93; // [xsp+E0h] [xbp+E0h] BYREF
  wchar_t c[4]; // [xsp+E8h] [xbp+E8h]
  char v95[8]; // [xsp+F8h] [xbp+F8h] BYREF
  _DWORD v96[2]; // [xsp+108h] [xbp+108h]
  char *v97; // [xsp+110h] [xbp+110h] BYREF
  char *v98; // [xsp+118h] [xbp+118h] BYREF

  v8 = (__int64 *)(a6 + 208);
  v93 = a2;
  *(_QWORD *)c = a3;
  v91 = a4;
  v92 = a5;
  v83 = 0;
  v9 = sub_54F6AC(a6 + 208);
  v10 = sub_554914((__int64)v95, v8);
  if ( *(_QWORD *)(v10 + 72) )
    v83 = *(_QWORD *)(v10 + 88) != 0;
  v11 = *(unsigned __int8 *)(v10 + 32);
  v97 = &byte_6FD2F8;
  if ( v11 )
    sub_567088(&v97, 32);
  v98 = &byte_6FD2F8;
  sub_567088(&v98, 32);
  v90 = 0;
  v89 = 0;
  v88 = 0;
  v12 = 0;
  v96[0] = *(_DWORD *)(v10 + 104);
  v87 = 0;
  v84 = 0;
  v13 = LOBYTE(v96[0]);
LABEL_6:
  switch ( v13 )
  {
    case 0u:
      goto LABEL_7;
    case 1u:
      v48 = sub_554B08((__int64)&v93) == -1;
      if ( ((unsigned int)sub_554B08((__int64)&v91) == -1) == v48
        || (v49 = sub_554B08((__int64)&v93),
            !(*(unsigned __int8 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, 8, v49)) )
      {
        v14 = 0;
      }
      else
      {
        if ( v93 )
        {
          v50 = v93[2];
          if ( v50 >= v93[3] )
            (*(void (__fastcall **)(_QWORD *))(*v93 + 80LL))(v93);
          else
            v93[2] = v50 + 4;
          c[0] = -1;
          v14 = 1;
          if ( v90 == 3 )
            goto LABEL_90;
LABEL_9:
          v15 = v93;
          while ( 1 )
          {
            if ( !v15 )
              goto LABEL_19;
            if ( c[0] != -1 )
              break;
            v61 = (wchar_t *)v15[2];
            if ( (unsigned __int64)v61 >= v15[3] )
              v62 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 72LL))(v15);
            else
              v62 = *v61;
            if ( v62 != -1 )
            {
              v16 = v91;
              v17 = 0;
              c[0] = v62;
              if ( !v91 )
                goto LABEL_15;
              goto LABEL_13;
            }
            v93 = 0;
            do
            {
LABEL_19:
              v16 = v91;
              if ( !v91 )
                goto LABEL_25;
              v17 = 1;
              v18 = 0;
              if ( (_DWORD)v92 != -1 )
                goto LABEL_14;
LABEL_21:
              v19 = (int *)v16[2];
              if ( (unsigned __int64)v19 >= v16[3] )
                v20 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 72LL))(v16);
              else
                v20 = *v19;
              if ( v20 == -1 )
              {
                v91 = 0;
                v18 = 1;
                goto LABEL_14;
              }
              LODWORD(v92) = v20;
              if ( !v17 )
                goto LABEL_25;
LABEL_15:
              if ( v93 && c[0] == -1 )
              {
                v63 = (wchar_t *)v93[2];
                if ( (unsigned __int64)v63 >= v93[3] )
                  v64 = (*(__int64 (__fastcall **)(_QWORD *))(*v93 + 72LL))(v93);
                else
                  v64 = *v63;
                if ( v64 == -1 )
                  v93 = 0;
                else
                  c[0] = v64;
              }
LABEL_17:
              if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 16LL))(v9, 8) )
                goto LABEL_25;
              v15 = v93;
            }
            while ( !v93 );
            v74 = v93[2];
            if ( v74 >= v93[3] )
            {
              (*(void (__fastcall **)(_QWORD *))(*v93 + 80LL))(v93);
              v15 = v93;
              c[0] = -1;
            }
            else
            {
              c[0] = -1;
              v93[2] = v74 + 4;
            }
          }
          v16 = v91;
          v17 = 0;
          if ( !v91 )
            goto LABEL_17;
LABEL_13:
          v18 = 0;
          if ( (_DWORD)v92 == -1 )
            goto LABEL_21;
LABEL_14:
          if ( v18 == v17 )
            goto LABEL_25;
          goto LABEL_15;
        }
LABEL_7:
        v14 = 1;
      }
      if ( v90 == 3 )
        goto LABEL_90;
      goto LABEL_9;
    case 2u:
      if ( (*(_DWORD *)(a6 + 24) & 0x200) != 0 || v87 > 1 || !(_DWORD)v90 )
        goto LABEL_40;
      if ( (_DWORD)v90 != 1 )
      {
        v14 = 1;
        if ( (_DWORD)v90 != 2 )
          goto LABEL_26;
        if ( HIBYTE(v96[0]) != 4 && (!v83 || HIBYTE(v96[0]) != 3) )
          goto LABEL_27;
        goto LABEL_40;
      }
      if ( v83 || LOBYTE(v96[0]) == 3 )
      {
LABEL_40:
        v21 = *(_QWORD *)(v10 + 56);
        v22 = 0;
        v23 = v93;
        v24 = 0;
        goto LABEL_41;
      }
      if ( BYTE2(v96[0]) != 1 )
        goto LABEL_27;
      v21 = *(_QWORD *)(v10 + 56);
      v22 = 0;
      v23 = v93;
      v24 = 0;
LABEL_41:
      if ( !v23 )
        goto LABEL_120;
      while ( 2 )
      {
        if ( c[0] != -1 )
          goto LABEL_43;
        v65 = (wchar_t *)v23[2];
        if ( (unsigned __int64)v65 >= v23[3] )
          v66 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 72LL))(v23);
        else
          v66 = *v65;
        if ( v66 != -1 )
        {
          c[0] = v66;
LABEL_43:
          v25 = v91;
          v26 = 0;
          if ( v91 )
          {
            v27 = 0;
            if ( (_DWORD)v92 == -1 )
              goto LABEL_122;
            goto LABEL_45;
          }
          goto LABEL_46;
        }
        v93 = 0;
LABEL_120:
        v25 = v91;
        if ( !v91 )
          break;
        v26 = 1;
        v27 = 0;
        if ( (_DWORD)v92 == -1 )
        {
LABEL_122:
          v59 = (int *)v25[2];
          if ( (unsigned __int64)v59 >= v25[3] )
            v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
          else
            v60 = *v59;
          if ( v60 == -1 )
          {
            v91 = 0;
            v27 = 1;
          }
          else
          {
            LODWORD(v92) = v60;
            v27 = 0;
          }
        }
LABEL_45:
        if ( v26 != v27 )
        {
LABEL_46:
          if ( v24 == v21 )
            goto LABEL_28;
          v28 = v93;
          if ( v93 )
          {
            if ( c[0] != -1 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + v22) != c[0] )
                goto LABEL_50;
LABEL_116:
              v58 = v28[2];
              if ( v58 >= v28[3] )
              {
                (*(void (__fastcall **)(_QWORD *))(*v28 + 80LL))(v28);
                v28 = v93;
              }
              else
              {
                v28[2] = v58 + 4;
              }
              c[0] = -1;
              v23 = v28;
              goto LABEL_119;
            }
            v55 = (wchar_t *)v93[2];
            if ( (unsigned __int64)v55 >= v93[3] )
              v56 = (*(__int64 (__fastcall **)(_QWORD *))(*v93 + 72LL))(v93);
            else
              v56 = *v55;
            if ( v56 != -1 )
            {
              v57 = *(_QWORD *)(v10 + 48);
              c[0] = v56;
              if ( *(_DWORD *)(v57 + v22) != v56 )
                goto LABEL_50;
              v28 = v93;
              v23 = v93;
              if ( v93 )
                goto LABEL_116;
LABEL_119:
              ++v24;
              v22 += 4;
              if ( v23 )
                continue;
              goto LABEL_120;
            }
            v93 = 0;
          }
          if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + v22) != -1 )
            goto LABEL_50;
          v23 = v93;
          goto LABEL_119;
        }
        break;
      }
      if ( v24 == v21 )
      {
        v14 = 1;
        goto LABEL_26;
      }
LABEL_50:
      if ( !v24 && (*(_DWORD *)(a6 + 24) & 0x200) == 0 )
        goto LABEL_28;
LABEL_52:
      *a7 |= 4u;
LABEL_53:
      v29 = sub_554B08((__int64)&v93) == -1;
      if ( ((unsigned int)sub_554B08((__int64)&v91) == -1) == v29 )
      {
        v31 = v93;
        *a7 |= 2u;
        v30 = (unsigned int *)(v98 - 24);
        if ( v98 - 24 != (char *)&qword_6FD2E0 )
          goto LABEL_233;
LABEL_55:
        v32 = (unsigned int *)(v97 - 24);
        if ( v97 - 24 != (char *)&qword_6FD2E0 )
LABEL_234:
          sub_54D8E0(v32);
      }
      else
      {
        v30 = (unsigned int *)(v98 - 24);
        v31 = v93;
        if ( v98 - 24 == (char *)&qword_6FD2E0 )
          goto LABEL_55;
LABEL_233:
        sub_54D8E0(v30);
        v32 = (unsigned int *)(v97 - 24);
        if ( v97 - 24 != (char *)&qword_6FD2E0 )
          goto LABEL_234;
      }
      return v31;
    case 3u:
      if ( *(_QWORD *)(v10 + 72) )
      {
        v76 = sub_554B08((__int64)&v93) == -1;
        if ( ((unsigned int)sub_554B08((__int64)&v91) == -1) != v76
          && (unsigned int)sub_554B08((__int64)&v93) == **(_DWORD **)(v10 + 64) )
        {
          v87 = *(_QWORD *)(v10 + 72);
          if ( v93 )
          {
            v77 = v93[2];
            if ( v77 >= v93[3] )
              sub_54D8C4((__int64)v93);
            else
              v93[2] = v77 + 4;
            v14 = 1;
            c[0] = -1;
            goto LABEL_26;
          }
LABEL_28:
          while ( 1 )
          {
            v14 = 1;
LABEL_26:
            if ( (int)v90 + 1 > 3 )
              break;
LABEL_27:
            ++v90;
            v13 = *((unsigned __int8 *)v96 + v90);
            if ( v13 <= 4 )
              goto LABEL_6;
          }
LABEL_90:
          if ( ((unsigned __int8)v14 & (v87 > 1)) != 0 )
          {
            if ( v84 )
              v78 = *(_QWORD *)(v10 + 80);
            else
              v78 = *(_QWORD *)(v10 + 64);
            for ( i = 1; ; ++i )
            {
              v80 = sub_554B08((__int64)&v93) == -1;
              if ( v80 == ((unsigned int)sub_554B08((__int64)&v91) == -1)
                || i >= v87
                || (unsigned int)sub_554B08((__int64)&v93) != *(_DWORD *)(v78 + 4 * i) )
              {
                break;
              }
              if ( v93 )
              {
                v81 = v93[2];
                if ( v81 >= v93[3] )
                {
                  (*(void (**)(void))(*v93 + 80LL))();
                  c[0] = -1;
                }
                else
                {
                  c[0] = -1;
                  v93[2] = v81 + 4;
                }
              }
            }
            if ( i != v87 )
              goto LABEL_52;
          }
          else if ( !v14 )
          {
            goto LABEL_52;
          }
          if ( *((_QWORD *)v98 - 3) > 1u )
          {
            v51 = sub_56857C(&v98, 48, 0);
            if ( v51 )
            {
              v52 = v51;
              if ( v51 == -1 )
                v52 = *((_QWORD *)v98 - 3) - 1LL;
              sub_568F74(&v98, 0, v52);
            }
          }
          if ( !v84 )
            goto LABEL_190;
          if ( (*((_DWORD *)v98 - 2) & 0x80000000) != 0 )
          {
            if ( *v98 != 48 )
            {
LABEL_189:
              sub_569074(&v98, 0, 0, 1, 45);
              *((_DWORD *)v98 - 2) = -1;
            }
          }
          else
          {
            sub_568EA8(&v98);
            if ( *v98 != 48 )
            {
              if ( (*((_DWORD *)v98 - 2) & 0x80000000) == 0 )
                sub_568EA8(&v98);
              goto LABEL_189;
            }
          }
LABEL_190:
          if ( *((_QWORD *)v97 - 3) )
          {
            if ( v89 )
              v75 = v88;
            else
              v75 = (unsigned __int8)v12;
            sub_567890(&v97, v75);
            if ( !sub_53CA8C(*(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24), (unsigned __int8 **)&v97) )
              *a7 |= 4u;
          }
          if ( v89 && *(_DWORD *)(v10 + 96) != v12 )
            goto LABEL_52;
          sub_567BD4(a8);
          goto LABEL_53;
        }
        if ( !*(_QWORD *)(v10 + 88) )
        {
          if ( !*(_QWORD *)(v10 + 72) )
          {
            v14 = !v83;
LABEL_25:
            if ( v14 )
              goto LABEL_26;
            goto LABEL_90;
          }
          goto LABEL_106;
        }
      }
      else if ( !*(_QWORD *)(v10 + 88) )
      {
LABEL_31:
        v14 = !v83;
        goto LABEL_25;
      }
      v53 = sub_554B08((__int64)&v93) == -1;
      if ( ((unsigned int)sub_554B08((__int64)&v91) == -1) != v53
        && (unsigned int)sub_554B08((__int64)&v93) == **(_DWORD **)(v10 + 80) )
      {
        v87 = *(_QWORD *)(v10 + 88);
        if ( v93 )
        {
          v54 = v93[2];
          if ( v54 >= v93[3] )
            sub_54D8C4((__int64)v93);
          else
            v93[2] = v54 + 4;
          v14 = 1;
          v84 = 1;
          c[0] = -1;
          goto LABEL_26;
        }
      }
      else if ( !*(_QWORD *)(v10 + 72) || *(_QWORD *)(v10 + 88) )
      {
        goto LABEL_31;
      }
LABEL_106:
      v84 = 1;
      v14 = 1;
      goto LABEL_26;
    case 4u:
      v34 = v93;
      if ( v93 )
        goto LABEL_58;
LABEL_75:
      v36 = v91;
      if ( !v91 )
        goto LABEL_81;
      v37 = 1;
      v38 = 0;
      if ( (_DWORD)v92 == -1 )
        goto LABEL_77;
LABEL_61:
      if ( v38 == v37 )
        goto LABEL_81;
      while ( 1 )
      {
        if ( v93 )
        {
          v35 = c[0];
          if ( c[0] == -1 )
          {
            v69 = (wchar_t *)v93[2];
            if ( (unsigned __int64)v69 >= v93[3] )
              v35 = (*(__int64 (__fastcall **)(_QWORD *))(*v93 + 72LL))(v93);
            else
              v35 = *v69;
            if ( v35 == -1 )
              v93 = 0;
            else
              c[0] = v35;
          }
          goto LABEL_64;
        }
        v35 = -1;
        v39 = wmemchr((const wchar_t *)(v10 + 112), -1, 0xAu);
        if ( !v39 )
          break;
        while ( 1 )
        {
          v40 = v98;
          v41 = *((_QWORD *)v98 - 3);
          v42 = v41 + 1;
          v43 = off_6E8940[((__int64)v39 - v10 - 108) >> 2];
          if ( (unsigned __int64)(v41 + 1) > *((_QWORD *)v98 - 2) || *((int *)v98 - 2) > 0 )
          {
            sub_567088(&v98, v41 + 1);
            v40 = v98;
            v41 = *((_QWORD *)v98 - 3);
          }
          v40[v41] = v43;
          v44 = v98;
          if ( v98 - 24 != (char *)&qword_6FD2E0 )
          {
            *((_DWORD *)v98 - 2) = 0;
            *((_QWORD *)v44 - 3) = v42;
            v44[v42] = 0;
          }
          ++v12;
LABEL_71:
          v34 = v93;
          if ( !v93 )
            goto LABEL_75;
          v45 = v93[2];
          if ( v93[3] <= v45 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v93 + 80LL))(v93);
            v34 = v93;
            c[0] = -1;
          }
          else
          {
            c[0] = -1;
            v93[2] = v45 + 4;
          }
          if ( !v34 )
            goto LABEL_75;
LABEL_58:
          v35 = c[0];
          if ( c[0] == -1 )
            break;
          v36 = v91;
          v37 = 0;
          if ( v91 )
            goto LABEL_60;
LABEL_64:
          v39 = wmemchr((const wchar_t *)(v10 + 112), v35, 0xAu);
          if ( !v39 )
            goto LABEL_138;
        }
        v67 = (wchar_t *)v34[2];
        if ( (unsigned __int64)v67 >= v34[3] )
          v68 = (*(__int64 (__fastcall **)(_QWORD *))(*v34 + 72LL))(v34);
        else
          v68 = *v67;
        if ( v68 == -1 )
        {
          v93 = 0;
          goto LABEL_75;
        }
        v36 = v91;
        v37 = 0;
        c[0] = v68;
        if ( v91 )
        {
LABEL_60:
          v38 = 0;
          if ( (_DWORD)v92 != -1 )
            goto LABEL_61;
LABEL_77:
          v46 = (int *)v36[2];
          if ( (unsigned __int64)v46 >= v36[3] )
            v47 = (*(__int64 (__fastcall **)(_QWORD *))(*v36 + 72LL))(v36);
          else
            v47 = *v46;
          if ( v47 == -1 )
          {
            v91 = 0;
            v38 = 1;
            goto LABEL_61;
          }
          LODWORD(v92) = v47;
          if ( !v37 )
            goto LABEL_81;
        }
      }
LABEL_138:
      if ( *(_DWORD *)(v10 + 36) != v35 || v89 )
      {
        if ( *(_BYTE *)(v10 + 32) && *(_DWORD *)(v10 + 40) == v35 && !v89 )
        {
          if ( v12 )
          {
            v70 = v97;
            v71 = *((_QWORD *)v97 - 3);
            v72 = v71 + 1;
            if ( (unsigned __int64)(v71 + 1) > *((_QWORD *)v97 - 2) || *((int *)v97 - 2) > 0 )
            {
              sub_567088(&v97, v71 + 1);
              v70 = v97;
              v71 = *((_QWORD *)v97 - 3);
            }
            v70[v71] = v12;
            v12 = 0;
            v73 = v97;
            if ( v97 - 24 != (char *)&qword_6FD2E0 )
            {
              *((_DWORD *)v97 - 2) = 0;
              *((_QWORD *)v73 - 3) = v72;
              v73[v72] = 0;
            }
            goto LABEL_71;
          }
          v14 = 0;
          goto LABEL_82;
        }
      }
      else if ( *(int *)(v10 + 96) > 0 )
      {
        v88 = v12;
        v12 = 0;
        v89 = 1;
        goto LABEL_71;
      }
LABEL_81:
      v14 = 1;
LABEL_82:
      if ( !*((_QWORD *)v98 - 3) )
        goto LABEL_52;
      goto LABEL_25;
    default:
      goto LABEL_28;
  }
}

