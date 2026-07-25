/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041538C
 * Mangled: _ZN5Caver17ItemInfoPopupView4InitERKN5boost13intrusive_ptrINS_7TextureEEERKSsS8_
 * Demangled: Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FB3A0  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *
 * Callees: 22
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89A0  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB3A0  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000416238  Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 299
 *   insn=0x00000000004153B0 string=0x00000000004153B4 "X"
 *   insn=0x00000000004153B4 string=0x00000000004153B8 ""
 *   insn=0x00000000004153C0 string=0x00000000004153C4 " "
 *   insn=0x00000000004153D8 string=0x00000000004153DC "}@"
 *   insn=0x00000000004153EC string=0x00000000001FA350 "0'"
 *   insn=0x00000000004153F4 string=0x00000000005942D0 "ui_notification_background"
 *   insn=0x0000000000415414 string=0x0000000000415418 "f"
 *   insn=0x0000000000415420 string=0x0000000000415424 "9"
 *   insn=0x0000000000415430 string=0x0000000000415B88 "i"
 *   insn=0x0000000000415434 string=0x0000000000415438 "j"
 *   insn=0x0000000000415438 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000041546C string=0x00000000001FCB10 "0'"
 *   insn=0x0000000000415478 string=0x000000000041547C "5"
 *   insn=0x0000000000415494 string=0x0000000000415498 "7"
 *   insn=0x000000000041549C string=0x00000000004154A0 ""
 *   insn=0x00000000004154AC string=0x00000000004154B0 "\t@"
 *   insn=0x00000000004154BC string=0x00000000004154C0 ""
 *   insn=0x00000000004154CC string=0x00000000004154D0 "@"
 *   insn=0x00000000004154F0 string=0x00000000001F9730 "0'"
 *   insn=0x00000000004154FC string=0x0000000000415500 "\t"
 *   insn=0x000000000041551C string=0x000000000059431F "ui_menu_itemslot"
 *   insn=0x0000000000415550 string=0x0000000000415BAC "i"
 *   insn=0x000000000041555C string=0x0000000000415560 "AE"
 *   insn=0x0000000000415560 string=0x0000000000415564 "*AE"
 *   insn=0x000000000041559C string=0x00000000004155A0 "\"
 *   insn=0x00000000004155C8 string=0x00000000004155CC "7"
 *   insn=0x00000000004155D0 string=0x00000000004155D4 ""
 *   insn=0x00000000004155E0 string=0x00000000004155E4 "\t@"
 *   insn=0x00000000004155F0 string=0x00000000004155F4 ""
 *   insn=0x0000000000415600 string=0x0000000000415604 "@"
 *   insn=0x0000000000415620 string=0x0000000000415624 "C"
 *   insn=0x0000000000415624 string=0x0000000000415628 "hf"
 *   insn=0x0000000000415640 string=0x0000000000415644 "`\t "
 *   insn=0x0000000000415644 string=0x0000000000415648 "A"
 *   insn=0x0000000000415648 string=0x000000000041564C "\n"
 *   insn=0x000000000041564C string=0x0000000000415650 " "
 *   insn=0x0000000000415650 string=0x0000000000415654 ""
 *   insn=0x0000000000415654 string=0x0000000000415658 "@"
 *   insn=0x0000000000415658 string=0x000000000041565C ""q"
 *   insn=0x000000000041566C string=0x0000000000415670 "H"
 *   insn=0x00000000004156D4 string=0x00000000004156D8 "7"
 *   insn=0x00000000004156DC string=0x00000000004156E0 ""
 *   insn=0x00000000004156EC string=0x00000000004156F0 "\t@"
 *   insn=0x00000000004156FC string=0x0000000000415700 ""
 *   insn=0x000000000041570C string=0x0000000000415710 "@"
 *   insn=0x0000000000415738 string=0x000000000041573C "A"
 *   insn=0x0000000000415748 string=0x000000000041574C "\t"
 *   insn=0x000000000041577C string=0x0000000000415780 ""
 *   insn=0x00000000004157D4 string=0x00000000004157D8 "r"
 *   insn=0x00000000004157D8 string=0x00000000001F89A0 "0'"
 *   insn=0x00000000004157E4 string=0x00000000004157E8 "Z"
 *   insn=0x0000000000415800 string=0x0000000000415804 "6"
 *   insn=0x0000000000415808 string=0x000000000041580C ""
 *   insn=0x0000000000415818 string=0x000000000041581C "\t@"
 *   insn=0x0000000000415828 string=0x000000000041582C ""
 *   insn=0x0000000000415838 string=0x000000000041583C "@"
 *   insn=0x0000000000415850 string=0x0000000000415854 "W"
 *   insn=0x0000000000415854 string=0x00000000001FD9B0 "0'"
 *   insn=0x000000000041585C string=0x0000000000415860 "\n"
 *   insn=0x0000000000415860 string=0x0000000000415864 "J"
 *   insn=0x0000000000415864 string=0x0000000000415868 "\n"
 *   insn=0x0000000000415870 string=0x0000000000415874 "6"
 *   insn=0x0000000000415878 string=0x000000000041587C ""
 *   insn=0x0000000000415888 string=0x000000000041588C "\t@"
 *   insn=0x0000000000415898 string=0x000000000041589C ""
 *   insn=0x00000000004158A8 string=0x00000000004158AC "@"
 *   insn=0x00000000004158B8 string=0x00000000004158BC "6"
 *   insn=0x00000000004158C0 string=0x00000000004158C4 ""
 *   insn=0x00000000004158D0 string=0x00000000004158D4 "\t@"
 *   insn=0x00000000004158E0 string=0x00000000004158E4 ""
 *   insn=0x00000000004158F0 string=0x00000000004158F4 "@"
 *   insn=0x0000000000415900 string=0x0000000000415904 ""
 *   insn=0x0000000000415930 string=0x00000000001F9CD0 "0'"
 *   insn=0x0000000000415934 string=0x0000000000415938 "*"
 *   insn=0x000000000041594C string=0x0000000000415950 ""
 *   insn=0x00000000004159D0 string=0x00000000004159D4 "5"
 *   insn=0x00000000004159D8 string=0x00000000004159DC ""
 *   insn=0x00000000004159E8 string=0x00000000004159EC "\t@"
 *   insn=0x00000000004159F8 string=0x00000000004159FC ""
 *   insn=0x0000000000415A08 string=0x0000000000415A0C "@"
 *   insn=0x0000000000415A2C string=0x0000000000415A30 "\n"
 *   insn=0x0000000000415A30 string=0x0000000000415A34 "J"
 *   insn=0x0000000000415A34 string=0x0000000000415A38 "\n"
 *   insn=0x0000000000415A40 string=0x0000000000415A44 "5"
 *   insn=0x0000000000415A48 string=0x0000000000415A4C ""
 *   insn=0x0000000000415A58 string=0x0000000000415A5C "\t@"
 *   insn=0x0000000000415A68 string=0x0000000000415A6C ""
 *   insn=0x0000000000415A78 string=0x0000000000415A7C "@"
 *   insn=0x0000000000415A88 string=0x0000000000415A8C "5"
 *   insn=0x0000000000415A90 string=0x0000000000415A94 ""
 *   insn=0x0000000000415AA0 string=0x0000000000415AA4 "\t@"
 *   insn=0x0000000000415AB0 string=0x0000000000415AB4 ""
 *   insn=0x0000000000415AC0 string=0x0000000000415AC4 "@"
 *   insn=0x0000000000415AD0 string=0x0000000000415AD4 ""
 *   insn=0x0000000000415B00 string=0x0000000000415B04 "s"
 *   insn=0x0000000000415B0C string=0x0000000000415B10 "@"
 *   insn=0x0000000000415B10 string=0x0000000000415B14 ""
 *   insn=0x0000000000415B14 string=0x0000000000415B18 ""
 *   insn=0x0000000000415B1C string=0x0000000000415B20 ""
 *   insn=0x0000000000415B20 string=0x0000000000415B24 ""
 *   insn=0x0000000000415B30 string=0x0000000000415B34 "@"
 *   insn=0x0000000000415B30 string=0x0000000000415B50 ""
 *   insn=0x0000000000415B34 string=0x0000000000415B38 ""
 *   insn=0x0000000000415B38 string=0x0000000000415B3C ""
 *   insn=0x0000000000415B40 string=0x0000000000415B44 ""
 *   insn=0x0000000000415B44 string=0x0000000000415B48 ""
 *   insn=0x0000000000415B88 string=0x0000000000415B8C ")=G"
 *   insn=0x0000000000415B8C string=0x0000000000415B90 "!"
 *   insn=0x0000000000415B94 string=0x0000000000415B98 "\t"
 *   insn=0x0000000000415B94 string=0x0000000000415BD0 "\t"
 *   insn=0x0000000000415B98 string=0x0000000000415B9C "*"
 *   insn=0x0000000000415B9C string=0x0000000000415BA0 "\n"
 *   insn=0x0000000000415BA4 string=0x0000000000415BA8 ""
 *   insn=0x0000000000415BA8 string=0x0000000000415BDC "?"
 *   insn=0x0000000000415BAC string=0x0000000000415BB0 ")=G"
 *   insn=0x0000000000415BB0 string=0x0000000000415BB4 "!"
 *   insn=0x0000000000415BB8 string=0x0000000000415BBC "\t"
 *   insn=0x0000000000415BB8 string=0x0000000000415BF0 "\t"
 *   insn=0x0000000000415BBC string=0x0000000000415BC0 "*"
 *   insn=0x0000000000415BC0 string=0x0000000000415BC4 "\n"
 *   insn=0x0000000000415BCC string=0x0000000000415BFC "?"
 *   insn=0x0000000000415BD0 string=0x0000000000415BD4 "*"
 *   insn=0x0000000000415BD4 string=0x0000000000415BD8 "\n"
 *   insn=0x0000000000415BF0 string=0x0000000000415BF4 "*"
 *   insn=0x0000000000415BF4 string=0x0000000000415BF8 "\n"
 *   insn=0x0000000000415C08 string=0x0000000000415C0C "R"
 *   insn=0x0000000000415C10 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000415C20 string=0x0000000000415C24 ""
 *   insn=0x0000000000415C28 string=0x0000000000415C2C "A"
 *   insn=0x0000000000415C30 string=0x0000000000415C34 "\t@"
 *   insn=0x0000000000415C40 string=0x0000000000415C44 ""
 *   insn=0x0000000000415C48 string=0x0000000000415C4C "A"
 *   insn=0x0000000000415C50 string=0x0000000000415C54 "@"
 *   insn=0x0000000000415C5C string=0x0000000000415C60 "]"
 *   insn=0x0000000000415C68 string=0x0000000000415C6C "T"
 *   insn=0x0000000000415C70 string=0x0000000000415C74 ""
 *   insn=0x0000000000415C80 string=0x0000000000415C84 "\t@"
 *   insn=0x0000000000415C90 string=0x0000000000415C94 ""
 *   insn=0x0000000000415CA0 string=0x0000000000415CA4 "@"
 *   insn=0x0000000000415CAC string=0x0000000000415CB0 "I"
 *   insn=0x0000000000415CD0 string=0x0000000000415CD4 "(a"
 *   insn=0x0000000000415CDC string=0x0000000000415CE0 "j"
 *   insn=0x0000000000415CE0 string=0x0000000000415CE4 "J=G"
 *   insn=0x0000000000415CE4 string=0x0000000000415CE8 ")!"
 *   insn=0x0000000000415CEC string=0x0000000000415CF0 "*"
 *   insn=0x0000000000415CEC string=0x0000000000415D20 "*"
 *   insn=0x0000000000415CF0 string=0x0000000000415CF4 "K"
 *   insn=0x0000000000415CF4 string=0x0000000000415CF8 "+"
 *   insn=0x0000000000415CFC string=0x0000000000415D00 "_"
 *   insn=0x0000000000415D14 string=0x0000000000415D18 "@"
 *   insn=0x0000000000415D18 string=0x0000000000415D1C "@"
 *   insn=0x0000000000415D18 string=0x0000000000415E00 "@"
 *   insn=0x0000000000415D20 string=0x0000000000415D24 "K"
 *   insn=0x0000000000415D24 string=0x0000000000415D28 "+"
 *   insn=0x0000000000415D28 string=0x0000000000415D2C "_"
 *   insn=0x0000000000415D30 string=0x0000000000415D34 "1"
 *   insn=0x0000000000415D44 string=0x0000000000415D48 "J"
 *   insn=0x0000000000415D4C string=0x0000000000415D50 "(a"
 *   insn=0x0000000000415D54 string=0x0000000000415D58 " "
 *   insn=0x0000000000415D58 string=0x0000000000415D5C "j"
 *   insn=0x0000000000415D5C string=0x0000000000415D60 "J=G"
 *   insn=0x0000000000415D60 string=0x0000000000415D64 ")!"
 *   insn=0x0000000000415D68 string=0x0000000000415D6C "*"
 *   insn=0x0000000000415D68 string=0x0000000000415D98 "*"
 *   insn=0x0000000000415D6C string=0x0000000000415D70 "K"
 *   insn=0x0000000000415D70 string=0x0000000000415D74 "+"
 *   insn=0x0000000000415D78 string=0x0000000000415D7C "_"
 *   insn=0x0000000000415D98 string=0x0000000000415D9C "K"
 *   insn=0x0000000000415D9C string=0x0000000000415DA0 "+"
 *   insn=0x0000000000415DA0 string=0x0000000000415DA4 "_"
 *   insn=0x0000000000415DD8 string=0x0000000000415DDC "@"
 *   insn=0x0000000000415DDC string=0x0000000000415DE0 ""
 *   insn=0x0000000000415DE0 string=0x0000000000415DE4 ""
 *   insn=0x0000000000415DE8 string=0x0000000000415DEC ""
 *   insn=0x0000000000415DEC string=0x0000000000415DF0 ""
 *   insn=0x0000000000415E00 string=0x0000000000415E04 ""
 *   insn=0x0000000000415E04 string=0x0000000000415E08 ""
 *   insn=0x0000000000415E0C string=0x0000000000415E10 ""
 *   insn=0x0000000000415E10 string=0x0000000000415E14 ""
 *   insn=0x0000000000415E20 string=0x0000000000415E24 "J"
 *   insn=0x0000000000415E38 string=0x0000000000415E3C "V"
 *   insn=0x0000000000415E4C string=0x0000000000415E50 "@"
 *   insn=0x0000000000415E68 string=0x00000000005922AF "item_"
 *   insn=0x0000000000415E74 string=0x0000000000415E78 "n"
 *   insn=0x0000000000415EA4 string=0x0000000000415F54 "i"
 *   insn=0x0000000000415EB0 string=0x0000000000415EB4 "!"
 *   insn=0x0000000000415EB4 string=0x0000000000415F78 "i"
 *   insn=0x0000000000415EE4 string=0x0000000000415EE8 "."
 *   insn=0x0000000000415EE8 string=0x00000000001FB3A0 "0'"
 *   insn=0x0000000000415EF4 string=0x0000000000415EF8 "!"
 *   insn=0x0000000000415EF8 string=0x0000000000415F9C "i"
 *   insn=0x0000000000415F08 string=0x0000000000415FC0 "i"
 *   insn=0x0000000000415F10 string=0x0000000000415F14 "@"
 *   insn=0x0000000000415F14 string=0x0000000000415F18 ""
 *   insn=0x0000000000415F18 string=0x0000000000415F1C ""
 *   insn=0x0000000000415F20 string=0x0000000000415F24 ""
 *   insn=0x0000000000415F24 string=0x0000000000415F28 ""
 *   insn=0x0000000000415F54 string=0x0000000000415F58 ")=G"
 *   insn=0x0000000000415F58 string=0x0000000000415F5C "!"
 *   insn=0x0000000000415F5C string=0x0000000000415F60 ")"
 *   insn=0x0000000000415F60 string=0x0000000000415F64 "\t"
 *   insn=0x0000000000415F60 string=0x0000000000415FE4 "\t"
 *   insn=0x0000000000415F64 string=0x0000000000415F68 "*"
 *   insn=0x0000000000415F68 string=0x0000000000415F6C "\n"
 *   insn=0x0000000000415F74 string=0x0000000000415FF0 "?"
 *   insn=0x0000000000415F78 string=0x0000000000415F7C ")=G"
 *   insn=0x0000000000415F7C string=0x0000000000415F80 "!"
 *   insn=0x0000000000415F80 string=0x0000000000415F84 "\t"
 *   insn=0x0000000000415F84 string=0x0000000000415F88 "\t"
 *   insn=0x0000000000415F84 string=0x0000000000416004 "\t"
 *   insn=0x0000000000415F88 string=0x0000000000415F8C "*"
 *   insn=0x0000000000415F8C string=0x0000000000415F90 "\n"
 *   insn=0x0000000000415F98 string=0x0000000000416010 "?"
 *   insn=0x0000000000415F9C string=0x0000000000415FA0 ")=G"
 *   insn=0x0000000000415FA0 string=0x0000000000415FA4 "!"
 *   insn=0x0000000000415FA8 string=0x0000000000415FAC "\t"
 *   insn=0x0000000000415FA8 string=0x0000000000416024 "\t"
 *   insn=0x0000000000415FAC string=0x0000000000415FB0 "*"
 *   insn=0x0000000000415FB0 string=0x0000000000415FB4 "\n"
 *   insn=0x0000000000415FBC string=0x0000000000416030 "?"
 *   insn=0x0000000000415FC0 string=0x0000000000415FC4 ")=G"
 *   insn=0x0000000000415FC4 string=0x0000000000415FC8 "!"
 *   insn=0x0000000000415FCC string=0x0000000000415FD0 "\t"
 *   insn=0x0000000000415FCC string=0x0000000000416044 "\t"
 *   insn=0x0000000000415FD0 string=0x0000000000415FD4 "*"
 *   insn=0x0000000000415FD4 string=0x0000000000415FD8 "\n"
 *   insn=0x0000000000415FE0 string=0x0000000000416050 "?"
 *   insn=0x0000000000415FE4 string=0x0000000000415FE8 "*"
 *   insn=0x0000000000415FE8 string=0x0000000000415FEC "\n"
 *   insn=0x0000000000416004 string=0x0000000000416008 "*"
 *   insn=0x0000000000416008 string=0x000000000041600C "\n"
 *   insn=0x0000000000416010 string=0x0000000000416014 ","
 *   insn=0x0000000000416024 string=0x0000000000416028 "*"
 *   insn=0x0000000000416028 string=0x000000000041602C "\n"
 *   insn=0x0000000000416030 string=0x0000000000416034 "L"
 *   insn=0x0000000000416044 string=0x0000000000416048 "*"
 *   insn=0x0000000000416048 string=0x000000000041604C "\n"
 *   insn=0x0000000000416074 string=0x0000000000416078 "(a"
 *   insn=0x0000000000416080 string=0x0000000000416084 "j"
 *   insn=0x0000000000416084 string=0x0000000000416088 "J=G"
 *   insn=0x0000000000416088 string=0x000000000041608C ")!"
 *   insn=0x0000000000416090 string=0x0000000000416094 "*"
 *   insn=0x0000000000416090 string=0x00000000004160A8 "*"
 *   insn=0x0000000000416094 string=0x0000000000416098 "K"
 *   insn=0x0000000000416098 string=0x000000000041609C "+"
 *   insn=0x00000000004160A4 string=0x00000000004160B4 "_"
 *   insn=0x00000000004160A8 string=0x00000000004160AC "K"
 *   insn=0x00000000004160AC string=0x00000000004160B0 "+"
 *   insn=0x00000000004160DC string=0x00000000004160E0 "i"
 *   insn=0x00000000004160E0 string=0x00000000004160E4 ")=G"
 *   insn=0x00000000004160E4 string=0x00000000004160E8 "!"
 *   insn=0x00000000004160EC string=0x00000000004160F0 "\t"
 *   insn=0x00000000004160EC string=0x000000000041611C "\t"
 *   insn=0x00000000004160F0 string=0x00000000004160F4 "*"
 *   insn=0x00000000004160F4 string=0x00000000004160F8 "\n"
 *   insn=0x00000000004160FC string=0x0000000000416100 "?"
 *   insn=0x0000000000416110 string=0x0000000000416114 "`"
 *   insn=0x0000000000416114 string=0x0000000000416118 "F"
 *   insn=0x0000000000416114 string=0x0000000000416140 "@"
 *   insn=0x000000000041611C string=0x0000000000416120 "*"
 *   insn=0x0000000000416120 string=0x0000000000416124 "\n"
 *   insn=0x0000000000416124 string=0x0000000000416128 "?"
 *   insn=0x0000000000416140 string=0x0000000000416144 ""
 *   insn=0x0000000000416144 string=0x0000000000416148 ""
 *   insn=0x0000000000416148 string=0x000000000041614C "!"
 *   insn=0x000000000041614C string=0x0000000000416150 ""
 *   insn=0x0000000000416150 string=0x0000000000416154 ""
 *   insn=0x0000000000416158 string=0x000000000041615C "5"
 *   insn=0x0000000000416164 string=0x0000000000416168 "j"
 *   insn=0x0000000000416168 string=0x000000000041616C "J"
 *   insn=0x0000000000416170 string=0x0000000000416174 "(a"
 *   insn=0x000000000041617C string=0x0000000000416180 "j"
 *   insn=0x0000000000416180 string=0x0000000000416184 "J=G"
 *   insn=0x0000000000416184 string=0x0000000000416188 ")!"
 *   insn=0x000000000041618C string=0x0000000000416190 "*"
 *   insn=0x000000000041618C string=0x00000000004161A4 "*"
 *   insn=0x0000000000416190 string=0x0000000000416194 "K"
 *   insn=0x0000000000416194 string=0x0000000000416198 "+"
 *   insn=0x00000000004161A0 string=0x00000000004161B0 "_"
 *   insn=0x00000000004161A4 string=0x00000000004161A8 "K"
 *   insn=0x00000000004161A8 string=0x00000000004161AC "+"
 *   insn=0x00000000004161BC string=0x00000000004161C0 "yP"
 *   insn=0x00000000004161CC string=0x00000000004161D0 "i"
 *   insn=0x00000000004161D0 string=0x00000000004161D4 ")"
 *   insn=0x00000000004161E0 string=0x00000000004161E4 "i"
 *   insn=0x00000000004161E4 string=0x00000000004161E8 ")=G"
 *   insn=0x00000000004161E8 string=0x00000000004161EC "!"
 *   insn=0x00000000004161EC string=0x00000000004161F0 "i"
 *   insn=0x00000000004161F0 string=0x00000000004161F4 "\t"
 *   insn=0x00000000004161F0 string=0x000000000041621C "\t"
 *   insn=0x00000000004161F4 string=0x00000000004161F8 "*"
 *   insn=0x00000000004161F8 string=0x00000000004161FC "\n"
 *   insn=0x0000000000416200 string=0x0000000000416204 "?"
 *   insn=0x0000000000416204 string=0x0000000000416208 "L"
 *   insn=0x000000000041620C string=0x0000000000416210 "eP"
 *   insn=0x000000000041621C string=0x0000000000416220 "*"
 *   insn=0x0000000000416220 string=0x0000000000416224 "\n"
 *   insn=0x0000000000416224 string=0x0000000000416228 "?"
 *   insn=0x0000000000416228 string=0x000000000041622C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemInfoPopupView::Init(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64, __int128 *); // x8
  Caver::TextureLibrary *v5; // x0
  void *v6; // x0
  __int64 v7; // x0
  _QWORD *v8; // x23
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  Caver::Sprite *v13; // x0
  Caver::TextureLibrary *v14; // x0
  void *v15; // x0
  float v16; // s11
  float32x2_t v17; // d8
  float32x2_t v18; // d10
  __int64 v19; // x0
  _QWORD *v20; // x23
  __int64 v21; // x9
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  Caver::Sprite *v25; // x0
  float32x2_t v26; // d12
  int32x2_t v27; // d0
  float32x2_t v28; // d1
  float32x2_t v29; // d10
  __int64 v30; // x0
  _QWORD *v31; // x23
  __int64 v32; // x9
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  float32x2_t v36; // d0
  Caver::Sprite *v37; // x0
  __int64 v38; // x8
  __int64 v39; // x0
  Caver::FontLibrary *v40; // x0
  _QWORD *v41; // x22
  __int64 v42; // x9
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x23
  Caver::FontLibrary *v47; // x0
  __int128 v48; // kr00_16
  _QWORD *v49; // x22
  __int64 v50; // x8
  __int64 v51; // x8
  _QWORD *v52; // x22
  __int64 v53; // x8
  __int64 v54; // x8
  Caver::FontText *v55; // x0
  __int64 v56; // x0
  Caver::FontLibrary *v57; // x0
  _QWORD *v58; // x21
  __int64 v59; // x9
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x22
  Caver::FontLibrary *v64; // x0
  __int128 v65; // kr10_16
  _QWORD *v66; // x21
  __int64 v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x21
  __int64 v70; // x8
  __int64 v71; // x8
  Caver::FontText *v72; // x0
  __int64 v73; // x0
  int v74; // w8
  __int64 result; // x0
  int v76; // w8
  unsigned int *v77; // x8
  int v78; // w9
  unsigned int *v79; // x8
  int v80; // w9
  int v81; // [xsp+58h] [xbp-A0h] BYREF
  __int64 v82; // [xsp+68h] [xbp-90h]
  __int64 v83; // [xsp+70h] [xbp-88h]
  __int128 v84; // [xsp+78h] [xbp-80h] BYREF
  __int64 v85; // [xsp+90h] [xbp-68h]

  v85 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 248LL);
  v84 = xmmword_594440;
  v5 = (Caver::TextureLibrary *)v4(a1, &v84);
  Caver::TextureLibrary::sharedLibrary(v5);
  sub_566BB8((int)&v84, "ui_notification_background");
  Caver::TextureLibrary::TextureForName();
  v6 = (void *)(v84 - 24);
  if ( (__int64 *)(v84 - 24) != &qword_6FD2E0 )
  {
    v77 = (unsigned int *)(v84 - 8);
    if ( &pthread_create )
    {
      do
        v78 = __ldaxr(v77);
      while ( __stlxr(v78 - 1, v77) );
    }
    else
    {
      v78 = (*v77)--;
    }
    if ( v78 <= 0 )
      operator delete(v6);
  }
  v7 = operator new(0x58u);
  *(_DWORD *)(v7 + 48) = 0;
  *(_BYTE *)(v7 + 80) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)&v84 = v7;
  *(_OWORD *)(v7 + 16) = 0u;
  *(_OWORD *)(v7 + 32) = 0u;
  *(_OWORD *)v7 = 0u;
  *(_OWORD *)(v7 + 64) = 0u;
  boost::detail::shared_count::shared_count<Caver::Sprite>();
  boost::detail::sp_enable_shared_from_this();
  v8 = *(_QWORD **)(a1 + 248);
  v9 = v84;
  *(_QWORD *)&v84 = *(_QWORD *)(a1 + 240);
  v10 = *((_QWORD *)&v84 + 1);
  *(_QWORD *)(a1 + 240) = v9;
  *(_QWORD *)(a1 + 248) = v10;
  *((_QWORD *)&v84 + 1) = v8;
  if ( v8 )
  {
    v11 = v8[1] - 1LL;
    v8[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v12 = v8[2] - 1LL;
      v8[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  Caver::Sprite::Init();
  v13 = *(Caver::Sprite **)(a1 + 240);
  LODWORD(v84) = -1;
  v14 = (Caver::TextureLibrary *)Caver::Sprite::AddRectangle(
                                   v13,
                                   (const Caver::Rectangle *)(a1 + 132),
                                   (const Caver::Rectangle *)(v83 + 92),
                                   (const Caver::Color *)&v84);
  Caver::TextureLibrary::sharedLibrary(v14);
  sub_566BB8((int)&v84, "ui_menu_itemslot");
  Caver::TextureLibrary::TextureForName();
  v15 = (void *)(v84 - 24);
  if ( (__int64 *)(v84 - 24) != &qword_6FD2E0 )
  {
    v79 = (unsigned int *)(v84 - 8);
    if ( &pthread_create )
    {
      do
        v80 = __ldaxr(v79);
      while ( __stlxr(v80 - 1, v79) );
    }
    else
    {
      v80 = (*v79)--;
    }
    if ( v80 <= 0 )
      operator delete(v15);
  }
  v16 = *(float *)(a1 + 144);
  v17.n64_u64[0] = *(unsigned __int64 *)(*a2 + 84);
  v18.n64_u64[0] = *(unsigned __int64 *)(v82 + 84);
  v19 = operator new(0x58u);
  *(_DWORD *)(v19 + 48) = 0;
  *(_BYTE *)(v19 + 80) = 0;
  *(_QWORD *)(v19 + 56) = 0;
  *(_QWORD *)&v84 = v19;
  *(_OWORD *)(v19 + 16) = 0u;
  *(_OWORD *)(v19 + 32) = 0u;
  *(_OWORD *)v19 = 0u;
  *(_OWORD *)(v19 + 64) = 0u;
  boost::detail::shared_count::shared_count<Caver::Sprite>();
  boost::detail::sp_enable_shared_from_this();
  v20 = *(_QWORD **)(a1 + 264);
  v21 = v84;
  *(_QWORD *)&v84 = *(_QWORD *)(a1 + 256);
  v22 = *((_QWORD *)&v84 + 1);
  *(_QWORD *)(a1 + 256) = v21;
  *(_QWORD *)(a1 + 264) = v22;
  *((_QWORD *)&v84 + 1) = v20;
  if ( v20 )
  {
    v23 = v20[1] - 1LL;
    v20[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v24 = v20[2] - 1LL;
      v20[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  Caver::Sprite::Init();
  v25 = *(Caver::Sprite **)(a1 + 256);
  v26.n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v27.n64_f32[0] = v16 * 0.5;
  v28.n64_u64[0] = vmul_f32(v18, v26).n64_u64[0];
  v29.n64_u64[0] = vdup_lane_s32(v27, 0).n64_u64[0];
  *(float32x2_t *)&v84 = vsub_f32(v29, vmul_f32(v28, (float32x2_t)0x3F0000003F000000LL));
  *((float32x2_t *)&v84 + 1) = v28;
  v81 = -1;
  Caver::Sprite::AddRectangle(
    v25,
    (const Caver::Rectangle *)&v84,
    (const Caver::Rectangle *)(v82 + 92),
    (const Caver::Color *)&v81);
  v30 = operator new(0x58u);
  *(_DWORD *)(v30 + 48) = 0;
  *(_BYTE *)(v30 + 80) = 0;
  *(_QWORD *)(v30 + 56) = 0;
  *(_QWORD *)&v84 = v30;
  *(_OWORD *)(v30 + 16) = 0u;
  *(_OWORD *)(v30 + 32) = 0u;
  *(_OWORD *)v30 = 0u;
  *(_OWORD *)(v30 + 64) = 0u;
  boost::detail::shared_count::shared_count<Caver::Sprite>();
  boost::detail::sp_enable_shared_from_this();
  v31 = *(_QWORD **)(a1 + 280);
  v32 = v84;
  *(_QWORD *)&v84 = *(_QWORD *)(a1 + 272);
  v33 = *((_QWORD *)&v84 + 1);
  *(_QWORD *)(a1 + 272) = v32;
  *(_QWORD *)(a1 + 280) = v33;
  *((_QWORD *)&v84 + 1) = v31;
  if ( v31 )
  {
    v34 = v31[1] - 1LL;
    v31[1] = v34;
    if ( !v34 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v35 = v31[2] - 1LL;
      v31[2] = v35;
      if ( !v35 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  Caver::Sprite::Init();
  v36.n64_u64[0] = vmul_f32(v17, v26).n64_u64[0];
  v37 = *(Caver::Sprite **)(a1 + 272);
  *(float32x2_t *)&v84 = vsub_f32(v29, vmul_f32(v36, (float32x2_t)0x3F0000003F000000LL));
  *((float32x2_t *)&v84 + 1) = v36;
  v38 = *a2;
  v81 = -1;
  Caver::Sprite::AddRectangle(
    v37,
    (const Caver::Rectangle *)&v84,
    (const Caver::Rectangle *)(v38 + 92),
    (const Caver::Color *)&v81);
  v39 = operator new(0xF0u);
  *(_DWORD *)(v39 + 16) = -16777216;
  *(_BYTE *)(v39 + 44) = -1;
  *(_DWORD *)(v39 + 232) = -1;
  *(_DWORD *)(v39 + 40) = 0;
  *(_DWORD *)(v39 + 136) = 0;
  *(_QWORD *)(v39 + 160) = 0;
  *(_BYTE *)(v39 + 168) = 0;
  *(_DWORD *)(v39 + 80) = 0;
  *(_QWORD *)(v39 + 224) = 0;
  *(_QWORD *)&v84 = v39;
  *(_OWORD *)v39 = 0u;
  *(_OWORD *)(v39 + 24) = 0u;
  *(_OWORD *)(v39 + 120) = 0u;
  *(_OWORD *)(v39 + 104) = 0u;
  *(_OWORD *)(v39 + 88) = 0u;
  *(_OWORD *)(v39 + 144) = 0u;
  *(_OWORD *)(v39 + 48) = 0u;
  *(_OWORD *)(v39 + 64) = 0u;
  *(_OWORD *)(v39 + 192) = 0u;
  *(_OWORD *)(v39 + 208) = 0u;
  *(_OWORD *)(v39 + 176) = 0u;
  boost::detail::shared_count::shared_count<Caver::FontText>();
  boost::detail::sp_enable_shared_from_this();
  v41 = *(_QWORD **)(a1 + 296);
  v42 = v84;
  *(_QWORD *)&v84 = *(_QWORD *)(a1 + 288);
  v43 = *((_QWORD *)&v84 + 1);
  *(_QWORD *)(a1 + 288) = v42;
  *(_QWORD *)(a1 + 296) = v43;
  *((_QWORD *)&v84 + 1) = v41;
  if ( v41 )
  {
    v44 = v41[1] - 1LL;
    v41[1] = v44;
    if ( !v44 )
    {
      v40 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
      v45 = v41[2] - 1LL;
      v41[2] = v45;
      if ( !v45 )
        v40 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
    }
  }
  v46 = *(_QWORD *)(a1 + 288);
  v47 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v40);
  Caver::FontLibrary::DefaultFont(v47);
  v48 = v84;
  if ( *((_QWORD *)&v84 + 1) )
    ++*(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL);
  v49 = *(_QWORD **)(v46 + 8);
  *(_OWORD *)v46 = v48;
  if ( v49 )
  {
    v50 = v49[1] - 1LL;
    v49[1] = v50;
    if ( !v50 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
      v51 = v49[2] - 1LL;
      v49[2] = v51;
      if ( !v51 )
        (*(void (__fastcall **)(_QWORD *))(*v49 + 24LL))(v49);
    }
  }
  v52 = (_QWORD *)*((_QWORD *)&v84 + 1);
  if ( *((_QWORD *)&v84 + 1) )
  {
    v53 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) = v53;
    if ( !v53 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
      v54 = v52[2] - 1LL;
      v52[2] = v54;
      if ( !v54 )
        (*(void (__fastcall **)(_QWORD *))(*v52 + 24LL))(v52);
    }
  }
  v55 = *(Caver::FontText **)(a1 + 288);
  LODWORD(v84) = -1;
  Caver::FontText::SetColor(v55, (const Caver::Color *)&v84);
  *(_QWORD *)&v84 = 0x41E0000042680000LL;
  Caver::FontText::AddText();
  v56 = operator new(0xF0u);
  *(_DWORD *)(v56 + 16) = -16777216;
  *(_BYTE *)(v56 + 44) = -1;
  *(_DWORD *)(v56 + 232) = -1;
  *(_DWORD *)(v56 + 40) = 0;
  *(_DWORD *)(v56 + 136) = 0;
  *(_QWORD *)(v56 + 160) = 0;
  *(_BYTE *)(v56 + 168) = 0;
  *(_DWORD *)(v56 + 80) = 0;
  *(_QWORD *)(v56 + 224) = 0;
  *(_QWORD *)&v84 = v56;
  *(_OWORD *)v56 = 0u;
  *(_OWORD *)(v56 + 24) = 0u;
  *(_OWORD *)(v56 + 120) = 0u;
  *(_OWORD *)(v56 + 104) = 0u;
  *(_OWORD *)(v56 + 88) = 0u;
  *(_OWORD *)(v56 + 144) = 0u;
  *(_OWORD *)(v56 + 48) = 0u;
  *(_OWORD *)(v56 + 64) = 0u;
  *(_OWORD *)(v56 + 192) = 0u;
  *(_OWORD *)(v56 + 208) = 0u;
  *(_OWORD *)(v56 + 176) = 0u;
  boost::detail::shared_count::shared_count<Caver::FontText>();
  boost::detail::sp_enable_shared_from_this();
  v58 = *(_QWORD **)(a1 + 312);
  v59 = v84;
  *(_QWORD *)&v84 = *(_QWORD *)(a1 + 304);
  v60 = *((_QWORD *)&v84 + 1);
  *(_QWORD *)(a1 + 304) = v59;
  *(_QWORD *)(a1 + 312) = v60;
  *((_QWORD *)&v84 + 1) = v58;
  if ( v58 )
  {
    v61 = v58[1] - 1LL;
    v58[1] = v61;
    if ( !v61 )
    {
      v57 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
      v62 = v58[2] - 1LL;
      v58[2] = v62;
      if ( !v62 )
        v57 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v58 + 24LL))(v58);
    }
  }
  v63 = *(_QWORD *)(a1 + 304);
  v64 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v57);
  Caver::FontLibrary::DefaultFont(v64);
  v65 = v84;
  if ( *((_QWORD *)&v84 + 1) )
    ++*(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL);
  v66 = *(_QWORD **)(v63 + 8);
  *(_OWORD *)v63 = v65;
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
  v69 = (_QWORD *)*((_QWORD *)&v84 + 1);
  if ( *((_QWORD *)&v84 + 1) )
  {
    v70 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) = v70;
    if ( !v70 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
      v71 = v69[2] - 1LL;
      v69[2] = v71;
      if ( !v71 )
        (*(void (__fastcall **)(_QWORD *))(*v69 + 24LL))(v69);
    }
  }
  v72 = *(Caver::FontText **)(a1 + 304);
  LODWORD(v84) = 5273720;
  Caver::FontText::SetColor(v72, (const Caver::Color *)&v84);
  *(_QWORD *)&v84 = 0x4140000042680000LL;
  Caver::FontText::AddText();
  v73 = v82;
  if ( v82 )
  {
    v74 = *(_DWORD *)(v82 + 8) - 1;
    *(_DWORD *)(v82 + 8) = v74;
    if ( !v74 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
  }
  result = v83;
  if ( v83 )
  {
    v76 = *(_DWORD *)(v83 + 8) - 1;
    *(_DWORD *)(v83 + 8) = v76;
    if ( !v76 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

