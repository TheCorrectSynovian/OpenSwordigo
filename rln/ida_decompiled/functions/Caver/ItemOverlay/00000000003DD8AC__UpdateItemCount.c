/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DD8AC
 * Mangled: _ZN5Caver11ItemOverlay15UpdateItemCountERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FF5F0  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 18
 *   0x00000000001F47C0  std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_erase(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5880  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::equal_range(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9A60  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::find(std::string const&)
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FBD00  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>)
 *   0x00000000001FC400  std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>,Caver::ItemOverlay::ItemInfo const&)
 *   0x00000000001FD540  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::string const&)
 *   0x00000000001FF810  std::map<std::string,ulong,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::operator[](std::string const&)
 *   0x00000000002006C0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 316
 *   insn=0x00000000003DD8C4 string=0x00000000003DD8C8 "W"
 *   insn=0x00000000003DD8D8 string=0x00000000003DD8DC "hz@"
 *   insn=0x00000000003DD8E4 string=0x00000000001FAC60 "0'"
 *   insn=0x00000000003DD8EC string=0x00000000003DD8F0 "t"
 *   insn=0x00000000003DD8F0 string=0x00000000003DD8F4 "K"
 *   insn=0x00000000003DD900 string=0x00000000003DD904 "\t3"
 *   insn=0x00000000003DD90C string=0x00000000003DD910 "Tp"
 *   insn=0x00000000003DD910 string=0x00000000001F9A60 "0'"
 *   insn=0x00000000003DD914 string=0x00000000003DD918 "X"
 *   insn=0x00000000003DD91C string=0x00000000003DD920 "y"
 *   insn=0x00000000003DD920 string=0x00000000003DD924 "(a"
 *   insn=0x00000000003DD92C string=0x00000000003DD930 "?"
 *   insn=0x00000000003DD92C string=0x00000000003DDA8C "*"
 *   insn=0x00000000003DD950 string=0x00000000003DD954 ""
 *   insn=0x00000000003DD954 string=0x00000000003DD958 "i"
 *   insn=0x00000000003DD95C string=0x00000000003DD960 "%\n"
 *   insn=0x00000000003DD970 string=0x00000000003DD974 "`#"
 *   insn=0x00000000003DD974 string=0x00000000003DD978 ")"
 *   insn=0x00000000003DD978 string=0x00000000003DD97C ")=G"
 *   insn=0x00000000003DD97C string=0x00000000003DD980 "!"
 *   insn=0x00000000003DD984 string=0x00000000003DD988 "\t"
 *   insn=0x00000000003DD984 string=0x00000000003DDE14 "\t"
 *   insn=0x00000000003DD988 string=0x00000000003DD98C "*"
 *   insn=0x00000000003DD98C string=0x00000000003DD990 "\n"
 *   insn=0x00000000003DD994 string=0x00000000003DD998 """
 *   insn=0x00000000003DD998 string=0x00000000003DDE20 "?"
 *   insn=0x00000000003DD9B0 string=0x00000000003DD9B4 "+p"
 *   insn=0x00000000003DD9BC string=0x00000000003DD9C0 "X"
 *   insn=0x00000000003DD9C4 string=0x00000000003DD9C8 "y"
 *   insn=0x00000000003DD9D4 string=0x00000000003DD9D8 "?"
 *   insn=0x00000000003DD9D4 string=0x00000000003DDAB0 ")"
 *   insn=0x00000000003DD9D8 string=0x00000000003DD9DC "  "
 *   insn=0x00000000003DDA08 string=0x00000000003DDA0C "A!"
 *   insn=0x00000000003DDA0C string=0x00000000003DDA10 "h"
 *   insn=0x00000000003DDA0C string=0x00000000003DDE34 ")"
 *   insn=0x00000000003DDA14 string=0x00000000003DDA18 "`""
 *   insn=0x00000000003DDA1C string=0x00000000003DDA20 "h["
 *   insn=0x00000000003DDA20 string=0x00000000001F47C0 "P'"
 *   insn=0x00000000003DDA3C string=0x00000000001F5880 "P'"
 *   insn=0x00000000003DDA54 string=0x00000000001FBD00 "0'"
 *   insn=0x00000000003DDA64 string=0x00000000003DDA68 ")"
 *   insn=0x00000000003DDA68 string=0x00000000003DDA6C ")=G"
 *   insn=0x00000000003DDA6C string=0x00000000003DDA70 "!"
 *   insn=0x00000000003DDA70 string=0x00000000003DDA74 "\t"
 *   insn=0x00000000003DDA74 string=0x00000000003DDA78 "\t"
 *   insn=0x00000000003DDA78 string=0x00000000003DDA7C "*"
 *   insn=0x00000000003DDA7C string=0x00000000003DDA80 "\n"
 *   insn=0x00000000003DDA8C string=0x00000000003DDA90 "J=G"
 *   insn=0x00000000003DDA90 string=0x00000000003DDA94 ")!"
 *   insn=0x00000000003DDA98 string=0x00000000003DDA9C "*"
 *   insn=0x00000000003DDA98 string=0x00000000003DDAD4 "*"
 *   insn=0x00000000003DDA9C string=0x00000000003DDAA0 "K"
 *   insn=0x00000000003DDAA0 string=0x00000000003DDAA4 "+"
 *   insn=0x00000000003DDAA8 string=0x00000000003DDAAC ""
 *   insn=0x00000000003DDAAC string=0x00000000003DDAE0 "_"
 *   insn=0x00000000003DDAB0 string=0x00000000003DDAB4 ")=G"
 *   insn=0x00000000003DDAB4 string=0x00000000003DDAB8 "!"
 *   insn=0x00000000003DDABC string=0x00000000003DDAC0 "\t"
 *   insn=0x00000000003DDABC string=0x00000000003DDE58 "\t"
 *   insn=0x00000000003DDAC0 string=0x00000000003DDAC4 "*"
 *   insn=0x00000000003DDAC4 string=0x00000000003DDAC8 "\n"
 *   insn=0x00000000003DDAD0 string=0x00000000003DDE64 "?"
 *   insn=0x00000000003DDAD4 string=0x00000000003DDAD8 "K"
 *   insn=0x00000000003DDAD8 string=0x00000000003DDADC "+"
 *   insn=0x00000000003DDAE0 string=0x00000000003DDAE4 "l"
 *   insn=0x00000000003DDAF0 string=0x00000000003DDAF4 ",2"
 *   insn=0x00000000003DDAF8 string=0x00000000003DDAFC "?"
 *   insn=0x00000000003DDB0C string=0x00000000003DDB10 "\n"
 *   insn=0x00000000003DDB10 string=0x00000000003DDB14 "J"
 *   insn=0x00000000003DDB14 string=0x00000000003DDB18 "\n"
 *   insn=0x00000000003DDB1C string=0x00000000003DDB20 "+"
 *   insn=0x00000000003DDB24 string=0x00000000003DDB28 "a"
 *   insn=0x00000000003DDB2C string=0x00000000003DDB34 "u""
 *   insn=0x00000000003DDB34 string=0x00000000003DDB38 "L"
 *   insn=0x00000000003DDB44 string=0x00000000003DDB48 "!!"
 *   insn=0x00000000003DDB4C string=0x00000000003DDB50 "v2"
 *   insn=0x00000000003DDB58 string=0x00000000003DDB5C "-"
 *   insn=0x00000000003DDB70 string=0x00000000003DDB74 "a"Q"
 *   insn=0x00000000003DDB70 string=0x00000000003DDE80 ")"
 *   insn=0x00000000003DDB74 string=0x00000000003DDB78 "?"
 *   insn=0x00000000003DDB80 string=0x00000000003DDB84 "("
 *   insn=0x00000000003DDB88 string=0x00000000003DDB8C "("
 *   insn=0x00000000003DDB90 string=0x00000000003DDB94 "\t"
 *   insn=0x00000000003DDB94 string=0x00000000003DDB98 ")"
 *   insn=0x00000000003DDB98 string=0x00000000003DDB9C "\t"
 *   insn=0x00000000003DDBA0 string=0x00000000003DDBA4 ")`"
 *   insn=0x00000000003DDBA4 string=0x00000000003DDBA8 "("
 *   insn=0x00000000003DDBA8 string=0x00000000003DDBAC "i"
 *   insn=0x00000000003DDBAC string=0x00000000003DDBB0 "j"
 *   insn=0x00000000003DDBB0 string=0x00000000003DDD58 "hv@"
 *   insn=0x00000000003DDBB4 string=0x00000000003DDCA4 "h"
 *   insn=0x00000000003DDBB8 string=0x00000000003DDBBC "-"
 *   insn=0x00000000003DDBBC string=0x00000000003DDBC0 ".,"
 *   insn=0x00000000003DDBC0 string=0x00000000003DDBC4 "+"
 *   insn=0x00000000003DDBD8 string=0x00000000003DDC0C "_"
 *   insn=0x00000000003DDBE4 string=0x00000000003DDBE8 "k"
 *   insn=0x00000000003DDBE4 string=0x00000000003DDC44 "k"
 *   insn=0x00000000003DDBF4 string=0x00000000003DDBF8 "+"
 *   insn=0x00000000003DDC04 string=0x00000000003DDC08 "T"
 *   insn=0x00000000003DDC04 string=0x00000000001FC400 "0'"
 *   insn=0x00000000003DDC10 string=0x00000000003DDC14 "k"
 *   insn=0x00000000003DDC18 string=0x00000000003DDC1C "`"
 *   insn=0x00000000003DDC1C string=0x00000000003DDC20 ") "
 *   insn=0x00000000003DDC24 string=0x00000000003DDC28 "\t"
 *   insn=0x00000000003DDC24 string=0x00000000003DDC34 "(`"
 *   insn=0x00000000003DDC28 string=0x00000000003DDC2C ")"
 *   insn=0x00000000003DDC2C string=0x00000000003DDC30 "\t"
 *   insn=0x00000000003DDC34 string=0x00000000003DDC38 "6"
 *   insn=0x00000000003DDC38 string=0x00000000003DDC3C "h"
 *   insn=0x00000000003DDC48 string=0x00000000003DDC4C "a"
 *   insn=0x00000000003DDC4C string=0x00000000003DDC50 "?"
 *   insn=0x00000000003DDC50 string=0x00000000003DDC54 "!"
 *   insn=0x00000000003DDC54 string=0x00000000003DDC58 "k"
 *   insn=0x00000000003DDC60 string=0x00000000003DDC64 "I!"
 *   insn=0x00000000003DDC68 string=0x00000000003DDC6C "\t"
 *   insn=0x00000000003DDC68 string=0x00000000003DDC78 "Ha"
 *   insn=0x00000000003DDC6C string=0x00000000003DDC70 ")"
 *   insn=0x00000000003DDC70 string=0x00000000003DDC74 "\t"
 *   insn=0x00000000003DDC78 string=0x00000000003DDC7C "V"
 *   insn=0x00000000003DDC7C string=0x00000000003DDC80 "h"
 *   insn=0x00000000003DDC80 string=0x00000000003DDC84 ""
 *   insn=0x00000000003DDCA4 string=0x00000000003DDCA8 "?"
 *   insn=0x00000000003DDCA8 string=0x00000000003DDCAC "`"
 *   insn=0x00000000003DDCAC string=0x00000000003DDCB0 "5"
 *   insn=0x00000000003DDCC0 string=0x00000000003DDCC4 "zU"
 *   insn=0x00000000003DDCD0 string=0x00000000003DDCD4 "\t"
 *   insn=0x00000000003DDCD0 string=0x00000000003DDCE8 "\t"
 *   insn=0x00000000003DDCD4 string=0x00000000003DDCD8 "*"
 *   insn=0x00000000003DDCD8 string=0x00000000003DDCDC "\n"
 *   insn=0x00000000003DDCE4 string=0x00000000003DDCF4 "?"
 *   insn=0x00000000003DDCE8 string=0x00000000003DDCEC "*"
 *   insn=0x00000000003DDCEC string=0x00000000003DDCF0 "\n"
 *   insn=0x00000000003DDCF4 string=0x00000000003DDCF8 ","
 *   insn=0x00000000003DDCF8 string=0x00000000003DDD3C "h"
 *   insn=0x00000000003DDD08 string=0x00000000003DDD0C "ii"
 *   insn=0x00000000003DDD38 string=0x00000000003DDCCC "!"
 *   insn=0x00000000003DDD40 string=0x00000000003DDD44 ")"
 *   insn=0x00000000003DDD44 string=0x00000000003DDD48 ")"
 *   insn=0x00000000003DDD48 string=0x00000000003DDD4C ")}"
 *   insn=0x00000000003DDD58 string=0x00000000003DDD5C ")"
 *   insn=0x00000000003DDD5C string=0x00000000003DDD60 " %C"
 *   insn=0x00000000003DDD64 string=0x00000000003DDD68 "h~@"
 *   insn=0x00000000003DDD68 string=0x00000000003DDD6C "az@"
 *   insn=0x00000000003DDD70 string=0x00000000003DDD74 "b"
 *   insn=0x00000000003DDD74 string=0x00000000003DDD78 " ( "
 *   insn=0x00000000003DDD7C string=0x00000000003DDD80 "!(""
 *   insn=0x00000000003DDD80 string=0x00000000003DDD84 "!8 "
 *   insn=0x00000000003DDD94 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003DDD98 string=0x00000000003DDD9C "4"
 *   insn=0x00000000003DDDA0 string=0x00000000003DDDA4 ""
 *   insn=0x00000000003DDDB4 string=0x00000000003DDDB8 "\t@"
 *   insn=0x00000000003DDDC0 string=0x00000000003DDDC4 ""
 *   insn=0x00000000003DDDD4 string=0x00000000003DDDD8 "@"
 *   insn=0x00000000003DDDE0 string=0x00000000003DDDE4 "h"
 *   insn=0x00000000003DDE14 string=0x00000000003DDE18 "*"
 *   insn=0x00000000003DDE18 string=0x00000000003DDE1C "\n"
 *   insn=0x00000000003DDE28 string=0x00000000003DDE2C "^1"
 *   insn=0x00000000003DDE34 string=0x00000000003DDE38 ")=G"
 *   insn=0x00000000003DDE38 string=0x00000000003DDE3C "!"
 *   insn=0x00000000003DDE3C string=0x00000000003DDE40 ")"
 *   insn=0x00000000003DDE40 string=0x00000000003DDE44 "\t"
 *   insn=0x00000000003DDE40 string=0x00000000003DDEA4 "\t"
 *   insn=0x00000000003DDE44 string=0x00000000003DDE48 "*"
 *   insn=0x00000000003DDE48 string=0x00000000003DDE4C "\n"
 *   insn=0x00000000003DDE54 string=0x00000000003DDEB0 "?"
 *   insn=0x00000000003DDE58 string=0x00000000003DDE5C "*"
 *   insn=0x00000000003DDE5C string=0x00000000003DDE60 "\n"
 *   insn=0x00000000003DDE6C string=0x00000000003DDE70 "M1"
 *   insn=0x00000000003DDE70 string=0x00000000003DDE74 "?"
 *   insn=0x00000000003DDE74 string=0x00000000003DDE78 "A"
 *   insn=0x00000000003DDE80 string=0x00000000003DDE84 ")=G"
 *   insn=0x00000000003DDE84 string=0x00000000003DDE88 "!"
 *   insn=0x00000000003DDE8C string=0x00000000003DDE90 "\t"
 *   insn=0x00000000003DDE8C string=0x00000000003DDEC4 "\t"
 *   insn=0x00000000003DDE90 string=0x00000000003DDE94 "*"
 *   insn=0x00000000003DDE94 string=0x00000000003DDE98 "\n"
 *   insn=0x00000000003DDEA0 string=0x00000000003DDED0 "?"
 *   insn=0x00000000003DDEA4 string=0x00000000003DDEA8 "*"
 *   insn=0x00000000003DDEA8 string=0x00000000003DDEAC "\n"
 *   insn=0x00000000003DDEB8 string=0x00000000003DDEBC ":1"
 *   insn=0x00000000003DDEC4 string=0x00000000003DDEC8 "*"
 *   insn=0x00000000003DDEC8 string=0x00000000003DDECC "\n"
 *   insn=0x00000000003DDED8 string=0x00000000003DDEDC "21"
 *   insn=0x00000000003DDEDC string=0x00000000003DDEE0 "%"
 *   insn=0x00000000003DDEE4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DDEF4 string=0x00000000003DDEF8 "(a"
 *   insn=0x00000000003DDF00 string=0x00000000003DDF04 "*"
 *   insn=0x00000000003DDF04 string=0x00000000003DDF08 "J=G"
 *   insn=0x00000000003DDF08 string=0x00000000003DDF0C ")!"
 *   insn=0x00000000003DDF0C string=0x00000000003DDF10 "*"
 *   insn=0x00000000003DDF10 string=0x00000000003DDF14 "*"
 *   insn=0x00000000003DDF10 string=0x00000000003DE0D4 "*"
 *   insn=0x00000000003DDF14 string=0x00000000003DDF18 "K"
 *   insn=0x00000000003DDF18 string=0x00000000003DDF1C "+"
 *   insn=0x00000000003DDF20 string=0x00000000003DDF24 "d"
 *   insn=0x00000000003DDF24 string=0x00000000003DE0B4 "_"
 *   insn=0x00000000003DDF34 string=0x00000000003DDF38 "(a"
 *   insn=0x00000000003DDF40 string=0x00000000003DDF44 "*"
 *   insn=0x00000000003DDF44 string=0x00000000003DDF48 "J=G"
 *   insn=0x00000000003DDF48 string=0x00000000003DDF4C ")!"
 *   insn=0x00000000003DDF4C string=0x00000000003DDF50 "\n\t"
 *   insn=0x00000000003DDF50 string=0x00000000003DDF54 "*"
 *   insn=0x00000000003DDF50 string=0x00000000003DE070 "*"
 *   insn=0x00000000003DDF54 string=0x00000000003DDF58 "K"
 *   insn=0x00000000003DDF58 string=0x00000000003DDF5C "+"
 *   insn=0x00000000003DDF60 string=0x00000000003DDF64 "<"
 *   insn=0x00000000003DDF64 string=0x00000000003DE054 "_"
 *   insn=0x00000000003DDF68 string=0x00000000003DDF6C "J"
 *   insn=0x00000000003DDF6C string=0x00000000003DDF70 "J"
 *   insn=0x00000000003DDF74 string=0x00000000003DDF78 "(a"
 *   insn=0x00000000003DDF80 string=0x00000000003DDF84 "*"
 *   insn=0x00000000003DDF84 string=0x00000000003DDF88 "J=G"
 *   insn=0x00000000003DDF88 string=0x00000000003DDF8C ")!"
 *   insn=0x00000000003DDF8C string=0x00000000003DDF90 "\n"
 *   insn=0x00000000003DDF90 string=0x00000000003DDF94 "*"
 *   insn=0x00000000003DDF94 string=0x00000000003DDF98 "K"
 *   insn=0x00000000003DDF98 string=0x00000000003DDF9C "+"
 *   insn=0x00000000003DDFA0 string=0x00000000003DDFA4 ","
 *   insn=0x00000000003DDFAC string=0x00000000003DDFB0 "(a"
 *   insn=0x00000000003DDFB8 string=0x00000000003DDFBC "*"
 *   insn=0x00000000003DDFBC string=0x00000000003DDFC0 "J=G"
 *   insn=0x00000000003DDFC0 string=0x00000000003DDFC4 ")!"
 *   insn=0x00000000003DDFC4 string=0x00000000003DDFC8 "J"
 *   insn=0x00000000003DDFC8 string=0x00000000003DDFCC "*"
 *   insn=0x00000000003DDFCC string=0x00000000003DDFD0 "K"
 *   insn=0x00000000003DDFD0 string=0x00000000003DDFD4 "+"
 *   insn=0x00000000003DDFE4 string=0x00000000003DDFE8 "(a"
 *   insn=0x00000000003DDFEC string=0x00000000003DDFF0 "@\n"
 *   insn=0x00000000003DDFF0 string=0x00000000003DDFF4 "*"
 *   insn=0x00000000003DDFF4 string=0x00000000003DDFF8 "J=G"
 *   insn=0x00000000003DDFF8 string=0x00000000003DDFFC ")!"
 *   insn=0x00000000003DE000 string=0x00000000003DE004 "*"
 *   insn=0x00000000003DE004 string=0x00000000003DE008 "K"
 *   insn=0x00000000003DE008 string=0x00000000003DE00C "+"
 *   insn=0x00000000003DE018 string=0x00000000003DE01C "*"
 *   insn=0x00000000003DE01C string=0x00000000003DE020 "J"
 *   insn=0x00000000003DE024 string=0x00000000003DE028 "(a"
 *   insn=0x00000000003DE02C string=0x00000000003DE030 "@"
 *   insn=0x00000000003DE030 string=0x00000000003DE034 "*"
 *   insn=0x00000000003DE034 string=0x00000000003DE038 "J=G"
 *   insn=0x00000000003DE038 string=0x00000000003DE03C ")!"
 *   insn=0x00000000003DE040 string=0x00000000003DE044 "*"
 *   insn=0x00000000003DE044 string=0x00000000003DE048 "K"
 *   insn=0x00000000003DE048 string=0x00000000003DE04C "+"
 *   insn=0x00000000003DE070 string=0x00000000003DE074 "K"
 *   insn=0x00000000003DE074 string=0x00000000003DE078 "+"
 *   insn=0x00000000003DE078 string=0x00000000003DE07C "_"
 *   insn=0x00000000003DE080 string=0x00000000003DE084 "-"
 *   insn=0x00000000003DE08C string=0x00000000003DE090 "(a"
 *   insn=0x00000000003DE098 string=0x00000000003DE09C ")!"
 *   insn=0x00000000003DE0A0 string=0x00000000003DE0A4 "*"
 *   insn=0x00000000003DE0A4 string=0x00000000003DE0A8 "K"
 *   insn=0x00000000003DE0A8 string=0x00000000003DE0AC "+"
 *   insn=0x00000000003DE0C8 string=0x00000000003DE0CC "t"
 *   insn=0x00000000003DE0D4 string=0x00000000003DE0D8 "K"
 *   insn=0x00000000003DE0D8 string=0x00000000003DE0DC "+"
 *   insn=0x00000000003DE0DC string=0x00000000003DE0E0 "_"
 *   insn=0x00000000003DE0F0 string=0x00000000003DE0F4 "4"
 *   insn=0x00000000003DE0F8 string=0x00000000003DE0FC ""
 *   insn=0x00000000003DE108 string=0x00000000003DE10C "\t@"
 *   insn=0x00000000003DE118 string=0x00000000003DE11C ""
 *   insn=0x00000000003DE128 string=0x00000000003DE12C "@"
 *   insn=0x00000000003DE160 string=0x00000000003DE164 "I"
 *   insn=0x00000000003DE164 string=0x00000000003DE168 "("
 *   insn=0x00000000003DE17C string=0x00000000003DE180 "7"
 *   insn=0x00000000003DE1A0 string=0x00000000003DE1A4 ""
 *   insn=0x00000000003DE1A8 string=0x00000000003DE1AC """
 *   insn=0x00000000003DE1B0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003DE1B4 string=0x00000000003DE1B8 "@"
 *   insn=0x00000000003DE1C4 string=0x00000000003DE1C8 ""
 *   insn=0x00000000003DE204 string=0x00000000003DE208 "@"
 *   insn=0x00000000003DE210 string=0x00000000003DE214 ""
 *   insn=0x00000000003DE214 string=0x00000000003DE218 ")"
 *   insn=0x00000000003DE21C string=0x00000000003DE220 """
 *   insn=0x00000000003DE224 string=0x00000000003DE228 " "
 *   insn=0x00000000003DE228 string=0x00000000003DE22C "@"
 *   insn=0x00000000003DE24C string=0x00000000001FD540 "0'"
 *   insn=0x00000000003DE254 string=0x00000000003DE258 "6"
 *   insn=0x00000000003DE25C string=0x00000000003DE260 "u"
 *   insn=0x00000000003DE264 string=0x00000000003DE268 " "
 *   insn=0x00000000003DE270 string=0x00000000003DE274 ""
 *   insn=0x00000000003DE274 string=0x00000000003DE278 ")"
 *   insn=0x00000000003DE27C string=0x00000000003DE280 """
 *   insn=0x00000000003DE2C8 string=0x00000000003DE2CC "u"
 *   insn=0x00000000003DE2CC string=0x00000000003DE2D0 "h"
 *   insn=0x00000000003DE2D0 string=0x00000000003DE2D4 ""
 *   insn=0x00000000003DE2D4 string=0x00000000003DE2D8 "h"
 *   insn=0x00000000003DE2DC string=0x00000000003DE2E0 ")"
 *   insn=0x00000000003DE2E0 string=0x00000000003DE2E4 ")"
 *   insn=0x00000000003DE2F0 string=0x00000000003DE350 ")"
 *   insn=0x00000000003DE2F4 string=0x00000000003DE2F8 ""
 *   insn=0x00000000003DE344 string=0x00000000003DE348 "`"
 *   insn=0x00000000003DE350 string=0x00000000003DE354 ")=G"
 *   insn=0x00000000003DE354 string=0x00000000003DE358 "!"
 *   insn=0x00000000003DE35C string=0x00000000003DE360 "\t"
 *   insn=0x00000000003DE35C string=0x00000000003DE374 "\t"
 *   insn=0x00000000003DE360 string=0x00000000003DE364 "*"
 *   insn=0x00000000003DE364 string=0x00000000003DE368 "\n"
 *   insn=0x00000000003DE370 string=0x00000000003DE380 "?"
 *   insn=0x00000000003DE374 string=0x00000000003DE378 "*"
 *   insn=0x00000000003DE378 string=0x00000000003DE37C "\n"
 *   insn=0x00000000003DE398 string=0x00000000003DE39C "*"
 *   insn=0x00000000003DE39C string=0x00000000003DE3A0 "J"
 *   insn=0x00000000003DE3A4 string=0x00000000003DE3A8 "(a"
 *   insn=0x00000000003DE3B0 string=0x00000000003DE3B4 "*"
 *   insn=0x00000000003DE3B4 string=0x00000000003DE3B8 "J=G"
 *   insn=0x00000000003DE3B8 string=0x00000000003DE3BC ")!"
 *   insn=0x00000000003DE3C0 string=0x00000000003DE3C4 "*"
 *   insn=0x00000000003DE3C0 string=0x00000000003DE3F0 "*"
 *   insn=0x00000000003DE3C4 string=0x00000000003DE3C8 "K"
 *   insn=0x00000000003DE3C8 string=0x00000000003DE3CC "+"
 *   insn=0x00000000003DE3D0 string=0x00000000003DE3D4 "_"
 *   insn=0x00000000003DE3E8 string=0x00000000003DE3EC "6"
 *   insn=0x00000000003DE3F0 string=0x00000000003DE3F4 "K"
 *   insn=0x00000000003DE3F4 string=0x00000000003DE3F8 "+"
 *   insn=0x00000000003DE3F8 string=0x00000000003DE3FC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemOverlay::UpdateItemCount(__int64 a1, _QWORD *a2)
{
  int v4; // w22
  __int64 v5; // x0
  __int64 v6; // x25
  _DWORD *v7; // x8
  _QWORD *v8; // x0
  _DWORD *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  __int64 v12; // x22
  __int64 v13; // x25
  _DWORD *v14; // x0
  _DWORD *v15; // x0
  unsigned int *v16; // x9
  int v17; // w10
  unsigned int *v18; // x8
  int v19; // w9
  __int64 v20; // x26
  _QWORD *v21; // x8
  _DWORD *v22; // x9
  int v23; // w11
  __int64 v24; // x1
  __int64 v25; // x10
  __int64 v26; // x12
  unsigned __int64 v27; // x25
  unsigned __int64 *v28; // x0
  void *v29; // x0
  __int64 v30; // x1
  _QWORD *v31; // x8
  signed __int64 v32; // x11
  __int64 v33; // x12
  _DWORD **v34; // x13
  __int64 v35; // x8
  unsigned __int64 v36; // x22
  unsigned int *v37; // x8
  int v38; // w9
  unsigned __int64 *v39; // x0
  void *v40; // x0
  float v41; // s1
  float v42; // s2
  _QWORD *v43; // x20
  __int64 v44; // x8
  __int64 v45; // x8
  unsigned int *v46; // x8
  int v47; // w9
  unsigned int *v48; // x8
  int v49; // w9
  __int64 v50; // [xsp+98h] [xbp-78h] BYREF
  int v51; // [xsp+A0h] [xbp-70h]
  float v52; // [xsp+A4h] [xbp-6Ch]
  _DWORD *v53; // [xsp+B0h] [xbp-60h] BYREF
  _QWORD *v54; // [xsp+B8h] [xbp-58h]
  int v55; // [xsp+C0h] [xbp-50h]
  __int64 v56; // [xsp+C8h] [xbp-48h]

  v56 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = Caver::CharacterState::ItemCount();
  if ( v4 >= 1 )
  {
    sub_56A528(&v53, *a2 + 8LL);
    v5 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::find();
    v6 = a1 + 296;
    v7 = v53 - 6;
    if ( v53 - 6 == (_DWORD *)&qword_6FD2E0 )
      goto LABEL_3;
    v16 = v53 - 2;
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 > 0 )
    {
LABEL_3:
      if ( v6 == v5 )
      {
LABEL_24:
        v53 = 0;
        v54 = 0;
        v22 = (_DWORD *)*a2;
        v21 = (_QWORD *)a2[1];
        if ( v21 )
          ++v21[1];
        v53 = v22;
        v54 = v21;
        v23 = *v22;
        v55 = v4;
        v24 = *(_QWORD *)(a1 + 264);
        v25 = *(_QWORD *)(a1 + 272);
        v26 = (v25 - v24) >> 3;
        v27 = 0xAAAAAAAAAAAAAAABLL * v26;
        if ( v23 )
        {
          sub_56A528(&v50, v22 + 2);
          std::map<std::string,unsigned long>::operator[]();
          *v28 = v27;
          v29 = (void *)(v50 - 24);
          if ( (__int64 *)(v50 - 24) != &qword_6FD2E0 )
          {
            v48 = (unsigned int *)(v50 - 8);
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
              operator delete(v29);
          }
          v30 = *(_QWORD *)(a1 + 272);
          if ( v30 == *(_QWORD *)(a1 + 280) )
          {
            std::vector<Caver::ItemOverlay::ItemInfo>::_M_insert_aux();
          }
          else
          {
            *(_QWORD *)v30 = v53;
            v31 = v54;
            *(_QWORD *)(v30 + 8) = v54;
            if ( v31 )
              ++v31[1];
            *(_DWORD *)(v30 + 16) = v55;
            *(_QWORD *)(a1 + 272) = v30 + 24;
          }
        }
        else
        {
          if ( (v27 & 0x80000000) != 0 )
            goto LABEL_50;
          v32 = 0xAAAAAAAB00000000LL * v26;
          v33 = (int)v27 + 1LL;
          v34 = (_DWORD **)(v24 + 24LL * (int)v27 - 24);
          while ( --v33 )
          {
            if ( !**v34 )
            {
              if ( v24 + 24 * (v32 >> 32) == v25 && *(_QWORD *)(a1 + 280) != v25 )
              {
                *(_QWORD *)v25 = v22;
                *(_QWORD *)(v25 + 8) = v21;
                if ( v21 )
                  ++v21[1];
                *(_DWORD *)(v25 + 16) = v4;
                *(_QWORD *)(a1 + 272) = v25 + 24;
                goto LABEL_50;
              }
LABEL_49:
              std::vector<Caver::ItemOverlay::ItemInfo>::_M_insert_aux();
              goto LABEL_50;
            }
            v32 -= 0x100000000LL;
            v34 -= 3;
            if ( v33 <= 0 )
              goto LABEL_50;
          }
          if ( v25 != v24 || *(_QWORD *)(a1 + 280) == v25 )
            goto LABEL_49;
          *(_QWORD *)v24 = v22;
          *(_QWORD *)(v24 + 8) = v21;
          if ( v21 )
            ++v21[1];
          *(_DWORD *)(v24 + 16) = v4;
          *(_QWORD *)(a1 + 272) = v24 + 24;
LABEL_50:
          v35 = *(_QWORD *)(a1 + 264);
          if ( *(_QWORD *)(a1 + 272) != v35 )
          {
            v36 = 0;
            do
            {
              sub_56A528(&v50, *(_QWORD *)(v35 + 24 * v36) + 8LL);
              std::map<std::string,unsigned long>::operator[]();
              *v39 = v36;
              v40 = (void *)(v50 - 24);
              if ( (__int64 *)(v50 - 24) != &qword_6FD2E0 )
              {
                v37 = (unsigned int *)(v50 - 8);
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
                  operator delete(v40);
              }
              v35 = *(_QWORD *)(a1 + 264);
              ++v36;
            }
            while ( v36 < 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 272) - v35) >> 3) );
          }
        }
        LODWORD(v50) = *(_DWORD *)(a1 + 116);
        v41 = *(float *)(a1 + 120);
        v51 = *(_DWORD *)(a1 + 124);
        v42 = *(float *)(a1 + 128);
        *((float *)&v50 + 1) = v41 + -40.0;
        v52 = (float)(v41 + v42) - (float)(v41 + -40.0);
        Caver::GUIView::SetFrame((Caver::GUIView *)a1, (const Caver::Rectangle *)&v50);
        v43 = v54;
        if ( v54 )
        {
          v44 = v54[1] - 1LL;
          v54[1] = v44;
          if ( !v44 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
            v45 = v43[2] - 1LL;
            v43[2] = v45;
            if ( !v45 )
              (*(void (__fastcall **)(_QWORD *))(*v43 + 24LL))(v43);
          }
        }
        goto LABEL_64;
      }
    }
    else
    {
      v20 = v5;
      operator delete(v7);
      if ( v6 == v20 )
        goto LABEL_24;
    }
    sub_56A528(&v53, *a2 + 8LL);
    std::map<std::string,unsigned long>::operator[]();
    *(_DWORD *)(*(_QWORD *)(a1 + 264) + 24LL * *v8 + 16) = v4;
    v9 = v53 - 6;
    if ( v53 - 6 == (_DWORD *)&qword_6FD2E0 )
      goto LABEL_64;
    v10 = v53 - 2;
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
      goto LABEL_66;
    }
    goto LABEL_65;
  }
  sub_56A528(&v53, *a2 + 8LL);
  v12 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::find();
  v13 = a1 + 296;
  v14 = v53 - 6;
  if ( v53 - 6 == (_DWORD *)&qword_6FD2E0 )
    goto LABEL_9;
  v18 = v53 - 2;
  if ( &pthread_create )
  {
    do
      v19 = __ldaxr(v18);
    while ( __stlxr(v19 - 1, v18) );
  }
  else
  {
    v19 = (*v18)--;
  }
  if ( v19 > 0 )
  {
LABEL_9:
    if ( v13 == v12 )
      goto LABEL_64;
  }
  else
  {
    operator delete(v14);
    if ( v13 == v12 )
      goto LABEL_64;
  }
  sub_56A528(&v53, *a2 + 8LL);
  std::map<std::string,unsigned long>::operator[]();
  v15 = v53 - 6;
  if ( v53 - 6 != (_DWORD *)&qword_6FD2E0 )
  {
    v46 = v53 - 2;
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
    if ( v47 <= 0 )
      operator delete(v15);
  }
  std::vector<Caver::ItemOverlay::ItemInfo>::_M_erase();
  sub_56A528(&v53, *a2 + 8LL);
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::equal_range();
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_erase_aux();
  v9 = v53 - 6;
  if ( v53 - 6 != (_DWORD *)&qword_6FD2E0 )
  {
    v10 = v53 - 2;
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
LABEL_66:
      if ( v11 <= 0 )
        operator delete(v9);
      goto LABEL_64;
    }
LABEL_65:
    v11 = (*v10)--;
    goto LABEL_66;
  }
LABEL_64:
  *(_BYTE *)(a1 + 256) = 1;
}

