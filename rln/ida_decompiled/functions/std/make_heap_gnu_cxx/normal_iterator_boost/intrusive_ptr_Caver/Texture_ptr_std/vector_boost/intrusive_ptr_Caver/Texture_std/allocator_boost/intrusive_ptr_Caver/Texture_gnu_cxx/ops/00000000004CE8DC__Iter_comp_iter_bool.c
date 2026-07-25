/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CE8DC
 * Mangled: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPN5boost13intrusive_ptrIN5Caver7TextureEEESt6vectorIS6_SaIS6_EEEENS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_
 * Demangled: std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callers: 1
 *   0x00000000001F65C0  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA360  std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x00000000001FBBB0  .memmove
 *   0x00000000002014C0  std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 256
 *   insn=0x00000000004CE8F0 string=0x00000000004CE8F4 "X"
 *   insn=0x00000000004CE8F4 string=0x00000000004CE8F8 "\t"
 *   insn=0x00000000004CE8FC string=0x00000000004CE900 "("
 *   insn=0x00000000004CE910 string=0x00000000004CE9C4 ""
 *   insn=0x00000000004CE920 string=0x00000000004CE924 "("
 *   insn=0x00000000004CE930 string=0x00000000004CE934 "h\n@"
 *   insn=0x00000000004CE938 string=0x00000000004CE93C "\t"
 *   insn=0x00000000004CE93C string=0x00000000004CE940 "h\n"
 *   insn=0x00000000004CE968 string=0x00000000004CE96C "@"
 *   insn=0x00000000004CE96C string=0x00000000004CE970 ""
 *   insn=0x00000000004CE970 string=0x00000000004CE974 ""
 *   insn=0x00000000004CE978 string=0x00000000004CE97C ""
 *   insn=0x00000000004CE97C string=0x00000000004CE980 ""
 *   insn=0x00000000004CE98C string=0x00000000004CE990 "h\n@"
 *   insn=0x00000000004CE990 string=0x00000000004CE994 ""
 *   insn=0x00000000004CE994 string=0x00000000004CE998 "h\n"
 *   insn=0x00000000004CE99C string=0x00000000004CE9AC "h"
 *   insn=0x00000000004CE9A0 string=0x00000000004CE9A4 "A"
 *   insn=0x00000000004CE9A4 string=0x00000000004CE9A8 ""
 *   insn=0x00000000004CE9B0 string=0x00000000004CE9B4 ""
 *   insn=0x00000000004CE9BC string=0x00000000004CE9C0 "a"
 *   insn=0x00000000004CE9D0 string=0x00000000004CE9EC "9"
 *   insn=0x00000000004CE9EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CE9F4 string=0x00000000004CEA2C "h\n@"
 *   insn=0x00000000004CEA00 string=0x00000000004CEA04 "("
 *   insn=0x00000000004CEA04 string=0x00000000004CEA08 "\t\t@"
 *   insn=0x00000000004CEA04 string=0x00000000004CEA28 "3"
 *   insn=0x00000000004CEA08 string=0x00000000004CEA0C ")"
 *   insn=0x00000000004CEA0C string=0x00000000004CEA10 "\t\t"
 *   insn=0x00000000004CEA14 string=0x00000000004CEA18 "\t"
 *   insn=0x00000000004CEA18 string=0x00000000004CEA1C ")"
 *   insn=0x00000000004CEA20 string=0x00000000004CEA24 " "
 *   insn=0x00000000004CEA2C string=0x00000000004CEA30 ""
 *   insn=0x00000000004CEA30 string=0x00000000004CEA34 "h\n"
 *   insn=0x00000000004CEA38 string=0x00000000004CEA3C "h"
 *   insn=0x00000000004CEA3C string=0x00000000004CEA40 ""
 *   insn=0x00000000004CEA50 string=0x00000000004CEA54 ">"
 *   insn=0x00000000004CEA6C string=0x00000000004CEA70 "W"
 *   insn=0x00000000004CEA84 string=0x00000000004CEA88 "S"
 *   insn=0x00000000004CEA8C string=0x00000000004CEA90 "h\n@"
 *   insn=0x00000000004CEA90 string=0x00000000004CEA94 ""
 *   insn=0x00000000004CEA94 string=0x00000000004CEA98 "h\n"
 *   insn=0x00000000004CEAA0 string=0x00000000004CEAA4 "\t\t@"
 *   insn=0x00000000004CEAA0 string=0x00000000004CEAB0 "H"
 *   insn=0x00000000004CEAA4 string=0x00000000004CEAA8 ")"
 *   insn=0x00000000004CEAA8 string=0x00000000004CEAAC "\t\t"
 *   insn=0x00000000004CEAB4 string=0x00000000004CEAB8 "h\n@"
 *   insn=0x00000000004CEAB8 string=0x00000000004CEABC ""
 *   insn=0x00000000004CEABC string=0x00000000004CEAC0 "h\n"
 *   insn=0x00000000004CEAC4 string=0x00000000004CEAC8 "h"
 *   insn=0x00000000004CEAC4 string=0x00000000004CEADC ""
 *   insn=0x00000000004CEAC8 string=0x00000000004CEACC ""
 *   insn=0x00000000004CEAD4 string=0x00000000004CEAD8 "h\n@"
 *   insn=0x00000000004CEAE0 string=0x00000000004CEAE4 "h\n"
 *   insn=0x00000000004CEB04 string=0x00000000004CEB08 "n"
 *   insn=0x00000000004CEB10 string=0x00000000004CEB14 "@"
 *   insn=0x00000000004CEB10 string=0x00000000004CEB30 "3"
 *   insn=0x00000000004CEB14 string=0x00000000004CEB18 ""
 *   insn=0x00000000004CEB18 string=0x00000000004CEB1C ""
 *   insn=0x00000000004CEB20 string=0x00000000004CEB24 ""
 *   insn=0x00000000004CEB24 string=0x00000000004CEB28 ""
 *   insn=0x00000000004CEB30 string=0x00000000004CEB34 "h\n@"
 *   insn=0x00000000004CEB34 string=0x00000000004CEB38 ""
 *   insn=0x00000000004CEB38 string=0x00000000004CEB3C "h\n"
 *   insn=0x00000000004CEB40 string=0x00000000004CEB44 "h"
 *   insn=0x00000000004CEB48 string=0x00000000004CEB4C ""
 *   insn=0x00000000004CEB84 string=0x00000000004CEBBC "h\n@"
 *   insn=0x00000000004CEB90 string=0x00000000004CEB94 "("
 *   insn=0x00000000004CEB94 string=0x00000000004CEB98 "\t\t@"
 *   insn=0x00000000004CEB94 string=0x00000000004CEBB8 "3"
 *   insn=0x00000000004CEB98 string=0x00000000004CEB9C ")"
 *   insn=0x00000000004CEB9C string=0x00000000004CEBA0 "\t\t"
 *   insn=0x00000000004CEBA4 string=0x00000000004CEBA8 "\t"
 *   insn=0x00000000004CEBA8 string=0x00000000004CEBAC ")"
 *   insn=0x00000000004CEBB0 string=0x00000000004CEBB4 " "
 *   insn=0x00000000004CEBBC string=0x00000000004CEBC0 ""
 *   insn=0x00000000004CEBC0 string=0x00000000004CEBC4 "h\n"
 *   insn=0x00000000004CEBC8 string=0x00000000004CEBCC "h"
 *   insn=0x00000000004CEBCC string=0x00000000004CEBD0 ""
 *   insn=0x00000000004CEBDC string=0x00000000004CEBE0 "9"
 *   insn=0x00000000004CEC08 string=0x00000000004CEC0C "H"
 *   insn=0x00000000004CEC14 string=0x00000000004CEC18 ""
 *   insn=0x00000000004CEC18 string=0x00000000004CEC1C "?"
 *   insn=0x00000000004CEC24 string=0x00000000004CEC28 ";"
 *   insn=0x00000000004CEC44 string=0x00000000004CECBC "7"
 *   insn=0x00000000004CEC58 string=0x00000000004CEC5C "`"
 *   insn=0x00000000004CEC5C string=0x00000000004CEC60 "a"
 *   insn=0x00000000004CEC68 string=0x00000000004CEC6C "Z"
 *   insn=0x00000000004CEC6C string=0x00000000004CEC70 "hzz"
 *   insn=0x00000000004CEC74 string=0x00000000004CEC78 "\t\t@"
 *   insn=0x00000000004CEC78 string=0x00000000004CEC7C ")"
 *   insn=0x00000000004CEC7C string=0x00000000004CEC80 "\t\t"
 *   insn=0x00000000004CEC84 string=0x00000000004CEC88 "`ji"
 *   insn=0x00000000004CEC88 string=0x00000000004CEC8C "hj)"
 *   insn=0x00000000004CEC90 string=0x00000000004CEC94 "@"
 *   insn=0x00000000004CEC90 string=0x00000000004CECB0 "_"
 *   insn=0x00000000004CEC94 string=0x00000000004CEC98 ""
 *   insn=0x00000000004CEC98 string=0x00000000004CEC9C ""
 *   insn=0x00000000004CECA0 string=0x00000000004CECA4 ""
 *   insn=0x00000000004CECA4 string=0x00000000004CECA8 ""
 *   insn=0x00000000004CECC4 string=0x00000000004CECC8 "("
 *   insn=0x00000000004CECC8 string=0x00000000004CECCC "_"
 *   insn=0x00000000004CECD4 string=0x00000000004CECD8 "W"
 *   insn=0x00000000004CECD8 string=0x00000000004CECDC "hzw"
 *   insn=0x00000000004CECE0 string=0x00000000004CECE4 "\t\t@"
 *   insn=0x00000000004CECE0 string=0x00000000004CECF0 "I"
 *   insn=0x00000000004CECE4 string=0x00000000004CECE8 ")"
 *   insn=0x00000000004CECE8 string=0x00000000004CECEC "\t\t"
 *   insn=0x00000000004CECF0 string=0x00000000004CECF4 "`ji"
 *   insn=0x00000000004CECF4 string=0x00000000004CECF8 "hj)"
 *   insn=0x00000000004CECF8 string=0x00000000004CECFC "@"
 *   insn=0x00000000004CECFC string=0x00000000004CED00 "@"
 *   insn=0x00000000004CED00 string=0x00000000004CED04 ""
 *   insn=0x00000000004CED04 string=0x00000000004CED08 ""
 *   insn=0x00000000004CED0C string=0x00000000004CED10 ""
 *   insn=0x00000000004CED10 string=0x00000000004CED14 ""
 *   insn=0x00000000004CED2C string=0x00000000004CED30 "\t\t@"
 *   insn=0x00000000004CED30 string=0x00000000004CED34 ")"
 *   insn=0x00000000004CED34 string=0x00000000004CED38 "\t\t"
 *   insn=0x00000000004CED3C string=0x00000000004CED40 "-"
 *   insn=0x00000000004CED50 string=0x00000000004CED54 "v"
 *   insn=0x00000000004CED6C string=0x00000000004CED70 "\t\t@"
 *   insn=0x00000000004CED70 string=0x00000000004CED74 ")"
 *   insn=0x00000000004CED74 string=0x00000000004CED78 "\t\t"
 *   insn=0x00000000004CED7C string=0x00000000004CED80 "`ji"
 *   insn=0x00000000004CED80 string=0x00000000004CED84 "hj)"
 *   insn=0x00000000004CED88 string=0x00000000004CED8C "@"
 *   insn=0x00000000004CED88 string=0x00000000004CEDA8 "?"
 *   insn=0x00000000004CED8C string=0x00000000004CED90 ""
 *   insn=0x00000000004CED90 string=0x00000000004CED94 ""
 *   insn=0x00000000004CED98 string=0x00000000004CED9C ""
 *   insn=0x00000000004CED9C string=0x00000000004CEDA0 ""
 *   insn=0x00000000004CEDC4 string=0x00000000004CEDC8 "\t\t@"
 *   insn=0x00000000004CEDC8 string=0x00000000004CEDCC ")"
 *   insn=0x00000000004CEDCC string=0x00000000004CEDD0 "\t\t"
 *   insn=0x00000000004CEDD4 string=0x00000000004CEDD8 "`ji"
 *   insn=0x00000000004CEDD8 string=0x00000000004CEDDC "hj)"
 *   insn=0x00000000004CEDE0 string=0x00000000004CEDE4 "@"
 *   insn=0x00000000004CEDE4 string=0x00000000004CEDE8 ""
 *   insn=0x00000000004CEDE8 string=0x00000000004CEDEC ""
 *   insn=0x00000000004CEDF0 string=0x00000000004CEDF4 ""
 *   insn=0x00000000004CEDF4 string=0x00000000004CEDF8 ""
 *   insn=0x00000000004CEE04 string=0x00000000004CEE08 "@"
 *   insn=0x00000000004CEE08 string=0x00000000004CEE0C ""
 *   insn=0x00000000004CEE0C string=0x00000000004CEE10 ""
 *   insn=0x00000000004CEE14 string=0x00000000004CEE18 ""
 *   insn=0x00000000004CEE18 string=0x00000000004CEE1C ""
 *   insn=0x00000000004CEE24 string=0x00000000004CEE28 ""
 *   insn=0x00000000004CEE30 string=0x00000000004CEE34 "!"
 *   insn=0x00000000004CEE68 string=0x00000000004CEE6C "@"
 *   insn=0x00000000004CEE6C string=0x00000000004CEE70 ""
 *   insn=0x00000000004CEE70 string=0x00000000004CEE74 ""
 *   insn=0x00000000004CEE78 string=0x00000000004CEE7C ""
 *   insn=0x00000000004CEE7C string=0x00000000004CEE80 ""
 *   insn=0x00000000004CEE8C string=0x00000000004CEE90 "/"
 *   insn=0x00000000004CEEC4 string=0x00000000004CEEC8 "`"
 *   insn=0x00000000004CEEE8 string=0x00000000004CEEEC ""
 *   insn=0x00000000004CEEFC string=0x00000000004CEF00 ""
 *   insn=0x00000000004CEF08 string=0x00000000004CEF0C "ky"
 *   insn=0x00000000004CEF10 string=0x00000000004CEF14 "\t\t@"
 *   insn=0x00000000004CEF14 string=0x00000000004CEF18 ")"
 *   insn=0x00000000004CEF18 string=0x00000000004CEF1C "\t\t"
 *   insn=0x00000000004CEF28 string=0x00000000004CEF2C "@"
 *   insn=0x00000000004CEF28 string=0x00000000004CEF48 "Z"
 *   insn=0x00000000004CEF2C string=0x00000000004CEF30 ""
 *   insn=0x00000000004CEF30 string=0x00000000004CEF34 ""
 *   insn=0x00000000004CEF38 string=0x00000000004CEF3C ""
 *   insn=0x00000000004CEF3C string=0x00000000004CEF40 ""
 *   insn=0x00000000004CEF48 string=0x00000000004CEF4C "_"
 *   insn=0x00000000004CEF4C string=0x00000000004CEF50 "9#"
 *   insn=0x00000000004CEF5C string=0x00000000004CEF60 ""
 *   insn=0x00000000004CEF70 string=0x00000000004CEF74 "@"
 *   insn=0x00000000004CEF74 string=0x00000000004CEF78 ""
 *   insn=0x00000000004CEF78 string=0x00000000004CEF7C ""
 *   insn=0x00000000004CEF80 string=0x00000000004CEF84 ""
 *   insn=0x00000000004CEF84 string=0x00000000004CEF88 ""
 *   insn=0x00000000004CEF94 string=0x00000000004CEF98 ""
 *   insn=0x00000000004CEF9C string=0x00000000004CEFA0 "!"
 *   insn=0x00000000004CEFA8 string=0x00000000004CEFAC ""
 *   insn=0x00000000004CEFC0 string=0x00000000001FA360 "0'"
 *   insn=0x00000000004CEFF0 string=0x00000000004CEFF4 ""
 *   insn=0x00000000004CEFF8 string=0x00000000004CEFFC "7"
 *   insn=0x00000000004CF000 string=0x00000000004CF004 ""
 *   insn=0x00000000004CF010 string=0x00000000004CF014 ""
 *   insn=0x00000000004CF020 string=0x00000000004CF024 "("
 *   insn=0x00000000004CF03C string=0x00000000004CF040 "U"
 *   insn=0x00000000004CF04C string=0x00000000004CF050 ""
 *   insn=0x00000000004CF058 string=0x00000000004CF05C "\t\t@"
 *   insn=0x00000000004CF05C string=0x00000000004CF060 ")"
 *   insn=0x00000000004CF060 string=0x00000000004CF064 "\t\t"
 *   insn=0x00000000004CF078 string=0x00000000004CF07C "`"
 *   insn=0x00000000004CF07C string=0x00000000004CF080 " "
 *   insn=0x00000000004CF088 string=0x00000000004CF08C "\t\t@"
 *   insn=0x00000000004CF08C string=0x00000000004CF090 ")"
 *   insn=0x00000000004CF090 string=0x00000000004CF094 "\t\t"
 *   insn=0x00000000004CF0A0 string=0x00000000004CF0A4 "@"
 *   insn=0x00000000004CF0A4 string=0x00000000004CF0A8 ""
 *   insn=0x00000000004CF0A8 string=0x00000000004CF0AC ""
 *   insn=0x00000000004CF0B0 string=0x00000000004CF0B4 ""
 *   insn=0x00000000004CF0B4 string=0x00000000004CF0B8 ""
 *   insn=0x00000000004CF0C8 string=0x00000000004CF0CC "\t\t@"
 *   insn=0x00000000004CF0CC string=0x00000000004CF0D0 ")"
 *   insn=0x00000000004CF0D0 string=0x00000000004CF0D4 "\t\t"
 *   insn=0x00000000004CF0E0 string=0x00000000004CF0E4 "@"
 *   insn=0x00000000004CF0E4 string=0x00000000004CF0E8 ""
 *   insn=0x00000000004CF0E8 string=0x00000000004CF0EC ""
 *   insn=0x00000000004CF0F0 string=0x00000000004CF0F4 ""
 *   insn=0x00000000004CF0F4 string=0x00000000004CF0F8 ""
 *   insn=0x00000000004CF104 string=0x00000000004CF108 "@"
 *   insn=0x00000000004CF108 string=0x00000000004CF10C ""
 *   insn=0x00000000004CF10C string=0x00000000004CF110 ""
 *   insn=0x00000000004CF114 string=0x00000000004CF118 ""
 *   insn=0x00000000004CF118 string=0x00000000004CF11C ""
 *   insn=0x00000000004CF130 string=0x00000000004CF148 "b"
 *   insn=0x00000000004CF158 string=0x00000000004CF15C "@"
 *   insn=0x00000000004CF15C string=0x00000000004CF160 ""
 *   insn=0x00000000004CF160 string=0x00000000004CF164 ""
 *   insn=0x00000000004CF168 string=0x00000000004CF16C ""
 *   insn=0x00000000004CF16C string=0x00000000004CF170 ""
 *   insn=0x00000000004CF17C string=0x00000000004CF180 "s"
 *   insn=0x00000000004CF19C string=0x00000000004CF1A0 "h"
 *   insn=0x00000000004CF1B0 string=0x00000000004CF1B4 "\t"
 *   insn=0x00000000004CF1B0 string=0x00000000004CF1EC "y"
 *   insn=0x00000000004CF1B4 string=0x00000000004CF1B8 "\t"
 *   insn=0x00000000004CF1B8 string=0x00000000004CF1BC "h"
 *   insn=0x00000000004CF1BC string=0x00000000004CF1C0 "\t!"
 *   insn=0x00000000004CF1C0 string=0x00000000004CF1C4 "i"
 *   insn=0x00000000004CF1C8 string=0x00000000004CF1CC "\t!"
 *   insn=0x00000000004CF1CC string=0x00000000004CF1D0 """
 *   insn=0x00000000004CF1DC string=0x00000000004CF1E0 "t"
 *   insn=0x00000000004CF1E0 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000004CF1E4 string=0x00000000004CF1E8 "2"
 *   insn=0x00000000004CF1EC string=0x00000000004CF1F0 ""
 *   insn=0x00000000004CF1F0 string=0x00000000004CF1F4 ""
 *   insn=0x00000000004CF1F4 string=0x00000000004CF1F8 "\t"
 *   insn=0x00000000004CF1F8 string=0x00000000004CF1FC "("
 *   insn=0x00000000004CF1FC string=0x00000000004CF200 "\n"
 *   insn=0x00000000004CF204 string=0x00000000004CF208 "_"
 *   insn=0x00000000004CF20C string=0x00000000004CF210 ")"
 *   insn=0x00000000004CF210 string=0x00000000004CF214 "?"
 *   insn=0x00000000004CF218 string=0x00000000004CF21C "8"
 *   insn=0x00000000004CF220 string=0x00000000004CF224 ""
 *   insn=0x00000000004CF224 string=0x00000000004CF228 ""
 *   insn=0x00000000004CF230 string=0x00000000004CF234 "w"
 *   insn=0x00000000004CF230 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004CF250 string=0x00000000004CF254 ")"
 *   insn=0x00000000004CF254 string=0x00000000004CF258 "U"
 *   insn=0x00000000004CF260 string=0x00000000004CF270 "h"
 *   insn=0x00000000004CF268 string=0x00000000004CF26C "Q"
 *   insn=0x00000000004CF274 string=0x00000000004CF278 "5!"
 *   insn=0x00000000004CF27C string=0x00000000004CF280 "Y"
 *   insn=0x00000000004CF28C string=0x00000000004CF290 "H"
 *   insn=0x00000000004CF294 string=0x00000000004CF298 "w"
 *   insn=0x00000000004CF2A0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CF2A4 string=0x00000000004CF2A8 "vR"
 *   insn=0x00000000004CF2A8 string=0x00000000004CF2AC "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(
        __int64 result,
        __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x8
  __int64 v4; // x22
  __int64 v5; // x8
  __int64 v6; // x23
  _DWORD *v7; // x19
  int v8; // w8
  int v9; // w8
  _DWORD *v10; // [xsp+160h] [xbp-40h]

  v2 = result;
  v3 = a2 - result;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 - result >= 16 )
  {
    v4 = v3 >> 3;
    v5 = (v3 >> 3) - 2;
    if ( v5 < 0 )
      v5 = v4 - 1;
    v6 = v5 >> 1;
    do
    {
      while ( 1 )
      {
        v7 = *(_DWORD **)(v2 + 8 * v6);
        if ( v7 )
        {
          v10 = *(_DWORD **)(v2 + 8 * v6);
          v7[2] += 2;
        }
        else
        {
          v10 = 0;
        }
        std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
        result = (__int64)v10;
        if ( v10 )
        {
          v8 = v10[2] - 1;
          v10[2] = v8;
          if ( !v8 )
            result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        }
        --v6;
        if ( v7 )
        {
          v9 = v7[2] - 1;
          v7[2] = v9;
          if ( !v9 )
            break;
        }
        if ( v6 == -1 )
          return result;
      }
      result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    while ( v6 != -1 );
  }
  return result;
}

