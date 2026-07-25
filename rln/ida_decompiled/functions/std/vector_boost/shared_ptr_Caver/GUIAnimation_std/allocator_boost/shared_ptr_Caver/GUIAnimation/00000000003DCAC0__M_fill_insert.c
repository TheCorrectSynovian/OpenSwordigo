/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DCAC0
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver12GUIAnimationEEESaIS4_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS4_S6_EEmRKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callers: 1
 *   0x00000000001FD9C0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callees: 17
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC1B0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003DD450  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x0000000000565294  sub_565294
 *   0x000000000056554C  sub_56554C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 257
 *   insn=0x00000000003DCAE4 string=0x00000000003DCAE8 "6$"
 *   insn=0x00000000003DCAEC string=0x00000000003DCAF0 ""
 *   insn=0x00000000003DCAF0 string=0x00000000003DCAF4 ""
 *   insn=0x00000000003DCAF8 string=0x00000000003DCAFC """
 *   insn=0x00000000003DCB00 string=0x00000000003DCB04 ""
 *   insn=0x00000000003DCB04 string=0x00000000003DCB08 "\t"
 *   insn=0x00000000003DCB0C string=0x00000000003DCB10 "\n"
 *   insn=0x00000000003DCB10 string=0x00000000003DCB14 "_"
 *   insn=0x00000000003DCB18 string=0x00000000003DCB1C "?"
 *   insn=0x00000000003DCB20 string=0x00000000003DCB24 "I"
 *   insn=0x00000000003DCB24 string=0x00000000003DCB28 "+"
 *   insn=0x00000000003DCB34 string=0x00000000003DCB38 "J"
 *   insn=0x00000000003DCB38 string=0x00000000003DCB3C "_"
 *   insn=0x00000000003DCB44 string=0x00000000003DCB48 ""
 *   insn=0x00000000003DCB48 string=0x00000000003DCB4C "H#"
 *   insn=0x00000000003DCB54 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003DCB5C string=0x00000000003DCDBC "h"
 *   insn=0x00000000003DCB64 string=0x00000000003DCB74 ""
 *   insn=0x00000000003DCB68 string=0x00000000003DCB6C ""
 *   insn=0x00000000003DCB74 string=0x00000000003DCB78 "\t"
 *   insn=0x00000000003DCB78 string=0x00000000003DCB7C "("
 *   insn=0x00000000003DCB88 string=0x00000000003DCB8C ""
 *   insn=0x00000000003DCB90 string=0x00000000003DCB94 ""
 *   insn=0x00000000003DCB94 string=0x00000000003DCB98 "l"
 *   insn=0x00000000003DCB98 string=0x00000000003DCB9C ""
 *   insn=0x00000000003DCBA0 string=0x00000000003DCBA4 "k"
 *   insn=0x00000000003DCBAC string=0x00000000003DCBB0 "l"
 *   insn=0x00000000003DCBAC string=0x00000000003DCBBC ")A"
 *   insn=0x00000000003DCBB4 string=0x00000000003DCBB8 "l"
 *   insn=0x00000000003DCBBC string=0x00000000003DCBC0 "_"
 *   insn=0x00000000003DCBC4 string=0x00000000003DCBC8 ""
 *   insn=0x00000000003DCBC8 string=0x00000000003DCBCC "\t"
 *   insn=0x00000000003DCBD4 string=0x00000000003DCBD8 "K"
 *   insn=0x00000000003DCBD8 string=0x00000000003DCBDC ""
 *   insn=0x00000000003DCBD8 string=0x00000000003DCC60 "v"
 *   insn=0x00000000003DCBE8 string=0x00000000003DCBEC "\t"
 *   insn=0x00000000003DCBEC string=0x00000000003DCBF0 ")"
 *   insn=0x00000000003DCBF4 string=0x00000000003DCBF8 "\n"
 *   insn=0x00000000003DCBF8 string=0x00000000003DCBFC "J"
 *   insn=0x00000000003DCBFC string=0x00000000003DCC00 "\n"
 *   insn=0x00000000003DCC04 string=0x00000000003DCC08 "\t"
 *   insn=0x00000000003DCC08 string=0x00000000003DCC0C "5"
 *   insn=0x00000000003DCC0C string=0x00000000003DCC50 "9"
 *   insn=0x00000000003DCC10 string=0x00000000003DCC14 ""
 *   insn=0x00000000003DCC20 string=0x00000000003DCC24 "\t@"
 *   insn=0x00000000003DCC30 string=0x00000000003DCC34 ""
 *   insn=0x00000000003DCC40 string=0x00000000003DCC44 "@"
 *   insn=0x00000000003DCC50 string=0x00000000003DCC54 "?"
 *   insn=0x00000000003DCC64 string=0x00000000003DCC74 "u"
 *   insn=0x00000000003DCC68 string=0x00000000003DCC6C ""
 *   insn=0x00000000003DCC74 string=0x00000000003DCC78 "wR"
 *   insn=0x00000000003DCC78 string=0x00000000003DCC7C "5"
 *   insn=0x00000000003DCC7C string=0x00000000003DCCC0 "sB"
 *   insn=0x00000000003DCC80 string=0x00000000003DCC84 ""
 *   insn=0x00000000003DCC90 string=0x00000000003DCC94 "\t@"
 *   insn=0x00000000003DCCA0 string=0x00000000003DCCA4 ""
 *   insn=0x00000000003DCCB0 string=0x00000000003DCCB4 "@"
 *   insn=0x00000000003DCCC8 string=0x00000000003DCCCC "9"
 *   insn=0x00000000003DCCCC string=0x00000000003DCDB0 "t"
 *   insn=0x00000000003DCCD0 string=0x00000000003DCCD4 "@"
 *   insn=0x00000000003DCCD4 string=0x00000000003DCCFC ""
 *   insn=0x00000000003DCCD8 string=0x00000000003DCCDC "WQ"
 *   insn=0x00000000003DCCE0 string=0x00000000003DCCF0 ""
 *   insn=0x00000000003DCCE4 string=0x00000000003DCCE8 "k"
 *   insn=0x00000000003DCCF0 string=0x00000000003DCCF4 "JA"
 *   insn=0x00000000003DCCF4 string=0x00000000003DCCF8 "!"
 *   insn=0x00000000003DCD04 string=0x00000000003DCD08 "@"
 *   insn=0x00000000003DCD08 string=0x00000000003DCF30 "h"
 *   insn=0x00000000003DCD0C string=0x00000000003DCD10 "*"
 *   insn=0x00000000003DCD10 string=0x00000000003DCD14 "\n"
 *   insn=0x00000000003DCD14 string=0x00000000003DCD18 "*"
 *   insn=0x00000000003DCD18 string=0x00000000003DCD1C "\n"
 *   insn=0x00000000003DCD20 string=0x00000000003DCD24 "K"
 *   insn=0x00000000003DCD20 string=0x00000000003DCD30 ")A"
 *   insn=0x00000000003DCD24 string=0x00000000003DCD28 "k"
 *   insn=0x00000000003DCD28 string=0x00000000003DCD2C "K"
 *   insn=0x00000000003DCD30 string=0x00000000003DCD34 "?"
 *   insn=0x00000000003DCD34 string=0x00000000003DCD38 "A"
 *   insn=0x00000000003DCD3C string=0x00000000003DCD40 ""
 *   insn=0x00000000003DCD48 string=0x00000000003DCD58 "u"
 *   insn=0x00000000003DCD4C string=0x00000000003DCD50 ""
 *   insn=0x00000000003DCD58 string=0x00000000003DCD5C "wR"
 *   insn=0x00000000003DCD5C string=0x00000000003DCD60 "5"
 *   insn=0x00000000003DCD60 string=0x00000000003DCDA4 "sB"
 *   insn=0x00000000003DCD64 string=0x00000000003DCD68 ""
 *   insn=0x00000000003DCD74 string=0x00000000003DCD78 "\t@"
 *   insn=0x00000000003DCD84 string=0x00000000003DCD88 ""
 *   insn=0x00000000003DCD94 string=0x00000000003DCD98 "@"
 *   insn=0x00000000003DCDB0 string=0x00000000003DCDB4 "n"
 *   insn=0x00000000003DCDBC string=0x00000000003DCDC0 ""
 *   insn=0x00000000003DCDCC string=0x00000000003DCDD0 "\n"
 *   insn=0x00000000003DCDD4 string=0x00000000003DCDD8 "\n"
 *   insn=0x00000000003DCDDC string=0x00000000003DCDE0 "K"
 *   insn=0x00000000003DCDDC string=0x00000000003DCDEC ")"
 *   insn=0x00000000003DCDE0 string=0x00000000003DCDE4 "k"
 *   insn=0x00000000003DCDE4 string=0x00000000003DCDE8 "K"
 *   insn=0x00000000003DCDEC string=0x00000000003DCDF0 "A"
 *   insn=0x00000000003DCE08 string=0x00000000003DCE0C "hB"
 *   insn=0x00000000003DCE10 string=0x00000000003DCE14 "K"
 *   insn=0x00000000003DCE1C string=0x00000000003DCE20 "K"
 *   insn=0x00000000003DCE28 string=0x00000000003DCE2C "l"
 *   insn=0x00000000003DCE28 string=0x00000000003DCE38 "JA"
 *   insn=0x00000000003DCE30 string=0x00000000003DCE34 "l"
 *   insn=0x00000000003DCE38 string=0x00000000003DCE3C "_"
 *   insn=0x00000000003DCE3C string=0x00000000003DCE40 ")A"
 *   insn=0x00000000003DCE40 string=0x00000000003DCE44 "a"
 *   insn=0x00000000003DCE44 string=0x00000000003DCE48 ""
 *   insn=0x00000000003DCE48 string=0x00000000003DCE4C ""
 *   insn=0x00000000003DCE50 string=0x00000000003DCE54 "A"
 *   insn=0x00000000003DCE5C string=0x00000000003DCE60 "?"
 *   insn=0x00000000003DCE64 string=0x00000000003DCE68 "(C"
 *   insn=0x00000000003DCE70 string=0x00000000003DCE74 "K"
 *   insn=0x00000000003DCE74 string=0x00000000003DCE78 "+"
 *   insn=0x00000000003DCE78 string=0x00000000003DCE7C "K"
 *   insn=0x00000000003DCE7C string=0x00000000003DCE80 "+"
 *   insn=0x00000000003DCE84 string=0x00000000003DCE88 "l"
 *   insn=0x00000000003DCE84 string=0x00000000003DCE94 "JA"
 *   insn=0x00000000003DCE8C string=0x00000000003DCE90 "l"
 *   insn=0x00000000003DCE94 string=0x00000000003DCE98 "_"
 *   insn=0x00000000003DCE98 string=0x00000000003DCE9C ")A"
 *   insn=0x00000000003DCEA0 string=0x00000000003DCEA4 ""
 *   insn=0x00000000003DCEA4 string=0x00000000003DCEA8 ""
 *   insn=0x00000000003DCEB8 string=0x00000000003DCF14 "w"
 *   insn=0x00000000003DCEBC string=0x00000000003DCEC0 "3"
 *   insn=0x00000000003DCEC0 string=0x00000000003DCEC4 "h"
 *   insn=0x00000000003DCEC4 string=0x00000000003DCEC8 ""
 *   insn=0x00000000003DCEC8 string=0x00000000003DCECC "h"
 *   insn=0x00000000003DCED0 string=0x00000000003DCED4 "h"
 *   insn=0x00000000003DCED8 string=0x00000000003DCEDC "\t@"
 *   insn=0x00000000003DCEE0 string=0x00000000003DCEE4 "h\n@"
 *   insn=0x00000000003DCEE4 string=0x00000000003DCEE8 ""
 *   insn=0x00000000003DCEE8 string=0x00000000003DCEEC "h\n"
 *   insn=0x00000000003DCEF0 string=0x00000000003DCEF4 "h"
 *   insn=0x00000000003DCEF8 string=0x00000000003DCEFC "@"
 *   insn=0x00000000003DCF04 string=0x00000000003DCF08 "?"
 *   insn=0x00000000003DCF1C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DCF3C string=0x00000000003DCF40 ""
 *   insn=0x00000000003DCF44 string=0x00000000003DCF48 "!"
 *   insn=0x00000000003DCF50 string=0x00000000003DCF54 "\t@"
 *   insn=0x00000000003DCF5C string=0x00000000003DCF60 ""
 *   insn=0x00000000003DCFA0 string=0x00000000003DCFA4 " "
 *   insn=0x00000000003DCFA8 string=0x00000000003DCFB0 "g!"
 *   insn=0x00000000003DCFA8 string=0x000000000059299C "vector::_M_fill_insert"
 *   insn=0x00000000003DCFD0 string=0x00000000003DCFD4 "4"
 *   insn=0x00000000003DCFD8 string=0x00000000003DCFDC ""
 *   insn=0x00000000003DCFE8 string=0x00000000003DCFEC "\t@"
 *   insn=0x00000000003DCFF8 string=0x00000000003DCFFC ""
 *   insn=0x00000000003DD008 string=0x00000000003DD00C "@"
 *   insn=0x00000000003DD018 string=0x00000000003DD01C "*"
 *   insn=0x00000000003DD038 string=0x00000000003DD03C "V"
 *   insn=0x00000000003DD04C string=0x00000000003DD050 "H"
 *   insn=0x00000000003DD050 string=0x00000000003DD054 "5C"
 *   insn=0x00000000003DD058 string=0x00000000003DD05C "i"
 *   insn=0x00000000003DD05C string=0x00000000003DD060 "w""
 *   insn=0x00000000003DD060 string=0x00000000003DD064 "`"
 *   insn=0x00000000003DD064 string=0x00000000003DD068 "i"
 *   insn=0x00000000003DD068 string=0x00000000003DD06C "i"
 *   insn=0x00000000003DD06C string=0x00000000003DD070 "A"
 *   insn=0x00000000003DD088 string=0x00000000003DD08C "x"
 *   insn=0x00000000003DD08C string=0x00000000003DD090 "j""
 *   insn=0x00000000003DD090 string=0x00000000003DD094 "h"
 *   insn=0x00000000003DD094 string=0x00000000003DD098 "`F"
 *   insn=0x00000000003DD098 string=0x00000000003DD09C "`>"
 *   insn=0x00000000003DD09C string=0x00000000003DD0A0 "`"
 *   insn=0x00000000003DD0A0 string=0x00000000003DD0A4 "`V"
 *   insn=0x00000000003DD0AC string=0x00000000003DD0B0 " "
 *   insn=0x00000000003DD0B0 string=0x00000000003DD0B4 "ib"
 *   insn=0x00000000003DD0B4 string=0x00000000003DD0B8 "@"
 *   insn=0x00000000003DD0C8 string=0x00000000003DD0CC "`z"
 *   insn=0x00000000003DD0D4 string=0x00000000003DD0D8 "`"
 *   insn=0x00000000003DD0D8 string=0x00000000003DD0DC "hN9 "
 *   insn=0x00000000003DD0DC string=0x00000000003DD0E0 " "
 *   insn=0x00000000003DD0E0 string=0x00000000003DD0E4 "h"
 *   insn=0x00000000003DD0E4 string=0x00000000003DD0E8 "h"
 *   insn=0x00000000003DD0F0 string=0x00000000003DD0F4 "h"
 *   insn=0x00000000003DD0F4 string=0x00000000003DD0F8 "t"
 *   insn=0x00000000003DD0F8 string=0x00000000003DD0FC "ib\t"
 *   insn=0x00000000003DD100 string=0x00000000003DD104 ""
 *   insn=0x00000000003DD108 string=0x00000000003DD10C " "
 *   insn=0x00000000003DD114 string=0x00000000003DD118 "`"
 *   insn=0x00000000003DD11C string=0x00000000003DD120 "`"
 *   insn=0x00000000003DD124 string=0x00000000003DD128 "`"
 *   insn=0x00000000003DD128 string=0x00000000003DD12C "`"
 *   insn=0x00000000003DD12C string=0x00000000003DD130 "h"
 *   insn=0x00000000003DD13C string=0x00000000001FD9B0 "0'"
 *   insn=0x00000000003DD144 string=0x00000000003DD148 "\n"
 *   insn=0x00000000003DD144 string=0x00000000003DD154 "u"
 *   insn=0x00000000003DD148 string=0x00000000003DD14C "J"
 *   insn=0x00000000003DD14C string=0x00000000003DD150 "\n"
 *   insn=0x00000000003DD154 string=0x00000000003DD158 "i"
 *   insn=0x00000000003DD158 string=0x00000000003DD15C "h"
 *   insn=0x00000000003DD15C string=0x00000000003DD160 "5"
 *   insn=0x00000000003DD164 string=0x00000000003DD168 ""
 *   insn=0x00000000003DD174 string=0x00000000003DD178 "\t@"
 *   insn=0x00000000003DD184 string=0x00000000003DD188 ""
 *   insn=0x00000000003DD194 string=0x00000000003DD198 "@"
 *   insn=0x00000000003DD1A4 string=0x00000000003DD1A8 "5"
 *   insn=0x00000000003DD1A8 string=0x00000000003DD1EC ""
 *   insn=0x00000000003DD1AC string=0x00000000003DD1B0 ""
 *   insn=0x00000000003DD1BC string=0x00000000003DD1C0 "\t@"
 *   insn=0x00000000003DD1CC string=0x00000000003DD1D0 ""
 *   insn=0x00000000003DD1DC string=0x00000000003DD1E0 "@"
 *   insn=0x00000000003DD1FC string=0x00000000003DD200 "+"
 *   insn=0x00000000003DD204 string=0x00000000003DD208 "`"
 *   insn=0x00000000003DD210 string=0x00000000003DD214 "i"
 *   insn=0x00000000003DD218 string=0x00000000003DD21C "h"
 *   insn=0x00000000003DD21C string=0x00000000003DD220 "*"
 *   insn=0x00000000003DD220 string=0x00000000003DD224 "`"
 *   insn=0x00000000003DD234 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003DD260 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DD270 string=0x00000000003DD274 ""
 *   insn=0x00000000003DD278 string=0x00000000003DD27C "!"
 *   insn=0x00000000003DD280 string=0x00000000003DD284 "\t@"
 *   insn=0x00000000003DD290 string=0x00000000003DD294 ""
 *   insn=0x00000000003DD298 string=0x00000000003DD29C "!"
 *   insn=0x00000000003DD2A0 string=0x00000000003DD2A4 "@"
 *   insn=0x00000000003DD2C4 string=0x00000000003DD2C8 "h"
 *   insn=0x00000000003DD2C4 string=0x00000000001F8990 "0'"
 *   insn=0x00000000003DD2CC string=0x00000000003DD2D0 "@"
 *   insn=0x00000000003DD2D0 string=0x00000000003DD2D4 "#_"
 *   insn=0x00000000003DD2D0 string=0x00000000003DD2D8 "`"
 *   insn=0x00000000003DD2D4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003DD2D8 string=0x00000000003DD2DC "@"
 *   insn=0x00000000003DD2DC string=0x00000000003DD2E0 " _"
 *   insn=0x00000000003DD2E8 string=0x00000000003DD2EC "@"
 *   insn=0x00000000003DD2EC string=0x00000000003DD2F0 ""
 *   insn=0x00000000003DD2F0 string=0x00000000003DD2F4 ""
 *   insn=0x00000000003DD2F8 string=0x00000000003DD2FC ""
 *   insn=0x00000000003DD2FC string=0x00000000003DD300 ""
 *   insn=0x00000000003DD308 string=0x00000000003DD30C "@"
 *   insn=0x00000000003DD30C string=0x00000000003DD314 "`"
 *   insn=0x00000000003DD314 string=0x00000000003DD318 "tB"
 *   insn=0x00000000003DD318 string=0x00000000003DD31C "@"
 *   insn=0x00000000003DD328 string=0x00000000003DD32C "@"
 *   insn=0x00000000003DD328 string=0x00000000003DD348 "a"
 *   insn=0x00000000003DD32C string=0x00000000003DD330 ""
 *   insn=0x00000000003DD330 string=0x00000000003DD334 ""
 *   insn=0x00000000003DD338 string=0x00000000003DD33C ""
 *   insn=0x00000000003DD33C string=0x00000000003DD340 ""
 *   insn=0x00000000003DD348 string=0x00000000003DD34C "`"
 *   insn=0x00000000003DD350 string=0x00000000003DD354 "t"
 *   insn=0x00000000003DD350 string=0x00000000001FC1B0 "0'"
 *   insn=0x00000000003DD35C string=0x00000000003DD360 "w""
 *   insn=0x00000000003DD35C string=0x00000000003DD3BC "t"
 *   insn=0x00000000003DD364 string=0x00000000003DD368 "6"
 *   insn=0x00000000003DD36C string=0x00000000003DD370 ""
 *   insn=0x00000000003DD37C string=0x00000000003DD380 "\t@"
 *   insn=0x00000000003DD38C string=0x00000000003DD390 ""
 *   insn=0x00000000003DD39C string=0x00000000003DD3A0 "@"
 *   insn=0x00000000003DD3BC string=0x00000000003DD3C8 "t~@"
 *   insn=0x00000000003DD3C8 string=0x00000000003DD3CC "4"
 *   insn=0x00000000003DD3D0 string=0x00000000003DD3D4 ""
 *   insn=0x00000000003DD3E0 string=0x00000000003DD3E4 "\t@"
 *   insn=0x00000000003DD3F0 string=0x00000000003DD3F4 ""
 *   insn=0x00000000003DD400 string=0x00000000003DD404 "@"
 *   insn=0x00000000003DD418 string=0x00000000003DD41C "*"
 *   insn=0x00000000003DD430 string=0x00000000003DD434 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GUIAnimation>>::_M_fill_insert(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  char *v6; // x19
  char *v8; // x24
  char *v9; // x25
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  bool v12; // cf
  unsigned __int64 v13; // x9
  int v14; // w10
  unsigned __int64 v15; // x24
  __int64 v16; // x20
  _QWORD *v17; // x20
  __int64 v18; // x23
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x8
  __int64 v21; // x9
  char *v22; // x8
  char *v23; // x13
  __int64 v24; // x11
  __int64 v25; // x8
  char *v26; // x24
  __int64 v27; // x25
  _QWORD *v28; // x8
  _QWORD *v29; // x9
  _QWORD *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x8
  char *v33; // x22
  _QWORD *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x8
  unsigned __int64 v37; // x9
  char *v38; // x10
  char *v39; // x8
  char *v40; // x9
  __int64 v41; // x10
  _QWORD *v42; // x21
  __int64 v43; // x8
  __int64 v44; // x8
  _QWORD *v45; // x8
  unsigned __int64 v46; // x9
  __int64 v47; // x10
  char *v48; // x23
  unsigned __int64 v49; // x8
  __int64 v50; // x9
  _QWORD *v51; // x12
  __int64 v52; // x11
  __int64 v53; // x10
  char *v54; // x25
  _QWORD *v55; // x22
  _QWORD *v56; // x9
  char *v57; // x10
  __int64 v58; // x11
  _QWORD *v59; // x19
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8

  v6 = a2;
  if ( !a3 )
    return;
  v8 = (char *)a1[1];
  if ( (a1[2] - (__int64)v8) >> 4 < a3 )
  {
    v9 = (char *)*a1;
    v10 = (__int64)&v8[-*a1] >> 4;
    if ( 0xFFFFFFFFFFFFFFFLL - v10 < a3 )
      sub_56554C("vector::_M_fill_insert");
    if ( v10 >= a3 )
      v11 = (__int64)&v8[-*a1] >> 4;
    else
      v11 = a3;
    v12 = __CFADD__(v11, v10);
    v13 = v11 + v10;
    v14 = v12;
    if ( v14 | (v13 >> 60 != 0) )
      v15 = 0xFFFFFFFFFFFFFFFLL;
    else
      v15 = v13;
    if ( v15 )
    {
      if ( v15 >> 60 )
        sub_565294();
      v16 = operator new(16 * v15);
    }
    else
    {
      v16 = 0;
    }
    v45 = (_QWORD *)(v16 + 16 * ((v6 - v9) >> 4));
    v46 = a3;
    do
    {
      *v45 = *a4;
      v47 = a4[1];
      v45[1] = v47;
      if ( v47 )
        ++*(_QWORD *)(v47 + 8);
      --v46;
      v45 += 2;
    }
    while ( v46 );
    v48 = (char *)*a1;
    v49 = v16;
    if ( (char *)*a1 != v6 )
    {
      v50 = 0;
      do
      {
        v51 = (_QWORD *)(v16 + v50);
        *v51 = *(_QWORD *)&v48[v50];
        v52 = *(_QWORD *)&v48[v50 + 8];
        v51[1] = v52;
        if ( v52 )
          ++*(_QWORD *)(v52 + 8);
        v53 = (__int64)&v48[v50 + 16];
        v50 += 16;
      }
      while ( (char *)v53 != v6 );
      v49 = v16 + ((v6 - 16 - v48) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v54 = (char *)a1[1];
    v55 = (_QWORD *)(v49 + 16 * a3);
    if ( v54 != v6 )
    {
      v56 = v55;
      v57 = v6;
      do
      {
        *v56 = *(_QWORD *)v57;
        v58 = *((_QWORD *)v57 + 1);
        v56[1] = v58;
        if ( v58 )
          ++*(_QWORD *)(v58 + 8);
        v57 += 16;
        v56 += 2;
      }
      while ( v57 != v54 );
      v55 = (_QWORD *)((char *)v55 + ((v54 - 16 - v6) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    }
    if ( v48 != v54 )
    {
      do
      {
        v59 = (_QWORD *)*((_QWORD *)v48 + 1);
        if ( v59 )
        {
          v60 = v59[1] - 1LL;
          v59[1] = v60;
          if ( !v60 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
            v61 = v59[2] - 1LL;
            v59[2] = v61;
            if ( !v61 )
              (*(void (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
          }
        }
        v48 += 16;
      }
      while ( v54 != v48 );
      v48 = (char *)*a1;
    }
    if ( v48 )
      operator delete(v48);
    *a1 = v16;
    a1[1] = (__int64)v55;
    a1[2] = v16 + 16 * v15;
    return;
  }
  v18 = *a4;
  v17 = (_QWORD *)a4[1];
  if ( v17 )
    ++v17[1];
  v19 = (v8 - a2) >> 4;
  v20 = v19 - a3;
  if ( v19 <= a3 )
  {
    v37 = a3 - v19;
    if ( v37 )
    {
      v38 = v8;
      do
      {
        *(_QWORD *)v38 = v18;
        *((_QWORD *)v38 + 1) = v17;
        if ( v17 )
          ++v17[1];
        ++v20;
        v38 += 16;
      }
      while ( v20 );
    }
    v39 = &v8[16 * v37];
    a1[1] = (__int64)v39;
    if ( v8 == a2 )
    {
      a1[1] = (__int64)&a2[16 * a3];
      if ( !v17 )
        return;
      goto LABEL_89;
    }
    v40 = a2;
    do
    {
      *(_QWORD *)v39 = *(_QWORD *)v40;
      v41 = *((_QWORD *)v40 + 1);
      *((_QWORD *)v39 + 1) = v41;
      if ( v41 )
        ++*(_QWORD *)(v41 + 8);
      v40 += 16;
      v39 += 16;
    }
    while ( v40 != v8 );
    a1[1] = (__int64)&v8[16 * a3];
    do
    {
      if ( v17 )
        ++v17[1];
      v42 = (_QWORD *)*((_QWORD *)v6 + 1);
      *(_QWORD *)v6 = v18;
      *((_QWORD *)v6 + 1) = v17;
      if ( v42 )
      {
        v43 = v42[1] - 1LL;
        v42[1] = v43;
        if ( !v43 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
          v44 = v42[2] - 1LL;
          v42[2] = v44;
          if ( !v44 )
            (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
        }
      }
      v6 += 16;
    }
    while ( v6 != v8 );
  }
  else
  {
    v21 = 0;
    v22 = &v8[-16 * a3];
    do
    {
      v23 = &v8[v21];
      *(_QWORD *)v23 = *(_QWORD *)&v22[v21];
      v24 = *(_QWORD *)&v22[v21 + 8];
      *((_QWORD *)v23 + 1) = v24;
      if ( v24 )
        ++*(_QWORD *)(v24 + 8);
      v21 += 16;
    }
    while ( -16LL * a3 + v21 );
    v25 = v22 - a2;
    a1[1] = (__int64)&v8[16 * a3];
    if ( v25 >= 1 )
    {
      v26 = v8 - 8;
      v27 = ((unsigned __int64)v25 >> 4) + 1;
      do
      {
        v29 = *(_QWORD **)&v26[-16 * a3 - 8];
        v28 = *(_QWORD **)&v26[-16 * a3];
        if ( v28 )
          ++v28[1];
        v30 = *(_QWORD **)v26;
        *((_QWORD *)v26 - 1) = v29;
        *(_QWORD *)v26 = v28;
        if ( v30 )
        {
          v31 = v30[1] - 1LL;
          v30[1] = v31;
          if ( !v31 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
            v32 = v30[2] - 1LL;
            v30[2] = v32;
            if ( !v32 )
              (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
          }
        }
        --v27;
        v26 -= 16;
      }
      while ( v27 > 1 );
    }
    v33 = &v6[16 * a3];
    do
    {
      if ( v17 )
        ++v17[1];
      v34 = (_QWORD *)*((_QWORD *)v6 + 1);
      *(_QWORD *)v6 = v18;
      *((_QWORD *)v6 + 1) = v17;
      if ( v34 )
      {
        v35 = v34[1] - 1LL;
        v34[1] = v35;
        if ( !v35 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
          v36 = v34[2] - 1LL;
          v34[2] = v36;
          if ( !v36 )
            (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
        }
      }
      v6 += 16;
    }
    while ( v6 != v33 );
  }
  if ( !v17 )
    return;
LABEL_89:
  v62 = v17[1] - 1LL;
  v17[1] = v62;
  if ( !v62 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    v63 = v17[2] - 1LL;
    v17[2] = v63;
    if ( !v63 )
      (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
  }
}

