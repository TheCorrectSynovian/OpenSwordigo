/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005577B8
 * Mangled: sub_5577B8
 * Demangled: sub_5577B8
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
 *   0x0000000000554804  sub_554804
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
 * Referenced strings: 260
 *   insn=0x0000000000557810 string=0x0000000000557814 " '@"
 *   insn=0x0000000000557818 string=0x000000000055781C " /@"
 *   insn=0x0000000000557818 string=0x000000000055782C "|"
 *   insn=0x0000000000557834 string=0x0000000000557838 "!"
 *   insn=0x0000000000557850 string=0x0000000000557854 ">"
 *   insn=0x0000000000557864 string=0x0000000000557868 "B`"
 *   insn=0x000000000055787C string=0x0000000000557880 " k@"
 *   insn=0x0000000000557884 string=0x0000000000557888 ";"
 *   insn=0x0000000000557890 string=0x0000000000557894 " "
 *   insn=0x0000000000557894 string=0x0000000000557898 "@"
 *   insn=0x00000000005578DC string=0x00000000005579F8 "7"
 *   insn=0x00000000005578E0 string=0x00000000005578E4 " X`xa"
 *   insn=0x00000000005578E4 string=0x00000000005578E8 "a"
 *   insn=0x00000000005578E8 string=0x00000000005578EC " "
 *   insn=0x00000000005578E8 string=0x00000000005578F4 "7"
 *   insn=0x00000000005578F0 string=0x0000000000557A00 " '@"
 *   insn=0x00000000005578FC string=0x0000000000557900 "@#"
 *   insn=0x0000000000557910 string=0x0000000000557914 "_"
 *   insn=0x000000000055792C string=0x0000000000557930 "_"
 *   insn=0x0000000000557930 string=0x0000000000557934 " "
 *   insn=0x0000000000557934 string=0x0000000000557938 "?"
 *   insn=0x0000000000557938 string=0x000000000055793C "@"
 *   insn=0x000000000055793C string=0x00000000005579C4 "7"
 *   insn=0x000000000055794C string=0x0000000000557950 "_"
 *   insn=0x0000000000557960 string=0x0000000000557964 "c@"
 *   insn=0x0000000000557964 string=0x0000000000557968 "`"
 *   insn=0x000000000055797C string=0x0000000000557980 " "
 *   insn=0x0000000000557984 string=0x0000000000557988 "3"
 *   insn=0x000000000055798C string=0x0000000000557990 "_"
 *   insn=0x0000000000557990 string=0x0000000000557994 "!"
 *   insn=0x000000000055799C string=0x00000000005579A0 "?"
 *   insn=0x00000000005579A0 string=0x00000000005579A4 ""@"
 *   insn=0x00000000005579A4 string=0x00000000005579A8 " "
 *   insn=0x00000000005579B8 string=0x00000000005579BC "?"
 *   insn=0x00000000005579F0 string=0x00000000005579F4 "i"
 *   insn=0x0000000000557A04 string=0x0000000000557A08 " /@"
 *   insn=0x0000000000557A1C string=0x0000000000557A20 "@"
 *   insn=0x0000000000557A20 string=0x0000000000557A68 ":"
 *   insn=0x0000000000557A34 string=0x0000000000557A38 "?"
 *   insn=0x0000000000557A38 string=0x0000000000557A3C "`L"
 *   insn=0x0000000000557A3C string=0x0000000000557A40 "?"
 *   insn=0x0000000000557A40 string=0x0000000000557A44 "7"
 *   insn=0x0000000000557A80 string=0x0000000000557A84 "@,"
 *   insn=0x0000000000557A84 string=0x000000000055800C " @"
 *   insn=0x0000000000557A98 string=0x0000000000557A9C "_"
 *   insn=0x0000000000557AAC string=0x0000000000557AB0 "@"
 *   insn=0x0000000000557AB4 string=0x0000000000557AB8 "`5"
 *   insn=0x0000000000557AB8 string=0x0000000000558164 " @"
 *   insn=0x0000000000557ABC string=0x0000000000557AC0 "?"
 *   insn=0x0000000000557AC0 string=0x0000000000557AC4 " "
 *   insn=0x0000000000557AC4 string=0x0000000000557AC8 ""@"
 *   insn=0x0000000000557AC8 string=0x0000000000557ACC "Bhw"
 *   insn=0x0000000000557ACC string=0x0000000000557AD0 "_"
 *   insn=0x0000000000557AEC string=0x0000000000557AF0 " "
 *   insn=0x0000000000557AF4 string=0x0000000000557AF8 " "
 *   insn=0x0000000000557B34 string=0x0000000000557B38 "AN"
 *   insn=0x0000000000557B88 string=0x0000000000557B8C " %"
 *   insn=0x0000000000557BA0 string=0x0000000000557BA4 "_"
 *   insn=0x0000000000557BA4 string=0x0000000000557BA8 " "
 *   insn=0x0000000000557BA8 string=0x0000000000557BAC "?"
 *   insn=0x0000000000557BAC string=0x0000000000557BB0 "@"
 *   insn=0x0000000000557BB0 string=0x0000000000557CB8 "7"
 *   insn=0x0000000000557BB4 string=0x0000000000557BB8 "@ "
 *   insn=0x0000000000557BCC string=0x0000000000557BD0 "B"
 *   insn=0x0000000000557BD8 string=0x0000000000557FD8 " '@"
 *   insn=0x0000000000557BE0 string=0x0000000000557BE4 "CKB"
 *   insn=0x0000000000557BE8 string=0x0000000000557BEC """
 *   insn=0x0000000000557BEC string=0x0000000000557BF0 "$"
 *   insn=0x0000000000557BF4 string=0x0000000000557BF8 "c"
 *   insn=0x0000000000557BF8 string=0x0000000000557BFC "S"
 *   insn=0x0000000000557BF8 string=0x000000000059E580 "-0123456789"
 *   insn=0x0000000000557C00 string=0x0000000000557C04 "wh`8"
 *   insn=0x0000000000557C08 string=0x0000000000557C0C " "
 *   insn=0x0000000000557C14 string=0x0000000000557C2C "7h"8"
 *   insn=0x0000000000557C24 string=0x0000000000557C28 """
 *   insn=0x0000000000557C38 string=0x0000000000557C3C "_"
 *   insn=0x0000000000557C3C string=0x0000000000557C40 "a"
 *   insn=0x0000000000557C48 string=0x0000000000557C4C " "
 *   insn=0x0000000000557C54 string=0x0000000000557C58 "_"
 *   insn=0x0000000000557C5C string=0x0000000000557C60 "!"
 *   insn=0x0000000000557C70 string=0x0000000000557C74 " "
 *   insn=0x0000000000557C78 string=0x0000000000557C7C "3"
 *   insn=0x0000000000557C80 string=0x0000000000557C84 "_"
 *   insn=0x0000000000557C84 string=0x0000000000557C88 "!"
 *   insn=0x0000000000557C90 string=0x0000000000557C94 "?"
 *   insn=0x0000000000557C98 string=0x0000000000557C9C " "
 *   insn=0x0000000000557CAC string=0x0000000000557CB0 "?"
 *   insn=0x0000000000557CC0 string=0x0000000000557CC4 " "
 *   insn=0x0000000000557CC4 string=0x0000000000557CC8 "?"
 *   insn=0x0000000000557D1C string=0x0000000000557D20 "c@"
 *   insn=0x0000000000557D20 string=0x0000000000557D24 "`"
 *   insn=0x0000000000557D3C string=0x0000000000557D40 "?"
 *   insn=0x0000000000557D40 string=0x0000000000557D44 "b<"
 *   insn=0x0000000000557D44 string=0x0000000000557D48 "!"
 *   insn=0x0000000000557D58 string=0x0000000000557D5C "7"
 *   insn=0x0000000000557D74 string=0x0000000000557D78 " 4"
 *   insn=0x0000000000557D78 string=0x0000000000557D7C "w"
 *   insn=0x0000000000557D9C string=0x0000000000557DA0 "@"
 *   insn=0x0000000000557DB4 string=0x0000000000557DB8 "B"
 *   insn=0x0000000000557DC0 string=0x0000000000557DC4 "lD"
 *   insn=0x0000000000557DC8 string=0x0000000000557DCC "@&"
 *   insn=0x0000000000557DD4 string=0x0000000000557DD8 "a$"
 *   insn=0x0000000000557DDC string=0x0000000000557DE0 "2D"
 *   insn=0x0000000000557DE8 string=0x0000000000557DEC "?"
 *   insn=0x0000000000557DEC string=0x0000000000557DF0 " %"
 *   insn=0x0000000000557DFC string=0x0000000000557E00 "*D"
 *   insn=0x0000000000557E00 string=0x0000000000557E04 ""
 *   insn=0x0000000000557E0C string=0x0000000000557E10 ">"
 *   insn=0x0000000000557E1C string=0x0000000000557E20 ":"
 *   insn=0x0000000000557E30 string=0x0000000000557E4C " '@"
 *   insn=0x0000000000557E34 string=0x0000000000557E38 "4"
 *   insn=0x0000000000557E38 string=0x0000000000557E3C "!+@"
 *   insn=0x0000000000557E3C string=0x0000000000557E40 "!"
 *   insn=0x0000000000557E44 string=0x0000000000557E48 " "
 *   insn=0x0000000000557E48 string=0x0000000000557E6C "!/@"
 *   insn=0x0000000000557E50 string=0x0000000000557E54 " /@"
 *   insn=0x0000000000557E58 string=0x0000000000557E5C " "
 *   insn=0x0000000000557E74 string=0x0000000000557E78 " "
 *   insn=0x0000000000557E80 string=0x0000000000557E84 "?"
 *   insn=0x0000000000557E88 string=0x0000000000557E8C "!"
 *   insn=0x0000000000557E90 string=0x0000000000557E94 "7"
 *   insn=0x0000000000557EAC string=0x0000000000557EB0 "?"
 *   insn=0x0000000000557EB0 string=0x0000000000557EB4 ""'"
 *   insn=0x0000000000557EB4 string=0x0000000000557EB8 " "
 *   insn=0x0000000000557EC0 string=0x0000000000557EC4 "!@"
 *   insn=0x0000000000557EC8 string=0x0000000000557ECC "!hw"
 *   insn=0x0000000000557ECC string=0x0000000000557ED0 "?"
 *   insn=0x0000000000557ED0 string=0x0000000000557ED4 "!"
 *   insn=0x0000000000557EDC string=0x0000000000557EE0 "@"
 *   insn=0x0000000000557EE0 string=0x0000000000557F08 "s"
 *   insn=0x0000000000557EE8 string=0x0000000000557EEC "?"
 *   insn=0x0000000000557EEC string=0x0000000000557EF0 "b"
 *   insn=0x0000000000557EF0 string=0x0000000000557EF4 "!"
 *   insn=0x0000000000557F0C string=0x0000000000557F10 "a"
 *   insn=0x0000000000557F14 string=0x0000000000557F18 "`"
 *   insn=0x0000000000557F1C string=0x0000000000557F20 "8"
 *   insn=0x0000000000557F24 string=0x0000000000557F28 "_"
 *   insn=0x0000000000557F34 string=0x0000000000557F38 "?"
 *   insn=0x0000000000557F38 string=0x0000000000557F3C "b"
 *   insn=0x0000000000557F3C string=0x0000000000557F40 " "
 *   insn=0x0000000000557F44 string=0x0000000000557F48 "@"
 *   insn=0x0000000000557F5C string=0x0000000000557F60 "?"
 *   insn=0x0000000000557F64 string=0x0000000000557F68 "!"
 *   insn=0x0000000000557F68 string=0x0000000000557F6C "?"
 *   insn=0x0000000000557F6C string=0x0000000000557F70 "@"
 *   insn=0x0000000000557F7C string=0x0000000000557F80 "@"
 *   insn=0x0000000000557F80 string=0x0000000000557F84 "o"
 *   insn=0x0000000000557F8C string=0x0000000000557F90 "?"
 *   insn=0x0000000000557F94 string=0x0000000000557F98 """
 *   insn=0x0000000000557F98 string=0x0000000000557F9C "_"
 *   insn=0x0000000000557F9C string=0x0000000000557FA0 "@"
 *   insn=0x0000000000557FA4 string=0x0000000000557FA8 "l"
 *   insn=0x0000000000557FAC string=0x0000000000557FB0 "!"
 *   insn=0x0000000000557FB0 string=0x0000000000557FB4 "a"
 *   insn=0x0000000000557FB8 string=0x0000000000557FBC "p"
 *   insn=0x0000000000557FC8 string=0x0000000000557FCC "B"
 *   insn=0x0000000000557FD0 string=0x0000000000557FD4 "@"
 *   insn=0x0000000000557FE0 string=0x0000000000558094 " "
 *   insn=0x0000000000557FE4 string=0x0000000000557FE8 "`"
 *   insn=0x0000000000557FE8 string=0x0000000000557FEC " c@"
 *   insn=0x0000000000557FF0 string=0x0000000000557FF4 "-"
 *   insn=0x0000000000557FF8 string=0x0000000000557FFC " "
 *   insn=0x000000000055800C string=0x0000000000558010 """
 *   insn=0x0000000000558018 string=0x0000000000558218 """
 *   insn=0x0000000000558034 string=0x0000000000558038 "?"
 *   insn=0x000000000055803C string=0x0000000000558040 "!"
 *   insn=0x0000000000558040 string=0x0000000000558044 "?"
 *   insn=0x0000000000558044 string=0x0000000000558048 "@"
 *   insn=0x0000000000558054 string=0x0000000000558058 " "
 *   insn=0x0000000000558064 string=0x0000000000558068 "?"
 *   insn=0x0000000000558068 string=0x000000000055806C """
 *   insn=0x000000000055806C string=0x0000000000558070 "7"
 *   insn=0x0000000000558088 string=0x000000000055808C "7"
 *   insn=0x000000000055808C string=0x0000000000558090 "N"
 *   insn=0x0000000000558098 string=0x000000000055809C " +@"
 *   insn=0x00000000005580A8 string=0x00000000005580AC "`"
 *   insn=0x00000000005580C4 string=0x00000000005580C8 "3"
 *   insn=0x00000000005580D4 string=0x00000000005580D8 "_"
 *   insn=0x000000000055810C string=0x0000000000558110 "_"
 *   insn=0x0000000000558128 string=0x000000000055812C ""
 *   insn=0x0000000000558130 string=0x0000000000558134 "!"
 *   insn=0x0000000000558134 string=0x0000000000558138 "["
 *   insn=0x000000000055813C string=0x0000000000558140 "u"
 *   insn=0x0000000000558144 string=0x0000000000558148 "!"
 *   insn=0x000000000055816C string=0x0000000000558170 "A"
 *   insn=0x0000000000558174 string=0x0000000000558178 "d"
 *   insn=0x000000000055817C string=0x0000000000558180 "!(@"
 *   insn=0x0000000000558180 string=0x0000000000558184 " "
 *   insn=0x0000000000558188 string=0x000000000055818C "\"
 *   insn=0x0000000000558190 string=0x0000000000558194 "!(@"
 *   insn=0x0000000000558194 string=0x0000000000558198 " "
 *   insn=0x00000000005581A8 string=0x00000000005581AC "!$@"
 *   insn=0x00000000005581AC string=0x00000000005581B0 " "
 *   insn=0x00000000005581B8 string=0x00000000005581BC "!$@"
 *   insn=0x00000000005581BC string=0x00000000005581C0 " "
 *   insn=0x00000000005581C4 string=0x00000000005581C8 "i"
 *   insn=0x00000000005581D0 string=0x00000000005581D4 "?"
 *   insn=0x00000000005581D8 string=0x00000000005581DC "!"
 *   insn=0x00000000005581EC string=0x00000000005581F0 "!$@"
 *   insn=0x00000000005581F0 string=0x00000000005581F4 " "
 *   insn=0x00000000005581F8 string=0x00000000005581FC "h"
 *   insn=0x0000000000558208 string=0x000000000055820C "!$@"
 *   insn=0x000000000055820C string=0x0000000000558210 " "
 *   insn=0x0000000000558210 string=0x0000000000558214 "L"
 *   insn=0x000000000055821C string=0x0000000000558220 "A$@"
 *   insn=0x0000000000558220 string=0x0000000000558224 " "
 *   insn=0x0000000000558224 string=0x0000000000558228 "~"
 *   insn=0x000000000055822C string=0x0000000000558230 "!$@"
 *   insn=0x0000000000558230 string=0x0000000000558234 " "
 *   insn=0x000000000055823C string=0x0000000000558240 "!$@"
 *   insn=0x0000000000558240 string=0x0000000000558244 " "
 *   insn=0x0000000000558248 string=0x000000000055824C "~"
 *   insn=0x0000000000558250 string=0x0000000000558254 "!$@"
 *   insn=0x0000000000558254 string=0x0000000000558258 " "
 *   insn=0x0000000000558268 string=0x000000000055826C "@"
 *   insn=0x0000000000558278 string=0x000000000055827C "#"
 *   insn=0x0000000000558280 string=0x0000000000558284 "|C"
 *   insn=0x0000000000558298 string=0x000000000055829C "`"
 *   insn=0x00000000005582B8 string=0x00000000005582BC "u="
 *   insn=0x00000000005582BC string=0x00000000005582C0 " @"
 *   insn=0x00000000005582C4 string=0x00000000005582C8 "!"
 *   insn=0x00000000005582CC string=0x000000000053CA8C "E"
 *   insn=0x00000000005582D8 string=0x00000000005582DC " "
 *   insn=0x00000000005582E0 string=0x00000000005582E4 " "
 *   insn=0x00000000005582EC string=0x0000000000558464 " c@"
 *   insn=0x00000000005582F4 string=0x00000000005582F8 "7>"
 *   insn=0x000000000055832C string=0x0000000000558348 " /@"
 *   insn=0x0000000000558334 string=0x0000000000558338 "!#@"
 *   insn=0x0000000000558338 string=0x000000000055833C "!"
 *   insn=0x0000000000558344 string=0x0000000000558360 "!'@"
 *   insn=0x000000000055834C string=0x0000000000558350 " '@"
 *   insn=0x0000000000558350 string=0x0000000000558354 "@"
 *   insn=0x0000000000558368 string=0x000000000055836C "`"
 *   insn=0x0000000000558374 string=0x0000000000558378 "?"
 *   insn=0x0000000000558378 string=0x000000000055837C "b\n"
 *   insn=0x000000000055837C string=0x0000000000558380 "!"
 *   insn=0x0000000000558388 string=0x000000000055838C "7"
 *   insn=0x0000000000558398 string=0x000000000055839C "!$@"
 *   insn=0x000000000055839C string=0x00000000005583A0 " "
 *   insn=0x00000000005583A8 string=0x00000000005583AC "!(@"
 *   insn=0x00000000005583AC string=0x00000000005583B0 " "
 *   insn=0x00000000005583B8 string=0x00000000005583BC "T"
 *   insn=0x00000000005583C0 string=0x00000000005583C4 ">"
 *   insn=0x00000000005583E4 string=0x00000000005583E8 ":"
 *   insn=0x0000000000558400 string=0x0000000000558404 ";+@"
 *   insn=0x0000000000558400 string=0x000000000055845C ";#@"
 *   insn=0x0000000000558404 string=0x0000000000558408 "4"
 *   insn=0x0000000000558444 string=0x0000000000558448 "c"
 *   insn=0x0000000000558454 string=0x0000000000558458 "J"
 *   insn=0x0000000000558478 string=0x000000000055847C "a{t"
 *   insn=0x0000000000558480 string=0x0000000000558484 "A"
 *   insn=0x0000000000558494 string=0x0000000000558498 "?"
 *   insn=0x000000000055849C string=0x00000000005584A0 "!"
 *   insn=0x00000000005584B4 string=0x00000000005584B8 "!(@"
 *   insn=0x00000000005584B8 string=0x00000000005584BC " "
 *   insn=0x00000000005584DC string=0x00000000005584E0 " "
 *   insn=0x00000000005584E4 string=0x00000000005584E8 " "
 *   insn=0x0000000000558528 string=0x000000000055852C "Z"
 *   insn=0x0000000000558540 string=0x0000000000558544 "`"
 *   insn=0x000000000055855C string=0x0000000000558560 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5577B8(
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
  v10 = sub_554804((__int64)v95, v8);
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
            sub_54D8C4((__int64)v93);
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

