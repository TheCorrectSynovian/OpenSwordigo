/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043D4B0
 * Mangled: _ZN5Caver15SkillPickerView13AddAnimationsEb
 * Demangled: Caver::SkillPickerView::AddAnimations(bool)
 *
 * Callers: 1
 *   0x00000000001F37F0  Caver::SkillPickerView::AddAnimations(bool)
 *
 * Callees: 15
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202FC0  Caver::GUIPropertyValue::ValueWithRectangle(Caver::Rectangle const&)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043DFD8  Caver::SkillPickerView::Update(float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 247
 *   insn=0x000000000043D4D4 string=0x000000000043D4D8 "Z"
 *   insn=0x000000000043D4D8 string=0x000000000043D4DC "H"
 *   insn=0x000000000043D4E8 string=0x000000000043D4EC "v"
 *   insn=0x000000000043D4F0 string=0x000000000043D4F4 "u"
 *   insn=0x000000000043D4F0 string=0x000000000043D7C8 "h"A"
 *   insn=0x000000000043D4FC string=0x000000000043D500 ""
 *   insn=0x000000000043D508 string=0x000000000043D50C "5"
 *   insn=0x000000000043D50C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000043D518 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000043D52C string=0x00000000001FABF0 "0'"
 *   insn=0x000000000043D548 string=0x000000000043D54C "(3"
 *   insn=0x000000000043D54C string=0x000000000043D550 "`"
 *   insn=0x000000000043D550 string=0x000000000043D554 "a"
 *   insn=0x000000000043D578 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000043D588 string=0x000000000043D58C "(s"
 *   insn=0x000000000043D594 string=0x000000000043D598 "\n"
 *   insn=0x000000000043D594 string=0x000000000043D5A4 "8C@"
 *   insn=0x000000000043D598 string=0x000000000043D59C "J"
 *   insn=0x000000000043D59C string=0x000000000043D5A0 "\n"
 *   insn=0x000000000043D5A4 string=0x000000000043D5A8 ")"
 *   insn=0x000000000043D5A8 string=0x000000000043D5AC "8"
 *   insn=0x000000000043D5AC string=0x000000000043D5B0 "@"
 *   insn=0x000000000043D5B0 string=0x000000000043D5B4 ""
 *   insn=0x000000000043D5B4 string=0x000000000043D5B8 ""
 *   insn=0x000000000043D5BC string=0x000000000043D5C0 ""
 *   insn=0x000000000043D5C0 string=0x000000000043D5C4 "\t@"
 *   insn=0x000000000043D5CC string=0x000000000043D5D0 "@"
 *   insn=0x000000000043D5D0 string=0x000000000043D5D4 ""
 *   insn=0x000000000043D5D4 string=0x000000000043D5D8 ""
 *   insn=0x000000000043D5DC string=0x000000000043D5E0 ""
 *   insn=0x000000000043D5E0 string=0x000000000043D5E4 "@"
 *   insn=0x000000000043D5F0 string=0x000000000043D5F4 "8"
 *   insn=0x000000000043D5F4 string=0x000000000043D5F8 "@"
 *   insn=0x000000000043D5F8 string=0x000000000043D5FC ""
 *   insn=0x000000000043D5FC string=0x000000000043D600 ""
 *   insn=0x000000000043D604 string=0x000000000043D608 ""
 *   insn=0x000000000043D608 string=0x000000000043D60C "\t@"
 *   insn=0x000000000043D614 string=0x000000000043D618 "@"
 *   insn=0x000000000043D618 string=0x000000000043D61C ""
 *   insn=0x000000000043D61C string=0x000000000043D620 ""
 *   insn=0x000000000043D624 string=0x000000000043D628 ""
 *   insn=0x000000000043D628 string=0x000000000043D62C "@"
 *   insn=0x000000000043D640 string=0x000000000043D644 "_"
 *   insn=0x000000000043D648 string=0x000000000043D64C ""
 *   insn=0x000000000043D654 string=0x000000000043D658 "\n"
 *   insn=0x000000000043D658 string=0x000000000043D65C "J"
 *   insn=0x000000000043D65C string=0x000000000043D660 "\n"
 *   insn=0x000000000043D664 string=0x000000000043D668 "\t#\t"
 *   insn=0x000000000043D668 string=0x000000000043D66C "7"
 *   insn=0x000000000043D670 string=0x000000000043D674 ""
 *   insn=0x000000000043D680 string=0x000000000043D684 "\t@"
 *   insn=0x000000000043D690 string=0x000000000043D694 ""
 *   insn=0x000000000043D6A0 string=0x000000000043D6A4 "@"
 *   insn=0x000000000043D6B0 string=0x000000000043D6B4 "7"
 *   insn=0x000000000043D6B8 string=0x000000000043D6BC ""
 *   insn=0x000000000043D6C8 string=0x000000000043D6CC "\t@"
 *   insn=0x000000000043D6D8 string=0x000000000043D6DC ""
 *   insn=0x000000000043D6E8 string=0x000000000043D6EC "@"
 *   insn=0x000000000043D6FC string=0x000000000043D700 ")\n"
 *   insn=0x000000000043D6FC string=0x000000000043D718 "\t"
 *   insn=0x000000000043D700 string=0x000000000043D704 " iO"
 *   insn=0x000000000043D708 string=0x000000000043D70C "\t"
 *   insn=0x000000000043D718 string=0x000000000043D71C "\tY"
 *   insn=0x000000000043D72C string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000043D738 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000043D73C string=0x000000000043D740 "6"
 *   insn=0x000000000043D740 string=0x000000000043D784 "5"
 *   insn=0x000000000043D744 string=0x000000000043D748 ""
 *   insn=0x000000000043D754 string=0x000000000043D758 "\t@"
 *   insn=0x000000000043D764 string=0x000000000043D768 ""
 *   insn=0x000000000043D774 string=0x000000000043D778 "@"
 *   insn=0x000000000043D788 string=0x000000000043D78C ""
 *   insn=0x000000000043D79C string=0x000000000043D7A0 "\t@"
 *   insn=0x000000000043D7A8 string=0x000000000043D7AC ""
 *   insn=0x000000000043D7BC string=0x000000000043D7C0 "@"
 *   insn=0x000000000043D7D4 string=0x000000000043D7D8 ")\n"
 *   insn=0x000000000043D7D8 string=0x000000000043D7DC "J\n"
 *   insn=0x000000000043D7DC string=0x000000000043D7E0 ")"
 *   insn=0x000000000043D7E0 string=0x000000000043D7E4 "J"
 *   insn=0x000000000043D7F4 string=0x000000000043D7F8 ""
 *   insn=0x000000000043D800 string=0x000000000043D804 "h"
 *   insn=0x000000000043D804 string=0x000000000043D808 ""
 *   insn=0x000000000043D810 string=0x000000000043D820 "T\t"
 *   insn=0x000000000043D814 string=0x000000000043D818 ""
 *   insn=0x000000000043D82C string=0x000000000043D830 """
 *   insn=0x000000000043D844 string=0x000000000043D848 "V"
 *   insn=0x000000000043D850 string=0x000000000043D854 "w"
 *   insn=0x000000000043D85C string=0x000000000043D860 "a"
 *   insn=0x000000000043D860 string=0x000000000043D864 "b"
 *   insn=0x000000000043D868 string=0x000000000043D86C "!(""
 *   insn=0x000000000043D86C string=0x000000000043D870 " 8 "
 *   insn=0x000000000043D890 string=0x000000000043D894 " "
 *   insn=0x000000000043D8AC string=0x000000000043D8B0 "`"
 *   insn=0x000000000043D8B4 string=0x000000000043D8B8 "7"
 *   insn=0x000000000043D8BC string=0x000000000043D8C0 ""
 *   insn=0x000000000043D8CC string=0x000000000043D8D0 "\t@"
 *   insn=0x000000000043D8DC string=0x000000000043D8E0 ""
 *   insn=0x000000000043D8EC string=0x000000000043D8F0 "@"
 *   insn=0x000000000043D900 string=0x000000000043DBB4 "5"
 *   insn=0x000000000043D904 string=0x000000000043D908 ""
 *   insn=0x000000000043D90C string=0x000000000043D910 "!"
 *   insn=0x000000000043D914 string=0x000000000043D918 "\t@"
 *   insn=0x000000000043D924 string=0x000000000043D928 ""
 *   insn=0x000000000043D92C string=0x000000000043D930 "!"
 *   insn=0x000000000043D934 string=0x000000000043D938 "@"
 *   insn=0x000000000043D948 string=0x000000000043D94C "%"
 *   insn=0x000000000043D984 string=0x000000000043D988 "H3"
 *   insn=0x000000000043D98C string=0x000000000043D990 "a"
 *   insn=0x000000000043D990 string=0x000000000043D994 "b"
 *   insn=0x000000000043D998 string=0x000000000043D99C "!(""
 *   insn=0x000000000043D99C string=0x000000000043D9A0 " 8 "
 *   insn=0x000000000043D9C4 string=0x000000000043D9C8 "Hs"
 *   insn=0x000000000043D9D0 string=0x000000000043D9D4 "\n"
 *   insn=0x000000000043D9D0 string=0x000000000043D9E0 "YC@"
 *   insn=0x000000000043D9D4 string=0x000000000043D9D8 "J"
 *   insn=0x000000000043D9D8 string=0x000000000043D9DC "\n"
 *   insn=0x000000000043D9E0 string=0x000000000043D9E4 "I"
 *   insn=0x000000000043D9E4 string=0x000000000043D9E8 "9"
 *   insn=0x000000000043D9E8 string=0x000000000043D9EC "(@"
 *   insn=0x000000000043D9EC string=0x000000000043D9F0 ""
 *   insn=0x000000000043D9F0 string=0x000000000043D9F4 "("
 *   insn=0x000000000043D9F8 string=0x000000000043D9FC "("
 *   insn=0x000000000043D9FC string=0x000000000043DA00 "\t@"
 *   insn=0x000000000043DA08 string=0x000000000043DA0C "(@"
 *   insn=0x000000000043DA0C string=0x000000000043DA10 ""
 *   insn=0x000000000043DA10 string=0x000000000043DA14 "("
 *   insn=0x000000000043DA18 string=0x000000000043DA1C "("
 *   insn=0x000000000043DA1C string=0x000000000043DA20 "@"
 *   insn=0x000000000043DA2C string=0x000000000043DA30 "9"
 *   insn=0x000000000043DA30 string=0x000000000043DA34 "(@"
 *   insn=0x000000000043DA34 string=0x000000000043DA38 ""
 *   insn=0x000000000043DA38 string=0x000000000043DA3C "("
 *   insn=0x000000000043DA40 string=0x000000000043DA44 "("
 *   insn=0x000000000043DA44 string=0x000000000043DA48 "\t@"
 *   insn=0x000000000043DA50 string=0x000000000043DA54 "(@"
 *   insn=0x000000000043DA54 string=0x000000000043DA58 ""
 *   insn=0x000000000043DA58 string=0x000000000043DA5C "("
 *   insn=0x000000000043DA60 string=0x000000000043DA64 "("
 *   insn=0x000000000043DA64 string=0x000000000043DA68 "@"
 *   insn=0x000000000043DA7C string=0x000000000043DA80 "P"
 *   insn=0x000000000043DA84 string=0x000000000043DA88 "("
 *   insn=0x000000000043DA90 string=0x000000000043DA94 "\n"
 *   insn=0x000000000043DA90 string=0x000000000043DAA0 "8O@"
 *   insn=0x000000000043DA94 string=0x000000000043DA98 "J"
 *   insn=0x000000000043DA98 string=0x000000000043DA9C "\n"
 *   insn=0x000000000043DAA0 string=0x000000000043DAA4 ")#\t"
 *   insn=0x000000000043DAA4 string=0x000000000043DAA8 "8"
 *   insn=0x000000000043DAA8 string=0x000000000043DAAC "@"
 *   insn=0x000000000043DAAC string=0x000000000043DAB0 ""
 *   insn=0x000000000043DAB0 string=0x000000000043DAB4 ""
 *   insn=0x000000000043DAB8 string=0x000000000043DABC ""
 *   insn=0x000000000043DABC string=0x000000000043DAC0 "\t@"
 *   insn=0x000000000043DAC8 string=0x000000000043DACC "@"
 *   insn=0x000000000043DACC string=0x000000000043DAD0 ""
 *   insn=0x000000000043DAD0 string=0x000000000043DAD4 ""
 *   insn=0x000000000043DAD8 string=0x000000000043DADC ""
 *   insn=0x000000000043DADC string=0x000000000043DAE0 "@"
 *   insn=0x000000000043DAEC string=0x000000000043DAF0 "8"
 *   insn=0x000000000043DAF0 string=0x000000000043DAF4 "@"
 *   insn=0x000000000043DAF4 string=0x000000000043DAF8 ""
 *   insn=0x000000000043DAF8 string=0x000000000043DAFC ""
 *   insn=0x000000000043DB00 string=0x000000000043DB04 ""
 *   insn=0x000000000043DB04 string=0x000000000043DB08 "\t@"
 *   insn=0x000000000043DB10 string=0x000000000043DB14 "@"
 *   insn=0x000000000043DB14 string=0x000000000043DB18 ""
 *   insn=0x000000000043DB18 string=0x000000000043DB1C ""
 *   insn=0x000000000043DB20 string=0x000000000043DB24 ""
 *   insn=0x000000000043DB24 string=0x000000000043DB28 "@"
 *   insn=0x000000000043DB38 string=0x000000000043DB3C "I3"
 *   insn=0x000000000043DB40 string=0x000000000043DB44 ")"
 *   insn=0x000000000043DB44 string=0x000000000043DB48 "\t]"
 *   insn=0x000000000043DB6C string=0x000000000043DB70 "7"
 *   insn=0x000000000043DB74 string=0x000000000043DB78 ""
 *   insn=0x000000000043DB84 string=0x000000000043DB88 "\t@"
 *   insn=0x000000000043DB94 string=0x000000000043DB98 ""
 *   insn=0x000000000043DBA4 string=0x000000000043DBA8 "@"
 *   insn=0x000000000043DBB4 string=0x000000000043DBF8 "h""
 *   insn=0x000000000043DBB8 string=0x000000000043DBBC ""
 *   insn=0x000000000043DBCC string=0x000000000043DBD0 "\t@"
 *   insn=0x000000000043DBD8 string=0x000000000043DBDC ""
 *   insn=0x000000000043DBEC string=0x000000000043DBF0 "@"
 *   insn=0x000000000043DBFC string=0x000000000043DC00 "{C"
 *   insn=0x000000000043DC0C string=0x000000000043DC10 ""
 *   insn=0x000000000043DC18 string=0x000000000043DC1C "a"
 *   insn=0x000000000043DC48 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043DC50 string=0x000000000043DC54 "4"
 *   insn=0x000000000043DC58 string=0x000000000043DC5C ""
 *   insn=0x000000000043DC68 string=0x000000000043DC6C "\t@"
 *   insn=0x000000000043DC78 string=0x000000000043DC7C ""
 *   insn=0x000000000043DC88 string=0x000000000043DC8C "@"
 *   insn=0x000000000043DC94 string=0x000000000043DC98 " "
 *   insn=0x000000000043DCA8 string=0x000000000043DCAC ""
 *   insn=0x000000000043DCB0 string=0x000000000043DCB4 "!"
 *   insn=0x000000000043DCB8 string=0x000000000043DCBC "\t@"
 *   insn=0x000000000043DCC8 string=0x000000000043DCCC ""
 *   insn=0x000000000043DCD0 string=0x000000000043DCD4 "!"
 *   insn=0x000000000043DCD8 string=0x000000000043DCDC "@"
 *   insn=0x000000000043DCF0 string=0x000000000043DCF4 "o"
 *   insn=0x000000000043DCF4 string=0x000000000043DCF8 "u"
 *   insn=0x000000000043DCF4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000043DD18 string=0x000000000043DD1C "4"
 *   insn=0x000000000043DD20 string=0x000000000043DD24 ""
 *   insn=0x000000000043DD30 string=0x000000000043DD34 "\t@"
 *   insn=0x000000000043DD40 string=0x000000000043DD44 ""
 *   insn=0x000000000043DD50 string=0x000000000043DD54 "@"
 *   insn=0x000000000043DD64 string=0x000000000043DD68 ""
 *   insn=0x000000000043DD74 string=0x000000000043DD78 "\t@"
 *   insn=0x000000000043DD84 string=0x000000000043DD88 ""
 *   insn=0x000000000043DD94 string=0x000000000043DD98 "@"
 *   insn=0x000000000043DDAC string=0x000000000043DDB0 "4"
 *   insn=0x000000000043DDB4 string=0x000000000043DDB8 ""
 *   insn=0x000000000043DDC4 string=0x000000000043DDC8 "\t@"
 *   insn=0x000000000043DDD4 string=0x000000000043DDD8 ""
 *   insn=0x000000000043DDE4 string=0x000000000043DDE8 "@"
 *   insn=0x000000000043DDF0 string=0x000000000043DDF4 "0"
 *   insn=0x000000000043DE08 string=0x000000000043DE0C ""
 *   insn=0x000000000043DE18 string=0x000000000043DE1C "\t@"
 *   insn=0x000000000043DE28 string=0x000000000043DE2C ""
 *   insn=0x000000000043DE38 string=0x000000000043DE3C "@"
 *   insn=0x000000000043DE44 string=0x000000000043DE48 ""
 *   insn=0x000000000043DE58 string=0x000000000043DE5C ""
 *   insn=0x000000000043DE68 string=0x000000000043DE6C "\t@"
 *   insn=0x000000000043DE78 string=0x000000000043DE7C ""
 *   insn=0x000000000043DE88 string=0x000000000043DE8C "@"
 *   insn=0x000000000043DEA8 string=0x000000000043DEAC "I"
 *   insn=0x000000000043DEB4 string=0x000000000043DEB8 "4"
 *   insn=0x000000000043DEB8 string=0x000000000043DEBC "0"
 *   insn=0x000000000043DEC4 string=0x000000000043DEC8 "B"
 *   insn=0x000000000043DED8 string=0x000000000043DEDC "("
 *   insn=0x000000000043DEEC string=0x000000000043DEF0 ""
 *   insn=0x000000000043DEF4 string=0x000000000043DEF8 "!"
 *   insn=0x000000000043DEFC string=0x000000000043DF00 "\t@"
 *   insn=0x000000000043DF0C string=0x000000000043DF10 ""
 *   insn=0x000000000043DF14 string=0x000000000043DF18 "!"
 *   insn=0x000000000043DF1C string=0x000000000043DF20 "@"
 *   insn=0x000000000043DF34 string=0x000000000043DF38 "4"
 *   insn=0x000000000043DF3C string=0x000000000043DF40 ""
 *   insn=0x000000000043DF4C string=0x000000000043DF50 "\t@"
 *   insn=0x000000000043DF5C string=0x000000000043DF60 ""
 *   insn=0x000000000043DF6C string=0x000000000043DF70 "@"
 *   insn=0x000000000043DF80 string=0x000000000043DF84 ""
 *   insn=0x000000000043DF88 string=0x000000000043DF8C "!"
 *   insn=0x000000000043DF90 string=0x000000000043DF94 "\t@"
 *   insn=0x000000000043DFA0 string=0x000000000043DFA4 ""
 *   insn=0x000000000043DFA8 string=0x000000000043DFAC "!"
 *   insn=0x000000000043DFB0 string=0x000000000043DFB4 "@"
 *   insn=0x000000000043DFD0 string=0x000000000043DFD4 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::SkillPickerView::AddAnimations(float *this, char a2)
{
  float *v2; // x19
  float *v4; // x22
  _QWORD *v5; // x21
  __int64 v6; // x23
  float v7; // s0
  float v8; // s1
  float v9; // s2
  _QWORD *v10; // x8
  _QWORD *v11; // x9
  _QWORD *v12; // x24
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x24
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x24
  _QWORD *v19; // x8
  _QWORD *v20; // x9
  _QWORD *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  float v28; // s0
  _QWORD *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x27
  __int64 i; // x28
  float **v36; // x8
  float *v37; // x21
  float *v38; // x23
  __int64 v39; // x8
  float v40; // s0
  float v41; // s1
  float v42; // s2
  __int64 v43; // x8
  _QWORD *v44; // x23
  __int64 v45; // x8
  __int64 v46; // x8
  _QWORD *v47; // x23
  __int64 v48; // x8
  __int64 v49; // x8
  Caver::GUIAnimation *v50; // x24
  __int64 v51; // x26
  float v52; // s0
  float v53; // s1
  float v54; // s2
  _QWORD *v55; // x8
  _QWORD *v56; // x9
  _QWORD *v57; // x25
  __int64 v58; // x8
  __int64 v59; // x8
  _QWORD *v60; // x25
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x25
  _QWORD *v64; // x8
  _QWORD *v65; // x9
  _QWORD *v66; // x24
  __int64 v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x24
  __int64 v70; // x8
  __int64 v71; // x8
  __int64 v72; // x8
  __int64 v73; // x8
  __int64 v74; // x8
  __int64 v75; // x8
  __int64 v76; // x8
  float v77; // [xsp+8h] [xbp-B8h] BYREF
  float v78; // [xsp+Ch] [xbp-B4h]
  __int64 v79[2]; // [xsp+10h] [xbp-B0h] BYREF
  __int64 v80; // [xsp+20h] [xbp-A0h] BYREF
  _QWORD *v81; // [xsp+28h] [xbp-98h]
  _QWORD *v82; // [xsp+30h] [xbp-90h]
  __int64 v83; // [xsp+38h] [xbp-88h]
  _QWORD *v84; // [xsp+40h] [xbp-80h]
  __int64 v85; // [xsp+48h] [xbp-78h]

  v2 = this;
  v85 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (float *)*((_QWORD *)this + 34);
  if ( v4 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 35);
    if ( v5 )
      ++v5[1];
    v6 = operator new(0xC0u);
    Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v6);
    v83 = v6;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
    boost::detail::sp_enable_shared_from_this();
    *(_DWORD *)(v6 + 48) = 3;
    v7 = v2[34];
    v8 = v2[36];
    v9 = v4[30];
    v77 = 0.0;
    v78 = (float)(v7 + v8) - v9;
    Caver::Rectangle::TranslatedRectangle(v79, (Caver::Rectangle *)(v4 + 29), (const Caver::Vector2 *)&v77);
    Caver::GUIPropertyValue::ValueWithRectangle();
    *(_DWORD *)(v6 + 112) = v80;
    v11 = v81;
    v10 = v82;
    if ( v82 )
      ++v82[1];
    v12 = *(_QWORD **)(v6 + 128);
    *(_QWORD *)(v6 + 120) = v11;
    *(_QWORD *)(v6 + 128) = v10;
    if ( v12 )
    {
      v13 = v12[1] - 1LL;
      v12[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
    v15 = v82;
    if ( v82 )
    {
      v16 = v82[1] - 1LL;
      v82[1] = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v17 = v15[2] - 1LL;
        v15[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      }
    }
    v18 = v83;
    Caver::GUIPropertyValue::ValueWithRectangle();
    *(_DWORD *)(v18 + 136) = v80;
    v20 = v81;
    v19 = v82;
    if ( v82 )
      ++v82[1];
    v21 = *(_QWORD **)(v18 + 152);
    *(_QWORD *)(v18 + 144) = v20;
    *(_QWORD *)(v18 + 152) = v19;
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
          (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
    v24 = v82;
    if ( v82 )
    {
      v25 = v82[1] - 1LL;
      v82[1] = v25;
      if ( !v25 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
        v26 = v24[2] - 1LL;
        v24[2] = v26;
        if ( !v26 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
      }
    }
    v27 = v83;
    if ( (a2 & 1) != 0 )
    {
      v28 = 0.3;
      *(_BYTE *)(v83 + 100) = 1;
      *(_BYTE *)(v27 + 184) = 0;
    }
    else
    {
      *(_DWORD *)(v83 + 88) = 1048576000;
      v28 = 0.25;
    }
    *(float *)(v27 + 92) = v28;
    Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v4);
    this = (float *)Caver::GUIView::AddAnimation();
    v29 = v84;
    if ( v84 )
    {
      v30 = v84[1] - 1LL;
      v84[1] = v30;
      if ( !v30 )
      {
        this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
        v31 = v29[2] - 1LL;
        v29[2] = v31;
        if ( !v31 )
          this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
      }
    }
    if ( v5 )
    {
      v32 = v5[1] - 1LL;
      v5[1] = v32;
      if ( !v32 )
      {
        this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v33 = v5[2] - 1LL;
        v5[2] = v33;
        if ( !v33 )
          this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  if ( *((int *)v2 + 72) >= 1 )
  {
    v34 = 0;
    for ( i = 0; i < *((int *)v2 + 72); ++i )
    {
      v36 = (float **)(*((_QWORD *)v2 + 39) + v34);
      v38 = *v36;
      v37 = v36[1];
      if ( v37 )
        ++*((_QWORD *)v37 + 1);
      if ( (a2 & 1) != 0 )
      {
        Caver::GUIAnimation::AlphaAnimation(&v80, (Caver::GUIAnimation *)this, 1.0, 0.0, 0.2);
        v39 = v80;
        *(_BYTE *)(v80 + 184) = 0;
        *(_DWORD *)(v39 + 88) = 1036831949;
        Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v38);
        Caver::GUIView::AddAnimation();
        v40 = v38[29];
        v41 = v2[33];
        v42 = v2[35];
        v78 = 0.0;
        v77 = (float)(v41 + v42) - v40;
        Caver::Rectangle::TranslatedRectangle(v79, (Caver::Rectangle *)(v38 + 29), (const Caver::Vector2 *)&v77);
        Caver::GUIAnimation::FrameAnimation();
        v43 = v83;
        *(_BYTE *)(v83 + 184) = 0;
        *(_DWORD *)(v43 + 88) = 1036831949;
        this = (float *)Caver::GUIView::AddAnimation();
        v44 = v84;
        if ( v84 )
        {
          v45 = v84[1] - 1LL;
          v84[1] = v45;
          if ( !v45 )
          {
            this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
            v46 = v44[2] - 1LL;
            v44[2] = v46;
            if ( !v46 )
              this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v44 + 24LL))(v44);
          }
        }
        v47 = v81;
        if ( !v81 )
          goto LABEL_72;
        v48 = v81[1] - 1LL;
        v81[1] = v48;
        if ( v48 )
          goto LABEL_72;
        this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v47 + 16LL))(v47);
        v49 = v47[2] - 1LL;
        v47[2] = v49;
        if ( v49 )
          goto LABEL_72;
      }
      else
      {
        v50 = (Caver::GUIAnimation *)operator new(0xC0u);
        Caver::GUIAnimation::GUIAnimation(v50);
        v83 = (__int64)v50;
        boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
        boost::detail::sp_enable_shared_from_this();
        v51 = v83;
        *(_DWORD *)(v83 + 48) = 3;
        v52 = v38[29];
        v53 = v2[33];
        v54 = v2[35];
        v78 = 0.0;
        v77 = (float)(v53 + v54) - v52;
        Caver::Rectangle::TranslatedRectangle(v79, (Caver::Rectangle *)(v38 + 29), (const Caver::Vector2 *)&v77);
        Caver::GUIPropertyValue::ValueWithRectangle();
        *(_DWORD *)(v51 + 112) = v80;
        v56 = v81;
        v55 = v82;
        if ( v82 )
          ++v82[1];
        v57 = *(_QWORD **)(v51 + 128);
        *(_QWORD *)(v51 + 120) = v56;
        *(_QWORD *)(v51 + 128) = v55;
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
        v60 = v82;
        if ( v82 )
        {
          v61 = v82[1] - 1LL;
          v82[1] = v61;
          if ( !v61 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
            v62 = v60[2] - 1LL;
            v60[2] = v62;
            if ( !v62 )
              (*(void (__fastcall **)(_QWORD *))(*v60 + 24LL))(v60);
          }
        }
        v63 = v83;
        Caver::GUIPropertyValue::ValueWithRectangle();
        *(_DWORD *)(v63 + 136) = v80;
        v65 = v81;
        v64 = v82;
        if ( v82 )
          ++v82[1];
        v66 = *(_QWORD **)(v63 + 152);
        *(_QWORD *)(v63 + 144) = v65;
        *(_QWORD *)(v63 + 152) = v64;
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
        v69 = v82;
        if ( v82 )
        {
          v70 = v82[1] - 1LL;
          v82[1] = v70;
          if ( !v70 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
            v71 = v69[2] - 1LL;
            v69[2] = v71;
            if ( !v71 )
              (*(void (__fastcall **)(_QWORD *))(*v69 + 24LL))(v69);
          }
        }
        v72 = v83;
        *(_DWORD *)(v83 + 92) = 1041865114;
        *(float *)(v72 + 88) = (float)(int)i * 0.05;
        Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v38);
        this = (float *)Caver::GUIView::AddAnimation();
        v47 = v84;
        if ( !v84 )
          goto LABEL_72;
        v73 = v84[1] - 1LL;
        v84[1] = v73;
        if ( v73 )
          goto LABEL_72;
        this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v47 + 16LL))(v47);
        v74 = v47[2] - 1LL;
        v47[2] = v74;
        if ( v74 )
          goto LABEL_72;
      }
      this = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v47 + 24LL))(v47);
LABEL_72:
      if ( v37 )
      {
        v75 = *((_QWORD *)v37 + 1) - 1LL;
        *((_QWORD *)v37 + 1) = v75;
        if ( !v75 )
        {
          this = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v37 + 16LL))(v37);
          v76 = *((_QWORD *)v37 + 2) - 1LL;
          *((_QWORD *)v37 + 2) = v76;
          if ( !v76 )
            this = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v37 + 24LL))(v37);
        }
      }
      v34 += 16;
    }
  }
  return this;
}

