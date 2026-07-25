/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C3480
 * Mangled: _ZN5Caver11FontLibrary12FontWithNameERKSs
 * Demangled: Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7850  Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Callees: 21
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F57B0  std::map<std::string,boost::weak_ptr<Caver::Font>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::operator[](std::string const&)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C10  boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *   0x00000000001FA8D0  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC2A0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::find(std::string const&)
 *   0x00000000001FC690  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::Font>> const&)
 *   0x0000000000202090  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 351
 *   insn=0x00000000004C3498 string=0x00000000004C349C "Y"
 *   insn=0x00000000004C34A0 string=0x00000000004C34A4 "("
 *   insn=0x00000000004C34B4 string=0x00000000004C34B8 "z"
 *   insn=0x00000000004C34B8 string=0x00000000001FC2A0 "0'"
 *   insn=0x00000000004C34D8 string=0x00000000004C34DC "\t"
 *   insn=0x00000000004C34E0 string=0x00000000004C34E4 ""
 *   insn=0x00000000004C34E4 string=0x00000000004C34E8 "z^"
 *   insn=0x00000000004C34F0 string=0x00000000004C3524 ":"
 *   insn=0x00000000004C34F4 string=0x00000000004C34F8 "\t@"
 *   insn=0x00000000004C3504 string=0x00000000004C3508 ""
 *   insn=0x00000000004C3514 string=0x00000000004C3518 "@"
 *   insn=0x00000000004C3524 string=0x00000000004C3528 ""
 *   insn=0x00000000004C3524 string=0x00000000004C3788 "("
 *   insn=0x00000000004C3544 string=0x00000000004C3548 "&"
 *   insn=0x00000000004C3548 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C355C string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004C3570 string=0x00000000004C3574 "\tc"
 *   insn=0x00000000004C3598 string=0x00000000001F8C10 "0'"
 *   insn=0x00000000004C35B0 string=0x00000000004C35B4 "v""
 *   insn=0x00000000004C35B4 string=0x00000000004C35B8 "7"
 *   insn=0x00000000004C35BC string=0x00000000004C35C0 ""
 *   insn=0x00000000004C35CC string=0x00000000004C35D0 "\t@"
 *   insn=0x00000000004C35DC string=0x00000000004C35E0 ""
 *   insn=0x00000000004C35EC string=0x00000000004C35F0 "@"
 *   insn=0x00000000004C3604 string=0x0000000000597CED "font_"
 *   insn=0x00000000004C3624 string=0x0000000000597CF3 "_2x"
 *   insn=0x00000000004C3630 string=0x00000000004C3634 "h"
 *   insn=0x00000000004C3638 string=0x0000000000597CF7 "fnt"
 *   insn=0x00000000004C3644 string=0x00000000004C3648 "\"
 *   insn=0x00000000004C3654 string=0x00000000004C3658 "6"
 *   insn=0x00000000004C3658 string=0x00000000001F5F30 "P'"
 *   insn=0x00000000004C3664 string=0x00000000001FA8D0 "0'"
 *   insn=0x00000000004C3674 string=0x00000000004C3678 "A"
 *   insn=0x00000000004C3678 string=0x00000000004C3820 "\t"
 *   insn=0x00000000004C3688 string=0x00000000004C3844 "\t"
 *   insn=0x00000000004C3698 string=0x00000000004C3868 "\t"
 *   insn=0x00000000004C36A4 string=0x00000000004C36A8 "!"
 *   insn=0x00000000004C36A8 string=0x00000000004C36AC "6"
 *   insn=0x00000000004C36A8 string=0x00000000004C388C "\t"
 *   insn=0x00000000004C36AC string=0x00000000004C36B0 "v"
 *   insn=0x00000000004C36C0 string=0x00000000004C36C4 "[Z"
 *   insn=0x00000000004C36D4 string=0x00000000004C36D8 "8"
 *   insn=0x00000000004C36F0 string=0x00000000004C36F4 "w"
 *   insn=0x00000000004C3704 string=0x00000000004C3708 "a"
 *   insn=0x00000000004C3708 string=0x00000000004C37B4 "\t"
 *   insn=0x00000000004C3718 string=0x00000000004C37D8 "\t"
 *   insn=0x00000000004C3728 string=0x00000000004C37FC "\t"
 *   insn=0x00000000004C3738 string=0x00000000001F57B0 "P'"
 *   insn=0x00000000004C373C string=0x00000000004C3740 "hV@"
 *   insn=0x00000000004C3758 string=0x00000000004C375C ""
 *   insn=0x00000000004C3764 string=0x00000000004C3768 "@"
 *   insn=0x00000000004C3768 string=0x00000000004C376C ""
 *   insn=0x00000000004C376C string=0x00000000004C3770 ""
 *   insn=0x00000000004C3774 string=0x00000000004C3778 ""
 *   insn=0x00000000004C3778 string=0x00000000004C377C "@"
 *   insn=0x00000000004C3790 string=0x00000000004C3794 "!"
 *   insn=0x00000000004C3794 string=0x00000000004C3998 "N"
 *   insn=0x00000000004C37B4 string=0x00000000004C37B8 ")=G"
 *   insn=0x00000000004C37B8 string=0x00000000004C37BC "!"
 *   insn=0x00000000004C37C0 string=0x00000000004C37C4 "\t"
 *   insn=0x00000000004C37C0 string=0x00000000004C38B0 "\t"
 *   insn=0x00000000004C37C4 string=0x00000000004C37C8 "*"
 *   insn=0x00000000004C37C8 string=0x00000000004C37CC "\n"
 *   insn=0x00000000004C37D0 string=0x00000000004C37D4 ":"
 *   insn=0x00000000004C37D4 string=0x00000000004C38BC "?"
 *   insn=0x00000000004C37D8 string=0x00000000004C37DC ")=G"
 *   insn=0x00000000004C37DC string=0x00000000004C37E0 "!"
 *   insn=0x00000000004C37E0 string=0x00000000004C37E4 "i"
 *   insn=0x00000000004C37E4 string=0x00000000004C37E8 "\t"
 *   insn=0x00000000004C37E4 string=0x00000000004C38D0 "\t"
 *   insn=0x00000000004C37E8 string=0x00000000004C37EC "*"
 *   insn=0x00000000004C37EC string=0x00000000004C37F0 "\n"
 *   insn=0x00000000004C37F4 string=0x00000000004C37F8 "9"
 *   insn=0x00000000004C37F8 string=0x00000000004C38DC "?"
 *   insn=0x00000000004C37FC string=0x00000000004C3800 ")=G"
 *   insn=0x00000000004C3800 string=0x00000000004C3804 "!"
 *   insn=0x00000000004C3804 string=0x00000000004C3808 "I"
 *   insn=0x00000000004C3808 string=0x00000000004C380C "\t"
 *   insn=0x00000000004C3808 string=0x00000000004C38F0 "\t"
 *   insn=0x00000000004C380C string=0x00000000004C3810 "*"
 *   insn=0x00000000004C3810 string=0x00000000004C3814 "\n"
 *   insn=0x00000000004C3818 string=0x00000000004C381C "8"
 *   insn=0x00000000004C381C string=0x00000000004C38FC "?"
 *   insn=0x00000000004C3820 string=0x00000000004C3824 ")=G"
 *   insn=0x00000000004C3824 string=0x00000000004C3828 "!"
 *   insn=0x00000000004C3828 string=0x00000000004C382C "I"
 *   insn=0x00000000004C382C string=0x00000000004C3830 "\t"
 *   insn=0x00000000004C382C string=0x00000000004C3914 "\t"
 *   insn=0x00000000004C3830 string=0x00000000004C3834 "*"
 *   insn=0x00000000004C3834 string=0x00000000004C3838 "\n"
 *   insn=0x00000000004C383C string=0x00000000004C3840 "8"
 *   insn=0x00000000004C3840 string=0x00000000004C3920 "?"
 *   insn=0x00000000004C3844 string=0x00000000004C3848 ")=G"
 *   insn=0x00000000004C3848 string=0x00000000004C384C "!"
 *   insn=0x00000000004C384C string=0x00000000004C3850 ")"
 *   insn=0x00000000004C3850 string=0x00000000004C3854 "\t"
 *   insn=0x00000000004C3850 string=0x00000000004C3934 "\t"
 *   insn=0x00000000004C3854 string=0x00000000004C3858 "*"
 *   insn=0x00000000004C3858 string=0x00000000004C385C "\n"
 *   insn=0x00000000004C3860 string=0x00000000004C3864 "7"
 *   insn=0x00000000004C3864 string=0x00000000004C3940 "?"
 *   insn=0x00000000004C3868 string=0x00000000004C386C ")=G"
 *   insn=0x00000000004C386C string=0x00000000004C3870 "!"
 *   insn=0x00000000004C3870 string=0x00000000004C3874 "\t"
 *   insn=0x00000000004C3874 string=0x00000000004C3878 "\t"
 *   insn=0x00000000004C3874 string=0x00000000004C3954 "\t"
 *   insn=0x00000000004C3878 string=0x00000000004C387C "*"
 *   insn=0x00000000004C387C string=0x00000000004C3880 "\n"
 *   insn=0x00000000004C3884 string=0x00000000004C3888 "6"
 *   insn=0x00000000004C3888 string=0x00000000004C3960 "?"
 *   insn=0x00000000004C388C string=0x00000000004C3890 ")=G"
 *   insn=0x00000000004C3890 string=0x00000000004C3894 "!"
 *   insn=0x00000000004C3898 string=0x00000000004C389C "\t"
 *   insn=0x00000000004C3898 string=0x00000000004C3974 "\t"
 *   insn=0x00000000004C389C string=0x00000000004C38A0 "*"
 *   insn=0x00000000004C38A0 string=0x00000000004C38A4 "\n"
 *   insn=0x00000000004C38A8 string=0x00000000004C38AC "5"
 *   insn=0x00000000004C38AC string=0x00000000004C3980 "?"
 *   insn=0x00000000004C38B0 string=0x00000000004C38B4 "*"
 *   insn=0x00000000004C38B4 string=0x00000000004C38B8 "\n"
 *   insn=0x00000000004C38BC string=0x00000000004C38C0 "l"
 *   insn=0x00000000004C38D0 string=0x00000000004C38D4 "*"
 *   insn=0x00000000004C38D4 string=0x00000000004C38D8 "\n"
 *   insn=0x00000000004C38F0 string=0x00000000004C38F4 "*"
 *   insn=0x00000000004C38F4 string=0x00000000004C38F8 "\n"
 *   insn=0x00000000004C38FC string=0x00000000004C3900 "l"
 *   insn=0x00000000004C3908 string=0x00000000004C390C "6"
 *   insn=0x00000000004C3914 string=0x00000000004C3918 "*"
 *   insn=0x00000000004C3918 string=0x00000000004C391C "\n"
 *   insn=0x00000000004C392C string=0x00000000004C3930 "S"
 *   insn=0x00000000004C3934 string=0x00000000004C3938 "*"
 *   insn=0x00000000004C3938 string=0x00000000004C393C "\n"
 *   insn=0x00000000004C3940 string=0x00000000004C3944 "L"
 *   insn=0x00000000004C394C string=0x00000000004C3950 "O"
 *   insn=0x00000000004C3954 string=0x00000000004C3958 "*"
 *   insn=0x00000000004C3958 string=0x00000000004C395C "\n"
 *   insn=0x00000000004C396C string=0x00000000004C3970 "K"
 *   insn=0x00000000004C3974 string=0x00000000004C3978 "*"
 *   insn=0x00000000004C3978 string=0x00000000004C397C "\n"
 *   insn=0x00000000004C3980 string=0x00000000004C3984 "L"
 *   insn=0x00000000004C3990 string=0x00000000004C3994 "g"
 *   insn=0x00000000004C3998 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C39A4 string=0x00000000004C39A8 "(a"
 *   insn=0x00000000004C39B0 string=0x00000000004C39B4 "\n"
 *   insn=0x00000000004C39B4 string=0x00000000004C39B8 "J=G"
 *   insn=0x00000000004C39B8 string=0x00000000004C39BC ")!"
 *   insn=0x00000000004C39C0 string=0x00000000004C39C4 "*"
 *   insn=0x00000000004C39C0 string=0x00000000004C39D8 "*"
 *   insn=0x00000000004C39C4 string=0x00000000004C39C8 "K"
 *   insn=0x00000000004C39C8 string=0x00000000004C39CC "+"
 *   insn=0x00000000004C39D4 string=0x00000000004C39E4 "_"
 *   insn=0x00000000004C39D8 string=0x00000000004C39DC "K"
 *   insn=0x00000000004C39DC string=0x00000000004C39E0 "+"
 *   insn=0x00000000004C39F0 string=0x00000000004C39F4 "l"
 *   insn=0x00000000004C3A08 string=0x00000000004C3A0C "`"
 *   insn=0x00000000004C3A0C string=0x00000000004C3A10 "\t"
 *   insn=0x00000000004C3A10 string=0x00000000004C3A14 ")=G"
 *   insn=0x00000000004C3A14 string=0x00000000004C3A18 "!"
 *   insn=0x00000000004C3A1C string=0x00000000004C3A20 "\t"
 *   insn=0x00000000004C3A1C string=0x00000000004C3A34 "\t"
 *   insn=0x00000000004C3A20 string=0x00000000004C3A24 "*"
 *   insn=0x00000000004C3A24 string=0x00000000004C3A28 "\n"
 *   insn=0x00000000004C3A30 string=0x00000000004C3A40 "?"
 *   insn=0x00000000004C3A34 string=0x00000000004C3A38 "*"
 *   insn=0x00000000004C3A38 string=0x00000000004C3A3C "\n"
 *   insn=0x00000000004C3A48 string=0x00000000004C3A4C "V"
 *   insn=0x00000000004C3A60 string=0x00000000004C3A64 " "
 *   insn=0x00000000004C3A64 string=0x00000000004C3A68 "\t"
 *   insn=0x00000000004C3A68 string=0x00000000004C3A6C ")=G"
 *   insn=0x00000000004C3A6C string=0x00000000004C3A70 "!"
 *   insn=0x00000000004C3A74 string=0x00000000004C3A78 "\t"
 *   insn=0x00000000004C3A74 string=0x00000000004C3A8C "\t"
 *   insn=0x00000000004C3A78 string=0x00000000004C3A7C "*"
 *   insn=0x00000000004C3A7C string=0x00000000004C3A80 "\n"
 *   insn=0x00000000004C3A88 string=0x00000000004C3A98 "?"
 *   insn=0x00000000004C3A8C string=0x00000000004C3A90 "*"
 *   insn=0x00000000004C3A90 string=0x00000000004C3A94 "\n"
 *   insn=0x00000000004C3A98 string=0x00000000004C3A9C "l"
 *   insn=0x00000000004C3AA4 string=0x00000000004C3AFC "*"
 *   insn=0x00000000004C3AAC string=0x00000000004C3AB0 "(a"
 *   insn=0x00000000004C3AB8 string=0x00000000004C3ABC "\n"
 *   insn=0x00000000004C3ABC string=0x00000000004C3AC0 "J=G"
 *   insn=0x00000000004C3AC0 string=0x00000000004C3AC4 ")!"
 *   insn=0x00000000004C3AC8 string=0x00000000004C3ACC "*"
 *   insn=0x00000000004C3AC8 string=0x00000000004C3AE0 "*"
 *   insn=0x00000000004C3ACC string=0x00000000004C3AD0 "K"
 *   insn=0x00000000004C3AD0 string=0x00000000004C3AD4 "+"
 *   insn=0x00000000004C3ADC string=0x00000000004C3AEC "_"
 *   insn=0x00000000004C3AE0 string=0x00000000004C3AE4 "K"
 *   insn=0x00000000004C3AE4 string=0x00000000004C3AE8 "+"
 *   insn=0x00000000004C3B14 string=0x00000000004C3B18 "\t"
 *   insn=0x00000000004C3B14 string=0x00000000004C3C8C "s"
 *   insn=0x00000000004C3B18 string=0x00000000004C3B1C ")=G"
 *   insn=0x00000000004C3B1C string=0x00000000004C3B20 "!"
 *   insn=0x00000000004C3B20 string=0x00000000004C3B24 ")"
 *   insn=0x00000000004C3B24 string=0x00000000004C3B28 "\t"
 *   insn=0x00000000004C3B24 string=0x00000000004C3B48 "\t"
 *   insn=0x00000000004C3B28 string=0x00000000004C3B2C "*"
 *   insn=0x00000000004C3B2C string=0x00000000004C3B30 "\n"
 *   insn=0x00000000004C3B34 string=0x00000000004C3B38 "?"
 *   insn=0x00000000004C3B40 string=0x00000000004C3B44 "E"
 *   insn=0x00000000004C3B48 string=0x00000000004C3B4C "*"
 *   insn=0x00000000004C3B4C string=0x00000000004C3B50 "\n"
 *   insn=0x00000000004C3B50 string=0x00000000004C3B54 "?"
 *   insn=0x00000000004C3B54 string=0x00000000004C3B58 "M"
 *   insn=0x00000000004C3B58 string=0x00000000004C3B5C "L"
 *   insn=0x00000000004C3B68 string=0x00000000004C3B6C "(a"
 *   insn=0x00000000004C3B74 string=0x00000000004C3B78 "\n"
 *   insn=0x00000000004C3B78 string=0x00000000004C3B7C "J=G"
 *   insn=0x00000000004C3B7C string=0x00000000004C3B80 ")!"
 *   insn=0x00000000004C3B84 string=0x00000000004C3B88 "*"
 *   insn=0x00000000004C3B84 string=0x00000000004C3B9C "*"
 *   insn=0x00000000004C3B88 string=0x00000000004C3B8C "K"
 *   insn=0x00000000004C3B8C string=0x00000000004C3B90 "+"
 *   insn=0x00000000004C3B98 string=0x00000000004C3BA8 "_"
 *   insn=0x00000000004C3B9C string=0x00000000004C3BA0 "K"
 *   insn=0x00000000004C3BA0 string=0x00000000004C3BA4 "+"
 *   insn=0x00000000004C3BCC string=0x00000000004C3BD0 "`"
 *   insn=0x00000000004C3BD0 string=0x00000000004C3BD4 "\t"
 *   insn=0x00000000004C3BD4 string=0x00000000004C3BD8 ")=G"
 *   insn=0x00000000004C3BD8 string=0x00000000004C3BDC "!"
 *   insn=0x00000000004C3BE0 string=0x00000000004C3BE4 "\t"
 *   insn=0x00000000004C3BE0 string=0x00000000004C3BF8 "\t"
 *   insn=0x00000000004C3BE4 string=0x00000000004C3BE8 "*"
 *   insn=0x00000000004C3BE8 string=0x00000000004C3BEC "\n"
 *   insn=0x00000000004C3BF4 string=0x00000000004C3C04 "?"
 *   insn=0x00000000004C3BF8 string=0x00000000004C3BFC "*"
 *   insn=0x00000000004C3BFC string=0x00000000004C3C00 "\n"
 *   insn=0x00000000004C3C24 string=0x00000000004C3C28 " "
 *   insn=0x00000000004C3C28 string=0x00000000004C3C2C "\t"
 *   insn=0x00000000004C3C2C string=0x00000000004C3C30 ")=G"
 *   insn=0x00000000004C3C30 string=0x00000000004C3C34 "!"
 *   insn=0x00000000004C3C38 string=0x00000000004C3C3C "\t"
 *   insn=0x00000000004C3C38 string=0x00000000004C3C68 "\t"
 *   insn=0x00000000004C3C3C string=0x00000000004C3C40 "*"
 *   insn=0x00000000004C3C40 string=0x00000000004C3C44 "\n"
 *   insn=0x00000000004C3C48 string=0x00000000004C3C4C "?"
 *   insn=0x00000000004C3C58 string=0x00000000004C3C5C "s"
 *   insn=0x00000000004C3C60 string=0x00000000004C3C94 "h"
 *   insn=0x00000000004C3C68 string=0x00000000004C3C6C "*"
 *   insn=0x00000000004C3C6C string=0x00000000004C3C70 "\n"
 *   insn=0x00000000004C3C70 string=0x00000000004C3C74 "?"
 *   insn=0x00000000004C3C8C string=0x00000000004C3C90 "3"
 *   insn=0x00000000004C3C94 string=0x00000000004C3C98 ""
 *   insn=0x00000000004C3C98 string=0x00000000004C3C9C "h"
 *   insn=0x00000000004C3CA0 string=0x00000000004C3CA4 "h"
 *   insn=0x00000000004C3CA4 string=0x00000000004C3CA8 "\t@"
 *   insn=0x00000000004C3CB0 string=0x00000000004C3CB4 "h\n@"
 *   insn=0x00000000004C3CB4 string=0x00000000004C3CB8 ""
 *   insn=0x00000000004C3CB8 string=0x00000000004C3CBC "h\n"
 *   insn=0x00000000004C3CC0 string=0x00000000004C3CC4 "h"
 *   insn=0x00000000004C3CC4 string=0x00000000004C3CC8 "@"
 *   insn=0x00000000004C3CFC string=0x00000000004C3D00 "I"
 *   insn=0x00000000004C3D00 string=0x00000000004C3D04 "("
 *   insn=0x00000000004C3D18 string=0x00000000004C3D1C "7"
 *   insn=0x00000000004C3D3C string=0x00000000004C3D40 ""
 *   insn=0x00000000004C3D44 string=0x00000000004C3D48 """
 *   insn=0x00000000004C3D4C string=0x00000000001F5190 "P'"
 *   insn=0x00000000004C3D50 string=0x00000000004C3D54 "@"
 *   insn=0x00000000004C3D60 string=0x00000000004C3D64 ""
 *   insn=0x00000000004C3DA0 string=0x00000000004C3DA4 "@"
 *   insn=0x00000000004C3DA8 string=0x00000000004C3DAC "a"
 *   insn=0x00000000004C3DAC string=0x00000000004C3DB0 ""
 *   insn=0x00000000004C3DB0 string=0x00000000004C3DB4 ")"
 *   insn=0x00000000004C3DB8 string=0x00000000004C3DBC """
 *   insn=0x00000000004C3DC0 string=0x00000000004C3DC4 "@\t"
 *   insn=0x00000000004C3DC4 string=0x00000000004C3DC8 "`"
 *   insn=0x00000000004C3DF0 string=0x00000000004C3DF4 "6"
 *   insn=0x00000000004C3DF8 string=0x00000000004C3DFC "s"
 *   insn=0x00000000004C3E00 string=0x00000000004C3E04 " "
 *   insn=0x00000000004C3E0C string=0x00000000004C3E10 ""
 *   insn=0x00000000004C3E10 string=0x00000000004C3E14 ")"
 *   insn=0x00000000004C3E18 string=0x00000000004C3E1C """
 *   insn=0x00000000004C3E3C string=0x00000000004C3E40 "`"
 *   insn=0x00000000004C3E50 string=0x00000000001FC690 "0'"
 *   insn=0x00000000004C3E6C string=0x00000000004C3E70 ""
 *   insn=0x00000000004C3E7C string=0x00000000004C3E80 "@"
 *   insn=0x00000000004C3E80 string=0x00000000004C3E84 ""
 *   insn=0x00000000004C3E84 string=0x00000000004C3E88 ""
 *   insn=0x00000000004C3E8C string=0x00000000004C3E90 ""
 *   insn=0x00000000004C3E90 string=0x00000000004C3E94 "@"
 *   insn=0x00000000004C3E9C string=0x00000000004C3EA0 "\t"
 *   insn=0x00000000004C3EA0 string=0x00000000004C3EA4 ")"
 *   insn=0x00000000004C3EB0 string=0x00000000004C3F10 "\t"
 *   insn=0x00000000004C3EB4 string=0x00000000004C3EB8 ""
 *   insn=0x00000000004C3EC4 string=0x00000000004C3EC8 "`"
 *   insn=0x00000000004C3F04 string=0x00000000004C3F08 "`"
 *   insn=0x00000000004C3F10 string=0x00000000004C3F14 ")=G"
 *   insn=0x00000000004C3F14 string=0x00000000004C3F18 "!"
 *   insn=0x00000000004C3F1C string=0x00000000004C3F20 "\t"
 *   insn=0x00000000004C3F1C string=0x00000000004C3F34 "\t"
 *   insn=0x00000000004C3F20 string=0x00000000004C3F24 "*"
 *   insn=0x00000000004C3F24 string=0x00000000004C3F28 "\n"
 *   insn=0x00000000004C3F30 string=0x00000000004C3F40 "?"
 *   insn=0x00000000004C3F34 string=0x00000000004C3F38 "*"
 *   insn=0x00000000004C3F38 string=0x00000000004C3F3C "\n"
 *   insn=0x00000000004C3F58 string=0x00000000004C3F5C "\n"
 *   insn=0x00000000004C3F5C string=0x00000000004C3F60 "J"
 *   insn=0x00000000004C3F64 string=0x00000000004C3F68 "(a"
 *   insn=0x00000000004C3F70 string=0x00000000004C3F74 "\n"
 *   insn=0x00000000004C3F74 string=0x00000000004C3F78 "J=G"
 *   insn=0x00000000004C3F78 string=0x00000000004C3F7C ")!"
 *   insn=0x00000000004C3F80 string=0x00000000004C3F84 "*"
 *   insn=0x00000000004C3F80 string=0x00000000004C3FB0 "*"
 *   insn=0x00000000004C3F84 string=0x00000000004C3F88 "K"
 *   insn=0x00000000004C3F88 string=0x00000000004C3F8C "+"
 *   insn=0x00000000004C3F90 string=0x00000000004C3F94 "_"
 *   insn=0x00000000004C3F94 string=0x00000000004C3F98 "l"
 *   insn=0x00000000004C3FA8 string=0x00000000004C3FAC "F"
 *   insn=0x00000000004C3FB0 string=0x00000000004C3FB4 "K"
 *   insn=0x00000000004C3FB4 string=0x00000000004C3FB8 "+"
 *   insn=0x00000000004C3FB8 string=0x00000000004C3FBC "_"
 *   insn=0x00000000004C3FC0 string=0x00000000004C3FC4 "("
 *   insn=0x00000000004C3FCC string=0x00000000004C3FD0 "="
 *   insn=0x00000000004C3FD8 string=0x00000000004C3FDC "("
 *   insn=0x00000000004C3FDC string=0x00000000004C3FE0 "\t\t@"
 *   insn=0x00000000004C3FE0 string=0x00000000004C3FE4 ")"
 *   insn=0x00000000004C3FE4 string=0x00000000004C3FE8 "\t\t"
 *   insn=0x00000000004C3FEC string=0x00000000004C3FF0 "\t"
 *   insn=0x00000000004C3FF0 string=0x00000000004C3FF4 ")@"
 *   insn=0x00000000004C3FF8 string=0x00000000004C3FFC " "
 *   insn=0x00000000004C4000 string=0x00000000004C4004 "\t"
 *   insn=0x00000000004C4004 string=0x00000000004C4008 ")"
 *   insn=0x00000000004C4014 string=0x00000000004C4018 "\t"
 *   insn=0x00000000004C4018 string=0x00000000004C401C ")=G"
 *   insn=0x00000000004C401C string=0x00000000004C4020 "!"
 *   insn=0x00000000004C4020 string=0x00000000004C4024 "i"
 *   insn=0x00000000004C4024 string=0x00000000004C4028 "\t"
 *   insn=0x00000000004C4024 string=0x00000000004C4050 "\t"
 *   insn=0x00000000004C4028 string=0x00000000004C402C "*"
 *   insn=0x00000000004C402C string=0x00000000004C4030 "\n"
 *   insn=0x00000000004C4034 string=0x00000000004C4038 "?"
 *   insn=0x00000000004C4038 string=0x00000000004C403C "L"
 *   insn=0x00000000004C4050 string=0x00000000004C4054 "*"
 *   insn=0x00000000004C4054 string=0x00000000004C4058 "\n"
 *   insn=0x00000000004C4058 string=0x00000000004C405C "?"
 *   insn=0x00000000004C405C string=0x00000000004C4060 ""
 *   insn=0x00000000004C406C string=0x00000000004C4070 "\n"
 *   insn=0x00000000004C4070 string=0x00000000004C4074 "J"
 *   insn=0x00000000004C4078 string=0x00000000004C407C "(a"
 *   insn=0x00000000004C4084 string=0x00000000004C4088 "\n"
 *   insn=0x00000000004C4088 string=0x00000000004C408C "J=G"
 *   insn=0x00000000004C408C string=0x00000000004C4090 ")!"
 *   insn=0x00000000004C4094 string=0x00000000004C4098 "*"
 *   insn=0x00000000004C4094 string=0x00000000004C40C4 "*"
 *   insn=0x00000000004C4098 string=0x00000000004C409C "K"
 *   insn=0x00000000004C409C string=0x00000000004C40A0 "+"
 *   insn=0x00000000004C40A4 string=0x00000000004C40A8 "_"
 *   insn=0x00000000004C40C4 string=0x00000000004C40C8 "K"
 *   insn=0x00000000004C40C8 string=0x00000000004C40CC "+"
 *   insn=0x00000000004C40CC string=0x00000000004C40D0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::FontLibrary::FontWithName(__int64 a1@<X0>, __int64 a2@<X1>, _QWORD *a3@<X8>)
{
  __int64 v6; // x0
  _QWORD *v7; // x23
  __int64 v8; // x8
  __int64 v9; // x26
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x22
  _QWORD *v13; // x8
  _QWORD *v14; // x22
  __int64 v15; // x8
  __int64 v16; // x8
  char v17; // w22
  _QWORD *v18; // x0
  void *v19; // x0
  void *v20; // x0
  void *v21; // x0
  char v22; // w22
  _QWORD *v23; // x0
  void *v24; // x0
  void *v25; // x0
  _QWORD *v26; // x0
  _QWORD *v27; // x20
  _QWORD *v28; // x21
  _QWORD *v29; // x0
  __int64 v30; // x8
  unsigned int *v31; // x8
  int v32; // w9
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  __int64 v45; // [xsp+A0h] [xbp-78h] BYREF
  __int64 v46; // [xsp+A8h] [xbp-70h] BYREF
  __int64 v47; // [xsp+B0h] [xbp-68h] BYREF
  _QWORD *v48; // [xsp+B8h] [xbp-60h]
  _QWORD *v49; // [xsp+C0h] [xbp-58h]
  __int64 v50; // [xsp+D0h] [xbp-48h]

  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a3 = 0;
  a3[1] = 0;
  v6 = std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::find();
  if ( a1 + 8 == v6 )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v7 = *(_QWORD **)(v6 + 48);
  if ( !v7 || (v8 = v7[1]) == 0 )
  {
    v7 = 0;
    *a3 = 0;
    a3[1] = 0;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(v6 + 40);
  v10 = v8 + 2;
  v7[1] = v10--;
  *a3 = v9;
  a3[1] = v7;
  v7[1] = v10;
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    v11 = v7[2] - 1LL;
    v7[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
  }
  if ( !v9 )
  {
LABEL_11:
    v12 = (_QWORD *)operator new(0x60u);
    memset(v12, 0, 0x60u);
    *(_QWORD *)((char *)v12 + 84) = 0;
    *(_QWORD *)((char *)v12 + 76) = 0;
    v12[7] = 0;
    v12[8] = 0;
    v12[5] = 0;
    v12[6] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[1] = 0;
    v12[2] = 0;
    v48 = v12;
    *v12 = &byte_6FD2F8;
    boost::detail::shared_count::shared_count<Caver::Font>();
    boost::detail::sp_enable_shared_from_this();
    v14 = v48;
    v13 = v49;
    v48 = 0;
    v49 = v7;
    *a3 = v14;
    a3[1] = v13;
    if ( v7 )
    {
      v15 = v7[1] - 1LL;
      v7[1] = v15;
      if ( !v15 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v16 = v7[2] - 1LL;
        v7[2] = v16;
        if ( !v16 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
    if ( *(_BYTE *)(a1 + 48) )
    {
      ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64))loc_25A030)(&v46, "font_", a2);
      sub_56A528(&v47, &v46);
      sub_5677D4(&v47, "_2x", 3);
      sub_566BB8((int)&v45, "fnt");
      Caver::PathForResourceOfType();
      v17 = Caver::Font::LoadFromFile();
      v18 = v48 - 3;
      if ( v48 - 3 != &qword_6FD2E0 )
      {
        v37 = (unsigned int *)(v48 - 1);
        if ( &pthread_create )
        {
          do
            v38 = __ldaxr(v37);
          while ( __stlxr(v38 - 1, v37) );
        }
        else
        {
          v38 = (*v37)--;
        }
        if ( v38 <= 0 )
          operator delete(v18);
      }
      v19 = (void *)(v45 - 24);
      if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
      {
        v39 = (unsigned int *)(v45 - 8);
        if ( &pthread_create )
        {
          do
            v40 = __ldaxr(v39);
          while ( __stlxr(v40 - 1, v39) );
        }
        else
        {
          v40 = (*v39)--;
        }
        if ( v40 <= 0 )
          operator delete(v19);
      }
      v20 = (void *)(v47 - 24);
      if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
      {
        v41 = (unsigned int *)(v47 - 8);
        if ( &pthread_create )
        {
          do
            v42 = __ldaxr(v41);
          while ( __stlxr(v42 - 1, v41) );
        }
        else
        {
          v42 = (*v41)--;
        }
        if ( v42 <= 0 )
          operator delete(v20);
      }
      v21 = (void *)(v46 - 24);
      if ( (__int64 *)(v46 - 24) == &qword_6FD2E0 )
        goto LABEL_20;
      v43 = (unsigned int *)(v46 - 8);
      if ( &pthread_create )
      {
        do
          v44 = __ldaxr(v43);
        while ( __stlxr(v44 - 1, v43) );
      }
      else
      {
        v44 = (*v43)--;
      }
      if ( v44 > 0 )
      {
LABEL_20:
        if ( (v17 & 1) != 0 )
          goto LABEL_25;
      }
      else
      {
        operator delete(v21);
        if ( (v17 & 1) != 0 )
        {
LABEL_25:
          std::map<std::string,boost::weak_ptr<Caver::Font>>::operator[]();
          v27 = v26;
          v28 = (_QWORD *)a3[1];
          v29 = (_QWORD *)v26[1];
          *v27 = *a3;
          if ( v28 != v29 )
          {
            if ( v28 )
              ++v28[2];
            if ( v29 )
            {
              v30 = v29[2] - 1LL;
              v29[2] = v30;
              if ( !v30 )
                (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
            }
            v27[1] = v28;
          }
          return;
        }
      }
    }
    ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64))loc_25A030)(&v47, "font_", a2);
    sub_566BB8((int)&v46, "fnt");
    Caver::PathForResourceOfType();
    v22 = Caver::Font::LoadFromFile();
    v23 = v48 - 3;
    if ( v48 - 3 != &qword_6FD2E0 )
    {
      v31 = (unsigned int *)(v48 - 1);
      if ( &pthread_create )
      {
        do
          v32 = __ldaxr(v31);
        while ( __stlxr(v32 - 1, v31) );
      }
      else
      {
        v32 = (*v31)--;
      }
      if ( v32 <= 0 )
        operator delete(v23);
    }
    v24 = (void *)(v46 - 24);
    if ( (__int64 *)(v46 - 24) != &qword_6FD2E0 )
    {
      v33 = (unsigned int *)(v46 - 8);
      if ( &pthread_create )
      {
        do
          v34 = __ldaxr(v33);
        while ( __stlxr(v34 - 1, v33) );
      }
      else
      {
        v34 = (*v33)--;
      }
      if ( v34 <= 0 )
        operator delete(v24);
    }
    v25 = (void *)(v47 - 24);
    if ( (__int64 *)(v47 - 24) == &qword_6FD2E0 )
      goto LABEL_24;
    v35 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 > 0 )
    {
LABEL_24:
      if ( (v22 & 1) == 0 )
        return;
    }
    else
    {
      operator delete(v25);
      if ( (v22 & 1) == 0 )
        return;
    }
    goto LABEL_25;
  }
}

