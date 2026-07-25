/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003946D8
 * Mangled: _ZN5Caver12MainMenuViewD2Ev
 * Demangled: Caver::MainMenuView::~MainMenuView()
 *
 * Callers: 1
 *   0x00000000001FFF30  Caver::MainMenuView::~MainMenuView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000039566C  Caver::MainMenuView::~MainMenuView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 366
 *   insn=0x00000000003946F0 string=0x00000000003946F4 "tJA"
 *   insn=0x00000000003946F4 string=0x00000000003946F8 "9B"
 *   insn=0x00000000003946F8 string=0x00000000003946FC "A"
 *   insn=0x00000000003946FC string=0x0000000000394700 "h"
 *   insn=0x0000000000394700 string=0x0000000000394704 "4"
 *   insn=0x0000000000394704 string=0x0000000000394748 "tBA"
 *   insn=0x0000000000394708 string=0x000000000039470C ""
 *   insn=0x0000000000394718 string=0x000000000039471C "\t@"
 *   insn=0x0000000000394728 string=0x000000000039472C ""
 *   insn=0x0000000000394738 string=0x000000000039473C "@"
 *   insn=0x0000000000394748 string=0x000000000039474C "4"
 *   insn=0x000000000039474C string=0x0000000000394790 "t:A"
 *   insn=0x0000000000394750 string=0x0000000000394754 ""
 *   insn=0x0000000000394760 string=0x0000000000394764 "\t@"
 *   insn=0x0000000000394770 string=0x0000000000394774 ""
 *   insn=0x0000000000394780 string=0x0000000000394784 "@"
 *   insn=0x0000000000394790 string=0x0000000000394794 "4"
 *   insn=0x0000000000394794 string=0x00000000003947D8 "t2A"
 *   insn=0x0000000000394798 string=0x000000000039479C ""
 *   insn=0x00000000003947A8 string=0x00000000003947AC "\t@"
 *   insn=0x00000000003947B8 string=0x00000000003947BC ""
 *   insn=0x00000000003947C8 string=0x00000000003947CC "@"
 *   insn=0x00000000003947D8 string=0x00000000003947DC "4"
 *   insn=0x00000000003947DC string=0x0000000000394820 "t*A"
 *   insn=0x00000000003947E0 string=0x00000000003947E4 ""
 *   insn=0x00000000003947F0 string=0x00000000003947F4 "\t@"
 *   insn=0x0000000000394800 string=0x0000000000394804 ""
 *   insn=0x0000000000394810 string=0x0000000000394814 "@"
 *   insn=0x0000000000394820 string=0x0000000000394824 "4"
 *   insn=0x0000000000394824 string=0x0000000000394868 "t"A"
 *   insn=0x0000000000394828 string=0x000000000039482C ""
 *   insn=0x0000000000394838 string=0x000000000039483C "\t@"
 *   insn=0x0000000000394848 string=0x000000000039484C ""
 *   insn=0x0000000000394858 string=0x000000000039485C "@"
 *   insn=0x0000000000394868 string=0x000000000039486C "4"
 *   insn=0x000000000039486C string=0x00000000003948B0 "t"
 *   insn=0x0000000000394870 string=0x0000000000394874 ""
 *   insn=0x0000000000394880 string=0x0000000000394884 "\t@"
 *   insn=0x0000000000394890 string=0x0000000000394894 ""
 *   insn=0x00000000003948A0 string=0x00000000003948A4 "@"
 *   insn=0x00000000003948B0 string=0x00000000003948B4 "4"
 *   insn=0x00000000003948B4 string=0x00000000003948F8 "t"
 *   insn=0x00000000003948B8 string=0x00000000003948BC ""
 *   insn=0x00000000003948C8 string=0x00000000003948CC "\t@"
 *   insn=0x00000000003948D8 string=0x00000000003948DC ""
 *   insn=0x00000000003948E8 string=0x00000000003948EC "@"
 *   insn=0x00000000003948F8 string=0x00000000003948FC "4"
 *   insn=0x00000000003948FC string=0x0000000000394940 "t\nA"
 *   insn=0x0000000000394900 string=0x0000000000394904 ""
 *   insn=0x0000000000394910 string=0x0000000000394914 "\t@"
 *   insn=0x0000000000394920 string=0x0000000000394924 ""
 *   insn=0x0000000000394930 string=0x0000000000394934 "@"
 *   insn=0x0000000000394940 string=0x0000000000394944 "4"
 *   insn=0x0000000000394944 string=0x0000000000394988 "t"
 *   insn=0x0000000000394948 string=0x000000000039494C ""
 *   insn=0x0000000000394958 string=0x000000000039495C "\t@"
 *   insn=0x0000000000394968 string=0x000000000039496C ""
 *   insn=0x0000000000394978 string=0x000000000039497C "@"
 *   insn=0x0000000000394988 string=0x000000000039498C "4"
 *   insn=0x000000000039498C string=0x00000000003949D0 "`"
 *   insn=0x0000000000394990 string=0x0000000000394994 ""
 *   insn=0x00000000003949A0 string=0x00000000003949A4 "\t@"
 *   insn=0x00000000003949B0 string=0x00000000003949B4 ""
 *   insn=0x00000000003949C0 string=0x00000000003949C4 "@"
 *   insn=0x00000000003949D4 string=0x00000000003949D8 "@"
 *   insn=0x00000000003949D4 string=0x00000000003949F4 "`"
 *   insn=0x00000000003949D8 string=0x00000000003949DC ""
 *   insn=0x00000000003949DC string=0x00000000003949E0 ""
 *   insn=0x00000000003949E4 string=0x00000000003949E8 ""
 *   insn=0x00000000003949E8 string=0x00000000003949EC ""
 *   insn=0x00000000003949F8 string=0x00000000003949FC "@"
 *   insn=0x00000000003949F8 string=0x0000000000394A18 "`"
 *   insn=0x00000000003949FC string=0x0000000000394A00 ""
 *   insn=0x0000000000394A00 string=0x0000000000394A04 ""
 *   insn=0x0000000000394A08 string=0x0000000000394A0C ""
 *   insn=0x0000000000394A0C string=0x0000000000394A10 ""
 *   insn=0x0000000000394A1C string=0x0000000000394A20 "@"
 *   insn=0x0000000000394A1C string=0x0000000000394A3C "`"
 *   insn=0x0000000000394A20 string=0x0000000000394A24 ""
 *   insn=0x0000000000394A24 string=0x0000000000394A28 ""
 *   insn=0x0000000000394A2C string=0x0000000000394A30 ""
 *   insn=0x0000000000394A30 string=0x0000000000394A34 ""
 *   insn=0x0000000000394A40 string=0x0000000000394A44 "@"
 *   insn=0x0000000000394A40 string=0x0000000000394A60 "t"
 *   insn=0x0000000000394A44 string=0x0000000000394A48 ""
 *   insn=0x0000000000394A48 string=0x0000000000394A4C ""
 *   insn=0x0000000000394A50 string=0x0000000000394A54 ""
 *   insn=0x0000000000394A54 string=0x0000000000394A58 ""
 *   insn=0x0000000000394A60 string=0x0000000000394A64 "4"
 *   insn=0x0000000000394A64 string=0x0000000000394AA8 "t"
 *   insn=0x0000000000394A68 string=0x0000000000394A6C ""
 *   insn=0x0000000000394A78 string=0x0000000000394A7C "\t@"
 *   insn=0x0000000000394A88 string=0x0000000000394A8C ""
 *   insn=0x0000000000394A98 string=0x0000000000394A9C "@"
 *   insn=0x0000000000394AA8 string=0x0000000000394AAC "4"
 *   insn=0x0000000000394AAC string=0x0000000000394AF0 "t"
 *   insn=0x0000000000394AB0 string=0x0000000000394AB4 ""
 *   insn=0x0000000000394AC0 string=0x0000000000394AC4 "\t@"
 *   insn=0x0000000000394AD0 string=0x0000000000394AD4 ""
 *   insn=0x0000000000394AE0 string=0x0000000000394AE4 "@"
 *   insn=0x0000000000394AF0 string=0x0000000000394AF4 "4"
 *   insn=0x0000000000394AF4 string=0x0000000000394B38 "t"
 *   insn=0x0000000000394AF8 string=0x0000000000394AFC ""
 *   insn=0x0000000000394B08 string=0x0000000000394B0C "\t@"
 *   insn=0x0000000000394B18 string=0x0000000000394B1C ""
 *   insn=0x0000000000394B28 string=0x0000000000394B2C "@"
 *   insn=0x0000000000394B40 string=0x0000000000394B9C "t"
 *   insn=0x0000000000394B44 string=0x0000000000394B48 "5"
 *   insn=0x0000000000394B4C string=0x0000000000394B50 ""
 *   insn=0x0000000000394B5C string=0x0000000000394B60 "\t@"
 *   insn=0x0000000000394B6C string=0x0000000000394B70 ""
 *   insn=0x0000000000394B7C string=0x0000000000394B80 "@"
 *   insn=0x0000000000394B94 string=0x0000000000394B98 "t"
 *   insn=0x0000000000394B9C string=0x0000000000394BA8 "t"
 *   insn=0x0000000000394BA4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000394BA8 string=0x0000000000394BAC "4"
 *   insn=0x0000000000394BAC string=0x0000000000394BF0 "t"
 *   insn=0x0000000000394BB0 string=0x0000000000394BB4 ""
 *   insn=0x0000000000394BC0 string=0x0000000000394BC4 "\t@"
 *   insn=0x0000000000394BD0 string=0x0000000000394BD4 ""
 *   insn=0x0000000000394BE0 string=0x0000000000394BE4 "@"
 *   insn=0x0000000000394BF0 string=0x0000000000394BF4 "4"
 *   insn=0x0000000000394BF4 string=0x0000000000394C38 "t"
 *   insn=0x0000000000394BF8 string=0x0000000000394BFC ""
 *   insn=0x0000000000394C08 string=0x0000000000394C0C "\t@"
 *   insn=0x0000000000394C18 string=0x0000000000394C1C ""
 *   insn=0x0000000000394C28 string=0x0000000000394C2C "@"
 *   insn=0x0000000000394C38 string=0x0000000000394C3C "4"
 *   insn=0x0000000000394C3C string=0x0000000000394C80 "t"
 *   insn=0x0000000000394C40 string=0x0000000000394C44 ""
 *   insn=0x0000000000394C50 string=0x0000000000394C54 "\t@"
 *   insn=0x0000000000394C60 string=0x0000000000394C64 ""
 *   insn=0x0000000000394C70 string=0x0000000000394C74 "@"
 *   insn=0x0000000000394C80 string=0x0000000000394C84 "4"
 *   insn=0x0000000000394C84 string=0x0000000000394CC8 "t"
 *   insn=0x0000000000394C88 string=0x0000000000394C8C ""
 *   insn=0x0000000000394C98 string=0x0000000000394C9C "\t@"
 *   insn=0x0000000000394CA8 string=0x0000000000394CAC ""
 *   insn=0x0000000000394CB8 string=0x0000000000394CBC "@"
 *   insn=0x0000000000394CC8 string=0x0000000000394CCC "4"
 *   insn=0x0000000000394CCC string=0x0000000000394D10 "t"
 *   insn=0x0000000000394CD0 string=0x0000000000394CD4 ""
 *   insn=0x0000000000394CE0 string=0x0000000000394CE4 "\t@"
 *   insn=0x0000000000394CF0 string=0x0000000000394CF4 ""
 *   insn=0x0000000000394D00 string=0x0000000000394D04 "@"
 *   insn=0x0000000000394D10 string=0x0000000000394D14 "4"
 *   insn=0x0000000000394D14 string=0x0000000000394D58 "t"
 *   insn=0x0000000000394D18 string=0x0000000000394D1C ""
 *   insn=0x0000000000394D28 string=0x0000000000394D2C "\t@"
 *   insn=0x0000000000394D38 string=0x0000000000394D3C ""
 *   insn=0x0000000000394D48 string=0x0000000000394D4C "@"
 *   insn=0x0000000000394D58 string=0x0000000000394D5C "4"
 *   insn=0x0000000000394D5C string=0x0000000000394DA0 "t"
 *   insn=0x0000000000394D60 string=0x0000000000394D64 ""
 *   insn=0x0000000000394D70 string=0x0000000000394D74 "\t@"
 *   insn=0x0000000000394D80 string=0x0000000000394D84 ""
 *   insn=0x0000000000394D90 string=0x0000000000394D94 "@"
 *   insn=0x0000000000394DA0 string=0x0000000000394DA4 "4"
 *   insn=0x0000000000394DA8 string=0x0000000000394DAC ""
 *   insn=0x0000000000394DB8 string=0x0000000000394DBC "\t@"
 *   insn=0x0000000000394DC8 string=0x0000000000394DCC ""
 *   insn=0x0000000000394DD8 string=0x0000000000394DDC "@"
 *   insn=0x0000000000394DF8 string=0x0000000000394DFC ""
 *   insn=0x0000000000394E00 string=0x0000000000394E04 "u"
 *   insn=0x0000000000394E04 string=0x0000000000394E08 "u$"
 *   insn=0x0000000000394E08 string=0x0000000000394E0C "2"
 *   insn=0x0000000000394E0C string=0x00000000003952D4 "u"
 *   insn=0x0000000000394E10 string=0x0000000000394E14 "`"
 *   insn=0x0000000000394E18 string=0x0000000000395270 "@"
 *   insn=0x0000000000394E1C string=0x000000000039528C "u"
 *   insn=0x0000000000394E20 string=0x0000000000394E24 "`"
 *   insn=0x0000000000394E24 string=0x0000000000394E28 " !"
 *   insn=0x0000000000394E28 string=0x000000000039524C "@"
 *   insn=0x0000000000394E2C string=0x0000000000395268 "`"
 *   insn=0x0000000000394E30 string=0x0000000000394E34 "`"
 *   insn=0x0000000000394E38 string=0x0000000000395228 "@"
 *   insn=0x0000000000394E3C string=0x0000000000395244 "`"
 *   insn=0x0000000000394E48 string=0x0000000000394E4C "u"
 *   insn=0x0000000000394E58 string=0x0000000000394E5C "u"
 *   insn=0x0000000000394E5C string=0x0000000000394E60 "U;"
 *   insn=0x0000000000394E64 string=0x0000000000395608 "u"
 *   insn=0x0000000000394E68 string=0x0000000000394E6C "u"
 *   insn=0x0000000000394E74 string=0x00000000003955C0 "u"
 *   insn=0x0000000000394E78 string=0x0000000000394E7C "u"
 *   insn=0x0000000000394E84 string=0x0000000000395578 "u"
 *   insn=0x0000000000394E88 string=0x0000000000394E8C "u"
 *   insn=0x0000000000394E94 string=0x0000000000395530 "u"
 *   insn=0x0000000000394E98 string=0x0000000000394E9C "u"
 *   insn=0x0000000000394E9C string=0x0000000000394EA0 "U0"
 *   insn=0x0000000000394EA4 string=0x00000000003954E8 "u"
 *   insn=0x0000000000394EA8 string=0x0000000000394EAC "u"
 *   insn=0x0000000000394EB0 string=0x0000000000394EB4 "{"
 *   insn=0x0000000000394EB4 string=0x00000000003954A0 "u"
 *   insn=0x0000000000394EB8 string=0x0000000000394EBC "*"
 *   insn=0x0000000000394EBC string=0x0000000000395364 "u"
 *   insn=0x0000000000394EC0 string=0x0000000000394EC4 "u"
 *   insn=0x0000000000394EC8 string=0x0000000000394ECC "&"
 *   insn=0x0000000000394ED0 string=0x0000000000394ED4 "u"
 *   insn=0x0000000000394ED4 string=0x0000000000394ED8 "5 "
 *   insn=0x0000000000394EDC string=0x000000000039531C "u"
 *   insn=0x0000000000394EE0 string=0x0000000000394EE4 "`"
 *   insn=0x0000000000394EE8 string=0x0000000000395204 "@"
 *   insn=0x0000000000394EEC string=0x0000000000395220 "`"
 *   insn=0x0000000000394EF0 string=0x0000000000394EF4 "u"
 *   insn=0x0000000000394EF4 string=0x0000000000394EF8 "5"
 *   insn=0x0000000000394EFC string=0x00000000003951FC "`"
 *   insn=0x0000000000394F00 string=0x0000000000394F04 "u\nA"
 *   insn=0x0000000000394F04 string=0x0000000000394F08 "u"
 *   insn=0x0000000000394F0C string=0x00000000003951B4 "u"
 *   insn=0x0000000000394F10 string=0x0000000000394F14 "u"
 *   insn=0x0000000000394F1C string=0x000000000039516C "u\nA"
 *   insn=0x0000000000394F20 string=0x0000000000394F24 "u"
 *   insn=0x0000000000394F28 string=0x0000000000394F2C "~"
 *   insn=0x0000000000394F2C string=0x0000000000395124 "u"
 *   insn=0x0000000000394F30 string=0x0000000000394F34 "u"A"
 *   insn=0x0000000000394F34 string=0x0000000000394F38 "5"
 *   insn=0x0000000000394F38 string=0x0000000000394F3C "h"
 *   insn=0x0000000000394F3C string=0x00000000003950DC "u"
 *   insn=0x0000000000394F40 string=0x0000000000394F44 "u*A"
 *   insn=0x0000000000394F44 string=0x0000000000394F48 "u"
 *   insn=0x0000000000394F48 string=0x0000000000394F4C "R"
 *   insn=0x0000000000394F4C string=0x0000000000395094 "u"A"
 *   insn=0x0000000000394F50 string=0x0000000000394F54 "u2A"
 *   insn=0x0000000000394F58 string=0x0000000000394F5C "<"
 *   insn=0x0000000000394F5C string=0x000000000039504C "u*A"
 *   insn=0x0000000000394F60 string=0x0000000000394F64 "u:A"
 *   insn=0x0000000000394F68 string=0x0000000000394F6C "&"
 *   insn=0x0000000000394F6C string=0x0000000000395004 "u2A"
 *   insn=0x0000000000394F74 string=0x0000000000394F78 "5"
 *   insn=0x0000000000394F78 string=0x0000000000394FBC "u:A"
 *   insn=0x0000000000394F7C string=0x0000000000394F80 ""
 *   insn=0x0000000000394F8C string=0x0000000000394F90 "\t@"
 *   insn=0x0000000000394F9C string=0x0000000000394FA0 ""
 *   insn=0x0000000000394FAC string=0x0000000000394FB0 "@"
 *   insn=0x0000000000394FBC string=0x0000000000394FC0 "5"
 *   insn=0x0000000000394FC4 string=0x0000000000394FC8 ""
 *   insn=0x0000000000394FD4 string=0x0000000000394FD8 "\t@"
 *   insn=0x0000000000394FE4 string=0x0000000000394FE8 ""
 *   insn=0x0000000000394FF4 string=0x0000000000394FF8 "@"
 *   insn=0x0000000000395004 string=0x0000000000395008 "5"
 *   insn=0x000000000039500C string=0x0000000000395010 ""
 *   insn=0x000000000039501C string=0x0000000000395020 "\t@"
 *   insn=0x000000000039502C string=0x0000000000395030 ""
 *   insn=0x000000000039503C string=0x0000000000395040 "@"
 *   insn=0x000000000039504C string=0x0000000000395050 "5"
 *   insn=0x0000000000395054 string=0x0000000000395058 ""
 *   insn=0x0000000000395064 string=0x0000000000395068 "\t@"
 *   insn=0x0000000000395074 string=0x0000000000395078 ""
 *   insn=0x0000000000395084 string=0x0000000000395088 "@"
 *   insn=0x0000000000395094 string=0x0000000000395098 "5"
 *   insn=0x000000000039509C string=0x00000000003950A0 ""
 *   insn=0x00000000003950AC string=0x00000000003950B0 "\t@"
 *   insn=0x00000000003950BC string=0x00000000003950C0 ""
 *   insn=0x00000000003950CC string=0x00000000003950D0 "@"
 *   insn=0x00000000003950DC string=0x00000000003950E0 "5"
 *   insn=0x00000000003950E4 string=0x00000000003950E8 ""
 *   insn=0x00000000003950F4 string=0x00000000003950F8 "\t@"
 *   insn=0x0000000000395104 string=0x0000000000395108 ""
 *   insn=0x0000000000395114 string=0x0000000000395118 "@"
 *   insn=0x0000000000395124 string=0x0000000000395128 "5"
 *   insn=0x000000000039512C string=0x0000000000395130 ""
 *   insn=0x000000000039513C string=0x0000000000395140 "\t@"
 *   insn=0x000000000039514C string=0x0000000000395150 ""
 *   insn=0x000000000039515C string=0x0000000000395160 "@"
 *   insn=0x000000000039516C string=0x0000000000395170 "5"
 *   insn=0x0000000000395174 string=0x0000000000395178 ""
 *   insn=0x0000000000395184 string=0x0000000000395188 "\t@"
 *   insn=0x0000000000395194 string=0x0000000000395198 ""
 *   insn=0x00000000003951A4 string=0x00000000003951A8 "@"
 *   insn=0x00000000003951B4 string=0x00000000003951B8 "5"
 *   insn=0x00000000003951BC string=0x00000000003951C0 ""
 *   insn=0x00000000003951CC string=0x00000000003951D0 "\t@"
 *   insn=0x00000000003951DC string=0x00000000003951E0 ""
 *   insn=0x00000000003951EC string=0x00000000003951F0 "@"
 *   insn=0x0000000000395204 string=0x0000000000395208 ""
 *   insn=0x0000000000395208 string=0x000000000039520C ""
 *   insn=0x0000000000395210 string=0x0000000000395214 ""
 *   insn=0x0000000000395214 string=0x0000000000395218 ""
 *   insn=0x0000000000395228 string=0x000000000039522C ""
 *   insn=0x000000000039522C string=0x0000000000395230 ""
 *   insn=0x0000000000395234 string=0x0000000000395238 ""
 *   insn=0x0000000000395238 string=0x000000000039523C ""
 *   insn=0x000000000039524C string=0x0000000000395250 ""
 *   insn=0x0000000000395250 string=0x0000000000395254 ""
 *   insn=0x0000000000395258 string=0x000000000039525C ""
 *   insn=0x000000000039525C string=0x0000000000395260 ""
 *   insn=0x0000000000395270 string=0x0000000000395274 ""
 *   insn=0x0000000000395274 string=0x0000000000395278 ""
 *   insn=0x000000000039527C string=0x0000000000395280 ""
 *   insn=0x0000000000395280 string=0x0000000000395284 ""
 *   insn=0x000000000039528C string=0x0000000000395290 "5"
 *   insn=0x0000000000395294 string=0x0000000000395298 ""
 *   insn=0x00000000003952A4 string=0x00000000003952A8 "\t@"
 *   insn=0x00000000003952B4 string=0x00000000003952B8 ""
 *   insn=0x00000000003952C4 string=0x00000000003952C8 "@"
 *   insn=0x00000000003952D4 string=0x00000000003952D8 "5"
 *   insn=0x00000000003952DC string=0x00000000003952E0 ""
 *   insn=0x00000000003952EC string=0x00000000003952F0 "\t@"
 *   insn=0x00000000003952FC string=0x0000000000395300 ""
 *   insn=0x000000000039530C string=0x0000000000395310 "@"
 *   insn=0x000000000039531C string=0x0000000000395320 "5"
 *   insn=0x0000000000395324 string=0x0000000000395328 ""
 *   insn=0x0000000000395334 string=0x0000000000395338 "\t@"
 *   insn=0x0000000000395344 string=0x0000000000395348 ""
 *   insn=0x0000000000395354 string=0x0000000000395358 "@"
 *   insn=0x000000000039536C string=0x00000000003953CC "5"
 *   insn=0x0000000000395370 string=0x0000000000395374 "H"
 *   insn=0x0000000000395374 string=0x0000000000395378 "\t"
 *   insn=0x0000000000395378 string=0x000000000039537C ")"
 *   insn=0x000000000039537C string=0x0000000000395380 "\t"
 *   insn=0x0000000000395384 string=0x0000000000395388 "\t"
 *   insn=0x0000000000395388 string=0x000000000039538C ")\t@"
 *   insn=0x0000000000395394 string=0x0000000000395398 " "
 *   insn=0x000000000039539C string=0x00000000003953A0 "@"
 *   insn=0x00000000003953A0 string=0x00000000003953A4 ""
 *   insn=0x00000000003953A4 string=0x00000000003953A8 ""
 *   insn=0x00000000003953AC string=0x00000000003953B0 ""
 *   insn=0x00000000003953B0 string=0x00000000003953B4 "@"
 *   insn=0x00000000003953C0 string=0x00000000003953C4 "a"
 *   insn=0x00000000003953C4 string=0x00000000003953C8 "u"
 *   insn=0x00000000003953CC string=0x0000000000395410 "u"
 *   insn=0x00000000003953DC string=0x00000000003953E0 "h"
 *   insn=0x00000000003953F8 string=0x00000000003953FC "h"
 *   insn=0x0000000000395400 string=0x0000000000395404 "h"
 *   insn=0x0000000000395410 string=0x0000000000395414 "5"
 *   insn=0x0000000000395414 string=0x0000000000395458 "u"
 *   insn=0x0000000000395418 string=0x000000000039541C ""
 *   insn=0x0000000000395428 string=0x000000000039542C "\t@"
 *   insn=0x0000000000395438 string=0x000000000039543C ""
 *   insn=0x0000000000395448 string=0x000000000039544C "@"
 *   insn=0x0000000000395458 string=0x000000000039545C "5"
 *   insn=0x0000000000395460 string=0x0000000000395464 ""
 *   insn=0x0000000000395470 string=0x0000000000395474 "\t@"
 *   insn=0x0000000000395480 string=0x0000000000395484 ""
 *   insn=0x0000000000395490 string=0x0000000000395494 "@"
 *   insn=0x00000000003954A0 string=0x00000000003954A4 "5"
 *   insn=0x00000000003954A8 string=0x00000000003954AC ""
 *   insn=0x00000000003954B8 string=0x00000000003954BC "\t@"
 *   insn=0x00000000003954C8 string=0x00000000003954CC ""
 *   insn=0x00000000003954D8 string=0x00000000003954DC "@"
 *   insn=0x00000000003954E8 string=0x00000000003954EC "5"
 *   insn=0x00000000003954F0 string=0x00000000003954F4 ""
 *   insn=0x0000000000395500 string=0x0000000000395504 "\t@"
 *   insn=0x0000000000395510 string=0x0000000000395514 ""
 *   insn=0x0000000000395520 string=0x0000000000395524 "@"
 *   insn=0x0000000000395530 string=0x0000000000395534 "5"
 *   insn=0x0000000000395538 string=0x000000000039553C ""
 *   insn=0x0000000000395548 string=0x000000000039554C "\t@"
 *   insn=0x0000000000395558 string=0x000000000039555C ""
 *   insn=0x0000000000395568 string=0x000000000039556C "@"
 *   insn=0x0000000000395578 string=0x000000000039557C "5"
 *   insn=0x0000000000395580 string=0x0000000000395584 ""
 *   insn=0x0000000000395590 string=0x0000000000395594 "\t@"
 *   insn=0x00000000003955A0 string=0x00000000003955A4 ""
 *   insn=0x00000000003955B0 string=0x00000000003955B4 "@"
 *   insn=0x00000000003955C0 string=0x00000000003955C4 "5"
 *   insn=0x00000000003955C8 string=0x00000000003955CC ""
 *   insn=0x00000000003955D8 string=0x00000000003955DC "\t@"
 *   insn=0x00000000003955E8 string=0x00000000003955EC ""
 *   insn=0x00000000003955F8 string=0x00000000003955FC "@"
 *   insn=0x0000000000395608 string=0x000000000039560C "5"
 *   insn=0x0000000000395610 string=0x0000000000395614 ""
 *   insn=0x0000000000395620 string=0x0000000000395624 "\t@"
 *   insn=0x0000000000395630 string=0x0000000000395634 ""
 *   insn=0x0000000000395640 string=0x0000000000395644 "@"
 *   insn=0x0000000000395664 string=0x0000000000395668 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuView::~MainMenuView(Caver::MainMenuView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x8
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  _QWORD *v29; // x20
  __int64 v30; // x8
  __int64 v31; // x8
  _DWORD *v32; // x0
  int v33; // w8
  _DWORD *v34; // x0
  int v35; // w8
  _DWORD *v36; // x0
  int v37; // w8
  _DWORD *v38; // x0
  int v39; // w8
  _QWORD *v40; // x20
  __int64 v41; // x8
  __int64 v42; // x8
  _QWORD *v43; // x20
  __int64 v44; // x8
  __int64 v45; // x8
  _QWORD *v46; // x20
  __int64 v47; // x8
  __int64 v48; // x8
  _QWORD *v49; // x20
  _QWORD *v50; // x22
  _QWORD *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x8
  _QWORD *v54; // x20
  __int64 v55; // x8
  __int64 v56; // x8
  _QWORD *v57; // x20
  __int64 v58; // x8
  __int64 v59; // x8
  _QWORD *v60; // x20
  __int64 v61; // x8
  __int64 v62; // x8
  _QWORD *v63; // x20
  __int64 v64; // x8
  __int64 v65; // x8
  _QWORD *v66; // x20
  __int64 v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x20
  __int64 v70; // x8
  __int64 v71; // x8
  _QWORD *v72; // x20
  __int64 v73; // x8
  __int64 v74; // x8
  _QWORD *v75; // x20
  __int64 v76; // x8
  __int64 v77; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 82);
  *(_QWORD *)this = off_6CDD60;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 80);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 78);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 76);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (_QWORD *)*((_QWORD *)this + 74);
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (_QWORD *)*((_QWORD *)this + 72);
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = (_QWORD *)*((_QWORD *)this + 70);
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (_QWORD *)*((_QWORD *)this + 68);
  if ( v23 )
  {
    v24 = v23[1] - 1LL;
    v23[1] = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = (_QWORD *)*((_QWORD *)this + 66);
  if ( v26 )
  {
    v27 = v26[1] - 1LL;
    v26[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = (_QWORD *)*((_QWORD *)this + 64);
  if ( v29 )
  {
    v30 = v29[1] - 1LL;
    v29[1] = v30;
    if ( !v30 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      v31 = v29[2] - 1LL;
      v29[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
    }
  }
  v32 = (_DWORD *)*((_QWORD *)this + 62);
  if ( v32 )
  {
    v33 = v32[2] - 1;
    v32[2] = v33;
    if ( !v33 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 8LL))(v32);
  }
  v34 = (_DWORD *)*((_QWORD *)this + 61);
  if ( v34 )
  {
    v35 = v34[2] - 1;
    v34[2] = v35;
    if ( !v35 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 8LL))(v34);
  }
  v36 = (_DWORD *)*((_QWORD *)this + 60);
  if ( v36 )
  {
    v37 = v36[2] - 1;
    v36[2] = v37;
    if ( !v37 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 8LL))(v36);
  }
  v38 = (_DWORD *)*((_QWORD *)this + 59);
  if ( v38 )
  {
    v39 = v38[2] - 1;
    v38[2] = v39;
    if ( !v39 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v38 + 8LL))(v38);
  }
  v40 = (_QWORD *)*((_QWORD *)this + 58);
  if ( v40 )
  {
    v41 = v40[1] - 1LL;
    v40[1] = v41;
    if ( !v41 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      v42 = v40[2] - 1LL;
      v40[2] = v42;
      if ( !v42 )
        (*(void (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
    }
  }
  v43 = (_QWORD *)*((_QWORD *)this + 56);
  if ( v43 )
  {
    v44 = v43[1] - 1LL;
    v43[1] = v44;
    if ( !v44 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
      v45 = v43[2] - 1LL;
      v43[2] = v45;
      if ( !v45 )
        (*(void (__fastcall **)(_QWORD *))(*v43 + 24LL))(v43);
    }
  }
  v46 = (_QWORD *)*((_QWORD *)this + 54);
  if ( v46 )
  {
    v47 = v46[1] - 1LL;
    v46[1] = v47;
    if ( !v47 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v46 + 16LL))(v46);
      v48 = v46[2] - 1LL;
      v46[2] = v48;
      if ( !v48 )
        (*(void (__fastcall **)(_QWORD *))(*v46 + 24LL))(v46);
    }
  }
  v49 = (_QWORD *)*((_QWORD *)this + 47);
  v50 = (_QWORD *)*((_QWORD *)this + 48);
  if ( v49 != v50 )
  {
    do
    {
      v51 = (_QWORD *)v49[1];
      if ( v51 )
      {
        v52 = v51[1] - 1LL;
        v51[1] = v52;
        if ( !v52 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
          v53 = v51[2] - 1LL;
          v51[2] = v53;
          if ( !v53 )
            (*(void (__fastcall **)(_QWORD *))(*v51 + 24LL))(v51);
        }
      }
      v49 += 2;
    }
    while ( v50 != v49 );
    v49 = (_QWORD *)*((_QWORD *)this + 47);
  }
  if ( v49 )
    operator delete(v49);
  v54 = (_QWORD *)*((_QWORD *)this + 46);
  if ( v54 )
  {
    v55 = v54[1] - 1LL;
    v54[1] = v55;
    if ( !v55 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
      v56 = v54[2] - 1LL;
      v54[2] = v56;
      if ( !v56 )
        (*(void (__fastcall **)(_QWORD *))(*v54 + 24LL))(v54);
    }
  }
  v57 = (_QWORD *)*((_QWORD *)this + 44);
  if ( v57 )
  {
    v58 = v57[1] - 1LL;
    v57[1] = v58;
    if ( !v58 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v57 + 16LL))(v57);
      v59 = v57[2] - 1LL;
      v57[2] = v59;
      if ( !v59 )
        (*(void (__fastcall **)(_QWORD *))(*v57 + 24LL))(v57);
    }
  }
  v60 = (_QWORD *)*((_QWORD *)this + 42);
  if ( v60 )
  {
    v61 = v60[1] - 1LL;
    v60[1] = v61;
    if ( !v61 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
      v62 = v60[2] - 1LL;
      v60[2] = v62;
      if ( !v62 )
        (*(void (__fastcall **)(_QWORD *))(*v60 + 24LL))(v60);
    }
  }
  v63 = (_QWORD *)*((_QWORD *)this + 40);
  if ( v63 )
  {
    v64 = v63[1] - 1LL;
    v63[1] = v64;
    if ( !v64 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v63 + 16LL))(v63);
      v65 = v63[2] - 1LL;
      v63[2] = v65;
      if ( !v65 )
        (*(void (__fastcall **)(_QWORD *))(*v63 + 24LL))(v63);
    }
  }
  v66 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v66 )
  {
    v67 = v66[1] - 1LL;
    v66[1] = v67;
    if ( !v67 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v66 + 16LL))(v66);
      v68 = v66[2] - 1LL;
      v66[2] = v68;
      if ( !v68 )
        (*(void (__fastcall **)(_QWORD *))(*v66 + 24LL))(v66);
    }
  }
  v69 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v69 )
  {
    v70 = v69[1] - 1LL;
    v69[1] = v70;
    if ( !v70 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
      v71 = v69[2] - 1LL;
      v69[2] = v71;
      if ( !v71 )
        (*(void (__fastcall **)(_QWORD *))(*v69 + 24LL))(v69);
    }
  }
  v72 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v72 )
  {
    v73 = v72[1] - 1LL;
    v72[1] = v73;
    if ( !v73 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v72 + 16LL))(v72);
      v74 = v72[2] - 1LL;
      v72[2] = v74;
      if ( !v74 )
        (*(void (__fastcall **)(_QWORD *))(*v72 + 24LL))(v72);
    }
  }
  v75 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v75 )
  {
    v76 = v75[1] - 1LL;
    v75[1] = v76;
    if ( !v76 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v75 + 16LL))(v75);
      v77 = v75[2] - 1LL;
      v75[2] = v77;
      if ( !v77 )
        (*(void (__fastcall **)(_QWORD *))(*v75 + 24LL))(v75);
    }
  }
  Caver::GUIView::~GUIView(this);
}

