/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E3474
 * Mangled: _ZN5Caver11TargetFrame10UpdateInfoEv
 * Demangled: Caver::TargetFrame::UpdateInfo(void)
 *
 * Callers: 1
 *   0x00000000001FA8B0  Caver::TargetFrame::UpdateInfo(void)
 *
 * Callees: 18
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7E80  Caver::FontText::Translate(Caver::Vector2 const&)
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB480  Caver::TargetFrame::UpdateHealthText(void)
 *   0x00000000001FFB20  Caver::GameInterfaceBuilder::TextGradient(float,float,float,float)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E3EE4  Caver::TargetFrame::SetHealth(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 281
 *   insn=0x00000000003E348C string=0x00000000003E3490 "V"
 *   insn=0x00000000003E3498 string=0x00000000003E349C "t"
 *   insn=0x00000000003E34A4 string=0x00000000003E34A8 "VG"
 *   insn=0x00000000003E34A8 string=0x00000000003E34AC ""
 *   insn=0x00000000003E34A8 string=0x00000000001F5200 "P'"
 *   insn=0x00000000003E34B8 string=0x00000000003E34BC "-r"
 *   insn=0x00000000003E34C0 string=0x00000000005945E3 "Level "
 *   insn=0x00000000003E34E8 string=0x00000000001F9CD0 "0'"
 *   insn=0x00000000003E3500 string=0x00000000003E3504 "h"
 *   insn=0x00000000003E3500 string=0x00000000003E3A50 "\t"
 *   insn=0x00000000003E3508 string=0x00000000003E350C "h"
 *   insn=0x00000000003E3508 string=0x00000000003E3520 "("
 *   insn=0x00000000003E350C string=0x00000000003E3510 "i"
 *   insn=0x00000000003E3510 string=0x00000000003E3514 ""
 *   insn=0x00000000003E3520 string=0x00000000003E3524 "I"
 *   insn=0x00000000003E3528 string=0x00000000003E352C """
 *   insn=0x00000000003E3534 string=0x00000000003E3538 "#"
 *   insn=0x00000000003E3538 string=0x00000000003E353C "yq"
 *   insn=0x00000000003E3544 string=0x00000000003E3548 "\n"
 *   insn=0x00000000003E3544 string=0x00000000003E3554 "u"
 *   insn=0x00000000003E3548 string=0x00000000003E354C "J"
 *   insn=0x00000000003E354C string=0x00000000003E3550 "\n"
 *   insn=0x00000000003E3554 string=0x00000000003E3558 "i"
 *   insn=0x00000000003E3558 string=0x00000000003E355C "5"
 *   insn=0x00000000003E3560 string=0x00000000003E3564 ""
 *   insn=0x00000000003E3570 string=0x00000000003E3574 "\t@"
 *   insn=0x00000000003E3580 string=0x00000000003E3584 ""
 *   insn=0x00000000003E3590 string=0x00000000003E3594 "@"
 *   insn=0x00000000003E35A0 string=0x00000000003E35A4 "5"
 *   insn=0x00000000003E35A8 string=0x00000000003E35AC ""
 *   insn=0x00000000003E35BC string=0x00000000003E35C0 "\t@"
 *   insn=0x00000000003E35C8 string=0x00000000003E35CC ""
 *   insn=0x00000000003E35DC string=0x00000000003E35E0 "@"
 *   insn=0x00000000003E35E8 string=0x00000000003E35EC "h"
 *   insn=0x00000000003E35EC string=0x00000000003E35F0 "a"
 *   insn=0x00000000003E35F0 string=0x0000000000592C1E "?? "
 *   insn=0x00000000003E35FC string=0x00000000003E3600 "n"
 *   insn=0x00000000003E3624 string=0x00000000003E3628 "a""
 *   insn=0x00000000003E3628 string=0x00000000003E362C ""
 *   insn=0x00000000003E3628 string=0x00000000003E3A74 "\t"
 *   insn=0x00000000003E363C string=0x00000000003E3640 "a"
 *   insn=0x00000000003E3654 string=0x00000000003E3658 "("
 *   insn=0x00000000003E3658 string=0x00000000003E365C "`jA"
 *   insn=0x00000000003E3660 string=0x00000000003E3664 "i"
 *   insn=0x00000000003E3664 string=0x00000000003E3668 "c~@"
 *   insn=0x00000000003E3670 string=0x00000000003E3674 "!L"
 *   insn=0x00000000003E3674 string=0x00000000003E3678 "dv@"
 *   insn=0x00000000003E3678 string=0x00000000003E367C "hz@"
 *   insn=0x00000000003E367C string=0x00000000003E3680 "i"
 *   insn=0x00000000003E368C string=0x00000000003E3690 "c""
 *   insn=0x00000000003E369C string=0x00000000003E36A0 "a8!"
 *   insn=0x00000000003E36BC string=0x00000000003E36C0 "h"
 *   insn=0x00000000003E36BC string=0x00000000001FB170 "0'"
 *   insn=0x00000000003E36C0 string=0x00000000003E36C4 "`BH"
 *   insn=0x00000000003E36DC string=0x00000000001F7E80 "0'"
 *   insn=0x00000000003E36E0 string=0x00000000003E36E4 "g_"
 *   insn=0x00000000003E36E4 string=0x00000000001FB480 "0'"
 *   insn=0x00000000003E36F0 string=0x00000000003E36F4 "a""
 *   insn=0x00000000003E3714 string=0x00000000003E3718 "K"
 *   insn=0x00000000003E3718 string=0x00000000003E371C "("
 *   insn=0x00000000003E371C string=0x00000000003E3720 "I"
 *   insn=0x00000000003E3724 string=0x00000000003E3728 """
 *   insn=0x00000000003E3730 string=0x00000000003E3734 "#"
 *   insn=0x00000000003E3740 string=0x00000000003E3744 "\n"
 *   insn=0x00000000003E3740 string=0x00000000003E3750 "u"
 *   insn=0x00000000003E3744 string=0x00000000003E3748 "J"
 *   insn=0x00000000003E3748 string=0x00000000003E374C "\n"
 *   insn=0x00000000003E3750 string=0x00000000003E3754 "i"
 *   insn=0x00000000003E375C string=0x00000000003E3760 ""
 *   insn=0x00000000003E3764 string=0x00000000003E3768 "a"
 *   insn=0x00000000003E376C string=0x00000000003E3770 "\t@"
 *   insn=0x00000000003E377C string=0x00000000003E3780 ""
 *   insn=0x00000000003E3784 string=0x00000000003E3788 "a"
 *   insn=0x00000000003E378C string=0x00000000003E3790 "@"
 *   insn=0x00000000003E3798 string=0x00000000003E379C "f"
 *   insn=0x00000000003E37A0 string=0x00000000003E37A4 "K"
 *   insn=0x00000000003E37A4 string=0x00000000003E37A8 "h"
 *   insn=0x00000000003E37A8 string=0x00000000003E37AC "I"
 *   insn=0x00000000003E37A8 string=0x0000000000592C08 "{"
 *   insn=0x00000000003E37B0 string=0x00000000003E37B4 """
 *   insn=0x00000000003E37BC string=0x00000000003E37C0 "#"
 *   insn=0x00000000003E37CC string=0x00000000003E37D0 "\n"
 *   insn=0x00000000003E37CC string=0x00000000003E37DC "u"
 *   insn=0x00000000003E37D0 string=0x00000000003E37D4 "J"
 *   insn=0x00000000003E37D4 string=0x00000000003E37D8 "\n"
 *   insn=0x00000000003E37DC string=0x00000000003E37E0 "i"
 *   insn=0x00000000003E37E8 string=0x00000000003E37EC ""
 *   insn=0x00000000003E37F8 string=0x00000000003E37FC "\t@"
 *   insn=0x00000000003E3808 string=0x00000000003E380C ""
 *   insn=0x00000000003E3818 string=0x00000000003E381C "@"
 *   insn=0x00000000003E3824 string=0x00000000003E3828 "C"
 *   insn=0x00000000003E382C string=0x00000000003E3830 "K"
 *   insn=0x00000000003E3830 string=0x00000000003E3834 "H"
 *   insn=0x00000000003E3830 string=0x00000000003E38B8 "H"
 *   insn=0x00000000003E3834 string=0x00000000003E3838 "I"
 *   insn=0x00000000003E383C string=0x00000000003E3840 """
 *   insn=0x00000000003E3848 string=0x00000000003E384C "#"
 *   insn=0x00000000003E3858 string=0x00000000003E385C "\n"
 *   insn=0x00000000003E3858 string=0x00000000003E3868 "u"
 *   insn=0x00000000003E385C string=0x00000000003E3860 "J"
 *   insn=0x00000000003E3860 string=0x00000000003E3864 "\n"
 *   insn=0x00000000003E3868 string=0x00000000003E386C "i"
 *   insn=0x00000000003E386C string=0x00000000003E3870 "5"
 *   insn=0x00000000003E3874 string=0x00000000003E3878 ""
 *   insn=0x00000000003E3884 string=0x00000000003E3888 "\t@"
 *   insn=0x00000000003E3894 string=0x00000000003E3898 ""
 *   insn=0x00000000003E38A4 string=0x00000000003E38A8 "@"
 *   insn=0x00000000003E38B0 string=0x00000000003E38B4 " "
 *   insn=0x00000000003E38D8 string=0x00000000003E38DC "\n"
 *   insn=0x00000000003E38D8 string=0x00000000003E38E8 "u"
 *   insn=0x00000000003E38DC string=0x00000000003E38E0 "J"
 *   insn=0x00000000003E38E0 string=0x00000000003E38E4 "\n"
 *   insn=0x00000000003E38E8 string=0x00000000003E38EC "i"
 *   insn=0x00000000003E38EC string=0x00000000003E38F0 "5"
 *   insn=0x00000000003E38F4 string=0x00000000003E38F8 ""
 *   insn=0x00000000003E3904 string=0x00000000003E3908 "\t@"
 *   insn=0x00000000003E3914 string=0x00000000003E3918 ""
 *   insn=0x00000000003E3924 string=0x00000000003E3928 "@"
 *   insn=0x00000000003E3934 string=0x00000000003E3938 "5"
 *   insn=0x00000000003E3938 string=0x00000000003E397C "h"
 *   insn=0x00000000003E393C string=0x00000000003E3940 ""
 *   insn=0x00000000003E3950 string=0x00000000003E3954 "\t@"
 *   insn=0x00000000003E395C string=0x00000000003E3960 ""
 *   insn=0x00000000003E3970 string=0x00000000003E3974 "@"
 *   insn=0x00000000003E3980 string=0x00000000003E3984 "y"
 *   insn=0x00000000003E3990 string=0x00000000003E3994 "?"
 *   insn=0x00000000003E3994 string=0x00000000003E3998 " W"
 *   insn=0x00000000003E39A0 string=0x00000000003E39A4 "su"
 *   insn=0x00000000003E39B0 string=0x00000000003E39B4 "\t"
 *   insn=0x00000000003E39DC string=0x00000000003E39E0 "a"
 *   insn=0x00000000003E39E0 string=0x00000000005923A5 " "
 *   insn=0x00000000003E39EC string=0x00000000003E39F0 "y"
 *   insn=0x00000000003E3A14 string=0x00000000003E3A18 "A"
 *   insn=0x00000000003E3A18 string=0x00000000003E3AE0 "\t"
 *   insn=0x00000000003E3A24 string=0x00000000003E3A28 " "
 *   insn=0x00000000003E3A28 string=0x00000000003E3A2C "\t"
 *   insn=0x00000000003E3A2C string=0x00000000003E3A30 ")=G"
 *   insn=0x00000000003E3A30 string=0x00000000003E3A34 "!"
 *   insn=0x00000000003E3A34 string=0x00000000003E3A38 "i"
 *   insn=0x00000000003E3A38 string=0x00000000003E3A3C "\t"
 *   insn=0x00000000003E3A38 string=0x00000000003E3B04 "\t"
 *   insn=0x00000000003E3A3C string=0x00000000003E3A40 "*"
 *   insn=0x00000000003E3A40 string=0x00000000003E3A44 "\n"
 *   insn=0x00000000003E3A48 string=0x00000000003E3A4C "1"
 *   insn=0x00000000003E3A4C string=0x00000000003E3B10 "?"
 *   insn=0x00000000003E3A50 string=0x00000000003E3A54 ")=G"
 *   insn=0x00000000003E3A54 string=0x00000000003E3A58 "!"
 *   insn=0x00000000003E3A5C string=0x00000000003E3A60 "\t"
 *   insn=0x00000000003E3A5C string=0x00000000003E3A98 "\t"
 *   insn=0x00000000003E3A60 string=0x00000000003E3A64 "*"
 *   insn=0x00000000003E3A64 string=0x00000000003E3A68 "\n"
 *   insn=0x00000000003E3A6C string=0x00000000003E3A70 ""
 *   insn=0x00000000003E3A70 string=0x00000000003E3AA4 "?"
 *   insn=0x00000000003E3A74 string=0x00000000003E3A78 ")=G"
 *   insn=0x00000000003E3A78 string=0x00000000003E3A7C "!"
 *   insn=0x00000000003E3A7C string=0x00000000003E3A80 "\t"
 *   insn=0x00000000003E3A80 string=0x00000000003E3A84 "\t"
 *   insn=0x00000000003E3A80 string=0x00000000003E3AC0 "\t"
 *   insn=0x00000000003E3A84 string=0x00000000003E3A88 "*"
 *   insn=0x00000000003E3A88 string=0x00000000003E3A8C "\n"
 *   insn=0x00000000003E3A94 string=0x00000000003E3ACC "?"
 *   insn=0x00000000003E3A98 string=0x00000000003E3A9C "*"
 *   insn=0x00000000003E3A9C string=0x00000000003E3AA0 "\n"
 *   insn=0x00000000003E3AAC string=0x00000000003E3AB0 "="
 *   insn=0x00000000003E3AB0 string=0x00000000003E3AB4 "h"
 *   insn=0x00000000003E3AB4 string=0x00000000003E3AB8 "H"
 *   insn=0x00000000003E3AC0 string=0x00000000003E3AC4 "*"
 *   insn=0x00000000003E3AC4 string=0x00000000003E3AC8 "\n"
 *   insn=0x00000000003E3AD4 string=0x00000000003E3AD8 "3"
 *   insn=0x00000000003E3AE0 string=0x00000000003E3AE4 ")=G"
 *   insn=0x00000000003E3AE4 string=0x00000000003E3AE8 "!"
 *   insn=0x00000000003E3AEC string=0x00000000003E3AF0 "\t"
 *   insn=0x00000000003E3AEC string=0x00000000003E3B20 "\t"
 *   insn=0x00000000003E3AF0 string=0x00000000003E3AF4 "*"
 *   insn=0x00000000003E3AF4 string=0x00000000003E3AF8 "\n"
 *   insn=0x00000000003E3AFC string=0x00000000003E3B00 ""
 *   insn=0x00000000003E3B00 string=0x00000000003E3B2C "?"
 *   insn=0x00000000003E3B04 string=0x00000000003E3B08 "*"
 *   insn=0x00000000003E3B08 string=0x00000000003E3B0C "\n"
 *   insn=0x00000000003E3B20 string=0x00000000003E3B24 "*"
 *   insn=0x00000000003E3B24 string=0x00000000003E3B28 "\n"
 *   insn=0x00000000003E3B2C string=0x00000000003E3B30 "l"
 *   insn=0x00000000003E3B34 string=0x00000000003E3B38 ""
 *   insn=0x00000000003E3B40 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E3B50 string=0x00000000003E3B54 ""
 *   insn=0x00000000003E3B60 string=0x00000000003E3B64 "\t@"
 *   insn=0x00000000003E3B70 string=0x00000000003E3B74 ""
 *   insn=0x00000000003E3B80 string=0x00000000003E3B84 "@"
 *   insn=0x00000000003E3BA0 string=0x00000000003E3BA4 ""
 *   insn=0x00000000003E3BB0 string=0x00000000003E3BB4 "\t@"
 *   insn=0x00000000003E3BC0 string=0x00000000003E3BC4 ""
 *   insn=0x00000000003E3BD0 string=0x00000000003E3BD4 "@"
 *   insn=0x00000000003E3BF0 string=0x00000000003E3BF4 ""
 *   insn=0x00000000003E3C00 string=0x00000000003E3C04 "\t@"
 *   insn=0x00000000003E3C10 string=0x00000000003E3C14 ""
 *   insn=0x00000000003E3C20 string=0x00000000003E3C24 "@"
 *   insn=0x00000000003E3C40 string=0x00000000003E3C44 ""
 *   insn=0x00000000003E3C50 string=0x00000000003E3C54 "\t@"
 *   insn=0x00000000003E3C60 string=0x00000000003E3C64 ""
 *   insn=0x00000000003E3C70 string=0x00000000003E3C74 "@"
 *   insn=0x00000000003E3C88 string=0x00000000003E3C8C "(a"
 *   insn=0x00000000003E3C90 string=0x00000000003E3C94 "@"
 *   insn=0x00000000003E3C94 string=0x00000000003E3C98 "\n"
 *   insn=0x00000000003E3C98 string=0x00000000003E3C9C "J=G"
 *   insn=0x00000000003E3C9C string=0x00000000003E3CA0 ")!"
 *   insn=0x00000000003E3CA4 string=0x00000000003E3CA8 "*"
 *   insn=0x00000000003E3CA4 string=0x00000000003E3CF4 "*"
 *   insn=0x00000000003E3CA8 string=0x00000000003E3CAC "K"
 *   insn=0x00000000003E3CAC string=0x00000000003E3CB0 "+"
 *   insn=0x00000000003E3CB8 string=0x00000000003E3D00 "_"
 *   insn=0x00000000003E3CC0 string=0x00000000003E3CC4 "(a"
 *   insn=0x00000000003E3CCC string=0x00000000003E3CD0 "\n"
 *   insn=0x00000000003E3CD0 string=0x00000000003E3CD4 "J=G"
 *   insn=0x00000000003E3CD4 string=0x00000000003E3CD8 ")!"
 *   insn=0x00000000003E3CDC string=0x00000000003E3CE0 "*"
 *   insn=0x00000000003E3CE0 string=0x00000000003E3CE4 "K"
 *   insn=0x00000000003E3CE4 string=0x00000000003E3CE8 "+"
 *   insn=0x00000000003E3CF4 string=0x00000000003E3CF8 "K"
 *   insn=0x00000000003E3CF8 string=0x00000000003E3CFC "+"
 *   insn=0x00000000003E3D28 string=0x00000000003E3D2C "\t"
 *   insn=0x00000000003E3D2C string=0x00000000003E3D30 ")=G"
 *   insn=0x00000000003E3D30 string=0x00000000003E3D34 "!"
 *   insn=0x00000000003E3D34 string=0x00000000003E3D38 "i"
 *   insn=0x00000000003E3D38 string=0x00000000003E3D3C "\t"
 *   insn=0x00000000003E3D38 string=0x00000000003E3D64 "\t"
 *   insn=0x00000000003E3D3C string=0x00000000003E3D40 "*"
 *   insn=0x00000000003E3D40 string=0x00000000003E3D44 "\n"
 *   insn=0x00000000003E3D48 string=0x00000000003E3D4C "?"
 *   insn=0x00000000003E3D4C string=0x00000000003E3D50 "l"
 *   insn=0x00000000003E3D64 string=0x00000000003E3D68 "*"
 *   insn=0x00000000003E3D68 string=0x00000000003E3D6C "\n"
 *   insn=0x00000000003E3D6C string=0x00000000003E3D70 "?"
 *   insn=0x00000000003E3D70 string=0x00000000003E3D74 ""
 *   insn=0x00000000003E3D74 string=0x00000000003E3D78 "Y"
 *   insn=0x00000000003E3D80 string=0x00000000003E3D84 "(a"
 *   insn=0x00000000003E3D8C string=0x00000000003E3D90 "\n"
 *   insn=0x00000000003E3D90 string=0x00000000003E3D94 "J=G"
 *   insn=0x00000000003E3D94 string=0x00000000003E3D98 ")!"
 *   insn=0x00000000003E3D98 string=0x00000000003E3D9C "*"
 *   insn=0x00000000003E3D9C string=0x00000000003E3DA0 "*"
 *   insn=0x00000000003E3D9C string=0x00000000003E3DC0 "*"
 *   insn=0x00000000003E3DA0 string=0x00000000003E3DA4 "K"
 *   insn=0x00000000003E3DA4 string=0x00000000003E3DA8 "+"
 *   insn=0x00000000003E3DAC string=0x00000000003E3DB0 "_"
 *   insn=0x00000000003E3DB0 string=0x00000000003E3DB4 "L\t"
 *   insn=0x00000000003E3DB8 string=0x00000000003E3DBC "="
 *   insn=0x00000000003E3DC0 string=0x00000000003E3DC4 "K"
 *   insn=0x00000000003E3DC4 string=0x00000000003E3DC8 "+"
 *   insn=0x00000000003E3DC8 string=0x00000000003E3DCC "_"
 *   insn=0x00000000003E3DCC string=0x00000000003E3DD0 "M"
 *   insn=0x00000000003E3DD0 string=0x00000000003E3DD4 "B"
 *   insn=0x00000000003E3DE4 string=0x00000000003E3DE8 ""
 *   insn=0x00000000003E3DEC string=0x00000000003E3DF0 "a"
 *   insn=0x00000000003E3DF4 string=0x00000000003E3DF8 "\t@"
 *   insn=0x00000000003E3E04 string=0x00000000003E3E08 ""
 *   insn=0x00000000003E3E0C string=0x00000000003E3E10 "a"
 *   insn=0x00000000003E3E14 string=0x00000000003E3E18 "@"
 *   insn=0x00000000003E3E20 string=0x00000000003E3E24 "."
 *   insn=0x00000000003E3E30 string=0x00000000003E3E34 "(a"
 *   insn=0x00000000003E3E3C string=0x00000000003E3E40 "\n"
 *   insn=0x00000000003E3E40 string=0x00000000003E3E44 "J=G"
 *   insn=0x00000000003E3E44 string=0x00000000003E3E48 ")!"
 *   insn=0x00000000003E3E4C string=0x00000000003E3E50 "*"
 *   insn=0x00000000003E3E4C string=0x00000000003E3EC0 "*"
 *   insn=0x00000000003E3E50 string=0x00000000003E3E54 "K"
 *   insn=0x00000000003E3E54 string=0x00000000003E3E58 "+"
 *   insn=0x00000000003E3E60 string=0x00000000003E3EA4 "_"
 *   insn=0x00000000003E3E68 string=0x00000000003E3E6C "\n"
 *   insn=0x00000000003E3E6C string=0x00000000003E3E70 "J"
 *   insn=0x00000000003E3E74 string=0x00000000003E3E78 "(a"
 *   insn=0x00000000003E3E80 string=0x00000000003E3E84 "\n"
 *   insn=0x00000000003E3E84 string=0x00000000003E3E88 "J=G"
 *   insn=0x00000000003E3E88 string=0x00000000003E3E8C ")!"
 *   insn=0x00000000003E3E90 string=0x00000000003E3E94 "*"
 *   insn=0x00000000003E3E94 string=0x00000000003E3E98 "K"
 *   insn=0x00000000003E3E98 string=0x00000000003E3E9C "+"
 *   insn=0x00000000003E3EB0 string=0x00000000003E3EB4 "<"
 *   insn=0x00000000003E3EC0 string=0x00000000003E3EC4 "K"
 *   insn=0x00000000003E3EC4 string=0x00000000003E3EC8 "+"
 *   insn=0x00000000003E3EC8 string=0x00000000003E3ECC "_"
 *   insn=0x00000000003E3EDC string=0x00000000003E3EE0 "yv"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::UpdateInfo(Caver::TargetFrame *this)
{
  Caver::FontText *v2; // x20
  Caver::GameInterfaceBuilder *v3; // x0
  int v4; // w8
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  char *v13; // x0
  int v14; // w8
  unsigned int v15; // w9
  float v16; // s0
  unsigned int v17; // s0
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x9
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x9
  __int64 v26; // x8
  __int64 v27; // x8
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x9
  __int64 v30; // x8
  __int64 v31; // x8
  unsigned __int64 v32; // x8
  unsigned __int64 v33; // x9
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x8
  int v39; // w25
  char *v40; // x24
  __int64 v41; // x0
  __int64 v42; // x8
  void *v43; // x0
  unsigned int *v44; // x8
  int v45; // w9
  unsigned int *v46; // x8
  int v47; // w9
  unsigned int *v48; // x8
  int v49; // w9
  unsigned int *v50; // x8
  int v51; // w9
  char *v52; // [xsp+8h] [xbp-78h] BYREF
  __int64 v53; // [xsp+10h] [xbp-70h] BYREF
  unsigned __int64 v54; // [xsp+20h] [xbp-60h] BYREF
  unsigned __int64 v55; // [xsp+28h] [xbp-58h]
  _BYTE v56[12]; // [xsp+34h] [xbp-4Ch] BYREF

  v2 = (Caver::TargetFrame *)((char *)this + 288);
  *(_QWORD *)&v56[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::FontText::Clear((Caver::TargetFrame *)((char *)this + 288));
  LODWORD(v54) = -1;
  Caver::FontText::SetColor(v2, (const Caver::Color *)&v54);
  sub_566BB8((int)&v54, "Level ");
  v53 = 0;
  Caver::FontText::AddText();
  v3 = (Caver::GameInterfaceBuilder *)(v54 - 24);
  if ( (__int64 *)(v54 - 24) == &qword_6FD2E0 )
    goto LABEL_80;
  v46 = (unsigned int *)(v54 - 8);
  if ( &pthread_create )
  {
    do
      v47 = __ldaxr(v46);
    while ( __stlxr(v47 - 1, v46) );
  }
  else
  {
    v47 = (*v46)--;
  }
  if ( v47 > 0 )
  {
LABEL_80:
    if ( *((_BYTE *)this + 260) )
    {
LABEL_4:
      Caver::GameInterfaceBuilder::TextGradient(v3, 0.05, 1.0, 0.85, 1.0);
      v6 = v54;
      v5 = v55;
      if ( v55 )
        ++*(_QWORD *)(v55 + 8);
      v7 = (_QWORD *)*((_QWORD *)this + 40);
      *((_QWORD *)this + 39) = v6;
      *((_QWORD *)this + 40) = v5;
      if ( v7 )
      {
        v8 = v7[1] - 1LL;
        v7[1] = v8;
        if ( !v8 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v9 = v7[2] - 1LL;
          v7[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      v10 = (_QWORD *)v55;
      if ( v55 )
      {
        v11 = *(_QWORD *)(v55 + 8) - 1LL;
        *(_QWORD *)(v55 + 8) = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v12 = v10[2] - 1LL;
          v10[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      *((_BYTE *)this + 260) = 1;
      goto LABEL_15;
    }
  }
  else
  {
    operator delete(v3);
    if ( *((_BYTE *)this + 260) )
      goto LABEL_4;
  }
  v4 = *((_DWORD *)this + 64) - *((_DWORD *)this + 60);
  if ( v4 >= 5 )
    goto LABEL_4;
  if ( v4 < 2 )
  {
    if ( v4 < -2 )
    {
      if ( v4 < -4 )
      {
        Caver::GameInterfaceBuilder::TextGradient(v3, 0.0, 0.0, 0.85, 1.0);
        v33 = v54;
        v32 = v55;
        if ( v55 )
          ++*(_QWORD *)(v55 + 8);
        v21 = (_QWORD *)*((_QWORD *)this + 40);
        *((_QWORD *)this + 39) = v33;
        *((_QWORD *)this + 40) = v32;
        if ( v21 )
        {
          v34 = v21[1] - 1LL;
          v21[1] = v34;
          if ( !v34 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
            v35 = v21[2] - 1LL;
            v21[2] = v35;
            if ( !v35 )
              goto LABEL_43;
          }
        }
      }
      else
      {
        Caver::GameInterfaceBuilder::TextGradient(v3, 0.29, 1.0, 0.85, 1.0);
        v29 = v54;
        v28 = v55;
        if ( v55 )
          ++*(_QWORD *)(v55 + 8);
        v21 = (_QWORD *)*((_QWORD *)this + 40);
        *((_QWORD *)this + 39) = v29;
        *((_QWORD *)this + 40) = v28;
        if ( v21 )
        {
          v30 = v21[1] - 1LL;
          v21[1] = v30;
          if ( !v30 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
            v31 = v21[2] - 1LL;
            v21[2] = v31;
            if ( !v31 )
              goto LABEL_43;
          }
        }
      }
    }
    else
    {
      Caver::GameInterfaceBuilder::TextGradient(v3, 0.17, 1.0, 0.85, 1.0);
      v25 = v54;
      v24 = v55;
      if ( v55 )
        ++*(_QWORD *)(v55 + 8);
      v21 = (_QWORD *)*((_QWORD *)this + 40);
      *((_QWORD *)this + 39) = v25;
      *((_QWORD *)this + 40) = v24;
      if ( v21 )
      {
        v26 = v21[1] - 1LL;
        v21[1] = v26;
        if ( !v26 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
          v27 = v21[2] - 1LL;
          v21[2] = v27;
          if ( !v27 )
            goto LABEL_43;
        }
      }
    }
  }
  else
  {
    Caver::GameInterfaceBuilder::TextGradient(v3, 0.11, 1.0, 0.85, 1.0);
    v20 = v54;
    v19 = v55;
    if ( v55 )
      ++*(_QWORD *)(v55 + 8);
    v21 = (_QWORD *)*((_QWORD *)this + 40);
    *((_QWORD *)this + 39) = v20;
    *((_QWORD *)this + 40) = v19;
    if ( v21 )
    {
      v22 = v21[1] - 1LL;
      v21[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v23 = v21[2] - 1LL;
        v21[2] = v23;
        if ( !v23 )
LABEL_43:
          (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
  }
  v36 = (_QWORD *)v55;
  if ( v55 )
  {
    v37 = *(_QWORD *)(v55 + 8) - 1LL;
    *(_QWORD *)(v55 + 8) = v37;
    if ( !v37 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v38 = v36[2] - 1LL;
      v36[2] = v38;
      if ( !v38 )
        (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
  if ( !*((_BYTE *)this + 260) )
  {
    v39 = *((_DWORD *)this + 64);
    v40 = &byte_6FD2F8;
    v52 = &byte_6FD2F8;
    v41 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    v42 = v41;
    if ( v39 < 0 )
    {
      *(_BYTE *)(v41 - 1) = 45;
      v42 = v41 - 1;
      v40 = v52;
    }
    sub_569E1C(&v52, 0, *((_QWORD *)v40 - 3), v42, &v56[-v42]);
    sub_56A528(&v53, &v52);
    sub_5677D4(&v53, " ", 1);
    v54 = 0;
    Caver::FontText::AddText();
    v43 = (void *)(v53 - 24);
    if ( (__int64 *)(v53 - 24) != &qword_6FD2E0 )
    {
      v50 = (unsigned int *)(v53 - 8);
      if ( &pthread_create )
      {
        do
          v51 = __ldaxr(v50);
        while ( __stlxr(v51 - 1, v50) );
      }
      else
      {
        v51 = (*v50)--;
      }
      if ( v51 <= 0 )
        operator delete(v43);
    }
    v13 = v52 - 24;
    if ( v52 - 24 != (char *)&qword_6FD2E0 )
    {
      v44 = (unsigned int *)(v52 - 8);
      if ( &pthread_create )
      {
        do
          v45 = __ldaxr(v44);
        while ( __stlxr(v45 - 1, v44) );
      }
      else
      {
        v45 = (*v44)--;
      }
      if ( v45 <= 0 )
        goto LABEL_68;
    }
    goto LABEL_16;
  }
LABEL_15:
  sub_566BB8((int)&v54, "?? ");
  v53 = 0;
  Caver::FontText::AddText();
  v13 = (char *)(v54 - 24);
  if ( (__int64 *)(v54 - 24) != &qword_6FD2E0 )
  {
    v48 = (unsigned int *)(v54 - 8);
    if ( &pthread_create )
    {
      do
        v49 = __ldaxr(v48);
      while ( __stlxr(v49 - 1, v48) );
    }
    else
    {
      v49 = (*v48)--;
    }
    if ( v49 <= 0 )
LABEL_68:
      operator delete(v13);
  }
LABEL_16:
  LODWORD(v54) = -1;
  Caver::FontText::SetColor(v2, (const Caver::Color *)&v54);
  v54 = 0;
  Caver::FontText::AddText();
  v14 = *((_DWORD *)this + 30);
  v15 = *((_DWORD *)this + 32);
  v16 = roundf(fmaxf(*((float *)this + 90) + 60.0, 208.0) * 0.5);
  *(float *)&v17 = v16 + v16;
  *(float *)&v54 = (float)(*((float *)this + 29) + (float)(*((float *)this + 31) * 0.5)) - (float)(*(float *)&v17 * 0.5);
  HIDWORD(v54) = v14;
  v55 = __PAIR64__(v15, v17);
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v54);
  v54 = vadd_f32(*(float32x2_t *)((char *)this + 132), (float32x2_t)0x4100000041200000LL).n64_u64[0];
  Caver::FontText::Translate();
  return Caver::TargetFrame::UpdateHealthText(this);
}

