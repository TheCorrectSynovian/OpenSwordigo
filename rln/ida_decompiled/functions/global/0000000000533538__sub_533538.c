/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000533538
 * Mangled: sub_533538
 * Demangled: sub_533538
 *
 * Callers: 3
 *   0x0000000000533538  sub_533538
 *   0x0000000000534518  sub_534518
 *   0x0000000000534684  sub_534684
 *
 * Callees: 9
 *   0x0000000000203230  .strlen
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B4A0  sub_52B4A0
 *   0x000000000052B4BC  sub_52B4BC
 *   0x000000000052D354  sub_52D354
 *   0x000000000052D5D4  sub_52D5D4
 *   0x000000000052EE14  sub_52EE14
 *   0x0000000000532808  sub_532808
 *   0x0000000000532890  sub_532890
 *
 * Referenced strings: 254
 *   insn=0x0000000000533580 string=0x0000000000533584 "#"
 *   insn=0x0000000000533588 string=0x000000000053358C """
 *   insn=0x0000000000533594 string=0x0000000000533598 ""
 *   insn=0x0000000000533598 string=0x000000000053359C "n"
 *   insn=0x00000000005335BC string=0x00000000005335C0 "@"
 *   insn=0x00000000005335C0 string=0x000000000059DDA0 "'"
 *   insn=0x00000000005335D8 string=0x00000000005335DC "B"
 *   insn=0x00000000005335E8 string=0x0000000000533788 "@@"
 *   insn=0x0000000000533618 string=0x000000000053361C "`"
 *   insn=0x0000000000533618 string=0x0000000000533708 "`"
 *   insn=0x000000000053361C string=0x0000000000533620 "aj{8"
 *   insn=0x0000000000533628 string=0x000000000053362C "z"
 *   insn=0x0000000000533638 string=0x000000000053363C "x"
 *   insn=0x000000000053363C string=0x0000000000533640 "ajx8"
 *   insn=0x0000000000533644 string=0x0000000000533648 "B"
 *   insn=0x0000000000533650 string=0x0000000000533654 "_<"
 *   insn=0x0000000000533658 string=0x000000000053365C "_"
 *   insn=0x0000000000533658 string=0x00000000005337CC "{"
 *   insn=0x000000000053365C string=0x0000000000533660 "`"
 *   insn=0x0000000000533664 string=0x0000000000533668 "B"
 *   insn=0x0000000000533668 string=0x000000000053366C "_"
 *   insn=0x000000000053366C string=0x0000000000533670 ")"
 *   insn=0x0000000000533688 string=0x000000000053368C "{"
 *   insn=0x0000000000533698 string=0x000000000053369C "a"
 *   insn=0x000000000053369C string=0x00000000005336A0 " "
 *   insn=0x000000000053369C string=0x00000000005336A8 "A"
 *   insn=0x00000000005336AC string=0x00000000005336B0 "!$@"
 *   insn=0x00000000005336B0 string=0x00000000005336B4 " "
 *   insn=0x00000000005336CC string=0x00000000005336D0 "8"
 *   insn=0x00000000005336D8 string=0x00000000005336DC "a"
 *   insn=0x00000000005336E4 string=0x00000000005336E8 "_"
 *   insn=0x00000000005336EC string=0x00000000005336F0 "@"
 *   insn=0x0000000000533714 string=0x0000000000533718 " "
 *   insn=0x000000000053371C string=0x0000000000533720 " "
 *   insn=0x0000000000533750 string=0x0000000000533754 "A"
 *   insn=0x000000000053375C string=0x0000000000533890 "?"
 *   insn=0x0000000000533768 string=0x000000000053376C "?"
 *   insn=0x0000000000533774 string=0x0000000000533778 "{"
 *   insn=0x0000000000533788 string=0x000000000053378C "A"
 *   insn=0x00000000005337CC string=0x00000000005337D0 "aj{8"
 *   insn=0x00000000005337D8 string=0x00000000005337DC "b"
 *   insn=0x000000000053380C string=0x0000000000533810 "c"
 *   insn=0x0000000000533814 string=0x0000000000533818 "?"
 *   insn=0x0000000000533824 string=0x0000000000533828 "?"
 *   insn=0x000000000053382C string=0x0000000000533830 "!"
 *   insn=0x000000000053383C string=0x0000000000533840 "{"
 *   insn=0x0000000000533844 string=0x0000000000533848 "e"
 *   insn=0x0000000000533860 string=0x0000000000533864 "@"
 *   insn=0x0000000000533864 string=0x0000000000533868 "z"
 *   insn=0x0000000000533870 string=0x0000000000533874 "B$@"
 *   insn=0x0000000000533874 string=0x0000000000533878 "@"
 *   insn=0x0000000000533884 string=0x0000000000533888 "a]"
 *   insn=0x0000000000533898 string=0x000000000053389C "{"
 *   insn=0x000000000053389C string=0x00000000005338A0 "O"
 *   insn=0x00000000005338B4 string=0x00000000005338B8 "@"
 *   insn=0x00000000005338C4 string=0x00000000005338C8 "&"
 *   insn=0x00000000005338C8 string=0x00000000005338CC "!@"
 *   insn=0x00000000005338CC string=0x00000000005338D0 "c"
 *   insn=0x00000000005338D4 string=0x00000000005338D8 "?"
 *   insn=0x00000000005338FC string=0x0000000000533900 "{"
 *   insn=0x0000000000533908 string=0x000000000053390C " "
 *   insn=0x000000000053390C string=0x0000000000533910 "3"
 *   insn=0x0000000000533920 string=0x0000000000533924 " h`8 S"
 *   insn=0x0000000000533924 string=0x0000000000533928 " S"
 *   insn=0x000000000053392C string=0x0000000000533930 " "
 *   insn=0x0000000000533938 string=0x000000000053393C "?"
 *   insn=0x0000000000533940 string=0x0000000000533944 "!"
 *   insn=0x0000000000533964 string=0x0000000000533968 "&"
 *   insn=0x0000000000533974 string=0x0000000000533978 "'"
 *   insn=0x0000000000533978 string=0x000000000053397C "!@"
 *   insn=0x000000000053397C string=0x0000000000533980 "c"
 *   insn=0x0000000000533984 string=0x0000000000533988 "{"
 *   insn=0x00000000005339A4 string=0x00000000005339A8 ""
 *   insn=0x00000000005339BC string=0x00000000005339C0 "@"
 *   insn=0x00000000005339C4 string=0x00000000005339C8 "&"
 *   insn=0x00000000005339D0 string=0x00000000005339D4 "!@"
 *   insn=0x00000000005339D4 string=0x00000000005339D8 "c"
 *   insn=0x00000000005339E0 string=0x00000000005339E4 "{"
 *   insn=0x0000000000533A18 string=0x0000000000533A1C "{"
 *   insn=0x0000000000533A1C string=0x0000000000533A20 "#"
 *   insn=0x0000000000533A24 string=0x0000000000533A28 "!@"
 *   insn=0x0000000000533A30 string=0x0000000000533A34 "c"
 *   insn=0x0000000000533A68 string=0x0000000000533A6C "{"
 *   insn=0x0000000000533A6C string=0x0000000000533A70 "E@"
 *   insn=0x0000000000533A70 string=0x0000000000533A74 """
 *   insn=0x0000000000533A78 string=0x0000000000533A7C """
 *   insn=0x0000000000533A80 string=0x0000000000533A84 "!"
 *   insn=0x0000000000533A8C string=0x0000000000533A90 "!"
 *   insn=0x0000000000533A98 string=0x0000000000533A9C "!"
 *   insn=0x0000000000533AA4 string=0x0000000000533AA8 "!"
 *   insn=0x0000000000533AB0 string=0x0000000000533AB4 "!"
 *   insn=0x0000000000533ABC string=0x0000000000533AC0 "!"
 *   insn=0x0000000000533AC8 string=0x0000000000533ACC "!"
 *   insn=0x0000000000533AD4 string=0x0000000000533AD8 "!"
 *   insn=0x0000000000533AE0 string=0x0000000000533AE4 "!"
 *   insn=0x0000000000533AF0 string=0x0000000000533AF4 "!"
 *   insn=0x0000000000533B00 string=0x0000000000533B04 "!@"
 *   insn=0x0000000000533B0C string=0x0000000000533B10 "c"
 *   insn=0x0000000000533B10 string=0x0000000000533B14 "_"
 *   insn=0x0000000000533B48 string=0x0000000000533B4C "CI@"
 *   insn=0x0000000000533B58 string=0x0000000000533B5C "!@"
 *   insn=0x0000000000533B5C string=0x0000000000533B60 "KM@"
 *   insn=0x0000000000533B60 string=0x0000000000533B64 "{"
 *   insn=0x0000000000533B68 string=0x0000000000533B6C "c"
 *   insn=0x0000000000533B6C string=0x0000000000533B70 "JQ@"
 *   insn=0x0000000000533B7C string=0x0000000000533B80 "JU@"
 *   insn=0x0000000000533B88 string=0x0000000000533B8C "JY@"
 *   insn=0x0000000000533B94 string=0x0000000000533B98 "J]@"
 *   insn=0x0000000000533BA0 string=0x0000000000533BA4 "Ja@"
 *   insn=0x0000000000533BB0 string=0x0000000000533BB4 "7"
 *   insn=0x0000000000533BE0 string=0x0000000000533BE4 " h`8"
 *   insn=0x0000000000533BFC string=0x0000000000533C00 "C"
 *   insn=0x0000000000533C38 string=0x0000000000533C3C "!@"
 *   insn=0x0000000000533C60 string=0x0000000000533C64 "?"
 *   insn=0x0000000000533C64 string=0x0000000000533C68 "@"
 *   insn=0x0000000000533C88 string=0x0000000000533C8C "!C"
 *   insn=0x0000000000533C94 string=0x0000000000533C98 " "
 *   insn=0x0000000000533CC4 string=0x0000000000533CC8 "X"
 *   insn=0x0000000000533CEC string=0x0000000000533CF0 "9"
 *   insn=0x0000000000533D0C string=0x0000000000533D10 "#"
 *   insn=0x0000000000533D14 string=0x0000000000533D18 "g"
 *   insn=0x0000000000533D30 string=0x0000000000533D34 "!@"
 *   insn=0x0000000000533D34 string=0x0000000000533D38 "'"
 *   insn=0x0000000000533D50 string=0x0000000000533D54 "{"
 *   insn=0x0000000000533D54 string=0x0000000000533D58 "!"
 *   insn=0x0000000000533D6C string=0x0000000000533D70 "{"
 *   insn=0x0000000000533D70 string=0x0000000000533D74 "#"
 *   insn=0x0000000000533D78 string=0x0000000000533D7C "!@"
 *   insn=0x0000000000533D84 string=0x0000000000533D88 "c"
 *   insn=0x0000000000533DA4 string=0x0000000000533DA8 ""
 *   insn=0x0000000000533DBC string=0x0000000000533DC0 " -"
 *   insn=0x0000000000533DC4 string=0x0000000000533DC8 "`"
 *   insn=0x0000000000533DCC string=0x0000000000533DD0 ","
 *   insn=0x0000000000533DEC string=0x0000000000533DF0 "a"
 *   insn=0x0000000000533DF8 string=0x0000000000533DFC "@@"
 *   insn=0x0000000000533DFC string=0x0000000000533E00 "A"
 *   insn=0x0000000000533E0C string=0x0000000000533E10 "@"
 *   insn=0x0000000000533E28 string=0x0000000000533E2C "{"
 *   insn=0x0000000000533E2C string=0x0000000000533E30 "#@"
 *   insn=0x0000000000533E34 string=0x0000000000533E38 "!@"
 *   insn=0x0000000000533E40 string=0x0000000000533E44 "c"
 *   insn=0x0000000000533E78 string=0x0000000000533E7C "{"
 *   insn=0x0000000000533E7C string=0x0000000000533E80 "E@"
 *   insn=0x0000000000533E80 string=0x0000000000533E84 ""d@"
 *   insn=0x0000000000533E88 string=0x0000000000533E8C ""h@"
 *   insn=0x0000000000533E90 string=0x0000000000533E94 "!l@"
 *   insn=0x0000000000533E9C string=0x0000000000533EA0 "!p@"
 *   insn=0x0000000000533EA8 string=0x0000000000533EAC "!t@"
 *   insn=0x0000000000533EB4 string=0x0000000000533EB8 "!x@"
 *   insn=0x0000000000533EC0 string=0x0000000000533EC4 "!|@"
 *   insn=0x0000000000533ECC string=0x0000000000533ED0 "!"
 *   insn=0x0000000000533ED8 string=0x0000000000533EDC "!"
 *   insn=0x0000000000533EE4 string=0x0000000000533EE8 "!"
 *   insn=0x0000000000533EF0 string=0x0000000000533EF4 "!"
 *   insn=0x0000000000533F00 string=0x0000000000533F04 "!"
 *   insn=0x0000000000533F10 string=0x0000000000533F14 "!@"
 *   insn=0x0000000000533F1C string=0x0000000000533F20 "c"
 *   insn=0x0000000000533F20 string=0x0000000000533F24 "["
 *   insn=0x0000000000533F58 string=0x0000000000533F5C "C-@"
 *   insn=0x0000000000533F68 string=0x0000000000533F6C "!@"
 *   insn=0x0000000000533F6C string=0x0000000000533F70 "K1@"
 *   insn=0x0000000000533F70 string=0x0000000000533F74 "{"
 *   insn=0x0000000000533F78 string=0x0000000000533F7C "c"
 *   insn=0x0000000000533F7C string=0x0000000000533F80 "J5@"
 *   insn=0x0000000000533F8C string=0x0000000000533F90 "J9@"
 *   insn=0x0000000000533F98 string=0x0000000000533F9C "J=@"
 *   insn=0x0000000000533FA4 string=0x0000000000533FA8 "JA@"
 *   insn=0x0000000000533FB0 string=0x0000000000533FB4 "JE@"
 *   insn=0x0000000000533FC0 string=0x0000000000533FC4 "3"
 *   insn=0x0000000000533FE8 string=0x0000000000533FEC "`%"
 *   insn=0x0000000000533FEC string=0x0000000000534498 "@"
 *   insn=0x0000000000533FF4 string=0x0000000000533FF8 "A"
 *   insn=0x0000000000533FF8 string=0x0000000000533FFC "B"
 *   insn=0x0000000000533FF8 string=0x000000000059E388 "%H:%M:%S"
 *   insn=0x0000000000534000 string=0x0000000000534004 "! "
 *   insn=0x0000000000534004 string=0x0000000000534008 "BD"
 *   insn=0x0000000000534008 string=0x000000000053400C "d"
 *   insn=0x000000000053402C string=0x0000000000534030 "!@"
 *   insn=0x0000000000534030 string=0x0000000000534034 "c"
 *   insn=0x000000000053403C string=0x0000000000534040 "{"
 *   insn=0x0000000000534040 string=0x0000000000534044 "="
 *   insn=0x000000000053405C string=0x0000000000534060 "_"
 *   insn=0x0000000000534074 string=0x0000000000534078 "@"
 *   insn=0x0000000000534088 string=0x000000000053408C "!@"
 *   insn=0x000000000053408C string=0x0000000000534090 "c"
 *   insn=0x0000000000534094 string=0x0000000000534098 "{"
 *   insn=0x0000000000534098 string=0x000000000053409C "N"
 *   insn=0x00000000005340B4 string=0x00000000005340B8 "I"
 *   insn=0x00000000005340C4 string=0x0000000000534478 "@"
 *   insn=0x00000000005340CC string=0x00000000005340D0 "A"
 *   insn=0x00000000005340D0 string=0x00000000005340D4 "B"
 *   insn=0x00000000005340D0 string=0x000000000059E380 "%H:%M"
 *   insn=0x00000000005340D8 string=0x00000000005340DC "!"
 *   insn=0x00000000005340DC string=0x00000000005340E0 "B"
 *   insn=0x00000000005340E0 string=0x00000000005340E4 "d"
 *   insn=0x0000000000534104 string=0x0000000000534108 "!@"
 *   insn=0x0000000000534108 string=0x000000000053410C "c"
 *   insn=0x0000000000534114 string=0x0000000000534118 "{"
 *   insn=0x0000000000534118 string=0x000000000053411C ""
 *   insn=0x0000000000534134 string=0x0000000000534138 ")"
 *   insn=0x000000000053414C string=0x0000000000534150 "@"
 *   insn=0x0000000000534160 string=0x0000000000534164 "!@"
 *   insn=0x0000000000534164 string=0x0000000000534168 "c"
 *   insn=0x000000000053416C string=0x0000000000534170 "g"
 *   insn=0x0000000000534170 string=0x0000000000534174 "{"
 *   insn=0x00000000005341A8 string=0x00000000005341AC "@"
 *   insn=0x00000000005341B0 string=0x00000000005341B4 "&"
 *   insn=0x00000000005341BC string=0x00000000005341C0 "!@"
 *   insn=0x00000000005341C0 string=0x00000000005341C4 "c"
 *   insn=0x00000000005341CC string=0x00000000005341D0 "{"
 *   insn=0x0000000000534204 string=0x0000000000534208 "@"
 *   insn=0x0000000000534218 string=0x000000000053421C "!@"
 *   insn=0x000000000053421C string=0x0000000000534220 "c"
 *   insn=0x0000000000534228 string=0x000000000053422C "{"
 *   insn=0x0000000000534258 string=0x00000000005344B8 "@"
 *   insn=0x0000000000534260 string=0x0000000000534264 "A"
 *   insn=0x0000000000534264 string=0x0000000000534268 "B"
 *   insn=0x0000000000534264 string=0x000000000059E370 "%m/%d/%y"
 *   insn=0x000000000053426C string=0x0000000000534270 "!"
 *   insn=0x0000000000534270 string=0x0000000000534274 "B"
 *   insn=0x0000000000534274 string=0x0000000000534278 "d"
 *   insn=0x0000000000534298 string=0x000000000053429C "!@"
 *   insn=0x000000000053429C string=0x00000000005342A0 "c"
 *   insn=0x00000000005342A8 string=0x00000000005342AC "{"
 *   insn=0x00000000005342F4 string=0x00000000005342F8 "!@"
 *   insn=0x00000000005342F8 string=0x00000000005342FC "c"
 *   insn=0x0000000000534324 string=0x0000000000534328 "@\n"
 *   insn=0x0000000000534330 string=0x0000000000534334 "{"
 *   insn=0x0000000000534338 string=0x000000000053433C " "
 *   insn=0x0000000000534344 string=0x0000000000534348 "B$@"
 *   insn=0x0000000000534348 string=0x000000000053434C "@"
 *   insn=0x0000000000534358 string=0x000000000053435C """
 *   insn=0x000000000053439C string=0x00000000005343A0 "@"
 *   insn=0x00000000005343A4 string=0x00000000005343A8 "F"
 *   insn=0x00000000005343B0 string=0x00000000005343B4 "!@"
 *   insn=0x00000000005343B4 string=0x00000000005343B8 "c"
 *   insn=0x00000000005343C0 string=0x00000000005343C4 "{"
 *   insn=0x00000000005343E0 string=0x00000000005343E4 "~"
 *   insn=0x0000000000534408 string=0x000000000053440C "x"
 *   insn=0x000000000053442C string=0x0000000000534430 "'"
 *   insn=0x0000000000534434 string=0x0000000000534438 "?"
 *   insn=0x0000000000534444 string=0x0000000000534448 " "
 *   insn=0x0000000000534450 string=0x0000000000534454 "?"
 *   insn=0x000000000053445C string=0x0000000000534460 "!(@"
 *   insn=0x0000000000534460 string=0x0000000000534464 " "
 *   insn=0x0000000000534488 string=0x000000000053448C "A"
 *   insn=0x0000000000534488 string=0x000000000059E384 "M"
 *   insn=0x000000000053448C string=0x0000000000534490 "@"
 *   insn=0x00000000005344A8 string=0x00000000005344AC "A"
 *   insn=0x00000000005344AC string=0x00000000005344B0 "@ "
 *   insn=0x00000000005344C8 string=0x00000000005344CC "A"
 *   insn=0x00000000005344CC string=0x00000000005344D0 "@ "
 *   insn=0x00000000005344D0 string=0x00000000005344D4 "l"
 *   insn=0x0000000000534504 string=0x0000000000534508 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_533538(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        const char *a9)
{
  __int64 v9; // x20
  _QWORD *v12; // x22
  size_t v13; // x27
  _BYTE *v14; // x28
  unsigned __int64 v15; // x3
  unsigned __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  size_t v20; // x20
  _QWORD *v21; // x2
  _QWORD *v22; // x0
  int v23; // w24
  int v24; // w2
  int v25; // w0
  char *v26; // x24
  int v27; // w0
  size_t v28; // x24
  __int64 v29; // x1
  char *v30; // x26
  int v31; // w2
  __int64 v32; // x2
  int v33; // w0
  unsigned __int8 *v34; // x2
  int v35; // w0
  _QWORD *v37; // x0
  int v38; // w1
  unsigned __int8 *v39; // x0
  char *v40; // x24
  unsigned __int8 v41; // w0
  unsigned __int8 *v42; // x3
  unsigned __int64 v43; // x1
  unsigned __int8 v44; // w0
  int v45; // w2
  int v46; // w1
  unsigned __int64 v47; // x1
  int v48; // w1
  int v49; // w1
  int v50; // w1
  __int64 v51; // x1
  int v52; // w1
  __int64 v53; // x10
  int v54; // w1
  int v55; // w1
  int v56; // w24
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  int v63; // w24
  int v64; // w0
  __int64 v65; // x2
  int v66; // w24
  int v67; // w0
  int v68; // w1
  int v69; // w1
  int v70; // w1
  unsigned int v71; // w0
  __int64 v72; // x1
  char *v73; // x24
  int v74; // w0
  unsigned int v75; // w0
  __int64 v76; // x1
  char *v77; // x24
  int v78; // w0
  unsigned __int64 v79; // x0
  int v80; // w1
  __int64 v81; // x1
  int v82; // w1
  __int64 v83; // x10
  int v84; // w1
  int v85; // w1
  int v86; // w1
  int v87; // w1
  int v88; // w1
  int v89; // w1
  int v90; // w1
  int v91; // w0
  int v92; // w1
  bool v93; // zf
  __int128 *v94; // [xsp+0h] [xbp-20h]
  int v95; // [xsp+88h] [xbp+68h]
  _QWORD *v98; // [xsp+220h] [xbp+200h] BYREF
  __int64 v99; // [xsp+228h] [xbp+208h]
  _QWORD *v100; // [xsp+230h] [xbp+210h] BYREF
  __int64 v101; // [xsp+238h] [xbp+218h]
  int v102; // [xsp+248h] [xbp+228h] BYREF
  int v103; // [xsp+24Ch] [xbp+22Ch] BYREF
  __int128 v104; // [xsp+250h] [xbp+230h] BYREF
  __int64 v105; // [xsp+260h] [xbp+240h]
  __int64 v106; // [xsp+268h] [xbp+248h]
  __int64 v107; // [xsp+270h] [xbp+250h]
  __int64 v108; // [xsp+278h] [xbp+258h]
  __int64 v109; // [xsp+280h] [xbp+260h]
  __int64 v110; // [xsp+288h] [xbp+268h]
  __int64 v111; // [xsp+290h] [xbp+270h]
  __int64 v112; // [xsp+298h] [xbp+278h]
  __int64 v113; // [xsp+2A0h] [xbp+280h]
  __int64 v114; // [xsp+2A8h] [xbp+288h]

  v9 = a6 + 208;
  v100 = a2;
  v101 = a3;
  v98 = a4;
  v99 = a5;
  v12 = sub_52EE14(a6 + 208);
  v13 = 0;
  v14 = sub_52D354(v9);
  v20 = strlen(a9);
  v21 = v100;
  v102 = 0;
  while ( 1 )
  {
    if ( !v21 )
      goto LABEL_24;
    if ( (_DWORD)v101 == -1 )
    {
      v39 = (unsigned __int8 *)v21[2];
      if ( (unsigned __int64)v39 >= v21[3] )
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 72LL))(v21);
        if ( v33 == -1 )
        {
          v100 = 0;
LABEL_24:
          v22 = v98;
          if ( !v98 )
            break;
          v15 = (unsigned int)v99;
          v23 = 1;
          v24 = 0;
          if ( (_DWORD)v99 != -1 )
            goto LABEL_6;
          goto LABEL_26;
        }
      }
      else
      {
        v33 = *v39;
      }
      LODWORD(v101) = v33;
    }
    v22 = v98;
    v23 = 0;
    if ( !v98 )
      goto LABEL_7;
    v15 = (unsigned int)v99;
    v24 = 0;
    if ( (_DWORD)v99 != -1 )
      goto LABEL_6;
LABEL_26:
    v34 = (unsigned __int8 *)v22[2];
    v15 = v22[3];
    if ( (unsigned __int64)v34 >= v15 )
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 72LL))(v22);
      if ( v35 == -1 )
      {
        v98 = 0;
        v24 = 1;
LABEL_6:
        if ( v23 == v24 )
          break;
        goto LABEL_7;
      }
    }
    else
    {
      v35 = *v34;
    }
    LODWORD(v99) = v35;
    if ( !v23 )
      break;
LABEL_7:
    v25 = v102;
    if ( v13 >= v20 || v102 )
      goto LABEL_30;
    v26 = &v14[(unsigned __int8)a9[v13]];
    v27 = (unsigned __int8)v26[313];
    if ( v26[313] )
    {
LABEL_10:
      if ( v27 != 37 )
        goto LABEL_34;
      v28 = v13 + 1;
      v29 = (unsigned __int8)a9[v13 + 1];
      v30 = &v14[v29];
      v31 = (unsigned __int8)v14[v29 + 313];
      if ( !v14[v29 + 313] )
      {
        v44 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 64LL))(v14);
        v31 = v44;
        if ( !v44 )
          goto LABEL_17;
        v30[313] = v44;
      }
      v103 = 0;
      if ( v31 != 79 && v31 != 69 )
      {
        ++v13;
        goto LABEL_15;
      }
      v13 += 2LL;
      v29 = (unsigned __int8)a9[v13];
      v40 = &v14[v29];
      v31 = (unsigned __int8)v14[v29 + 313];
      if ( !v14[v29 + 313] )
      {
        v41 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 64LL))(v14);
        v31 = v41;
        if ( v41 )
        {
          v40[313] = v41;
          goto LABEL_15;
        }
LABEL_16:
        v28 = v13;
LABEL_17:
        v13 = v28;
LABEL_18:
        v21 = v100;
LABEL_19:
        v102 |= 4u;
        goto LABEL_20;
      }
LABEL_15:
      v32 = (unsigned int)(v31 - 65);
      switch ( (int)v32 )
      {
        case 0:
          v83 = v12[2];
          v104 = *(_OWORD *)(v83 + 88);
          ++v13;
          v105 = *(_QWORD *)(v83 + 104);
          v106 = *(_QWORD *)(v12[2] + 112LL);
          v107 = *(_QWORD *)(v12[2] + 120LL);
          v108 = *(_QWORD *)(v12[2] + 128LL);
          v109 = *(_QWORD *)(v12[2] + 136LL);
          v21 = sub_532890(a1, v100, v101, (__int64)v98, v99, a8 + 6, (__int64)&v104, 7, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v84;
          continue;
        case 1:
          v81 = v12[2];
          ++v13;
          v104 = *(_OWORD *)(v81 + 200);
          v105 = *(_QWORD *)(v81 + 216);
          v106 = *(_QWORD *)(v12[2] + 224LL);
          v107 = *(_QWORD *)(v12[2] + 232LL);
          v108 = *(_QWORD *)(v12[2] + 240LL);
          v109 = *(_QWORD *)(v12[2] + 248LL);
          v110 = *(_QWORD *)(v12[2] + 256LL);
          v111 = *(_QWORD *)(v12[2] + 264LL);
          v112 = *(_QWORD *)(v12[2] + 272LL);
          v113 = *(_QWORD *)(v12[2] + 280LL);
          v114 = *(_QWORD *)(v12[2] + 288LL);
          v21 = sub_532890(a1, v100, v101, (__int64)v98, v99, a8 + 4, (__int64)&v104, 12, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v82;
          continue;
        case 2:
        case 24:
        case 56:
          v100 = sub_52D5D4(a1, v100, v101, v98, v99, &v103, 0, 9999, 4u, a6, &v102);
          LODWORD(v101) = v90;
          if ( v102 )
            goto LABEL_81;
          if ( v103 < 0 )
            v91 = v103 + 100;
          else
            v91 = v103 - 1900;
          ++v13;
          v21 = v100;
          a8[5] = v91;
          continue;
        case 3:
          if ( v14[56] == 1 )
          {
            strcpy((char *)&v104, "%m/%d/%y");
          }
          else
          {
            if ( !v14[56] )
              sub_51FEA0(v14, v29, v32, v15, v16, v17, v18, v19, (char)v94);
            (*(void (**)(_BYTE *, const char *, ...))(*(_QWORD *)v14 + 56LL))(v14, "%m/%d/%y", &unk_59E379, &v104);
          }
          goto LABEL_110;
        case 7:
          ++v13;
          v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8 + 2, 0, 23, 2u, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v88;
          continue;
        case 8:
          ++v13;
          v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8 + 2, 1, 12, 2u, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v87;
          continue;
        case 12:
          ++v13;
          v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8 + 1, 0, 59, 2u, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v86;
          continue;
        case 17:
          if ( v14[56] == 1 )
          {
            strcpy((char *)&v104, "%H:%M");
          }
          else
          {
            if ( !v14[56] )
              sub_51FEA0(v14, v29, v32, v15, v16, v17, v18, v19, (char)v94);
            (*(void (**)(_BYTE *, const char *, ...))(*(_QWORD *)v14 + 56LL))(v14, "%H:%M", &unk_59E386, &v104);
          }
          goto LABEL_110;
        case 18:
          ++v13;
          v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8, 0, 61, 2u, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v85;
          continue;
        case 19:
          if ( v14[56] == 1 )
          {
            strcpy((char *)&v104, "%H:%M:%S");
          }
          else
          {
            if ( !v14[56] )
              sub_51FEA0(v14, v29, v32, v15, v16, v17, v18, v19, (char)v94);
            (*(void (**)(_BYTE *, const char *, ...))(*(_QWORD *)v14 + 56LL))(v14, "%H:%M:%S", &unk_59E391, &v104);
          }
LABEL_110:
          v94 = &v104;
          ++v13;
          v21 = (_QWORD *)sub_533538(a1, v100, v101, v98, v99, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v89;
          continue;
        case 23:
          ++v13;
          v94 = *(__int128 **)(v12[2] + 32LL);
          v21 = (_QWORD *)sub_533538(a1, v100, v101, v98, v99, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v70;
          continue;
        case 25:
          if ( (*(_BYTE *)(*((_QWORD *)v14 + 6) + (unsigned __int8)sub_532808((__int64)&v100)) & 1) == 0 )
            goto LABEL_18;
          v100 = sub_532890(a1, v100, v101, (__int64)v98, v99, &v104, (__int64)off_6E8950, 14, a6, &v102);
          LODWORD(v101) = v55;
          v56 = sub_532808((__int64)&v100);
          if ( (v56 == -1) != ((unsigned int)sub_532808((__int64)&v98) == -1) && !v102 && !(_DWORD)v104 )
          {
            v63 = (unsigned __int8)sub_532808((__int64)&v100);
            v64 = v14[56]
                ? (unsigned __int8)v14[102]
                : (unsigned __int8)sub_52B4BC(v14, 45, v57, v58, v59, v60, v61, v62);
            if ( v63 == v64
              || ((v66 = (unsigned __int8)sub_532808((__int64)&v100), !v14[56])
                ? (v67 = (unsigned __int8)sub_52B4BC(v14, 43, v65, v15, v16, v17, v18, v19))
                : (v67 = (unsigned __int8)v14[100]),
                  v66 == v67) )
            {
              v100 = sub_52D5D4(a1, v100, v101, v98, v99, &v104, 0, 23, 2u, a6, &v102);
              LODWORD(v101) = v68;
              v100 = sub_52D5D4(a1, v100, v68, v98, v99, &v104, 0, 59, 2u, a6, &v102);
              LODWORD(v101) = v69;
            }
          }
LABEL_81:
          v21 = v100;
          ++v13;
          continue;
        case 32:
          v53 = v12[2];
          v104 = *(_OWORD *)(v53 + 144);
          ++v13;
          v105 = *(_QWORD *)(v53 + 160);
          v106 = *(_QWORD *)(v12[2] + 168LL);
          v107 = *(_QWORD *)(v12[2] + 176LL);
          v108 = *(_QWORD *)(v12[2] + 184LL);
          v109 = *(_QWORD *)(v12[2] + 192LL);
          v21 = sub_532890(a1, v100, v101, (__int64)v98, v99, a8 + 6, (__int64)&v104, 7, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v54;
          continue;
        case 33:
        case 39:
          v51 = v12[2];
          ++v13;
          v104 = *(_OWORD *)(v51 + 296);
          v105 = *(_QWORD *)(v51 + 312);
          v106 = *(_QWORD *)(v12[2] + 320LL);
          v107 = *(_QWORD *)(v12[2] + 328LL);
          v108 = *(_QWORD *)(v12[2] + 336LL);
          v109 = *(_QWORD *)(v12[2] + 344LL);
          v110 = *(_QWORD *)(v12[2] + 352LL);
          v111 = *(_QWORD *)(v12[2] + 360LL);
          v112 = *(_QWORD *)(v12[2] + 368LL);
          v113 = *(_QWORD *)(v12[2] + 376LL);
          v114 = *(_QWORD *)(v12[2] + 384LL);
          v21 = sub_532890(a1, v100, v101, (__int64)v98, v99, a8 + 4, (__int64)&v104, 12, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v52;
          continue;
        case 34:
          ++v13;
          v94 = *(__int128 **)(v12[2] + 48LL);
          v21 = (_QWORD *)sub_533538(a1, v100, v101, v98, v99, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v50;
          continue;
        case 35:
          ++v13;
          v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8 + 3, 1, 31, 2u, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v49;
          continue;
        case 36:
          if ( (*(_BYTE *)(*((_QWORD *)v14 + 6) + (unsigned __int8)sub_532808((__int64)&v100)) & 8) != 0 )
          {
            if ( v100 )
            {
              v47 = v100[2];
              if ( v47 >= v100[3] )
                sub_52B4A0((__int64)v100);
              else
                v100[2] = v47 + 1;
              LODWORD(v101) = -1;
            }
            ++v13;
            v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8 + 3, 1, 9, 1u, a6, &v102);
            v100 = v21;
            LODWORD(v101) = v48;
          }
          else
          {
            ++v13;
            v21 = sub_52D5D4(a1, v100, v101, v98, v99, a8 + 3, 10, 31, 2u, a6, &v102);
            v100 = v21;
            LODWORD(v101) = v92;
          }
          continue;
        case 44:
          v100 = sub_52D5D4(a1, v100, v101, v98, v99, &v103, 1, 12, 2u, a6, &v102);
          LODWORD(v101) = v46;
          v21 = v100;
          if ( v102 )
            goto LABEL_20;
          ++v13;
          a8[4] = v103 - 1;
          continue;
        case 45:
          v75 = sub_532808((__int64)&v100);
          v76 = v75;
          v77 = &v14[(unsigned __int8)v75];
          v78 = (unsigned __int8)v77[313];
          if ( v77[313] )
            goto LABEL_87;
          LOBYTE(v78) = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, v76, 0);
          if ( (_BYTE)v78 )
          {
            v77[313] = v78;
            v78 = (unsigned __int8)v78;
LABEL_87:
            if ( v78 == 10 )
              goto LABEL_88;
          }
          goto LABEL_18;
        case 51:
          v71 = sub_532808((__int64)&v100);
          v72 = v71;
          v73 = &v14[(unsigned __int8)v71];
          v74 = (unsigned __int8)v73[313];
          if ( v73[313] )
            goto LABEL_84;
          LOBYTE(v74) = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, v72, 0);
          if ( !(_BYTE)v74 )
            goto LABEL_18;
          v73[313] = v74;
          v74 = (unsigned __int8)v74;
LABEL_84:
          if ( v74 != 9 )
          {
            v21 = v100;
            goto LABEL_19;
          }
LABEL_88:
          v21 = v100;
          if ( !v100 )
            goto LABEL_20;
          v79 = v100[2];
          if ( v79 >= v100[3] )
          {
            sub_52B4A0((__int64)v100);
            v21 = v100;
          }
          else
          {
            v100[2] = v79 + 1;
          }
          break;
        case 55:
          ++v13;
          v94 = *(__int128 **)(v12[2] + 16LL);
          v21 = (_QWORD *)sub_533538(a1, v100, v101, v98, v99, a6, &v102);
          v100 = v21;
          LODWORD(v101) = v80;
          continue;
        default:
          goto LABEL_16;
      }
LABEL_51:
      ++v13;
      LODWORD(v101) = -1;
    }
    else
    {
      LOBYTE(v27) = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 64LL))(v14);
      if ( (_BYTE)v27 )
      {
        v26[313] = v27;
        v27 = (unsigned __int8)v27;
        goto LABEL_10;
      }
LABEL_34:
      v37 = v100;
      v38 = (unsigned __int8)a9[v13];
      v21 = v100;
      if ( !v100 )
        goto LABEL_56;
      v15 = (unsigned int)v101;
      if ( (_DWORD)v101 != -1 )
      {
        if ( v38 == (unsigned __int8)v101 )
          goto LABEL_48;
        goto LABEL_37;
      }
      v42 = (unsigned __int8 *)v100[2];
      v16 = v100[3];
      if ( (unsigned __int64)v42 >= v16 )
      {
        v95 = (unsigned __int8)a9[v13];
        v45 = (*(__int64 (**)(void))(*v100 + 72LL))();
        v38 = v95;
        if ( v45 == -1 )
        {
          v100 = 0;
LABEL_56:
          v21 = 0;
          if ( v38 != 255 )
            goto LABEL_37;
          ++v13;
        }
        else
        {
          v37 = v100;
          v93 = v95 == (unsigned __int8)v45;
          LODWORD(v101) = v45;
          v21 = v100;
          if ( !v93 )
            goto LABEL_37;
          if ( v100 )
          {
            v43 = v100[2];
            if ( v43 >= v100[3] )
            {
LABEL_126:
              (*(void (__fastcall **)(_QWORD *))(*v37 + 80LL))(v37);
              v37 = v100;
              goto LABEL_50;
            }
LABEL_49:
            v37[2] = v43 + 1;
LABEL_50:
            v21 = v37;
            goto LABEL_51;
          }
LABEL_20:
          ++v13;
        }
      }
      else
      {
        v15 = *v42;
        LODWORD(v101) = v15;
        if ( v38 == (_DWORD)v15 )
        {
LABEL_48:
          v43 = v100[2];
          if ( v43 >= v100[3] )
            goto LABEL_126;
          goto LABEL_49;
        }
LABEL_37:
        ++v13;
        v102 |= 4u;
      }
    }
  }
  v25 = v102;
LABEL_30:
  if ( v25 || v13 != v20 )
    *a7 |= 4u;
  return v100;
}

