/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002976D8
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent6UpdateEf
 * Demangled: Caver::GenericMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F82B0  Caver::GenericMonsterControllerComponent::Update(float)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A20  Caver::GenericMonsterControllerComponent::SetFacingDirection(int)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F82B0  Caver::GenericMonsterControllerComponent::Update(float)
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x00000000001FFF80  Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 349
 *   insn=0x00000000002976F4 string=0x00000000002976F8 "W"
 *   insn=0x0000000000297700 string=0x0000000000297704 ""
 *   insn=0x0000000000297708 string=0x000000000029770C "hB@"
 *   insn=0x0000000000297710 string=0x0000000000297714 "`"
 *   insn=0x0000000000297710 string=0x0000000000297728 "uN@"
 *   insn=0x000000000029771C string=0x0000000000297720 "hB@"
 *   insn=0x000000000029771C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000297720 string=0x0000000000297724 "A"
 *   insn=0x000000000029772C string=0x0000000000297730 "`""
 *   insn=0x0000000000297738 string=0x000000000029773C "uN@"
 *   insn=0x000000000029773C string=0x0000000000297740 "5@"
 *   insn=0x0000000000297748 string=0x000000000029774C "@"
 *   insn=0x0000000000297748 string=0x000000000029775C "`r@"
 *   insn=0x000000000029774C string=0x0000000000297750 ""
 *   insn=0x0000000000297750 string=0x0000000000297754 ""
 *   insn=0x0000000000297750 string=0x00000000002977D0 "`"
 *   insn=0x0000000000297758 string=0x00000000002977C8 ""
 *   insn=0x0000000000297760 string=0x0000000000297764 ""
 *   insn=0x0000000000297760 string=0x00000000002977F4 "`B"
 *   insn=0x0000000000297764 string=0x0000000000297768 ""
 *   insn=0x0000000000297778 string=0x000000000029777C "\t"
 *   insn=0x000000000029778C string=0x0000000000297790 "@"
 *   insn=0x000000000029778C string=0x00000000002977AC "4"
 *   insn=0x0000000000297790 string=0x0000000000297794 ""
 *   insn=0x0000000000297794 string=0x0000000000297798 ""
 *   insn=0x000000000029779C string=0x00000000002977A0 ""
 *   insn=0x00000000002977A0 string=0x00000000002977A4 ""
 *   insn=0x00000000002977B0 string=0x00000000002977B4 ""
 *   insn=0x00000000002977D0 string=0x00000000002977D4 "h\nA"
 *   insn=0x00000000002977D8 string=0x00000000002977DC "`"
 *   insn=0x00000000002977E0 string=0x00000000002977E4 "hB@"
 *   insn=0x00000000002977E0 string=0x00000000002978B0 "hB@"
 *   insn=0x00000000002977E8 string=0x000000000029783C "`"
 *   insn=0x00000000002977FC string=0x0000000000297800 "`r@"
 *   insn=0x0000000000297800 string=0x0000000000297804 "`"
 *   insn=0x0000000000297804 string=0x0000000000297808 "uN@"
 *   insn=0x000000000029780C string=0x0000000000297810 "`""
 *   insn=0x0000000000297818 string=0x000000000029781C "`r@"
 *   insn=0x000000000029781C string=0x0000000000297820 "uN@"
 *   insn=0x0000000000297824 string=0x0000000000297828 "`B"
 *   insn=0x0000000000297830 string=0x0000000000297834 "`r@"
 *   insn=0x0000000000297844 string=0x0000000000297848 "hB@"
 *   insn=0x0000000000297848 string=0x000000000029784C "i\nA"
 *   insn=0x0000000000297850 string=0x0000000000297854 "?"
 *   insn=0x000000000029785C string=0x0000000000297860 "t\n"
 *   insn=0x0000000000297868 string=0x000000000029786C "`"
 *   insn=0x0000000000297868 string=0x0000000000297880 "`r@"
 *   insn=0x0000000000297874 string=0x0000000000297878 "hB@"
 *   insn=0x0000000000297884 string=0x0000000000297888 "`B"
 *   insn=0x0000000000297884 string=0x0000000000297898 ""
 *   insn=0x0000000000297890 string=0x0000000000297894 "`r@"
 *   insn=0x00000000002978A0 string=0x00000000002978A4 ""
 *   insn=0x00000000002978B4 string=0x00000000002978B8 "`"
 *   insn=0x00000000002978B4 string=0x00000000002978C8 ""
 *   insn=0x00000000002978C0 string=0x00000000002978C4 "hB@"
 *   insn=0x00000000002978C8 string=0x00000000002978CC "`"
 *   insn=0x00000000002978CC string=0x00000000002978D0 "h"
 *   insn=0x00000000002978D4 string=0x00000000002978D8 "h"
 *   insn=0x00000000002978DC string=0x00000000002978E0 "h"
 *   insn=0x00000000002978DC string=0x0000000000297A38 "h"
 *   insn=0x00000000002978E4 string=0x00000000002978E8 "i"
 *   insn=0x00000000002978E8 string=0x00000000002978EC "@"
 *   insn=0x00000000002978F0 string=0x00000000002978F4 "\t"
 *   insn=0x00000000002978F8 string=0x00000000002978FC "b"
 *   insn=0x00000000002978FC string=0x0000000000297900 "#qA"
 *   insn=0x0000000000297900 string=0x0000000000297904 "C(#"
 *   insn=0x0000000000297904 string=0x0000000000297908 "  #"
 *   insn=0x000000000029790C string=0x0000000000297910 "c"
 *   insn=0x000000000029790C string=0x000000000029792C "i"
 *   insn=0x0000000000297914 string=0x0000000000297918 "$}I"
 *   insn=0x0000000000297918 string=0x000000000029791C "B(#"
 *   insn=0x000000000029791C string=0x0000000000297920 "B($"
 *   insn=0x0000000000297920 string=0x0000000000297924 "  ""
 *   insn=0x0000000000297924 string=0x0000000000297928 "m"
 *   insn=0x000000000029792C string=0x0000000000297930 " AI"
 *   insn=0x000000000029793C string=0x0000000000297940 "A8!"
 *   insn=0x0000000000297940 string=0x0000000000297944 "b8$"
 *   insn=0x0000000000297944 string=0x0000000000297948 "!!"
 *   insn=0x0000000000297948 string=0x000000000029794C "B""
 *   insn=0x000000000029794C string=0x0000000000297950 "!(""
 *   insn=0x0000000000297950 string=0x0000000000297954 "   "
 *   insn=0x0000000000297954 string=0x0000000000297958 ""
 *   insn=0x000000000029795C string=0x0000000000297960 "@"
 *   insn=0x0000000000297960 string=0x0000000000297964 ""
 *   insn=0x0000000000297964 string=0x0000000000297968 ""
 *   insn=0x0000000000297968 string=0x000000000029796C "a"
 *   insn=0x000000000029796C string=0x0000000000297970 ""
 *   insn=0x0000000000297970 string=0x0000000000297974 ""
 *   insn=0x0000000000297978 string=0x000000000029797C "h"
 *   insn=0x000000000029797C string=0x0000000000297980 "H"
 *   insn=0x0000000000297980 string=0x0000000000297984 "/"
 *   insn=0x0000000000297980 string=0x0000000000297A48 "x"
 *   insn=0x0000000000297984 string=0x0000000000297A40 "i"
 *   insn=0x0000000000297988 string=0x000000000029798C "Y"
 *   insn=0x000000000029798C string=0x0000000000297990 "@"
 *   insn=0x000000000029798C string=0x00000000001FBEF0 "0'"
 *   insn=0x0000000000297990 string=0x0000000000297994 "h"
 *   insn=0x0000000000297998 string=0x000000000029799C "i"
 *   insn=0x000000000029799C string=0x00000000002979A0 "@}I"
 *   insn=0x00000000002979A4 string=0x00000000002979A8 "I"
 *   insn=0x00000000002979A8 string=0x00000000002979AC "b"
 *   insn=0x00000000002979AC string=0x00000000002979B0 "  ""
 *   insn=0x00000000002979B4 string=0x00000000002979B8 "c"
 *   insn=0x00000000002979B8 string=0x00000000002979BC "B(#"
 *   insn=0x00000000002979BC string=0x00000000002979C0 "  ""
 *   insn=0x00000000002979C0 string=0x00000000002979C4 "m"
 *   insn=0x00000000002979C8 string=0x00000000002979CC " "
 *   insn=0x00000000002979D8 string=0x00000000002979DC "A8!"
 *   insn=0x00000000002979DC string=0x00000000002979E0 "b8$"
 *   insn=0x00000000002979E0 string=0x00000000002979E4 "!!"
 *   insn=0x00000000002979E4 string=0x00000000002979E8 "B""
 *   insn=0x00000000002979E8 string=0x00000000002979EC "!(""
 *   insn=0x00000000002979EC string=0x00000000002979F0 "   "
 *   insn=0x00000000002979F0 string=0x00000000002979F4 ","
 *   insn=0x00000000002979F4 string=0x00000000002979F8 "@"
 *   insn=0x00000000002979F8 string=0x00000000002979FC ""
 *   insn=0x00000000002979FC string=0x0000000000297A00 ""
 *   insn=0x0000000000297A00 string=0x0000000000297A04 "h"
 *   insn=0x0000000000297A04 string=0x0000000000297A08 "`"
 *   insn=0x0000000000297A08 string=0x0000000000297A0C "("
 *   insn=0x0000000000297A0C string=0x0000000000297A10 "\t\t@"
 *   insn=0x0000000000297A0C string=0x0000000000297A30 ""
 *   insn=0x0000000000297A10 string=0x0000000000297A14 ")"
 *   insn=0x0000000000297A14 string=0x0000000000297A18 "\t\t"
 *   insn=0x0000000000297A1C string=0x0000000000297A20 "\t"
 *   insn=0x0000000000297A24 string=0x0000000000297A28 ")"
 *   insn=0x0000000000297A28 string=0x0000000000297A2C " "
 *   insn=0x0000000000297A30 string=0x0000000000297A34 "h"
 *   insn=0x0000000000297A38 string=0x0000000000297A3C "h"
 *   insn=0x0000000000297A44 string=0x0000000000297D3C "h"
 *   insn=0x0000000000297A50 string=0x0000000000297A54 "tB"
 *   insn=0x0000000000297A50 string=0x0000000000297BEC "h"
 *   insn=0x0000000000297A54 string=0x0000000000297A58 "u""
 *   insn=0x0000000000297A58 string=0x0000000000297A5C "Y"
 *   insn=0x0000000000297A74 string=0x0000000000297A78 "-"
 *   insn=0x0000000000297A78 string=0x0000000000297A7C "`r@"
 *   insn=0x0000000000297A7C string=0x0000000000297A80 "v"
 *   insn=0x0000000000297A84 string=0x0000000000297A98 ""
 *   insn=0x0000000000297A90 string=0x0000000000297A94 "`r@"
 *   insn=0x0000000000297A98 string=0x0000000000297A9C ""
 *   insn=0x0000000000297AA8 string=0x0000000000297AAC "@"
 *   insn=0x0000000000297AA8 string=0x0000000000297AB8 "b"
 *   insn=0x0000000000297AAC string=0x0000000000297AB0 ""
 *   insn=0x0000000000297AB0 string=0x0000000000297AB4 ""
 *   insn=0x0000000000297AC0 string=0x0000000000297AC4 "/"
 *   insn=0x0000000000297ACC string=0x0000000000297AD0 "@"
 *   insn=0x0000000000297ACC string=0x0000000000297AE0 "`r@"
 *   insn=0x0000000000297AD0 string=0x0000000000297AD4 ""
 *   insn=0x0000000000297AD4 string=0x0000000000297AD8 ""
 *   insn=0x0000000000297AD8 string=0x0000000000297ADC "`"
 *   insn=0x0000000000297ADC string=0x0000000000297BA8 ""
 *   insn=0x0000000000297AE4 string=0x0000000000297AF8 ""
 *   insn=0x0000000000297AF0 string=0x0000000000297AF4 "`r@"
 *   insn=0x0000000000297AF8 string=0x0000000000297AFC ""
 *   insn=0x0000000000297B04 string=0x0000000000297B08 "hN@"
 *   insn=0x0000000000297B0C string=0x0000000000297B20 "\t"
 *   insn=0x0000000000297B18 string=0x0000000000297B1C "hN@"
 *   insn=0x0000000000297B20 string=0x0000000000297B24 "6}@"
 *   insn=0x0000000000297B2C string=0x0000000000297B30 ")"
 *   insn=0x0000000000297B40 string=0x0000000000297B44 "@"
 *   insn=0x0000000000297B44 string=0x0000000000297B48 ""
 *   insn=0x0000000000297B48 string=0x0000000000297B4C ""
 *   insn=0x0000000000297B50 string=0x0000000000297B54 ""
 *   insn=0x0000000000297B54 string=0x0000000000297B58 ""
 *   insn=0x0000000000297B64 string=0x0000000000297B68 ""
 *   insn=0x0000000000297B74 string=0x0000000000297B78 ""
 *   insn=0x0000000000297B84 string=0x0000000000297B88 ""
 *   insn=0x0000000000297B8C string=0x0000000000297B90 "a"
 *   insn=0x0000000000297B98 string=0x0000000000297B9C ""
 *   insn=0x0000000000297BA8 string=0x0000000000297BAC ""
 *   insn=0x0000000000297BB0 string=0x0000000000297BB4 "`r@"
 *   insn=0x0000000000297BC4 string=0x0000000000297BC8 ""
 *   insn=0x0000000000297BC8 string=0x0000000000297BCC "e@"
 *   insn=0x0000000000297BD0 string=0x0000000000297BD4 "h"
 *   insn=0x0000000000297BD4 string=0x0000000000297BD8 "H"
 *   insn=0x0000000000297BD8 string=0x0000000000297A60 "h"
 *   insn=0x0000000000297BDC string=0x0000000000297BE0 "?"
 *   insn=0x0000000000297BE4 string=0x0000000000297BE8 "h"
 *   insn=0x0000000000297BEC string=0x0000000000297BF0 ""
 *   insn=0x0000000000297BEC string=0x0000000000297BF8 "h"
 *   insn=0x0000000000297BF4 string=0x0000000000297C68 "`r@"
 *   insn=0x0000000000297BF8 string=0x0000000000297BFC "\n"
 *   insn=0x0000000000297BFC string=0x0000000000297C00 "i"
 *   insn=0x0000000000297C04 string=0x0000000000297C08 ""
 *   insn=0x0000000000297C0C string=0x0000000000297C10 "!q@"
 *   insn=0x0000000000297C10 string=0x0000000000297C14 "\t8!"
 *   insn=0x0000000000297C14 string=0x0000000000297C18 "(! "
 *   insn=0x0000000000297C24 string=0x00000000001F7A20 "0'"
 *   insn=0x0000000000297C28 string=0x0000000000297C2C "`"
 *   insn=0x0000000000297C38 string=0x0000000000297E2C "hB@"
 *   insn=0x0000000000297C40 string=0x0000000000297C44 " "
 *   insn=0x0000000000297C4C string=0x0000000000297C50 "h\nA"
 *   insn=0x0000000000297C58 string=0x0000000000297C5C "hB@"
 *   insn=0x0000000000297C60 string=0x0000000000297C64 "^"
 *   insn=0x0000000000297C64 string=0x0000000000297DDC "t\n"
 *   insn=0x0000000000297C6C string=0x0000000000297C70 "`B"
 *   insn=0x0000000000297C6C string=0x0000000000297C80 ""
 *   insn=0x0000000000297C78 string=0x0000000000297C7C "`r@"
 *   insn=0x0000000000297C80 string=0x0000000000297C84 ""
 *   insn=0x0000000000297C8C string=0x0000000000297C90 ""
 *   insn=0x0000000000297C90 string=0x0000000000297C94 "uN@"
 *   insn=0x0000000000297C98 string=0x0000000000297C9C "`""
 *   insn=0x0000000000297C98 string=0x0000000000297CAC "`r@"
 *   insn=0x0000000000297CA4 string=0x0000000000297CA8 "uN@"
 *   insn=0x0000000000297CB0 string=0x0000000000297CB4 "`B"
 *   insn=0x0000000000297CB0 string=0x0000000000297CC4 ""
 *   insn=0x0000000000297CBC string=0x0000000000297CC0 "`r@"
 *   insn=0x0000000000297CC4 string=0x0000000000297CC8 ""
 *   insn=0x0000000000297CD8 string=0x0000000000297CDC "\t"
 *   insn=0x0000000000297CEC string=0x0000000000297CF0 "@"
 *   insn=0x0000000000297CEC string=0x0000000000297D0C "4"
 *   insn=0x0000000000297CF0 string=0x0000000000297CF4 ""
 *   insn=0x0000000000297CF4 string=0x0000000000297CF8 ""
 *   insn=0x0000000000297CFC string=0x0000000000297D00 ""
 *   insn=0x0000000000297D00 string=0x0000000000297D04 ""
 *   insn=0x0000000000297D10 string=0x0000000000297D14 ""
 *   insn=0x0000000000297D24 string=0x0000000000297D28 ""
 *   insn=0x0000000000297D30 string=0x0000000000297D34 "h"
 *   insn=0x0000000000297D34 string=0x0000000000297D38 "H"
 *   insn=0x0000000000297D40 string=0x0000000000297D98 "a"
 *   insn=0x0000000000297D44 string=0x0000000000297D48 "`"
 *   insn=0x0000000000297D50 string=0x0000000000297D54 "-"
 *   insn=0x0000000000297D54 string=0x0000000000297D58 "hB@"
 *   insn=0x0000000000297D5C string=0x0000000000297D60 "`"
 *   insn=0x0000000000297D5C string=0x0000000000297D70 "i"
 *   insn=0x0000000000297D64 string=0x0000000000297D68 "^"
 *   insn=0x0000000000297D68 string=0x0000000000297D6C "hB@"
 *   insn=0x0000000000297D74 string=0x0000000000297D78 "!5D"
 *   insn=0x0000000000297D84 string=0x0000000000297D88 "  "
 *   insn=0x0000000000297D88 string=0x0000000000297D8C "m"
 *   insn=0x0000000000297D8C string=0x0000000000297D90 "AB9"
 *   insn=0x0000000000297D94 string=0x0000000000297FA4 "h"
 *   insn=0x0000000000297D98 string=0x0000000000297D9C "`"
 *   insn=0x0000000000297D9C string=0x0000000000297DA0 "h"
 *   insn=0x0000000000297DA0 string=0x0000000000583734 "o"
 *   insn=0x0000000000297DA4 string=0x0000000000297DA8 "#8 "
 *   insn=0x0000000000297DA8 string=0x0000000000297DAC "c"
 *   insn=0x0000000000297DAC string=0x0000000000297DB0 "` ""
 *   insn=0x0000000000297DB4 string=0x0000000000297DB8 "A"
 *   insn=0x0000000000297DB4 string=0x0000000000297E84 "`r@"
 *   insn=0x0000000000297DB8 string=0x0000000000297EBC "h"
 *   insn=0x0000000000297DC4 string=0x0000000000297DC8 "-"
 *   insn=0x0000000000297DC8 string=0x0000000000297DCC "h\nA"
 *   insn=0x0000000000297DD4 string=0x0000000000297DD8 "hB@"
 *   insn=0x0000000000297DE4 string=0x0000000000297DE8 "`"
 *   insn=0x0000000000297DE4 string=0x0000000000297DF8 "`r@"
 *   insn=0x0000000000297DEC string=0x0000000000297DF0 "<"
 *   insn=0x0000000000297DF0 string=0x0000000000297DF4 "hB@"
 *   insn=0x0000000000297E00 string=0x0000000000297E04 "`B"
 *   insn=0x0000000000297E00 string=0x0000000000297E14 ""
 *   insn=0x0000000000297E08 string=0x0000000000297E0C "5"
 *   insn=0x0000000000297E0C string=0x0000000000297E10 "`r@"
 *   insn=0x0000000000297E1C string=0x0000000000297E20 ""
 *   insn=0x0000000000297E2C string=0x0000000000297E30 "t\nA"
 *   insn=0x0000000000297E34 string=0x0000000000297E38 "`"
 *   insn=0x0000000000297E34 string=0x0000000000297E48 "q@"
 *   insn=0x0000000000297E3C string=0x0000000000297E40 "("
 *   insn=0x0000000000297E40 string=0x0000000000297E44 "hB@"
 *   insn=0x0000000000297E4C string=0x0000000000297E54 "a"
 *   insn=0x0000000000297E5C string=0x0000000000297E60 ""Yh"
 *   insn=0x0000000000297E60 string=0x0000000000297E64 "`"
 *   insn=0x0000000000297E64 string=0x0000000000297E68 "h"
 *   insn=0x0000000000297E6C string=0x0000000000297E70 "!""
 *   insn=0x0000000000297E70 string=0x0000000000297E74 ""8 "
 *   insn=0x0000000000297E74 string=0x0000000000297E78 "B"
 *   insn=0x0000000000297E78 string=0x0000000000297E7C "@ #"
 *   insn=0x0000000000297E84 string=0x0000000000297E88 "a"
 *   insn=0x0000000000297E8C string=0x0000000000297E90 "`B"
 *   insn=0x0000000000297E8C string=0x0000000000297EA0 ""
 *   insn=0x0000000000297E98 string=0x0000000000297E9C "`r@"
 *   insn=0x0000000000297EA0 string=0x0000000000297EA4 ""
 *   insn=0x0000000000297EA8 string=0x0000000000297EAC "`"
 *   insn=0x0000000000297EAC string=0x0000000000297EB0 "a"
 *   insn=0x0000000000297EC4 string=0x0000000000297EC8 "h\nA"
 *   insn=0x0000000000297EC4 string=0x0000000000297ED8 "`B@"
 *   insn=0x0000000000297EC8 string=0x0000000000297ECC "h"
 *   insn=0x0000000000297ED0 string=0x0000000000297ED4 "\t!"
 *   insn=0x0000000000297ED8 string=0x0000000000297EDC "`"
 *   insn=0x0000000000297EDC string=0x0000000000297EE0 "\t"
 *   insn=0x0000000000297EDC string=0x0000000000297EE8 "t"
 *   insn=0x0000000000297EE0 string=0x0000000000297EE4 ""
 *   insn=0x0000000000297EE4 string=0x0000000000297F04 ""
 *   insn=0x0000000000297EF4 string=0x0000000000297EF8 "`B@"
 *   insn=0x0000000000297EF8 string=0x0000000000297EFC "\t"
 *   insn=0x0000000000297F04 string=0x0000000000297F08 ""
 *   insn=0x0000000000297F08 string=0x0000000000297F0C ""
 *   insn=0x0000000000297F10 string=0x0000000000297F14 "e@"
 *   insn=0x0000000000297F18 string=0x0000000000297F1C "`N@"
 *   insn=0x0000000000297F20 string=0x0000000000297F24 "`""
 *   insn=0x0000000000297F20 string=0x0000000000297F34 ""
 *   insn=0x0000000000297F2C string=0x0000000000297F30 "`N@"
 *   insn=0x0000000000297F38 string=0x0000000000297F3C "e@"
 *   insn=0x0000000000297F4C string=0x0000000000297F50 "A\n"
 *   insn=0x0000000000297F7C string=0x0000000000297F80 "`B@"
 *   insn=0x0000000000297F80 string=0x0000000000297F84 ""
 *   insn=0x0000000000297F84 string=0x0000000000297F88 ""
 *   insn=0x0000000000297F8C string=0x0000000000297F90 "`"
 *   insn=0x0000000000297F98 string=0x0000000000297F9C "`B@"
 *   insn=0x0000000000297FA4 string=0x0000000000297FA8 "a"
 *   insn=0x0000000000297FB0 string=0x0000000000297FB4 "%"
 *   insn=0x0000000000297FB4 string=0x0000000000298018 "b"
 *   insn=0x0000000000297FC0 string=0x0000000000297FC4 "h\nA"
 *   insn=0x0000000000297FC8 string=0x0000000000297FCC "`"
 *   insn=0x0000000000297FCC string=0x0000000000297FD0 "hB@"
 *   insn=0x0000000000297FD4 string=0x0000000000297FD8 "i"
 *   insn=0x0000000000297FDC string=0x0000000000297FE0 "`"
 *   insn=0x0000000000297FDC string=0x0000000000297FF0 "`r@"
 *   insn=0x0000000000297FE8 string=0x0000000000297FEC "hB@"
 *   insn=0x0000000000297FF8 string=0x0000000000297FFC "`B"
 *   insn=0x0000000000297FF8 string=0x000000000029800C ""
 *   insn=0x0000000000298004 string=0x0000000000298008 "`r@"
 *   insn=0x0000000000298014 string=0x0000000000298084 ""
 *   insn=0x0000000000298018 string=0x000000000029801C "!(""
 *   insn=0x000000000029802C string=0x0000000000298030 "|~"
 *   insn=0x0000000000298030 string=0x0000000000298034 "h\nA"
 *   insn=0x000000000029803C string=0x0000000000298040 "hB@"
 *   insn=0x0000000000298040 string=0x0000000000298044 "\t"
 *   insn=0x0000000000298044 string=0x0000000000298048 "i"
 *   insn=0x000000000029804C string=0x0000000000298050 "`"
 *   insn=0x000000000029804C string=0x0000000000298060 "`r@"
 *   insn=0x0000000000298058 string=0x000000000029805C "hB@"
 *   insn=0x0000000000298068 string=0x000000000029806C "`B"
 *   insn=0x0000000000298068 string=0x000000000029807C ""
 *   insn=0x0000000000298074 string=0x0000000000298078 "`r@"
 *   insn=0x0000000000298090 string=0x0000000000298094 "A"
 *   insn=0x0000000000298098 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002980A4 string=0x00000000002980A8 ""
 *   insn=0x00000000002980B4 string=0x00000000002980B8 ""
 *   insn=0x00000000002980C0 string=0x00000000002980C4 "/"
 *   insn=0x00000000002980D0 string=0x00000000002980D4 ""
 *   insn=0x00000000002980D8 string=0x00000000002980DC "!"
 *   insn=0x00000000002980E0 string=0x00000000002980E4 ""
 *   insn=0x00000000002980EC string=0x00000000002980F0 "$"
 *   insn=0x0000000000298100 string=0x0000000000298104 ""
 *   insn=0x0000000000298110 string=0x0000000000298114 ""
 *   insn=0x0000000000298120 string=0x0000000000298124 ""
 *   insn=0x0000000000298130 string=0x0000000000298134 ""
 *   insn=0x0000000000298138 string=0x000000000029813C "!"
 *   insn=0x0000000000298140 string=0x0000000000298144 ""
 *   insn=0x0000000000298158 string=0x000000000029815C "("
 *   insn=0x000000000029815C string=0x0000000000298160 "\t\t@"
 *   insn=0x0000000000298160 string=0x0000000000298164 ")"
 *   insn=0x0000000000298164 string=0x0000000000298168 "\t\t"
 *   insn=0x000000000029816C string=0x0000000000298170 "\t"
 *   insn=0x0000000000298170 string=0x0000000000298174 ")"
 *   insn=0x0000000000298178 string=0x000000000029817C " "
 *   insn=0x0000000000298184 string=0x0000000000298188 "q"
 *   insn=0x000000000029818C string=0x0000000000298190 "H"
 *   insn=0x0000000000298190 string=0x00000000001F82B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::Update(
        Caver::GenericMonsterControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x20
  _DWORD *v11; // x0
  int v12; // w8
  int v13; // w8
  int v14; // w8
  __int64 v15; // x8
  int v16; // w9
  int v17; // w20
  int v18; // w21
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x8
  float v23; // s0
  float v24; // s1
  float v25; // s2
  int v26; // w8
  __int64 v27; // x8
  __int64 NearestEnemy; // x0
  __int64 v29; // x8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  _DWORD *v33; // x8
  int v34; // w9
  Caver::Component **v35; // x24
  Caver::Component **v36; // x25
  Caver::Component *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x0
  int v40; // w8
  __int64 v41; // x0
  __int64 v42; // x8
  _DWORD *v43; // x22
  _DWORD *v44; // x0
  int v45; // w8
  int v46; // w8
  int v47; // w8
  __int64 v48; // x8
  float v49; // s9
  int v50; // w20
  float v51; // s0
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x21
  __int64 v55; // x0
  __int64 v56; // x0
  _DWORD *v57; // x20
  _DWORD *v58; // x0
  int v59; // w8
  int v60; // w8
  __int64 v61; // x8
  float v62; // s1
  float v63; // s0
  __int64 v64; // x0
  int v65; // w21
  __int64 v66; // x8
  int v67; // w20
  __int64 v68; // x0
  __int64 v69; // x0
  float v70; // s9
  int v71; // w8
  __int64 v72; // x0
  __int64 v73; // x0
  float v74; // s1
  float v75; // s0
  __int64 v76; // x8
  __int64 *v77; // x0
  int v78; // w20
  __int64 v79; // x8
  bool v80; // zf
  __int64 v81; // x8
  __int64 *v82; // x0
  int v83; // w20
  __int64 (*v84)(void); // x8
  char v85; // w20
  _DWORD *v86; // [xsp+0h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  if ( *((_QWORD *)this + 16)
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                   this),
        *((_QWORD *)this + 16)) )
  {
    v5 = *((_QWORD *)this + 19);
    if ( v5
      || (result = Caver::ComponentOutletBase::Connect(
                     (Caver::GenericMonsterControllerComponent *)((char *)this + 136),
                     this),
          (v5 = *((_QWORD *)this + 19)) != 0) )
    {
      v6 = *(_QWORD *)(v5 + 160);
      if ( v6 )
      {
        if ( !*(_DWORD *)(v6 + 8) )
        {
          v7 = *(_QWORD *)v6;
LABEL_17:
          (*(void (__fastcall **)(__int64))(v7 + 8))(v6);
        }
      }
      else
      {
        v8 = *((_QWORD *)this + 28);
        if ( !v8 )
        {
          Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 208), this);
          v8 = *((_QWORD *)this + 28);
          if ( !v8 )
            goto LABEL_18;
          v5 = *((_QWORD *)this + 19);
          if ( !v5 )
          {
            Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 136), this);
            v8 = *((_QWORD *)this + 28);
            v5 = *((_QWORD *)this + 19);
            if ( !v8 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                this);
              v8 = *((_QWORD *)this + 28);
            }
          }
        }
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
        v10 = v9;
        if ( v9 )
          *(_DWORD *)(v9 + 8) += 2;
        v11 = *(_DWORD **)(v5 + 160);
        *(_QWORD *)(v5 + 160) = v10;
        if ( v11 )
        {
          v12 = v11[2] - 1;
          v11[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        if ( v10 )
        {
          v13 = *(_DWORD *)(v10 + 8) - 1;
          *(_DWORD *)(v10 + 8) = v13;
          if ( !v13 )
          {
            v7 = *(_QWORD *)v10;
            v6 = v10;
            goto LABEL_17;
          }
        }
      }
LABEL_18:
      v14 = *((_DWORD *)this + 66);
      *((float *)this + 67) = *((float *)this + 67) + *(float *)&a2;
      if ( !v14 )
      {
        v15 = *((_QWORD *)this + 16);
        if ( v15 )
        {
          v16 = 0;
        }
        else
        {
          Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
          v15 = *((_QWORD *)this + 16);
          v16 = *((_DWORD *)this + 66);
        }
        v17 = *(_DWORD *)(v15 + 112);
        if ( v16 != v17 )
        {
          v18 = *(_DWORD *)(v15 + 112);
          *((_DWORD *)this + 66) = v17;
          *((_DWORD *)this + 67) = 0;
          if ( !v15 )
          {
            Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
            v18 = *(_DWORD *)(*((_QWORD *)this + 16) + 112LL);
          }
          v19 = *((_QWORD *)this + 28);
          if ( !v19 )
          {
            Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 208), this);
            v19 = *((_QWORD *)this + 28);
          }
          *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 264LL))(v19) + 57) = v18 != v17;
        }
      }
      v20 = *((_QWORD *)this + 16);
      if ( !v20 )
      {
        Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 112), this);
        v20 = *((_QWORD *)this + 16);
      }
      v21 = *((_QWORD *)this + 35);
      *((_DWORD *)this + 68) = *(_DWORD *)(v20 + 128);
      if ( v21 )
      {
        if ( !*((_QWORD *)this + 32) )
        {
          v22 = *((_QWORD *)this + 5);
          v23 = 400.0;
          v24 = *(float *)(v22 + 112);
          if ( *((_DWORD *)this + 42) )
          {
            v25 = *((float *)this + 46);
            if ( v24 < (float)(v25 + -300.0) || v24 > (float)((float)(v25 + *((float *)this + 48)) + 300.0) )
              v23 = *(float *)"";
          }
          if ( (float)((float)((float)(*(float *)(v21 + 112) - v24) * (float)(*(float *)(v21 + 112) - v24))
                     + (float)((float)(*(float *)(v21 + 116) - *(float *)(v22 + 116))
                             * (float)(*(float *)(v21 + 116) - *(float *)(v22 + 116)))) > (float)(v23 * v23) )
          {
            *((_QWORD *)this + 35) = 0;
            v26 = *(_DWORD *)(v21 + 8) - 1;
            *(_DWORD *)(v21 + 8) = v26;
            if ( !v26 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
              v27 = *((_QWORD *)this + 32);
              if ( !v27 )
              {
LABEL_55:
                if ( !*((_QWORD *)this + 35) )
                  goto LABEL_110;
              }
LABEL_56:
              v35 = (Caver::Component **)*((_QWORD *)this + 29);
              v36 = (Caver::Component **)*((_QWORD *)this + 30);
              if ( v35 != v36 )
              {
                while ( 1 )
                {
                  (*(void (__fastcall **)(Caver::Component *, long double))(*(_QWORD *)*v35 + 200LL))(*v35, a2);
                  if ( !*((_QWORD *)this + 32) )
                  {
                    if ( *((_QWORD *)this + 35) )
                    {
                      v37 = *v35;
                      if ( *((float *)*v35 + 68) > *((float *)*v35 + 65) )
                        break;
                    }
                  }
LABEL_83:
                  if ( v36 == ++v35 )
                  {
                    v27 = *((_QWORD *)this + 32);
                    goto LABEL_85;
                  }
                }
                v38 = *((_QWORD *)this + 28);
                *((_QWORD *)this + 32) = v37;
                if ( !v38 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                    this);
                  v38 = *((_QWORD *)this + 28);
                }
                v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 264LL))(v38);
                v86 = (_DWORD *)v39;
                if ( v39 )
                  ++*(_DWORD *)(v39 + 8);
                Caver::AttackComponent::StartAttack(v37);
                if ( v86 && (v40 = v86[2] - 1, (v86[2] = v40) == 0) )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v86 + 8LL))(v86);
                  v41 = *((_QWORD *)this + 28);
                  if ( v41 )
                    goto LABEL_68;
                }
                else
                {
                  v41 = *((_QWORD *)this + 28);
                  if ( v41 )
                  {
LABEL_68:
                    *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 264LL))(v41) + 56) = 0;
                    v42 = *((_QWORD *)this + 19);
                    if ( !v42 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 136),
                        this);
                      v42 = *((_QWORD *)this + 19);
                    }
                    v43 = (_DWORD *)*((_QWORD *)*v35 + 31);
                    if ( v43 )
                      v43[2] += 3;
                    v44 = *(_DWORD **)(v42 + 160);
                    *(_QWORD *)(v42 + 160) = v43;
                    if ( v44 )
                    {
                      v45 = v44[2] - 1;
                      v44[2] = v45;
                      if ( !v45 )
                        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 8LL))(v44);
                    }
                    if ( v43 )
                    {
                      v46 = v43[2] - 1;
                      v43[2] = v46;
                      if ( !v46 )
                        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 8LL))(v43);
                      v47 = v43[2] - 1;
                      v43[2] = v47;
                      if ( !v47 )
                        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 8LL))(v43);
                    }
                    goto LABEL_83;
                  }
                }
                Caver::ComponentOutletBase::Connect(
                  (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                  this);
                v41 = *((_QWORD *)this + 28);
                goto LABEL_68;
              }
LABEL_85:
              if ( v27 && !*(_BYTE *)(v27 + 256) )
              {
                v53 = *((_QWORD *)this + 28);
                if ( !v53 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                    this);
                  v53 = *((_QWORD *)this + 28);
                }
                *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 264LL))(v53) + 56) = 1;
                v54 = *((_QWORD *)this + 19);
                if ( !v54 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::GenericMonsterControllerComponent *)((char *)this + 136),
                    this);
                  v54 = *((_QWORD *)this + 19);
                }
                v55 = *((_QWORD *)this + 28);
                if ( !v55 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                    this);
                  v55 = *((_QWORD *)this + 28);
                }
                v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 264LL))(v55);
                v57 = (_DWORD *)v56;
                if ( v56 )
                  *(_DWORD *)(v56 + 8) += 2;
                v58 = *(_DWORD **)(v54 + 160);
                *(_QWORD *)(v54 + 160) = v57;
                if ( v58 )
                {
                  v59 = v58[2] - 1;
                  v58[2] = v59;
                  if ( !v59 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v58 + 8LL))(v58);
                }
                if ( v57 )
                {
                  v60 = v57[2] - 1;
                  v57[2] = v60;
                  if ( !v60 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v57 + 8LL))(v57);
                }
                *((_QWORD *)this + 32) = 0;
                v48 = *((_QWORD *)this + 35);
                if ( v48 )
                {
LABEL_88:
                  v49 = *(float *)(v48 + 112) - *(float *)(*((_QWORD *)this + 5) + 112LL);
                  if ( v49 >= 0.0 )
                    v50 = 1;
                  else
                    v50 = -1;
                  Caver::GenericMonsterControllerComponent::SetFacingDirection(this, v50);
                  if ( *((float *)this + 67) > 1.2 )
                  {
                    v51 = fabsf(v49);
                    if ( v51 >= 100.0 )
                    {
                      if ( v51 <= 150.0 || *((_DWORD *)this + 66) == v50 )
                        goto LABEL_127;
                      v52 = *((_QWORD *)this + 16);
                    }
                    else
                    {
                      if ( !(*((_DWORD *)this + 66) + v50) )
                        goto LABEL_127;
                      v52 = *((_QWORD *)this + 16);
                      v50 = -v50;
                    }
                    *((_DWORD *)this + 66) = v50;
                    *((_DWORD *)this + 67) = 0;
                    if ( !v52 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                        this);
                      v52 = *((_QWORD *)this + 16);
                    }
                    v64 = *((_QWORD *)this + 28);
                    v65 = *(_DWORD *)(v52 + 112);
                    if ( !v64 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                        this);
                      v64 = *((_QWORD *)this + 28);
                    }
                    *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 264LL))(v64) + 57) = v65 != v50;
                  }
LABEL_127:
                  v66 = *((_QWORD *)this + 16);
                  v67 = *((_DWORD *)this + 66);
                  if ( !v66 )
                  {
                    Caver::ComponentOutletBase::Connect(
                      (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                      this);
                    v66 = *((_QWORD *)this + 16);
                  }
                  v63 = *((float *)this + 69);
                  v62 = *((float *)this + 50) * flt_589174[v67 == *(_DWORD *)(v66 + 112)];
                  if ( fabsf(v62 - v63) <= 0.001 )
                  {
LABEL_133:
                    v70 = 0.0;
                    if ( !*((_QWORD *)this + 32) )
                    {
                      v71 = *((_DWORD *)this + 66);
                      if ( v71 )
                        v70 = v63 * (float)v71;
                    }
                    v72 = *((_QWORD *)this + 16);
                    if ( v72 )
                    {
                      *(float *)(v72 + 176) = v70;
                    }
                    else
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                        this);
                      v72 = *((_QWORD *)this + 16);
                      *(float *)(v72 + 176) = v70;
                      if ( !v72 )
                      {
                        Caver::ComponentOutletBase::Connect(
                          (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                          this);
                        v72 = *((_QWORD *)this + 16);
                        *(_DWORD *)(v72 + 180) = 1145569280;
                        if ( !v72 )
                        {
                          Caver::ComponentOutletBase::Connect(
                            (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                            this);
                          v72 = *((_QWORD *)this + 16);
                        }
                        goto LABEL_140;
                      }
                    }
                    *(_DWORD *)(v72 + 180) = 1145569280;
LABEL_140:
                    (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v72 + 200LL))(v72, a2);
                    v73 = *((_QWORD *)this + 19);
                    if ( !v73 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 136),
                        this);
                      v73 = *((_QWORD *)this + 19);
                    }
                    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v73 + 200LL))(v73, a2);
                  }
LABEL_130:
                  v68 = *((_QWORD *)this + 28);
                  *((float *)this + 69) = v62;
                  if ( !v68 )
                  {
                    Caver::ComponentOutletBase::Connect(
                      (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                      this);
                    v68 = *((_QWORD *)this + 28);
                  }
                  v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 264LL))(v68);
                  v63 = *((float *)this + 69);
                  *(float *)(v69 + 52) = v63 / *((float *)this + 50);
                  goto LABEL_133;
                }
              }
              else
              {
                v48 = *((_QWORD *)this + 35);
                if ( v48 )
                  goto LABEL_88;
              }
LABEL_110:
              if ( *((_DWORD *)this + 42) && *((float *)this + 67) > 1.2 )
              {
                v61 = *((_QWORD *)this + 16);
                if ( !v61 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                    this);
                  v61 = *((_QWORD *)this + 16);
                }
                if ( *(float *)(v61 + 128) < 0.1 && *(float *)(v61 + 140) > 0.0 && !*(_BYTE *)(v61 + 144) )
                {
                  v74 = *((float *)this + 46);
                  v75 = *(float *)(*((_QWORD *)this + 5) + 112LL);
                  if ( v75 >= v74 )
                  {
                    if ( v75 <= (float)(v74 + *((float *)this + 48)) )
                      goto LABEL_117;
                    Caver::GenericMonsterControllerComponent::SetFacingDirection(this, -1);
                    if ( *((_DWORD *)this + 66) == -1 )
                      goto LABEL_117;
                    v81 = *((_QWORD *)this + 16);
                    *((_QWORD *)this + 33) = 0xFFFFFFFFLL;
                    if ( !v81 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                        this);
                      v81 = *((_QWORD *)this + 16);
                    }
                    v82 = (__int64 *)*((_QWORD *)this + 28);
                    v83 = *(_DWORD *)(v81 + 112);
                    if ( !v82 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                        this);
                      v82 = (__int64 *)*((_QWORD *)this + 28);
                    }
                    v79 = *v82;
                    v80 = v83 == -1;
                  }
                  else
                  {
                    Caver::GenericMonsterControllerComponent::SetFacingDirection(this, 1);
                    if ( *((_DWORD *)this + 66) == 1 )
                      goto LABEL_117;
                    v76 = *((_QWORD *)this + 16);
                    *((_QWORD *)this + 33) = 1;
                    if ( !v76 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 112),
                        this);
                      v76 = *((_QWORD *)this + 16);
                    }
                    v77 = (__int64 *)*((_QWORD *)this + 28);
                    v78 = *(_DWORD *)(v76 + 112);
                    if ( !v77 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::GenericMonsterControllerComponent *)((char *)this + 208),
                        this);
                      v77 = (__int64 *)*((_QWORD *)this + 28);
                    }
                    v79 = *v77;
                    v80 = v78 == 1;
                  }
                  v84 = *(__int64 (**)(void))(v79 + 264);
                  v85 = !v80;
                  *(_BYTE *)(v84() + 57) = v85;
                }
              }
LABEL_117:
              v62 = *((float *)this + 50);
              v63 = *((float *)this + 69);
              if ( fabsf(v62 - v63) <= 0.001 )
                goto LABEL_133;
              goto LABEL_130;
            }
          }
        }
      }
      else
      {
        NearestEnemy = Caver::MonsterControllerComponent::FindNearestEnemy(this);
        if ( NearestEnemy )
        {
          v29 = *((_QWORD *)this + 5);
          v30 = 300.0;
          v31 = *(float *)(v29 + 112);
          if ( *((_DWORD *)this + 42) )
          {
            v32 = *((float *)this + 46);
            if ( v31 < v32 || v31 > (float)(v32 + *((float *)this + 48)) )
              v30 = 150.0;
          }
          if ( (float)((float)((float)(*(float *)(NearestEnemy + 112) - v31)
                             * (float)(*(float *)(NearestEnemy + 112) - v31))
                     + (float)((float)(*(float *)(NearestEnemy + 116) - *(float *)(v29 + 116))
                             * (float)(*(float *)(NearestEnemy + 116) - *(float *)(v29 + 116)))) <= (float)(v30 * v30) )
          {
            ++*(_DWORD *)(NearestEnemy + 8);
            v33 = (_DWORD *)*((_QWORD *)this + 35);
            *((_QWORD *)this + 35) = NearestEnemy;
            if ( v33 )
            {
              v34 = v33[2] - 1;
              v33[2] = v34;
              if ( !v34 )
                (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v33 + 8LL))(v33, v33);
            }
            *((_DWORD *)this + 67) = 2139095039;
          }
        }
      }
      v27 = *((_QWORD *)this + 32);
      if ( !v27 )
        goto LABEL_55;
      goto LABEL_56;
    }
  }
  return result;
}

