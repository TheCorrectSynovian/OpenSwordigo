/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042647C
 * Mangled: _ZN5Caver7MapView15AddPathToSpriteEPNS_6SpriteERKN5boost10shared_ptrINS_7MapPathEEENS_5ColorERKNS3_13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000001F9310  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 24
 *   0x00000000001F5440  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C00  boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8F60  Caver::MapNode::HasPortalTo(std::string const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEDB0  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x00000000002019D0  Caver::MapView::AddPathSegmentToSprite(Caver::Sprite *,Caver::Vector2 const&,Caver::Vector2 const&,float,boost::intrusive_ptr<Caver::Texture> const&,Caver::Color)
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203E10  Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 474
 *   insn=0x00000000004264AC string=0x00000000004264B0 "Y"
 *   insn=0x00000000004264B0 string=0x00000000004264B4 "("
 *   insn=0x00000000004264C8 string=0x00000000004264CC "\t!@"
 *   insn=0x00000000004264CC string=0x00000000004264D0 ""
 *   insn=0x00000000004264D0 string=0x00000000004264D4 ""
 *   insn=0x00000000004264DC string=0x00000000004271F0 "("
 *   insn=0x00000000004264E4 string=0x00000000004264E8 "><"
 *   insn=0x00000000004264E8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000426508 string=0x00000000001F6C00 "0'"
 *   insn=0x0000000000426524 string=0x00000000001F5440 "P'"
 *   insn=0x000000000042652C string=0x0000000000426530 "Y@"
 *   insn=0x0000000000426530 string=0x0000000000426534 "I"
 *   insn=0x0000000000426554 string=0x00000000001F8F60 "0'"
 *   insn=0x0000000000426570 string=0x0000000000426574 "W\t"
 *   insn=0x000000000042657C string=0x0000000000426580 ")"
 *   insn=0x0000000000426580 string=0x0000000000426584 ")"
 *   insn=0x0000000000426584 string=0x0000000000426588 "?\t"
 *   insn=0x0000000000426588 string=0x000000000042658C "k"
 *   insn=0x000000000042659C string=0x00000000004265A0 "5"
 *   insn=0x00000000004265B4 string=0x00000000004265B8 "*o"
 *   insn=0x00000000004265C4 string=0x00000000004265C8 "sjj"
 *   insn=0x00000000004265C8 string=0x00000000004265CC ""
 *   insn=0x00000000004265CC string=0x00000000004265D0 ""
 *   insn=0x00000000004265D0 string=0x00000000004265D4 "5ih"
 *   insn=0x00000000004265D4 string=0x00000000004265D8 "7"
 *   insn=0x00000000004265DC string=0x00000000004265E0 ""
 *   insn=0x00000000004265EC string=0x00000000004265F0 "\t@"
 *   insn=0x00000000004265FC string=0x0000000000426600 ""
 *   insn=0x000000000042660C string=0x0000000000426610 "@"
 *   insn=0x000000000042662C string=0x0000000000426630 "`"
 *   insn=0x0000000000426648 string=0x000000000042664C "?"
 *   insn=0x000000000042664C string=0x0000000000426650 "a"
 *   insn=0x0000000000426654 string=0x0000000000426658 "?"
 *   insn=0x000000000042666C string=0x0000000000426670 "!"
 *   insn=0x0000000000426684 string=0x0000000000426688 "FG"
 *   insn=0x0000000000426688 string=0x00000000001F83A0 "0'"
 *   insn=0x000000000042669C string=0x00000000004266A0 "\t)@"
 *   insn=0x00000000004266A0 string=0x00000000004266A4 "I"
 *   insn=0x00000000004266A4 string=0x00000000004266A8 "*"
 *   insn=0x00000000004266A8 string=0x00000000004266AC "_"
 *   insn=0x00000000004266B0 string=0x0000000000426B48 "_"
 *   insn=0x00000000004266B4 string=0x0000000000583944 "\n"
 *   insn=0x00000000004266B8 string=0x00000000004266BC "HEI"
 *   insn=0x00000000004266BC string=0x00000000004266C0 "Z"
 *   insn=0x00000000004266C0 string=0x00000000004266C4 ";"
 *   insn=0x00000000004266C4 string=0x00000000004266C8 "\"
 *   insn=0x00000000004266C8 string=0x0000000000426838 ""
 *   insn=0x00000000004266CC string=0x00000000004266D0 "\t!"
 *   insn=0x00000000004266D0 string=0x00000000004266D4 "i"
 *   insn=0x00000000004266D4 string=0x00000000004266D8 ""
 *   insn=0x00000000004266E0 string=0x00000000004266E4 "@""
 *   insn=0x00000000004266E8 string=0x00000000004266EC ")=G"
 *   insn=0x00000000004266EC string=0x00000000004266F0 "!"
 *   insn=0x00000000004266F0 string=0x00000000004266F4 "I\t"
 *   insn=0x00000000004266F4 string=0x00000000004266F8 "\t"
 *   insn=0x00000000004266F4 string=0x000000000042681C "\t"
 *   insn=0x00000000004266F8 string=0x00000000004266FC "*"
 *   insn=0x00000000004266FC string=0x0000000000426700 "\n"
 *   insn=0x0000000000426704 string=0x0000000000426708 "H"
 *   insn=0x0000000000426708 string=0x0000000000426828 "?"
 *   insn=0x000000000042670C string=0x0000000000426710 ")=G"
 *   insn=0x0000000000426710 string=0x0000000000426714 "!"
 *   insn=0x0000000000426718 string=0x000000000042671C "\t"
 *   insn=0x0000000000426718 string=0x0000000000426754 "\t"
 *   insn=0x000000000042671C string=0x0000000000426720 "*"
 *   insn=0x0000000000426720 string=0x0000000000426724 "\n"
 *   insn=0x0000000000426728 string=0x000000000042672C ""
 *   insn=0x000000000042672C string=0x0000000000426760 "?"
 *   insn=0x0000000000426730 string=0x0000000000426734 ")=G"
 *   insn=0x0000000000426734 string=0x0000000000426738 "!"
 *   insn=0x000000000042673C string=0x0000000000426740 "\t"
 *   insn=0x000000000042673C string=0x0000000000426774 "\t"
 *   insn=0x0000000000426740 string=0x0000000000426744 "*"
 *   insn=0x0000000000426744 string=0x0000000000426748 "\n"
 *   insn=0x0000000000426750 string=0x0000000000426780 "?"
 *   insn=0x0000000000426754 string=0x0000000000426758 "*"
 *   insn=0x0000000000426758 string=0x000000000042675C "\n"
 *   insn=0x0000000000426760 string=0x0000000000426764 "L"
 *   insn=0x000000000042676C string=0x0000000000426770 "W"
 *   insn=0x0000000000426774 string=0x0000000000426778 "*"
 *   insn=0x0000000000426778 string=0x000000000042677C "\n"
 *   insn=0x000000000042678C string=0x0000000000426790 "s"
 *   insn=0x0000000000426794 string=0x0000000000426798 ")=G"
 *   insn=0x0000000000426798 string=0x000000000042679C "!"
 *   insn=0x00000000004267A0 string=0x00000000004267A4 "\t"
 *   insn=0x00000000004267A0 string=0x00000000004267DC "\t"
 *   insn=0x00000000004267A4 string=0x00000000004267A8 "*"
 *   insn=0x00000000004267A8 string=0x00000000004267AC "\n"
 *   insn=0x00000000004267B0 string=0x00000000004267B4 ""
 *   insn=0x00000000004267B4 string=0x00000000004267E8 "?"
 *   insn=0x00000000004267B8 string=0x00000000004267BC ")=G"
 *   insn=0x00000000004267BC string=0x00000000004267C0 "!"
 *   insn=0x00000000004267C4 string=0x00000000004267C8 "\t"
 *   insn=0x00000000004267C4 string=0x00000000004267FC "\t"
 *   insn=0x00000000004267C8 string=0x00000000004267CC "*"
 *   insn=0x00000000004267CC string=0x00000000004267D0 "\n"
 *   insn=0x00000000004267D8 string=0x0000000000426808 "?"
 *   insn=0x00000000004267DC string=0x00000000004267E0 "*"
 *   insn=0x00000000004267E0 string=0x00000000004267E4 "\n"
 *   insn=0x00000000004267FC string=0x0000000000426800 "*"
 *   insn=0x0000000000426800 string=0x0000000000426804 "\n"
 *   insn=0x000000000042680C string=0x0000000000426A04 "h"
 *   insn=0x0000000000426814 string=0x0000000000426818 "{"
 *   insn=0x000000000042681C string=0x0000000000426820 "*"
 *   insn=0x0000000000426820 string=0x0000000000426824 "\n"
 *   insn=0x000000000042683C string=0x0000000000426840 ""
 *   insn=0x0000000000426848 string=0x000000000042684C "7"
 *   insn=0x0000000000426864 string=0x0000000000426868 ""
 *   insn=0x0000000000426868 string=0x000000000042686C ""
 *   insn=0x000000000042686C string=0x0000000000426870 "8ih"
 *   insn=0x0000000000426870 string=0x0000000000426874 "7"
 *   insn=0x0000000000426878 string=0x000000000042687C ""
 *   insn=0x0000000000426888 string=0x000000000042688C "\t@"
 *   insn=0x0000000000426898 string=0x000000000042689C ""
 *   insn=0x00000000004268A8 string=0x00000000004268AC "@"
 *   insn=0x00000000004268B8 string=0x00000000004268BC "|"
 *   insn=0x00000000004268C4 string=0x00000000004268C8 "!"
 *   insn=0x00000000004268D0 string=0x00000000004268D4 ""
 *   insn=0x00000000004268EC string=0x00000000004268F0 "\n"
 *   insn=0x00000000004268F8 string=0x00000000004268FC ""
 *   insn=0x00000000004268FC string=0x0000000000426900 ""
 *   insn=0x0000000000426900 string=0x0000000000426904 "3ih"
 *   insn=0x0000000000426904 string=0x0000000000426908 "7"
 *   insn=0x000000000042690C string=0x0000000000426910 ""
 *   insn=0x000000000042691C string=0x0000000000426920 "\t@"
 *   insn=0x000000000042692C string=0x0000000000426930 ""
 *   insn=0x000000000042693C string=0x0000000000426940 "@"
 *   insn=0x0000000000426968 string=0x000000000042696C ")"
 *   insn=0x000000000042696C string=0x0000000000426970 ")"
 *   insn=0x0000000000426994 string=0x0000000000426998 "2n"
 *   insn=0x00000000004269A0 string=0x00000000004269A4 ""
 *   insn=0x00000000004269A4 string=0x00000000004269A8 ""
 *   insn=0x00000000004269A8 string=0x00000000004269AC "5ih"
 *   insn=0x00000000004269AC string=0x00000000004269B0 "7"
 *   insn=0x00000000004269B4 string=0x00000000004269B8 ""
 *   insn=0x00000000004269C4 string=0x00000000004269C8 "\t@"
 *   insn=0x00000000004269D4 string=0x00000000004269D8 ""
 *   insn=0x00000000004269E4 string=0x00000000004269E8 "@"
 *   insn=0x0000000000426A04 string=0x0000000000426A08 "\t"
 *   insn=0x0000000000426A0C string=0x0000000000426A10 "!"
 *   insn=0x0000000000426A20 string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000426A24 string=0x0000000000426A28 "i"
 *   insn=0x0000000000426A2C string=0x0000000000426A30 "!"
 *   insn=0x0000000000426A74 string=0x0000000000426A78 "i*@"
 *   insn=0x0000000000426A78 string=0x0000000000426A7C "("
 *   insn=0x0000000000426A80 string=0x0000000000426A84 "`"
 *   insn=0x0000000000426A84 string=0x0000000000426A88 "H"
 *   insn=0x0000000000426A90 string=0x0000000000426A94 ""
 *   insn=0x0000000000426A94 string=0x0000000000426A98 " "
 *   insn=0x0000000000426AB4 string=0x0000000000426AB8 "L"
 *   insn=0x0000000000426AB8 string=0x0000000000426ABC "h"
 *   insn=0x0000000000426AC4 string=0x0000000000426AC8 "("
 *   insn=0x0000000000426ACC string=0x0000000000426AD0 " "
 *   insn=0x0000000000426AD0 string=0x0000000000426AD4 "H"
 *   insn=0x0000000000426AD0 string=0x0000000000426B14 "\t!"
 *   insn=0x0000000000426ADC string=0x0000000000426AE0 ""
 *   insn=0x0000000000426AE0 string=0x0000000000426AE4 " "
 *   insn=0x0000000000426AF4 string=0x0000000000426AF8 "s"
 *   insn=0x0000000000426B00 string=0x0000000000426B04 "L"
 *   insn=0x0000000000426B18 string=0x0000000000426B1C ""
 *   insn=0x0000000000426B24 string=0x0000000000426B28 "a"
 *   insn=0x0000000000426B38 string=0x0000000000426B3C "\t)@"
 *   insn=0x0000000000426B3C string=0x0000000000426B40 "I"
 *   insn=0x0000000000426B40 string=0x0000000000426B44 "*"
 *   insn=0x0000000000426B64 string=0x0000000000426B68 "i"
 *   insn=0x0000000000426B68 string=0x0000000000426B6C "+!D"
 *   insn=0x0000000000426B6C string=0x0000000000426B70 "\t"
 *   insn=0x0000000000426B70 string=0x0000000000426B74 "("
 *   insn=0x0000000000426B78 string=0x0000000000426B7C " %"
 *   insn=0x0000000000426B88 string=0x0000000000426B8C "Z"
 *   insn=0x0000000000426B94 string=0x0000000000426B98 " "
 *   insn=0x0000000000426BA8 string=0x0000000000426BAC " "
 *   insn=0x0000000000426BAC string=0x0000000000426BB0 "\t"
 *   insn=0x0000000000426BB0 string=0x0000000000426BB4 "/"
 *   insn=0x0000000000426BB4 string=0x0000000000426BB8 "\t"
 *   insn=0x0000000000426BBC string=0x0000000000426BC0 " "
 *   insn=0x0000000000426BC0 string=0x0000000000426BC4 "i"
 *   insn=0x0000000000426BD0 string=0x0000000000426BD4 " 1H"
 *   insn=0x0000000000426BE4 string=0x0000000000426BE8 ""
 *   insn=0x0000000000426BF4 string=0x0000000000426BF8 "L"
 *   insn=0x0000000000426C18 string=0x0000000000427130 "!"
 *   insn=0x0000000000426C20 string=0x0000000000426C24 "{"
 *   insn=0x0000000000426C24 string=0x0000000000426C28 ""
 *   insn=0x0000000000426C28 string=0x0000000000426C2C ""
 *   insn=0x0000000000426C2C string=0x0000000000426C30 "(ih"
 *   insn=0x0000000000426C34 string=0x0000000000426C38 ""
 *   insn=0x0000000000426C44 string=0x0000000000426C48 "(%@"
 *   insn=0x0000000000426C48 string=0x0000000000426C4C ")"
 *   insn=0x0000000000426C4C string=0x0000000000426C50 ")"
 *   insn=0x0000000000426C54 string=0x0000000000426C58 "j"
 *   insn=0x0000000000426C58 string=0x0000000000426D04 "?"
 *   insn=0x0000000000426C64 string=0x0000000000426C68 "0"
 *   insn=0x0000000000426C74 string=0x0000000000426C78 "zm"
 *   insn=0x0000000000426C84 string=0x0000000000426C88 "!'"
 *   insn=0x0000000000426C88 string=0x000000000042716C "!"
 *   insn=0x0000000000426C90 string=0x0000000000426C94 ""
 *   insn=0x0000000000426C94 string=0x0000000000426C98 ""
 *   insn=0x0000000000426C98 string=0x0000000000426C9C "(ih"
 *   insn=0x0000000000426C9C string=0x0000000000426CA0 ""
 *   insn=0x0000000000426CAC string=0x0000000000426CB0 "8"
 *   insn=0x0000000000426CB0 string=0x0000000000426CB4 "@"
 *   insn=0x0000000000426CB4 string=0x0000000000426CB8 ""
 *   insn=0x0000000000426CB8 string=0x0000000000426CBC ""
 *   insn=0x0000000000426CC0 string=0x0000000000426CC4 ""
 *   insn=0x0000000000426CC4 string=0x0000000000426CC8 "\t@"
 *   insn=0x0000000000426CD0 string=0x0000000000426CD4 "@"
 *   insn=0x0000000000426CD4 string=0x0000000000426CD8 ""
 *   insn=0x0000000000426CD8 string=0x0000000000426CDC ""
 *   insn=0x0000000000426CE0 string=0x0000000000426CE4 ""
 *   insn=0x0000000000426CE4 string=0x0000000000426CE8 "@"
 *   insn=0x0000000000426CFC string=0x0000000000426D00 ""
 *   insn=0x0000000000426CFC string=0x0000000000426D2C "@"
 *   insn=0x0000000000426D24 string=0x0000000000426D28 "8"
 *   insn=0x0000000000426D2C string=0x0000000000426D30 ""
 *   insn=0x0000000000426D30 string=0x0000000000426D34 ""
 *   insn=0x0000000000426D38 string=0x0000000000426D3C ""
 *   insn=0x0000000000426D3C string=0x0000000000426D40 "\t@"
 *   insn=0x0000000000426D48 string=0x0000000000426D4C "@"
 *   insn=0x0000000000426D4C string=0x0000000000426D50 ""
 *   insn=0x0000000000426D50 string=0x0000000000426D54 ""
 *   insn=0x0000000000426D58 string=0x0000000000426D5C ""
 *   insn=0x0000000000426D5C string=0x0000000000426D60 "@"
 *   insn=0x0000000000426D84 string=0x0000000000426D88 ""H"
 *   insn=0x0000000000426D8C string=0x0000000000426D90 "\t!@"
 *   insn=0x0000000000426D90 string=0x0000000000426D94 ""
 *   insn=0x0000000000426D98 string=0x0000000000426D9C "(u"
 *   insn=0x0000000000426DA0 string=0x0000000000426DA4 "\n"
 *   insn=0x0000000000426DAC string=0x0000000000426DB0 "\nAE"
 *   insn=0x0000000000426DB0 string=0x0000000000426DB4 "@"
 *   insn=0x0000000000426DB4 string=0x0000000000426DB8 " "
 *   insn=0x0000000000426DC8 string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000426DD0 string=0x0000000000426DD4 "\t"
 *   insn=0x0000000000426DF0 string=0x0000000000426DF4 "gg"
 *   insn=0x0000000000426E00 string=0x0000000000426E04 "@8!"
 *   insn=0x0000000000426E04 string=0x0000000000426E08 "!"
 *   insn=0x0000000000426E08 string=0x0000000000426E0C "B"
 *   insn=0x0000000000426E0C string=0x0000000000426E10 "A8!"
 *   insn=0x0000000000426E14 string=0x0000000000426E18 "!!"
 *   insn=0x0000000000426E20 string=0x0000000000426E24 "m"
 *   insn=0x0000000000426E28 string=0x0000000000426E2C "7"
 *   insn=0x0000000000426E30 string=0x0000000000426E34 "#"
 *   insn=0x0000000000426E44 string=0x0000000000426E48 "+"
 *   insn=0x0000000000426E50 string=0x0000000000426E54 " #"
 *   insn=0x0000000000426E54 string=0x0000000000426E58 "\t"
 *   insn=0x0000000000426E60 string=0x0000000000426E64 "M( "
 *   insn=0x0000000000426E98 string=0x00000000001F6DE0 "0'"
 *   insn=0x0000000000426EAC string=0x00000000001FBCC0 "0'"
 *   insn=0x0000000000426EE4 string=0x0000000000426EE8 "\nAE"
 *   insn=0x0000000000426F0C string=0x0000000000426F10 "C"
 *   insn=0x0000000000426F14 string=0x0000000000426F18 "##"
 *   insn=0x0000000000426F24 string=0x0000000000426F28 "("
 *   insn=0x0000000000426F28 string=0x0000000000426F2C "i"
 *   insn=0x0000000000426F3C string=0x0000000000426F40 "]"
 *   insn=0x0000000000426F4C string=0x0000000000426F50 " "
 *   insn=0x0000000000426F54 string=0x0000000000426F58 "\n"
 *   insn=0x0000000000426F5C string=0x0000000000426F60 "@! "
 *   insn=0x0000000000426F60 string=0x0000000000426F64 ""
 *   insn=0x0000000000426F6C string=0x0000000000426F70 "@"
 *   insn=0x0000000000426F70 string=0x0000000000426F74 ""
 *   insn=0x0000000000426F74 string=0x0000000000426F78 ""
 *   insn=0x0000000000426FE0 string=0x0000000000426FE4 "7S"
 *   insn=0x0000000000427008 string=0x000000000042700C "i_"
 *   insn=0x0000000000427014 string=0x0000000000427018 "h"
 *   insn=0x0000000000427020 string=0x0000000000427024 " "
 *   insn=0x0000000000427040 string=0x0000000000427044 "h"
 *   insn=0x0000000000427058 string=0x000000000042705C "@"
 *   insn=0x000000000042705C string=0x0000000000427060 ""
 *   insn=0x0000000000427060 string=0x0000000000427064 ""
 *   insn=0x0000000000427068 string=0x000000000042706C ""
 *   insn=0x000000000042706C string=0x0000000000427070 ""
 *   insn=0x000000000042707C string=0x0000000000427080 "@! "
 *   insn=0x0000000000427088 string=0x000000000042708C "!"
 *   insn=0x0000000000427098 string=0x000000000042709C "b(""
 *   insn=0x00000000004270A0 string=0x00000000004270A4 ""."
 *   insn=0x00000000004270A4 string=0x00000000004270A8 "c"
 *   insn=0x00000000004270A8 string=0x00000000004270AC "b(""
 *   insn=0x00000000004270B4 string=0x00000000004270B8 "@\t "
 *   insn=0x00000000004270B8 string=0x00000000004270BC "A\t!"
 *   insn=0x00000000004270BC string=0x00000000004270C0 "b"
 *   insn=0x00000000004270C0 string=0x00000000004270C4 "`8 "
 *   insn=0x00000000004270C4 string=0x00000000004270C8 "A8!"
 *   insn=0x0000000000427108 string=0x000000000042710C "1j"
 *   insn=0x0000000000427114 string=0x0000000000427118 "\t)@"
 *   insn=0x0000000000427118 string=0x000000000042711C "I"
 *   insn=0x000000000042711C string=0x0000000000427120 ")"
 *   insn=0x0000000000427124 string=0x0000000000427128 ""
 *   insn=0x0000000000427134 string=0x0000000000427138 "\t"
 *   insn=0x0000000000427134 string=0x000000000042714C "\t"
 *   insn=0x0000000000427138 string=0x000000000042713C "*"
 *   insn=0x000000000042713C string=0x0000000000427140 "\n"
 *   insn=0x0000000000427148 string=0x0000000000427158 "?"
 *   insn=0x000000000042714C string=0x0000000000427150 "*"
 *   insn=0x0000000000427150 string=0x0000000000427154 "\n"
 *   insn=0x0000000000427170 string=0x0000000000427174 "\t"
 *   insn=0x0000000000427170 string=0x0000000000427188 "\t"
 *   insn=0x0000000000427174 string=0x0000000000427178 "*"
 *   insn=0x0000000000427178 string=0x000000000042717C "\n"
 *   insn=0x0000000000427184 string=0x0000000000427194 "?"
 *   insn=0x0000000000427188 string=0x000000000042718C "*"
 *   insn=0x000000000042718C string=0x0000000000427190 "\n"
 *   insn=0x00000000004271A8 string=0x00000000004271AC "3"
 *   insn=0x00000000004271AC string=0x00000000004271B0 "h"
 *   insn=0x00000000004271B0 string=0x00000000004271B4 ""
 *   insn=0x00000000004271B4 string=0x00000000004271B8 "h"
 *   insn=0x00000000004271BC string=0x00000000004271C0 "h"
 *   insn=0x00000000004271C4 string=0x00000000004271C8 "\t@"
 *   insn=0x00000000004271CC string=0x00000000004271D0 "h\n@"
 *   insn=0x00000000004271D0 string=0x00000000004271D4 ""
 *   insn=0x00000000004271D4 string=0x00000000004271D8 "h\n"
 *   insn=0x00000000004271DC string=0x00000000004271E0 "h"
 *   insn=0x00000000004271E4 string=0x00000000004271E8 "@"
 *   insn=0x00000000004271F8 string=0x00000000004271FC "a"
 *   insn=0x0000000000427230 string=0x0000000000427234 ")=G"
 *   insn=0x0000000000427234 string=0x0000000000427238 "!"
 *   insn=0x000000000042723C string=0x0000000000427240 "\t"
 *   insn=0x000000000042723C string=0x0000000000427254 "\t"
 *   insn=0x0000000000427240 string=0x0000000000427244 "*"
 *   insn=0x0000000000427244 string=0x0000000000427248 "\n"
 *   insn=0x0000000000427250 string=0x0000000000427260 "?"
 *   insn=0x0000000000427254 string=0x0000000000427258 "*"
 *   insn=0x0000000000427258 string=0x000000000042725C "\n"
 *   insn=0x0000000000427268 string=0x000000000042726C "N"
 *   insn=0x000000000042726C string=0x0000000000427270 "W"
 *   insn=0x0000000000427270 string=0x0000000000427274 "\n"
 *   insn=0x0000000000427278 string=0x000000000042727C ")=G"
 *   insn=0x000000000042727C string=0x0000000000427280 "!"
 *   insn=0x0000000000427284 string=0x0000000000427288 "\t"
 *   insn=0x0000000000427284 string=0x00000000004272C0 "\t"
 *   insn=0x0000000000427288 string=0x000000000042728C "*"
 *   insn=0x000000000042728C string=0x0000000000427290 "\n"
 *   insn=0x0000000000427294 string=0x0000000000427298 ""
 *   insn=0x0000000000427298 string=0x00000000004272CC "?"
 *   insn=0x000000000042729C string=0x00000000004272A0 ")=G"
 *   insn=0x00000000004272A0 string=0x00000000004272A4 "!"
 *   insn=0x00000000004272A8 string=0x00000000004272AC "\t"
 *   insn=0x00000000004272A8 string=0x00000000004272E0 "\t"
 *   insn=0x00000000004272AC string=0x00000000004272B0 "*"
 *   insn=0x00000000004272B0 string=0x00000000004272B4 "\n"
 *   insn=0x00000000004272BC string=0x00000000004272EC "?"
 *   insn=0x00000000004272C0 string=0x00000000004272C4 "*"
 *   insn=0x00000000004272C4 string=0x00000000004272C8 "\n"
 *   insn=0x00000000004272CC string=0x00000000004272D0 "l"
 *   insn=0x00000000004272D4 string=0x00000000004272D8 "3"
 *   insn=0x00000000004272E0 string=0x00000000004272E4 "*"
 *   insn=0x00000000004272E4 string=0x00000000004272E8 "\n"
 *   insn=0x00000000004272F4 string=0x00000000004272F8 "+"
 *   insn=0x0000000000427308 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000427314 string=0x0000000000427318 "(a"
 *   insn=0x000000000042731C string=0x0000000000427320 "`"
 *   insn=0x0000000000427324 string=0x0000000000427328 "J=G"
 *   insn=0x0000000000427328 string=0x000000000042732C ")!"
 *   insn=0x000000000042732C string=0x0000000000427330 "\n"
 *   insn=0x0000000000427330 string=0x0000000000427334 "*"
 *   insn=0x0000000000427330 string=0x0000000000427610 "*"
 *   insn=0x0000000000427334 string=0x0000000000427338 "K"
 *   insn=0x0000000000427338 string=0x000000000042733C "+"
 *   insn=0x0000000000427344 string=0x00000000004275F0 "_"
 *   insn=0x000000000042734C string=0x0000000000427350 "(a"
 *   insn=0x000000000042735C string=0x0000000000427360 "J=G"
 *   insn=0x0000000000427360 string=0x0000000000427364 ")!"
 *   insn=0x0000000000427364 string=0x0000000000427368 "J"
 *   insn=0x0000000000427368 string=0x000000000042736C "*"
 *   insn=0x000000000042736C string=0x0000000000427370 "K"
 *   insn=0x0000000000427370 string=0x0000000000427374 "+"
 *   insn=0x0000000000427388 string=0x000000000042738C "J"
 *   insn=0x0000000000427390 string=0x0000000000427394 "(a"
 *   insn=0x00000000004273A0 string=0x00000000004273A4 "J=G"
 *   insn=0x00000000004273A4 string=0x00000000004273A8 ")!"
 *   insn=0x00000000004273A8 string=0x00000000004273AC "*"
 *   insn=0x00000000004273AC string=0x00000000004273B0 "*"
 *   insn=0x00000000004273B0 string=0x00000000004273B4 "K"
 *   insn=0x00000000004273B4 string=0x00000000004273B8 "+"
 *   insn=0x00000000004273E4 string=0x0000000000427554 "@"
 *   insn=0x0000000000427400 string=0x0000000000427404 "(a"
 *   insn=0x000000000042740C string=0x0000000000427410 ")!"
 *   insn=0x0000000000427414 string=0x0000000000427418 "*"
 *   insn=0x0000000000427414 string=0x0000000000427448 "*"
 *   insn=0x0000000000427418 string=0x000000000042741C "K"
 *   insn=0x000000000042741C string=0x0000000000427420 "+"
 *   insn=0x0000000000427424 string=0x0000000000427428 "_"
 *   insn=0x000000000042743C string=0x0000000000427440 "t"
 *   insn=0x0000000000427440 string=0x0000000000427444 "z"
 *   insn=0x0000000000427448 string=0x000000000042744C "K"
 *   insn=0x000000000042744C string=0x0000000000427450 "+"
 *   insn=0x0000000000427450 string=0x0000000000427454 "_"
 *   insn=0x0000000000427464 string=0x0000000000427468 "4"
 *   insn=0x000000000042746C string=0x0000000000427470 ""
 *   insn=0x000000000042747C string=0x0000000000427480 "\t@"
 *   insn=0x000000000042748C string=0x0000000000427490 ""
 *   insn=0x000000000042749C string=0x00000000004274A0 "@"
 *   insn=0x00000000004274A8 string=0x00000000004274AC "`"
 *   insn=0x00000000004274BC string=0x00000000004274C0 "(a"
 *   insn=0x00000000004274C4 string=0x00000000004274C8 " "
 *   insn=0x00000000004274CC string=0x00000000004274D0 "J=G"
 *   insn=0x00000000004274D0 string=0x00000000004274D4 ")!"
 *   insn=0x00000000004274D8 string=0x00000000004274DC "*"
 *   insn=0x00000000004274DC string=0x00000000004274E0 "K"
 *   insn=0x00000000004274E0 string=0x00000000004274E4 "+"
 *   insn=0x00000000004274E8 string=0x00000000004274EC "A"
 *   insn=0x0000000000427500 string=0x0000000000427504 "(a"
 *   insn=0x000000000042750C string=0x0000000000427510 ")!"
 *   insn=0x0000000000427510 string=0x0000000000427514 "5"
 *   insn=0x0000000000427514 string=0x0000000000427518 "*"
 *   insn=0x0000000000427514 string=0x0000000000427538 "*"
 *   insn=0x0000000000427518 string=0x000000000042751C "K"
 *   insn=0x000000000042751C string=0x0000000000427520 "+"
 *   insn=0x0000000000427524 string=0x0000000000427528 "_"
 *   insn=0x0000000000427530 string=0x0000000000427534 "2"
 *   insn=0x0000000000427538 string=0x000000000042753C "K"
 *   insn=0x000000000042753C string=0x0000000000427540 "+"
 *   insn=0x0000000000427540 string=0x0000000000427544 "_"
 *   insn=0x0000000000427544 string=0x0000000000427548 "M"
 *   insn=0x0000000000427548 string=0x000000000042754C "8"
 *   insn=0x0000000000427558 string=0x000000000042755C ""
 *   insn=0x000000000042755C string=0x0000000000427560 ""
 *   insn=0x0000000000427560 string=0x0000000000427564 "A"
 *   insn=0x0000000000427564 string=0x0000000000427568 ""
 *   insn=0x0000000000427568 string=0x000000000042756C ""
 *   insn=0x0000000000427574 string=0x0000000000427578 "-"
 *   insn=0x0000000000427588 string=0x000000000042758C "(a"
 *   insn=0x0000000000427598 string=0x000000000042759C "J=G"
 *   insn=0x000000000042759C string=0x00000000004275A0 ")!"
 *   insn=0x00000000004275A0 string=0x00000000004275A4 "j"
 *   insn=0x00000000004275A4 string=0x00000000004275A8 "*"
 *   insn=0x00000000004275A8 string=0x00000000004275AC "K"
 *   insn=0x00000000004275AC string=0x00000000004275B0 "+"
 *   insn=0x00000000004275C0 string=0x00000000004275C4 "(a"
 *   insn=0x00000000004275D0 string=0x00000000004275D4 "J=G"
 *   insn=0x00000000004275D4 string=0x00000000004275D8 ")!"
 *   insn=0x00000000004275DC string=0x00000000004275E0 "*"
 *   insn=0x00000000004275E0 string=0x00000000004275E4 "K"
 *   insn=0x00000000004275E4 string=0x00000000004275E8 "+"
 *   insn=0x00000000004275FC string=0x0000000000427600 "i"
 *   insn=0x0000000000427604 string=0x0000000000427608 "t"
 *   insn=0x0000000000427610 string=0x0000000000427614 "K"
 *   insn=0x0000000000427614 string=0x0000000000427618 "+"
 *   insn=0x0000000000427618 string=0x000000000042761C "_"
 *   insn=0x000000000042762C string=0x0000000000427630 "4"
 *   insn=0x0000000000427634 string=0x0000000000427638 ""
 *   insn=0x0000000000427644 string=0x0000000000427648 "\t@"
 *   insn=0x0000000000427654 string=0x0000000000427658 ""
 *   insn=0x0000000000427664 string=0x0000000000427668 "@"
 *   insn=0x0000000000427678 string=0x000000000042767C "4"
 *   insn=0x00000000004276A4 string=0x00000000004276A8 "X"
 *   insn=0x00000000004276A8 string=0x00000000004276AC ""
 *   insn=0x00000000004276B4 string=0x00000000004276B8 ""
 *   insn=0x00000000004276D0 string=0x00000000004276D4 ""
 *   insn=0x00000000004276F8 string=0x00000000004276FC " "
 *   insn=0x00000000004276FC string=0x0000000000427700 "\t,"
 *   insn=0x0000000000427704 string=0x0000000000427708 "H,"
 *   insn=0x0000000000427708 string=0x000000000042770C "g"
 *   insn=0x000000000042770C string=0x0000000000427710 " "
 *   insn=0x0000000000427714 string=0x00000000001FD530 "0'"
 *   insn=0x0000000000427724 string=0x0000000000427728 "a\t)"
 *   insn=0x0000000000427728 string=0x000000000042772C "b\t*"
 *   insn=0x0000000000427730 string=0x0000000000427734 "g8!"
 *   insn=0x0000000000427734 string=0x0000000000427738 "P($"
 *   insn=0x0000000000427740 string=0x0000000000427744 "&(#"
 *   insn=0x000000000042774C string=0x0000000000427750 "c(%"
 *   insn=0x0000000000427758 string=0x000000000042775C "f8!"
 *   insn=0x000000000042775C string=0x0000000000427760 "G($"
 *   insn=0x0000000000427760 string=0x0000000000427764 "#(#"
 *   insn=0x0000000000427780 string=0x0000000000427784 "e8%"
 *   insn=0x0000000000427788 string=0x000000000042778C "f8!"
 *   insn=0x000000000042778C string=0x0000000000427790 "G($"
 *   insn=0x0000000000427790 string=0x0000000000427794 "#(#"
 *   insn=0x000000000042779C string=0x00000000004277A0 "!(%"
 *   insn=0x00000000004277A0 string=0x00000000004277A4 "E( "
 *   insn=0x00000000004277D0 string=0x00000000005846C0 "ff"
 *   insn=0x00000000004277D8 string=0x00000000004277DC "#(#"
 *   insn=0x00000000004277E0 string=0x00000000004277E4 "D$"
 *   insn=0x00000000004277EC string=0x00000000004277F0 "D8$"
 *   insn=0x000000000042780C string=0x0000000000427810 ""
 *   insn=0x0000000000427818 string=0x000000000042781C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::AddPathToSprite(
        _QWORD *a1,
        Caver::Sprite *a2,
        __int64 a3,
        const Caver::Color *a4,
        __int64 a5)
{
  __int128 v5; // q8
  __int128 v6; // q9
  __int128 v7; // q13
  __int128 v8; // q14
  _QWORD *v11; // x0
  char HasPortalTo; // w23
  void *v13; // x0
  _QWORD *v14; // x23
  __int64 v15; // x19
  __int64 v16; // x21
  _QWORD *v17; // x23
  __int64 v18; // x19
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  void *v22; // x0
  __int64 v23; // x9
  void *v24; // x0
  _QWORD *v25; // x8
  __int64 v26; // x9
  unsigned __int64 v27; // x10
  __int64 v28; // x27
  __int64 v29; // x8
  __int64 v30; // x8
  void *v31; // x0
  unsigned int *v32; // x8
  int v33; // w9
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9
  unsigned int *v38; // x8
  int v39; // w9
  unsigned int *v40; // x8
  int v41; // w9
  _QWORD *v42; // x23
  float32x2_t **v43; // x24
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x28
  void *v47; // x0
  _QWORD *v48; // x23
  float32x2_t **v49; // x19
  __int64 v50; // x8
  __int64 v51; // x8
  void *v52; // x0
  _QWORD *v53; // x23
  float32x2_t **v54; // x21
  __int64 v55; // x8
  __int64 v56; // x8
  void *v57; // x0
  __int64 v58; // x10
  __int64 v59; // x8
  __int64 v60; // x0
  __int64 v61; // x21
  __int64 v62; // x23
  __int64 v63; // x10
  __int64 v64; // x8
  __int64 v65; // x8
  __int64 v66; // x0
  __int64 v67; // x19
  __int64 v68; // x23
  __int64 v69; // x8
  bool v70; // cc
  float32x2_t v71; // d11
  __int64 v72; // x27
  char v73; // w23
  _QWORD *v74; // x0
  unsigned __int64 v75; // d0
  __int64 v76; // x9
  void *v77; // x0
  _QWORD *v78; // x24
  __int64 v79; // x8
  __int64 v80; // x8
  int v81; // w19
  _QWORD *v82; // x24
  __int64 v83; // x8
  __int64 v84; // x8
  float32x2_t v85; // d10
  __int64 v86; // x8
  float v87; // s10
  float v88; // s0
  __int128 v89; // q11
  float v90; // s12
  __int128 v91; // q9
  __int128 v92; // q8
  __int128 v93; // q14
  float v94; // s13
  Caver::Matrix4 *v95; // x0
  float v96; // s0
  float v97; // s0
  __int64 v98; // x8
  _QWORD *v99; // x10
  float v100; // s1
  float v101; // s3
  __int64 *v102; // x8
  float32x2_t v103; // d0
  float v104; // s10
  __int64 v105; // x24
  float32x2_t v106; // d12
  Caver::Matrix4 *v107; // x0
  float v108; // s0
  float v109; // s0
  float32x2_t v110; // d12
  int v111; // w8
  unsigned int *v112; // x8
  int v113; // w9
  unsigned int *v114; // x8
  int v115; // w9
  _QWORD *v116; // x19
  __int64 v117; // x8
  __int64 v118; // x8
  unsigned int *v119; // x8
  int v120; // w9
  unsigned int *v121; // x8
  int v122; // w9
  unsigned int *v123; // x8
  int v124; // w9
  unsigned __int64 v125; // [xsp+120h] [xbp-270h]
  float32x2_t v127; // [xsp+190h] [xbp-200h]
  float32x2_t v129; // [xsp+1B0h] [xbp-1E0h]
  unsigned __int64 v130; // [xsp+1D0h] [xbp-1C0h] BYREF
  unsigned __int64 v131; // [xsp+1D8h] [xbp-1B8h] BYREF
  _QWORD *v132; // [xsp+1E0h] [xbp-1B0h] BYREF
  unsigned __int64 v133; // [xsp+1E8h] [xbp-1A8h] BYREF
  __int64 v134[2]; // [xsp+1F0h] [xbp-1A0h] BYREF
  unsigned __int64 v135; // [xsp+200h] [xbp-190h] BYREF
  unsigned __int64 v136; // [xsp+208h] [xbp-188h] BYREF
  float32x2_t v137; // [xsp+210h] [xbp-180h]
  float32x2_t v138; // [xsp+218h] [xbp-178h]
  _QWORD *v139; // [xsp+220h] [xbp-170h]
  _QWORD *v140; // [xsp+228h] [xbp-168h]
  _QWORD *v141; // [xsp+230h] [xbp-160h]
  _QWORD *v142; // [xsp+238h] [xbp-158h]
  _QWORD *v143; // [xsp+240h] [xbp-150h]
  _QWORD *v144; // [xsp+248h] [xbp-148h]
  _QWORD *v145; // [xsp+250h] [xbp-140h]
  _QWORD *v146; // [xsp+258h] [xbp-138h]
  _QWORD *v147; // [xsp+260h] [xbp-130h]
  _QWORD *v148; // [xsp+268h] [xbp-128h]
  _QWORD *v149; // [xsp+270h] [xbp-120h] BYREF
  _QWORD *v150; // [xsp+278h] [xbp-118h]
  __int128 v151; // [xsp+2B0h] [xbp-E0h] BYREF
  __int128 v152; // [xsp+2C0h] [xbp-D0h]
  __int128 v153; // [xsp+2D0h] [xbp-C0h]
  unsigned __int64 v154; // [xsp+2E0h] [xbp-B0h]
  __int64 v155; // [xsp+2E8h] [xbp-A8h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (int)((*(_QWORD *)(*(_QWORD *)a3 + 8LL) - **(_QWORD **)a3) >> 3) < 1 )
    return;
  v11 = (_QWORD *)operator new(0x18u);
  v11[1] = 0;
  v11[2] = 0;
  *v11 = 0;
  v147 = v11;
  boost::detail::shared_count::shared_count<Caver::MapPath>();
  boost::detail::sp_enable_shared_from_this();
  std::vector<std::string>::operator=();
  LODWORD(v7) = *(_DWORD *)(a1[115] + 88LL);
  if ( !a1[91] )
    goto LABEL_18;
  sub_56A528(&v151, a1[89] + 16LL);
  HasPortalTo = Caver::MapNode::HasPortalTo();
  v13 = (void *)(v151 - 24);
  if ( (__int64 *)(v151 - 24) == &qword_6FD2E0 )
    goto LABEL_4;
  v119 = (unsigned int *)(v151 - 8);
  if ( &pthread_create )
  {
    do
      v120 = __ldaxr(v119);
    while ( __stlxr(v120 - 1, v119) );
  }
  else
  {
    v120 = (*v119)--;
  }
  if ( v120 > 0 )
  {
LABEL_4:
    if ( (HasPortalTo & 1) == 0 )
      goto LABEL_18;
  }
  else
  {
    operator delete(v13);
    if ( (HasPortalTo & 1) == 0 )
      goto LABEL_18;
  }
  v14 = v147;
  if ( (int)((v147[1] - *v147) >> 3) < 2 )
  {
LABEL_13:
    sub_56A528(&v151, a1[87] + 16LL);
    v23 = v14[1];
    if ( v23 != *v14 || v23 == v14[2] )
    {
      std::vector<std::string>::_M_insert_aux();
    }
    else
    {
      sub_56A528(*v14, &v151);
      v14[1] += 8LL;
    }
    v24 = (void *)(v151 - 24);
    if ( (__int64 *)(v151 - 24) != &qword_6FD2E0 )
    {
      v121 = (unsigned int *)(v151 - 8);
      if ( &pthread_create )
      {
        do
          v122 = __ldaxr(v121);
        while ( __stlxr(v122 - 1, v121) );
      }
      else
      {
        v122 = (*v121)--;
      }
      if ( v122 <= 0 )
        operator delete(v24);
    }
    goto LABEL_18;
  }
  v15 = a1[35];
  v16 = *(_QWORD *)a1[87];
  sub_56A528(&v151, *v147 + 8LL);
  Caver::Map::NodeForName();
  v17 = v146;
  v18 = *(_QWORD *)(v15 + 16 * v16);
  v19 = *(_QWORD *)(a1[35] + 16LL * *v145);
  if ( v146 )
  {
    v20 = v146[1] - 1LL;
    v146[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v21 = v17[2] - 1LL;
      v17[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v22 = (void *)(v151 - 24);
  if ( (__int64 *)(v151 - 24) != &qword_6FD2E0 )
  {
    v123 = (unsigned int *)(v151 - 8);
    if ( &pthread_create )
    {
      do
        v124 = __ldaxr(v123);
      while ( __stlxr(v124 - 1, v123) );
    }
    else
    {
      v124 = (*v123)--;
    }
    if ( v124 <= 0 )
    {
      operator delete(v22);
      if ( v18 == v19 )
        goto LABEL_18;
      goto LABEL_12;
    }
  }
  if ( v18 != v19 )
  {
LABEL_12:
    v14 = v147;
    goto LABEL_13;
  }
LABEL_18:
  v25 = v147;
  v26 = v147[1] - *v147;
  v27 = (unsigned __int64)v26 >> 3;
  if ( (int)((unsigned __int64)v26 >> 3) <= 1 )
    goto LABEL_86;
  v28 = (int)(v26 >> 3);
  do
  {
    sub_56A528(&v151, *v25 + 8 * v28 - 16);
    Caver::Map::NodeForName();
    v42 = v144;
    v43 = *(float32x2_t ***)(a1[35] + 16LL * *v143);
    if ( v144 )
    {
      v44 = v144[1] - 1LL;
      v144[1] = v44;
      if ( !v44 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
        v45 = v42[2] - 1LL;
        v42[2] = v45;
        if ( !v45 )
          (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
      }
    }
    v46 = v28 - 1;
    v47 = (void *)(v151 - 24);
    if ( (__int64 *)(v151 - 24) != &qword_6FD2E0 )
    {
      v34 = (unsigned int *)(v151 - 8);
      if ( &pthread_create )
      {
        do
          v35 = __ldaxr(v34);
        while ( __stlxr(v35 - 1, v34) );
      }
      else
      {
        v35 = (*v34)--;
      }
      if ( v35 <= 0 )
        operator delete(v47);
    }
    sub_56A528(&v151, *v147 + 8 * v46);
    Caver::Map::NodeForName();
    v48 = v142;
    v49 = *(float32x2_t ***)(a1[35] + 16LL * *v141);
    if ( v142 )
    {
      v50 = v142[1] - 1LL;
      v142[1] = v50;
      if ( !v50 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
        v51 = v48[2] - 1LL;
        v48[2] = v51;
        if ( !v51 )
          (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
      }
    }
    v52 = (void *)(v151 - 24);
    if ( (__int64 *)(v151 - 24) != &qword_6FD2E0 )
    {
      v36 = (unsigned int *)(v151 - 8);
      if ( &pthread_create )
      {
        do
          v37 = __ldaxr(v36);
        while ( __stlxr(v37 - 1, v36) );
      }
      else
      {
        v37 = (*v36)--;
      }
      if ( v37 <= 0 )
        operator delete(v52);
    }
    if ( v43 == v49 )
    {
      v63 = v147[1];
      v64 = *v147 + 8 * v28;
      if ( v64 != v63 )
      {
        v65 = v63 - v64;
        if ( v65 < 1 )
        {
          v64 = v147[1];
        }
        else
        {
          v66 = *v147 + 8 * v46;
          v67 = ((unsigned __int64)v65 >> 3) + 1;
          do
          {
            v68 = v66 + 8;
            sub_56A6A8(v66);
            --v67;
            v66 = v68;
          }
          while ( v67 > 1 );
          v64 = v147[1];
        }
      }
      v147[1] = v64 - 8;
      v69 = *(_QWORD *)(v64 - 8);
      v31 = (void *)(v69 - 24);
      if ( (__int64 *)(v69 - 24) != &qword_6FD2E0 )
      {
        v38 = (unsigned int *)(v69 - 8);
        if ( &pthread_create )
        {
          do
            v39 = __ldaxr(v38);
          while ( __stlxr(v39 - 1, v38) );
        }
        else
        {
          v39 = (*v38)--;
        }
        if ( v39 <= 0 )
LABEL_45:
          operator delete(v31);
      }
    }
    else if ( v28 < (int)((v147[1] - *v147) >> 3) )
    {
      sub_56A528(&v151, *v147 + 8 * v28);
      Caver::Map::NodeForName();
      v53 = v140;
      v54 = *(float32x2_t ***)(a1[35] + 16LL * *v139);
      if ( v140 )
      {
        v55 = v140[1] - 1LL;
        v140[1] = v55;
        if ( !v55 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v53 + 16LL))(v53);
          v56 = v53[2] - 1LL;
          v53[2] = v56;
          if ( !v56 )
            (*(void (__fastcall **)(_QWORD *))(*v53 + 24LL))(v53);
        }
      }
      v57 = (void *)(v151 - 24);
      if ( (__int64 *)(v151 - 24) != &qword_6FD2E0 )
      {
        v40 = (unsigned int *)(v151 - 8);
        if ( &pthread_create )
        {
          do
            v41 = __ldaxr(v40);
          while ( __stlxr(v41 - 1, v40) );
        }
        else
        {
          v41 = (*v40)--;
        }
        if ( v41 <= 0 )
          operator delete(v57);
      }
      *(float32x2_t *)&v151 = vsub_f32((*v49)[1], (*v43)[1]);
      Caver::Vector2::Normalize((Caver::Vector2 *)&v151);
      v149 = (_QWORD *)vsub_f32((*v54)[1], (*v49)[1]).n64_u64[0];
      Caver::Vector2::Normalize((Caver::Vector2 *)&v149);
      if ( fabsf(*(float *)&v151 - *(float *)&v149) <= 0.01
        && fabsf(*((float *)&v151 + 1) - *((float *)&v149 + 1)) <= 0.01 )
      {
        v58 = v147[1];
        v29 = *v147 + 8 * v28;
        if ( v29 != v58 )
        {
          v59 = v58 - v29;
          if ( v59 < 1 )
          {
            v29 = v147[1];
          }
          else
          {
            v60 = *v147 + 8 * v46;
            v61 = ((unsigned __int64)v59 >> 3) + 1;
            do
            {
              v62 = v60 + 8;
              sub_56A6A8(v60);
              --v61;
              v60 = v62;
            }
            while ( v61 > 1 );
            v29 = v147[1];
          }
        }
        v147[1] = v29 - 8;
        v30 = *(_QWORD *)(v29 - 8);
        v31 = (void *)(v30 - 24);
        if ( (__int64 *)(v30 - 24) != &qword_6FD2E0 )
        {
          v32 = (unsigned int *)(v30 - 8);
          if ( &pthread_create )
          {
            do
              v33 = __ldaxr(v32);
            while ( __stlxr(v33 - 1, v32) );
          }
          else
          {
            v33 = (*v32)--;
          }
          if ( v33 <= 0 )
            goto LABEL_45;
        }
      }
    }
    v25 = v147;
    v70 = v28-- <= 2;
  }
  while ( !v70 );
  v27 = (v147[1] - *v147) >> 3;
LABEL_86:
  if ( (int)v27 >= 1 )
  {
    v71.n64_u64[0] = 0x41200000C0000000LL;
    LODWORD(v5) = 1137180672;
    v72 = 0;
    v73 = 1;
    *(_QWORD *)&v6 = 0x3F0000003F000000LL;
    LODWORD(v8) = 3.0;
    while ( 1 )
    {
      sub_56A528(&v149, *v25 + 8 * v72);
      Caver::Map::NodeForName();
      v74 = v149 - 3;
      if ( v149 - 3 != &qword_6FD2E0 )
      {
        v112 = (unsigned int *)(v149 - 1);
        if ( &pthread_create )
        {
          do
            v113 = __ldaxr(v112);
          while ( __stlxr(v113 - 1, v112) );
        }
        else
        {
          v113 = (*v112)--;
        }
        if ( v113 <= 0 )
          operator delete(v74);
      }
      ++v72;
      v75 = vadd_f32(*(float32x2_t *)(**(_QWORD **)(a1[35] + 16LL * *(_QWORD *)v151) + 8LL), v71).n64_u64[0];
      v138.n64_u64[0] = v75;
      v76 = (v147[1] - *v147) >> 3;
      if ( v72 >= (int)v76 )
        break;
      sub_56A528(v134, *v147 + 8 * v72);
      Caver::Map::NodeForName();
      v77 = (void *)(v134[0] - 24);
      if ( (__int64 *)(v134[0] - 24) != &qword_6FD2E0 )
      {
        v114 = (unsigned int *)(v134[0] - 8);
        if ( &pthread_create )
        {
          do
            v115 = __ldaxr(v114);
          while ( __stlxr(v115 - 1, v114) );
        }
        else
        {
          v115 = (*v114)--;
        }
        if ( v115 <= 0 )
          operator delete(v77);
      }
      v78 = v150;
      v137.n64_u64[0] = vadd_f32(*(float32x2_t *)(**(_QWORD **)(a1[35] + 16LL * *v149) + 8LL), v71).n64_u64[0];
      if ( v150 )
      {
        v79 = v150[1] - 1LL;
        v150[1] = v79;
        if ( !v79 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v78 + 16LL))(v78);
          v80 = v78[2] - 1LL;
          v78[2] = v80;
          if ( !v80 )
            (*(void (__fastcall **)(_QWORD *))(*v78 + 24LL))(v78);
        }
      }
      v81 = 0;
      v82 = (_QWORD *)*((_QWORD *)&v151 + 1);
      if ( *((_QWORD *)&v151 + 1) )
        goto LABEL_101;
LABEL_104:
      if ( v81 )
        goto LABEL_134;
      v129.n64_u64[0] = v137.n64_u64[0];
      v127.n64_u64[0] = v138.n64_u64[0];
      v136 = vsub_f32(v137, v138).n64_u64[0];
      Caver::Vector2::Normalize((Caver::Vector2 *)&v136);
      if ( v72 >= (((v147[1] - *v147) << 29) - 0x100000000LL) >> 32 )
      {
        v102 = a1 + 116;
        v103.n64_u64[0] = vsub_f32(v127, v129).n64_u64[0];
        v104 = vaddv_f32(vmul_f32(v103, v103));
        if ( v104 <= 1600.0 )
          v102 = a1 + 117;
        v105 = *v102;
        if ( *v102 )
          ++*(_DWORD *)(v105 + 8);
        v106.n64_u64[0] = *(unsigned __int64 *)(v105 + 84);
        v133 = vmul_f32(v106, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
        Caver::Vector2::Rounded((__int64 *)&v151, (Caver::Vector2 *)&v133);
        v155 = 0x3F80000000000000LL;
        v154 = v129.n64_u64[0];
        v134[0] = v151;
        v134[1] = v106.n64_i64[0];
        v151 = xmmword_583490;
        v152 = xmmword_5837E0;
        v153 = xmmword_5837F0;
        v107 = (Caver::Matrix4 *)Caver::Vector2::Angle((Caver::Vector2 *)&v136);
        v109 = v108 + -3.14159265;
        Caver::Matrix4::RotationZ((__int64 *)&v149, v107, v109);
        C_Matrix4Mul((const float *)&v151, (const float *)&v149, (float *)&v151);
        Caver::Sprite::AddTransformedRectangle(
          a2,
          (const Caver::Rectangle *)v134,
          (const Caver::Rectangle *)(v105 + 92),
          (const Caver::Matrix4 *)&v151,
          a4);
        v110.n64_u64[0] = *(unsigned __int64 *)(*(_QWORD *)a5 + 84LL);
        v131 = vsub_f32(v129, vmul_f32(v110, *(float32x2_t *)&v6)).n64_u64[0];
        Caver::Vector2::Rounded((__int64 *)&v132, (Caver::Vector2 *)&v131);
        v150 = (_QWORD *)v110.n64_u64[0];
        v149 = v132;
        Caver::Sprite::AddRectangle(
          a2,
          (const Caver::Rectangle *)&v149,
          (const Caver::Rectangle *)(*(_QWORD *)a5 + 92LL),
          a4);
        v111 = *(_DWORD *)(v105 + 8) - 1;
        *(_DWORD *)(v105 + 8) = v111;
        if ( !v111 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 8LL))(v105);
        v70 = v104 <= 1600.0;
        v87 = 22.5;
        if ( v70 )
          goto LABEL_120;
LABEL_107:
        v88 = *(float *)&v136;
        if ( (v73 & 1) != 0 )
        {
          v125 = v71.n64_u64[0];
          v89 = v6;
          v90 = v127.n64_f32[0] + (float)(*(float *)&v136 * 6.0);
          v91 = v5;
          v92 = v8;
          v93 = v7;
          v94 = v127.n64_f32[1] + (float)(*((float *)&v136 + 1) * 6.0);
          *(float *)&v154 = v90;
          *((float *)&v154 + 1) = v94;
          v155 = 0x3F80000000000000LL;
          v151 = xmmword_583490;
          v138.n64_f32[0] = v90;
          v138.n64_f32[1] = v94;
          v152 = xmmword_5837E0;
          v153 = xmmword_5837F0;
          v95 = (Caver::Matrix4 *)Caver::Vector2::Angle((Caver::Vector2 *)&v136);
          v97 = v96 + -3.14159265;
          Caver::Matrix4::RotationZ((__int64 *)&v149, v95, v97);
          C_Matrix4Mul((const float *)&v151, (const float *)&v149, (float *)&v151);
          v130 = vmul_f32(*(float32x2_t *)(a1[122] + 84LL), (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
          Caver::Vector2::Rounded(v134, (Caver::Vector2 *)&v130);
          v98 = a1[122];
          v99 = *(_QWORD **)(v98 + 84);
          v149 = (_QWORD *)v134[0];
          v150 = v99;
          Caver::Sprite::AddTransformedRectangle(
            a2,
            (const Caver::Rectangle *)&v149,
            (const Caver::Rectangle *)(v98 + 92),
            (const Caver::Matrix4 *)&v151,
            a4);
          v100 = *((float *)&v136 + 1);
          v88 = *(float *)&v136;
          v101 = v94 + (float)(*((float *)&v136 + 1) * 8.0);
          v7 = v93;
          v8 = v92;
          v5 = v91;
          v6 = v89;
          v71.n64_u64[0] = v125;
          v138.n64_f32[0] = v90 + (float)(*(float *)&v136 * 8.0);
          v138.n64_f32[1] = v101;
        }
        else
        {
          v100 = *((float *)&v136 + 1);
          v138.n64_f32[0] = v127.n64_f32[0] + (float)(*(float *)&v136 * *(float *)&v8);
          v138.n64_f32[1] = v127.n64_f32[1] + (float)(*((float *)&v136 + 1) * *(float *)&v8);
        }
        v137.n64_f32[0] = v129.n64_f32[0] - (float)(v87 * v88);
        v137.n64_f32[1] = v129.n64_f32[1] - (float)(v87 * v100);
        Caver::MapView::AddPathSegmentToSprite();
        goto LABEL_120;
      }
      v85.n64_u64[0] = *(unsigned __int64 *)(a1[121] + 84LL);
      v135 = vsub_f32(v129, vmul_f32(v85, *(float32x2_t *)&v6)).n64_u64[0];
      Caver::Vector2::Rounded((__int64 *)&v149, (Caver::Vector2 *)&v135);
      *((float32x2_t *)&v151 + 1) = v85;
      *(_QWORD *)&v151 = v149;
      v86 = a1[121];
      LODWORD(v134[0]) = -1;
      Caver::Sprite::AddRectangle(
        a2,
        (const Caver::Rectangle *)&v151,
        (const Caver::Rectangle *)(v86 + 92),
        (const Caver::Color *)v134);
      v87 = *(float *)&v8;
      if ( (float)((float)((float)(v127.n64_f32[0] - v129.n64_f32[0]) * (float)(v127.n64_f32[0] - v129.n64_f32[0]))
                 + (float)((float)(v127.n64_f32[1] - v129.n64_f32[1]) * (float)(v127.n64_f32[1] - v129.n64_f32[1]))) > *(float *)&v5 )
        goto LABEL_107;
LABEL_120:
      v25 = v147;
      v73 = 0;
      if ( v72 >= (int)((v147[1] - *v147) >> 3) )
        goto LABEL_134;
    }
    if ( (int)v76 <= 1 )
    {
      v81 = 0;
      v137.n64_u64[0] = v75;
      v82 = (_QWORD *)*((_QWORD *)&v151 + 1);
      if ( !*((_QWORD *)&v151 + 1) )
        goto LABEL_104;
    }
    else
    {
      v81 = 5;
      v82 = (_QWORD *)*((_QWORD *)&v151 + 1);
      if ( !*((_QWORD *)&v151 + 1) )
        goto LABEL_104;
    }
LABEL_101:
    v83 = v82[1] - 1LL;
    v82[1] = v83;
    if ( !v83 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v82 + 16LL))(v82);
      v84 = v82[2] - 1LL;
      v82[2] = v84;
      if ( !v84 )
        (*(void (__fastcall **)(_QWORD *))(*v82 + 24LL))(v82);
    }
    goto LABEL_104;
  }
LABEL_134:
  v116 = v148;
  if ( v148 )
  {
    v117 = v148[1] - 1LL;
    v148[1] = v117;
    if ( !v117 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v116 + 16LL))(v116);
      v118 = v116[2] - 1LL;
      v116[2] = v118;
      if ( !v118 )
        (*(void (__fastcall **)(_QWORD *))(*v116 + 24LL))(v116);
    }
  }
}

