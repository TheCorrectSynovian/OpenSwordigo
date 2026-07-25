/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041CF44
 * Mangled: _ZN5Caver11MapMenuPageC2Ev
 * Demangled: Caver::MapMenuPage::MapMenuPage(void)
 *
 * Callers: 1
 *   0x00000000001F9520  Caver::MapMenuPage::MapMenuPage(void)
 *
 * Callees: 29
 *   0x00000000001F3640  Caver::StripeView::StripeView(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7690  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F94C0  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *   0x00000000001F9E10  Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD810  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x0000000000200A70  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *   0x0000000000201250  Caver::MapView::MapView(void)
 *   0x00000000002021A0  Caver::GUIScrollView::GUIScrollView(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 383
 *   insn=0x000000000041CF5C string=0x000000000041CF60 "X"
 *   insn=0x000000000041CF60 string=0x000000000041CF64 ""
 *   insn=0x000000000041CF70 string=0x000000000041CF74 "W"
 *   insn=0x000000000041CF74 string=0x000000000041CF78 "H"
 *   insn=0x000000000041CF7C string=0x000000000041CF80 ""
 *   insn=0x000000000041CF84 string=0x000000000041CF88 "tB"
 *   insn=0x000000000041CF8C string=0x000000000041CF90 "\n"
 *   insn=0x000000000041CF90 string=0x000000000041CF94 "A"
 *   insn=0x000000000041CF94 string=0x000000000041CF98 "iz"
 *   insn=0x000000000041CF98 string=0x000000000041CF9C "*"
 *   insn=0x000000000041CF9C string=0x000000000041CFA0 "h"
 *   insn=0x000000000041CFAC string=0x000000000041CFB0 "`"
 *   insn=0x000000000041CFB0 string=0x000000000041CFB4 """
 *   insn=0x000000000041CFB8 string=0x000000000041CFBC "!{"
 *   insn=0x000000000041CFBC string=0x00000000001FBC40 "0'"
 *   insn=0x000000000041CFC0 string=0x0000000000594710 "WORLD MAP"
 *   insn=0x000000000041CFD0 string=0x000000000041CFD4 "`"
 *   insn=0x000000000041CFEC string=0x000000000041D6A0 ")"
 *   insn=0x000000000041CFF0 string=0x00000000001FA350 "0'"
 *   insn=0x000000000041CFF8 string=0x000000000059471A "ui_menu_container"
 *   insn=0x000000000041D018 string=0x000000000041D01C "e"
 *   insn=0x000000000041D024 string=0x000000000041D028 "zs"
 *   insn=0x000000000041D028 string=0x00000000001F9E10 "0'"
 *   insn=0x000000000041D030 string=0x000000000041D034 "@"
 *   insn=0x000000000041D034 string=0x000000000041D038 ""
 *   insn=0x000000000041D038 string=0x000000000041D03C ""
 *   insn=0x000000000041D040 string=0x000000000041D044 ""
 *   insn=0x000000000041D044 string=0x000000000041D048 ""
 *   insn=0x000000000041D058 string=0x000000000041D05C "A3"
 *   insn=0x000000000041D05C string=0x000000000041D6C4 ")"
 *   insn=0x000000000041D060 string=0x000000000041D064 "_a"
 *   insn=0x000000000041D064 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000041D06C string=0x000000000041D070 "x"
 *   insn=0x000000000041D07C string=0x000000000041D080 "h"
 *   insn=0x000000000041D07C string=0x00000000001F94C0 "0'"
 *   insn=0x000000000041D08C string=0x000000000041D090 "i"
 *   insn=0x000000000041D094 string=0x000000000041D098 "5"
 *   insn=0x000000000041D098 string=0x000000000041D0DC "h"
 *   insn=0x000000000041D09C string=0x000000000041D0A0 ""
 *   insn=0x000000000041D0AC string=0x000000000041D0B0 "\t@"
 *   insn=0x000000000041D0BC string=0x000000000041D0C0 ""
 *   insn=0x000000000041D0CC string=0x000000000041D0D0 "@"
 *   insn=0x000000000041D0E4 string=0x000000000041D0E8 ">a"
 *   insn=0x000000000041D0F0 string=0x000000000041D0F4 "+"
 *   insn=0x000000000041D0FC string=0x000000000041D100 "di"
 *   insn=0x000000000041D100 string=0x000000000041D104 "h"
 *   insn=0x000000000041D100 string=0x00000000001F7690 "0'"
 *   insn=0x000000000041D110 string=0x000000000041D114 "i"
 *   insn=0x000000000041D118 string=0x000000000041D11C "5"
 *   insn=0x000000000041D11C string=0x000000000041D160 "i"
 *   insn=0x000000000041D120 string=0x000000000041D124 ""
 *   insn=0x000000000041D130 string=0x000000000041D134 "\t@"
 *   insn=0x000000000041D140 string=0x000000000041D144 ""
 *   insn=0x000000000041D150 string=0x000000000041D154 "@"
 *   insn=0x000000000041D164 string=0x000000000041D168 "("
 *   insn=0x000000000041D168 string=0x000000000041D16C "h"
 *   insn=0x000000000041D16C string=0x000000000041D170 "1@"
 *   insn=0x000000000041D174 string=0x000000000041D178 "i"
 *   insn=0x000000000041D180 string=0x000000000041D184 "*"
 *   insn=0x000000000041D184 string=0x000000000041D188 "J"
 *   insn=0x000000000041D188 string=0x000000000041D18C "*"
 *   insn=0x000000000041D19C string=0x000000000041D1A0 "5"
 *   insn=0x000000000041D1A0 string=0x000000000041D1E4 "`"
 *   insn=0x000000000041D1A4 string=0x000000000041D1A8 ""
 *   insn=0x000000000041D1B4 string=0x000000000041D1B8 "\t@"
 *   insn=0x000000000041D1C4 string=0x000000000041D1C8 ""
 *   insn=0x000000000041D1D4 string=0x000000000041D1D8 "@"
 *   insn=0x000000000041D1E4 string=0x000000000041D1E8 "i"
 *   insn=0x000000000041D1E8 string=0x000000000041D1EC ""
 *   insn=0x000000000041D1EC string=0x000000000041D1F0 "1@"
 *   insn=0x000000000041D1F4 string=0x000000000041D1F8 "i"
 *   insn=0x000000000041D200 string=0x000000000041D204 "*"
 *   insn=0x000000000041D204 string=0x000000000041D208 "J"
 *   insn=0x000000000041D208 string=0x000000000041D20C "*"
 *   insn=0x000000000041D218 string=0x000000000041D21C "5"
 *   insn=0x000000000041D220 string=0x000000000041D224 ""
 *   insn=0x000000000041D230 string=0x000000000041D234 "\t@"
 *   insn=0x000000000041D240 string=0x000000000041D244 ""
 *   insn=0x000000000041D250 string=0x000000000041D254 "@"
 *   insn=0x000000000041D270 string=0x00000000001F3640 "P'"
 *   insn=0x000000000041D278 string=0x000000000041D27C "e"
 *   insn=0x000000000041D27C string=0x000000000041D280 "h"
 *   insn=0x000000000041D27C string=0x00000000001FD810 "0'"
 *   insn=0x000000000041D28C string=0x000000000041D290 "i"
 *   insn=0x000000000041D294 string=0x000000000041D298 "5"
 *   insn=0x000000000041D298 string=0x000000000041D2DC "h"
 *   insn=0x000000000041D29C string=0x000000000041D2A0 ""
 *   insn=0x000000000041D2AC string=0x000000000041D2B0 "\t@"
 *   insn=0x000000000041D2BC string=0x000000000041D2C0 ""
 *   insn=0x000000000041D2CC string=0x000000000041D2D0 "@"
 *   insn=0x000000000041D2DC string=0x000000000041D2E0 "i"
 *   insn=0x000000000041D2E0 string=0x000000000041D2E4 "1@"
 *   insn=0x000000000041D2E8 string=0x000000000041D2EC "i"
 *   insn=0x000000000041D2F4 string=0x000000000041D2F8 "*"
 *   insn=0x000000000041D2F8 string=0x000000000041D2FC "J"
 *   insn=0x000000000041D2FC string=0x000000000041D300 "*"
 *   insn=0x000000000041D310 string=0x000000000041D314 "5"
 *   insn=0x000000000041D318 string=0x000000000041D31C ""
 *   insn=0x000000000041D328 string=0x000000000041D32C "\t@"
 *   insn=0x000000000041D338 string=0x000000000041D33C ""
 *   insn=0x000000000041D348 string=0x000000000041D34C "@"
 *   insn=0x000000000041D360 string=0x00000000005942EB "ui_menu_button"
 *   insn=0x000000000041D394 string=0x000000000041D6E8 ")"
 *   insn=0x000000000041D3A0 string=0x00000000005942FA "ui_menu_button_pressed"
 *   insn=0x000000000041D3C0 string=0x000000000041D3C4 "{"
 *   insn=0x000000000041D3D4 string=0x000000000041D70C ")"
 *   insn=0x000000000041D3E8 string=0x00000000001F53C0 "P'"
 *   insn=0x000000000041D3F4 string=0x000000000041D3F8 "h"
 *   insn=0x000000000041D404 string=0x000000000041D408 "i"
 *   insn=0x000000000041D40C string=0x000000000041D410 "5"
 *   insn=0x000000000041D410 string=0x000000000041D454 "u"
 *   insn=0x000000000041D414 string=0x000000000041D418 ""
 *   insn=0x000000000041D424 string=0x000000000041D428 "\t@"
 *   insn=0x000000000041D434 string=0x000000000041D438 ""
 *   insn=0x000000000041D444 string=0x000000000041D448 "@"
 *   insn=0x000000000041D45C string=0x000000000041D460 "T"
 *   insn=0x000000000041D460 string=0x00000000001FD9B0 "0'"
 *   insn=0x000000000041D46C string=0x000000000041D470 "`"
 *   insn=0x000000000041D478 string=0x000000000041D47C "*"
 *   insn=0x000000000041D47C string=0x000000000041D480 "J"
 *   insn=0x000000000041D480 string=0x000000000041D484 "*"
 *   insn=0x000000000041D48C string=0x000000000041D490 "6"
 *   insn=0x000000000041D494 string=0x000000000041D498 ""
 *   insn=0x000000000041D4A4 string=0x000000000041D4A8 "\t@"
 *   insn=0x000000000041D4B4 string=0x000000000041D4B8 ""
 *   insn=0x000000000041D4C4 string=0x000000000041D4C8 "@"
 *   insn=0x000000000041D4D8 string=0x00000000001F8510 "0'"
 *   insn=0x000000000041D4DC string=0x000000000041D4E0 "5"
 *   insn=0x000000000041D4E0 string=0x000000000041D524 "u"
 *   insn=0x000000000041D4E4 string=0x000000000041D4E8 ""
 *   insn=0x000000000041D4F4 string=0x000000000041D4F8 "\t@"
 *   insn=0x000000000041D504 string=0x000000000041D508 ""
 *   insn=0x000000000041D514 string=0x000000000041D518 "@"
 *   insn=0x000000000041D52C string=0x000000000041D530 "A"
 *   insn=0x000000000041D550 string=0x000000000041D554 " "
 *   insn=0x000000000041D554 string=0x000000000041D5B8 "h"
 *   insn=0x000000000041D558 string=0x000000000041D55C ""
 *   insn=0x000000000041D564 string=0x000000000041D568 "6"
 *   insn=0x000000000041D56C string=0x000000000041D570 ""
 *   insn=0x000000000041D57C string=0x000000000041D580 "\t@"
 *   insn=0x000000000041D58C string=0x000000000041D590 ""
 *   insn=0x000000000041D59C string=0x000000000041D5A0 "@"
 *   insn=0x000000000041D5B0 string=0x000000000041D5B4 "u"
 *   insn=0x000000000041D5B8 string=0x000000000041D5BC "i"
 *   insn=0x000000000041D5BC string=0x000000000041D5C0 "1@"
 *   insn=0x000000000041D5C8 string=0x000000000041D5CC "*"
 *   insn=0x000000000041D5CC string=0x000000000041D5D0 "J"
 *   insn=0x000000000041D5D0 string=0x000000000041D5D4 "*"
 *   insn=0x000000000041D5E4 string=0x000000000041D5E8 "5"
 *   insn=0x000000000041D5EC string=0x000000000041D5F0 ""
 *   insn=0x000000000041D5FC string=0x000000000041D600 "\t@"
 *   insn=0x000000000041D60C string=0x000000000041D610 ""
 *   insn=0x000000000041D61C string=0x000000000041D620 "@"
 *   insn=0x000000000041D630 string=0x000000000041D634 "@"
 *   insn=0x000000000041D634 string=0x000000000041D638 ""
 *   insn=0x000000000041D638 string=0x000000000041D63C ""
 *   insn=0x000000000041D640 string=0x000000000041D644 ""
 *   insn=0x000000000041D644 string=0x000000000041D648 ""
 *   insn=0x000000000041D654 string=0x000000000041D658 "@"
 *   insn=0x000000000041D654 string=0x000000000041D674 ""
 *   insn=0x000000000041D658 string=0x000000000041D65C ""
 *   insn=0x000000000041D65C string=0x000000000041D660 ""
 *   insn=0x000000000041D664 string=0x000000000041D668 ""
 *   insn=0x000000000041D668 string=0x000000000041D66C ""
 *   insn=0x000000000041D6A0 string=0x000000000041D6A4 ")=G"
 *   insn=0x000000000041D6A4 string=0x000000000041D6A8 "!"
 *   insn=0x000000000041D6A8 string=0x000000000041D6AC ")"
 *   insn=0x000000000041D6AC string=0x000000000041D6B0 "\t"
 *   insn=0x000000000041D6AC string=0x000000000041D730 "\t"
 *   insn=0x000000000041D6B0 string=0x000000000041D6B4 "*"
 *   insn=0x000000000041D6B4 string=0x000000000041D6B8 "\n"
 *   insn=0x000000000041D6C0 string=0x000000000041D73C "?"
 *   insn=0x000000000041D6C4 string=0x000000000041D6C8 ")=G"
 *   insn=0x000000000041D6C8 string=0x000000000041D6CC "!"
 *   insn=0x000000000041D6CC string=0x000000000041D6D0 "\t"
 *   insn=0x000000000041D6D0 string=0x000000000041D6D4 "\t"
 *   insn=0x000000000041D6D0 string=0x000000000041D750 "\t"
 *   insn=0x000000000041D6D4 string=0x000000000041D6D8 "*"
 *   insn=0x000000000041D6D8 string=0x000000000041D6DC "\n"
 *   insn=0x000000000041D6E4 string=0x000000000041D75C "?"
 *   insn=0x000000000041D6E8 string=0x000000000041D6EC ")=G"
 *   insn=0x000000000041D6EC string=0x000000000041D6F0 "!"
 *   insn=0x000000000041D6F4 string=0x000000000041D6F8 "\t"
 *   insn=0x000000000041D6F4 string=0x000000000041D770 "\t"
 *   insn=0x000000000041D6F8 string=0x000000000041D6FC "*"
 *   insn=0x000000000041D6FC string=0x000000000041D700 "\n"
 *   insn=0x000000000041D708 string=0x000000000041D77C "?"
 *   insn=0x000000000041D70C string=0x000000000041D710 ")=G"
 *   insn=0x000000000041D710 string=0x000000000041D714 "!"
 *   insn=0x000000000041D718 string=0x000000000041D71C "\t"
 *   insn=0x000000000041D718 string=0x000000000041D790 "\t"
 *   insn=0x000000000041D71C string=0x000000000041D720 "*"
 *   insn=0x000000000041D720 string=0x000000000041D724 "\n"
 *   insn=0x000000000041D72C string=0x000000000041D79C "?"
 *   insn=0x000000000041D730 string=0x000000000041D734 "*"
 *   insn=0x000000000041D734 string=0x000000000041D738 "\n"
 *   insn=0x000000000041D748 string=0x000000000041D74C ")"
 *   insn=0x000000000041D750 string=0x000000000041D754 "*"
 *   insn=0x000000000041D754 string=0x000000000041D758 "\n"
 *   insn=0x000000000041D768 string=0x000000000041D76C "="
 *   insn=0x000000000041D770 string=0x000000000041D774 "*"
 *   insn=0x000000000041D774 string=0x000000000041D778 "\n"
 *   insn=0x000000000041D784 string=0x000000000041D788 "3"
 *   insn=0x000000000041D790 string=0x000000000041D794 "*"
 *   insn=0x000000000041D794 string=0x000000000041D798 "\n"
 *   insn=0x000000000041D7A8 string=0x000000000041D7AC ""
 *   insn=0x000000000041D7B0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041D7D0 string=0x000000000041D7D4 ""
 *   insn=0x000000000041D7D8 string=0x000000000041D7DC "A"
 *   insn=0x000000000041D7E0 string=0x000000000041D7E4 "\t@"
 *   insn=0x000000000041D7F0 string=0x000000000041D7F4 ""
 *   insn=0x000000000041D7F8 string=0x000000000041D7FC "A"
 *   insn=0x000000000041D800 string=0x000000000041D804 "@"
 *   insn=0x000000000041D818 string=0x000000000041D81C "V"
 *   insn=0x000000000041D820 string=0x000000000041D824 ""
 *   insn=0x000000000041D830 string=0x000000000041D834 "\t@"
 *   insn=0x000000000041D840 string=0x000000000041D844 ""
 *   insn=0x000000000041D850 string=0x000000000041D854 "@"
 *   insn=0x000000000041D86C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000041D874 string=0x000000000041DB8C "@"
 *   insn=0x000000000041D880 string=0x000000000041D884 "(a"
 *   insn=0x000000000041D88C string=0x000000000041D890 "*"
 *   insn=0x000000000041D890 string=0x000000000041D894 "J=G"
 *   insn=0x000000000041D894 string=0x000000000041D898 ")!"
 *   insn=0x000000000041D89C string=0x000000000041D8A0 "*"
 *   insn=0x000000000041D89C string=0x000000000041D8B4 "*"
 *   insn=0x000000000041D8A0 string=0x000000000041D8A4 "K"
 *   insn=0x000000000041D8A4 string=0x000000000041D8A8 "+"
 *   insn=0x000000000041D8B0 string=0x000000000041D8C0 "_"
 *   insn=0x000000000041D8B4 string=0x000000000041D8B8 "K"
 *   insn=0x000000000041D8B8 string=0x000000000041D8BC "+"
 *   insn=0x000000000041D8C0 string=0x000000000041D8C4 ","
 *   insn=0x000000000041D8D8 string=0x000000000041DBB0 "@"
 *   insn=0x000000000041D8DC string=0x000000000041DBD4 "v"
 *   insn=0x000000000041D8E8 string=0x000000000041D8EC "(a"
 *   insn=0x000000000041D8F4 string=0x000000000041D8F8 "*"
 *   insn=0x000000000041D8F8 string=0x000000000041D8FC "J=G"
 *   insn=0x000000000041D8FC string=0x000000000041D900 ")!"
 *   insn=0x000000000041D904 string=0x000000000041D908 "*"
 *   insn=0x000000000041D904 string=0x000000000041D91C "*"
 *   insn=0x000000000041D908 string=0x000000000041D90C "K"
 *   insn=0x000000000041D90C string=0x000000000041D910 "+"
 *   insn=0x000000000041D918 string=0x000000000041D928 "_"
 *   insn=0x000000000041D91C string=0x000000000041D920 "K"
 *   insn=0x000000000041D920 string=0x000000000041D924 "+"
 *   insn=0x000000000041D928 string=0x000000000041D92C "L"
 *   insn=0x000000000041D930 string=0x000000000041D934 "h"
 *   insn=0x000000000041D948 string=0x000000000041D94C ""
 *   insn=0x000000000041D958 string=0x000000000041D95C "\t@"
 *   insn=0x000000000041D968 string=0x000000000041D96C ""
 *   insn=0x000000000041D978 string=0x000000000041D97C "@"
 *   insn=0x000000000041D99C string=0x000000000041D9A0 ""
 *   insn=0x000000000041D9A4 string=0x000000000041D9A8 "a"
 *   insn=0x000000000041D9AC string=0x000000000041D9B0 "\t@"
 *   insn=0x000000000041D9BC string=0x000000000041D9C0 ""
 *   insn=0x000000000041D9C4 string=0x000000000041D9C8 "a"
 *   insn=0x000000000041D9CC string=0x000000000041D9D0 "@"
 *   insn=0x000000000041D9D8 string=0x000000000041D9DC "~"
 *   insn=0x000000000041D9E4 string=0x000000000041D9E8 "v"
 *   insn=0x000000000041D9EC string=0x000000000041D9F0 ""
 *   insn=0x000000000041D9FC string=0x000000000041DA00 "\t@"
 *   insn=0x000000000041DA0C string=0x000000000041DA10 ""
 *   insn=0x000000000041DA1C string=0x000000000041DA20 "@"
 *   insn=0x000000000041DA28 string=0x000000000041DA2C "j"
 *   insn=0x000000000041DA3C string=0x000000000041DA40 "v"
 *   insn=0x000000000041DA44 string=0x000000000041DA48 "u"
 *   insn=0x000000000041DA48 string=0x000000000041DC1C "v"
 *   insn=0x000000000041DA50 string=0x000000000041DA54 ""
 *   insn=0x000000000041DA54 string=0x000000000041DA58 "\t\t@"
 *   insn=0x000000000041DA58 string=0x000000000041DA5C ")"
 *   insn=0x000000000041DA5C string=0x000000000041DA60 "\t\t"
 *   insn=0x000000000041DA64 string=0x000000000041DA68 "\t"
 *   insn=0x000000000041DA68 string=0x000000000041DA6C ")"
 *   insn=0x000000000041DA70 string=0x000000000041DA74 " "
 *   insn=0x000000000041DA74 string=0x000000000041DA78 "'"
 *   insn=0x000000000041DA88 string=0x000000000041DA8C "(a"
 *   insn=0x000000000041DA94 string=0x000000000041DA98 "*"
 *   insn=0x000000000041DA98 string=0x000000000041DA9C "J=G"
 *   insn=0x000000000041DA9C string=0x000000000041DAA0 ")!"
 *   insn=0x000000000041DAA4 string=0x000000000041DAA8 "*"
 *   insn=0x000000000041DAA4 string=0x000000000041DABC "*"
 *   insn=0x000000000041DAA8 string=0x000000000041DAAC "K"
 *   insn=0x000000000041DAAC string=0x000000000041DAB0 "+"
 *   insn=0x000000000041DAB8 string=0x000000000041DAC8 "_"
 *   insn=0x000000000041DABC string=0x000000000041DAC0 "K"
 *   insn=0x000000000041DAC0 string=0x000000000041DAC4 "+"
 *   insn=0x000000000041DAC8 string=0x000000000041DACC "L"
 *   insn=0x000000000041DAD4 string=0x000000000041DAD8 """
 *   insn=0x000000000041DAE0 string=0x000000000041DAE4 "t"
 *   insn=0x000000000041DAEC string=0x000000000041DD9C "hz@"
 *   insn=0x000000000041DAF8 string=0x000000000041DAFC "6"
 *   insn=0x000000000041DB00 string=0x000000000041DB04 "v"
 *   insn=0x000000000041DB08 string=0x000000000041DB0C "D"
 *   insn=0x000000000041DB20 string=0x000000000041DB24 ")"
 *   insn=0x000000000041DB24 string=0x000000000041DB28 ")=G"
 *   insn=0x000000000041DB28 string=0x000000000041DB2C "!"
 *   insn=0x000000000041DB30 string=0x000000000041DB34 "\t"
 *   insn=0x000000000041DB30 string=0x000000000041DB48 "\t"
 *   insn=0x000000000041DB34 string=0x000000000041DB38 "*"
 *   insn=0x000000000041DB38 string=0x000000000041DB3C "\n"
 *   insn=0x000000000041DB44 string=0x000000000041DB54 "?"
 *   insn=0x000000000041DB48 string=0x000000000041DB4C "*"
 *   insn=0x000000000041DB4C string=0x000000000041DB50 "\n"
 *   insn=0x000000000041DB60 string=0x000000000041DB64 "v"
 *   insn=0x000000000041DB68 string=0x000000000041DB6C ","
 *   insn=0x000000000041DB78 string=0x000000000041DB7C ""
 *   insn=0x000000000041DB8C string=0x000000000041DB90 ""
 *   insn=0x000000000041DB90 string=0x000000000041DB94 ""
 *   insn=0x000000000041DB98 string=0x000000000041DB9C ""
 *   insn=0x000000000041DB9C string=0x000000000041DBA0 ""
 *   insn=0x000000000041DBA8 string=0x000000000041DBAC "@"
 *   insn=0x000000000041DBB0 string=0x000000000041DBB4 ""
 *   insn=0x000000000041DBB4 string=0x000000000041DBB8 ""
 *   insn=0x000000000041DBBC string=0x000000000041DBC0 ""
 *   insn=0x000000000041DBC0 string=0x000000000041DBC4 ""
 *   insn=0x000000000041DBD4 string=0x000000000041DBD8 "6"
 *   insn=0x000000000041DBDC string=0x000000000041DBE0 ""
 *   insn=0x000000000041DBEC string=0x000000000041DBF0 "\t@"
 *   insn=0x000000000041DBFC string=0x000000000041DC00 ""
 *   insn=0x000000000041DC0C string=0x000000000041DC10 "@"
 *   insn=0x000000000041DC1C string=0x000000000041DC20 "6"
 *   insn=0x000000000041DC20 string=0x000000000041DC64 "v"
 *   insn=0x000000000041DC24 string=0x000000000041DC28 ""
 *   insn=0x000000000041DC34 string=0x000000000041DC38 "\t@"
 *   insn=0x000000000041DC44 string=0x000000000041DC48 ""
 *   insn=0x000000000041DC54 string=0x000000000041DC58 "@"
 *   insn=0x000000000041DC64 string=0x000000000041DC68 "6"
 *   insn=0x000000000041DC68 string=0x000000000041DCAC "v"
 *   insn=0x000000000041DC6C string=0x000000000041DC70 ""
 *   insn=0x000000000041DC7C string=0x000000000041DC80 "\t@"
 *   insn=0x000000000041DC8C string=0x000000000041DC90 ""
 *   insn=0x000000000041DC9C string=0x000000000041DCA0 "@"
 *   insn=0x000000000041DCAC string=0x000000000041DCB0 "6"
 *   insn=0x000000000041DCB0 string=0x000000000041DCF4 "`"
 *   insn=0x000000000041DCB4 string=0x000000000041DCB8 ""
 *   insn=0x000000000041DCC4 string=0x000000000041DCC8 "\t@"
 *   insn=0x000000000041DCD4 string=0x000000000041DCD8 ""
 *   insn=0x000000000041DCE4 string=0x000000000041DCE8 "@"
 *   insn=0x000000000041DCF4 string=0x000000000041DCF8 "@"
 *   insn=0x000000000041DCF8 string=0x000000000041DD00 "`"
 *   insn=0x000000000041DCFC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000041DD00 string=0x000000000041DD04 "@"
 *   insn=0x000000000041DD04 string=0x000000000041DD0C "`"
 *   insn=0x000000000041DD10 string=0x000000000041DD14 "@"
 *   insn=0x000000000041DD14 string=0x000000000041DD18 ""
 *   insn=0x000000000041DD18 string=0x000000000041DD1C ""
 *   insn=0x000000000041DD20 string=0x000000000041DD24 ""
 *   insn=0x000000000041DD24 string=0x000000000041DD28 ""
 *   insn=0x000000000041DD34 string=0x000000000041DD38 "@"
 *   insn=0x000000000041DD34 string=0x000000000041DD54 "t"
 *   insn=0x000000000041DD38 string=0x000000000041DD3C ""
 *   insn=0x000000000041DD3C string=0x000000000041DD40 ""
 *   insn=0x000000000041DD44 string=0x000000000041DD48 ""
 *   insn=0x000000000041DD48 string=0x000000000041DD4C ""
 *   insn=0x000000000041DD54 string=0x000000000041DD58 "4"
 *   insn=0x000000000041DD5C string=0x000000000041DD60 ""
 *   insn=0x000000000041DD6C string=0x000000000041DD70 "\t@"
 *   insn=0x000000000041DD7C string=0x000000000041DD80 ""
 *   insn=0x000000000041DD8C string=0x000000000041DD90 "@"
 *   insn=0x000000000041DD9C string=0x000000000041DDA0 ")"
 *   insn=0x000000000041DDA0 string=0x000000000041DDA4 ")"
 *   insn=0x000000000041DDAC string=0x000000000041DDB0 ")A"
 *   insn=0x000000000041DDB0 string=0x000000000041DDB4 "i"
 *   insn=0x000000000041DDB8 string=0x000000000041DDBC ")"
 *   insn=0x000000000041DDBC string=0x000000000041DDC0 ")=G"
 *   insn=0x000000000041DDC0 string=0x000000000041DDC4 "!"
 *   insn=0x000000000041DDC8 string=0x000000000041DDCC "\t"
 *   insn=0x000000000041DDC8 string=0x000000000041DDFC "\t"
 *   insn=0x000000000041DDCC string=0x000000000041DDD0 "*"
 *   insn=0x000000000041DDD0 string=0x000000000041DDD4 "\n"
 *   insn=0x000000000041DDD8 string=0x000000000041DDDC "?"
 *   insn=0x000000000041DDDC string=0x000000000041DDE0 "l"
 *   insn=0x000000000041DDE4 string=0x000000000041DDE8 "o1"
 *   insn=0x000000000041DDFC string=0x000000000041DE00 "*"
 *   insn=0x000000000041DE00 string=0x000000000041DE04 "\n"
 *   insn=0x000000000041DE04 string=0x000000000041DE08 "?"
 *   insn=0x000000000041DE1C string=0x000000000041DE20 "\t\t@"
 *   insn=0x000000000041DE20 string=0x000000000041DE24 ")"
 *   insn=0x000000000041DE24 string=0x000000000041DE28 "\t\t"
 *   insn=0x000000000041DE2C string=0x000000000041DE30 "\t"
 *   insn=0x000000000041DE30 string=0x000000000041DE34 ")"
 *   insn=0x000000000041DE38 string=0x000000000041DE3C " "
 *   insn=0x000000000041DE4C string=0x000000000041DE50 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapMenuPage::MapMenuPage(Caver::GUILabel **this)
{
  char *v2; // x0
  Caver::GUILabel *v3; // x0
  int v4; // w8
  void *v5; // x0
  Caver::MapView *v6; // x0
  Caver::GUILabel *v7; // x21
  Caver::GUILabel *v8; // x9
  Caver::GUILabel *v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  Caver::GUIScrollView *v12; // x0
  Caver::GUILabel *v13; // x21
  Caver::GUILabel *v14; // x9
  Caver::GUILabel *v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  Caver::GUILabel *v18; // x9
  void (__fastcall *v19)(Caver::GUILabel **, Caver::GUILabel **); // x8
  Caver::GUILabel *v20; // x9
  Caver::GUILabel *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  void (*v24)(void); // x8
  Caver::GUILabel *v25; // x9
  Caver::GUILabel *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x8
  Caver::StripeView *v29; // x0
  Caver::GUILabel *v30; // x21
  Caver::GUILabel *v31; // x9
  Caver::GUILabel *v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 (__fastcall *v35)(Caver::GUILabel **, Caver::GUILabel **); // x8
  Caver::GUILabel *v36; // x9
  Caver::TextureLibrary *v37; // x0
  Caver::GUILabel *v38; // x21
  __int64 v39; // x8
  __int64 v40; // x8
  char *v41; // x0
  char *v42; // x0
  Caver::GUILabel *v43; // x0
  Caver::FontLibrary *v44; // x0
  Caver::GUILabel *v45; // x21
  Caver::GUILabel *v46; // x9
  Caver::GUILabel *v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  Caver::GUILabel *v50; // x21
  Caver::FontLibrary *v51; // x0
  Caver::GUILabel *v52; // x8
  Caver::GUILabel *v53; // x9
  _QWORD *v54; // x22
  __int64 v55; // x8
  __int64 v56; // x8
  Caver::GUILabel *v57; // x21
  __int64 v58; // x8
  __int64 v59; // x8
  Caver::GUILabel *v60; // x21
  _QWORD *v61; // x22
  __int64 v62; // x8
  __int64 v63; // x8
  Caver::GUILabel *v64; // x9
  void (__fastcall *v65)(Caver::GUILabel **, Caver::GUILabel **); // x8
  Caver::GUILabel *v66; // x21
  __int64 v67; // x8
  __int64 v68; // x8
  int v69; // w8
  __int64 result; // x0
  int v71; // w8
  unsigned int *v72; // x8
  int v73; // w9
  unsigned int *v74; // x8
  int v75; // w9
  unsigned int *v76; // x8
  int v77; // w9
  unsigned int *v78; // x8
  int v79; // w9
  _DWORD *v80; // [xsp+10h] [xbp-70h]
  __int64 v81; // [xsp+18h] [xbp-68h] BYREF
  Caver::GUILabel *v82; // [xsp+20h] [xbp-60h] BYREF
  Caver::GUILabel *v83; // [xsp+28h] [xbp-58h]
  __int64 v84; // [xsp+38h] [xbp-48h]

  v84 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView((Caver::GUIView *)this);
  this[30] = (Caver::GUILabel *)&byte_6FD2F8;
  this[31] = (Caver::GUILabel *)off_6D2B40;
  *this = (Caver::GUILabel *)off_6D29E0;
  this[32] = 0;
  this[33] = 0;
  Caver::GUIRoundedRect::GUIRoundedRect((Caver::GUIRoundedRect *)(this + 34));
  memset(this + 55, 0, 0x41u);
  sub_566BB8((int)&v82, "WORLD MAP");
  sub_56A6A8(this + 30);
  v2 = (char *)v82 - 24;
  if ( (__int64 *)((char *)v82 - 24) != &qword_6FD2E0 )
  {
    v72 = (unsigned int *)((char *)v82 - 8);
    if ( &pthread_create )
    {
      do
        v73 = __ldaxr(v72);
      while ( __stlxr(v73 - 1, v72) );
    }
    else
    {
      v73 = (*v72)--;
    }
    if ( v73 <= 0 )
      operator delete(v2);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v2);
  sub_566BB8((int)&v81, "ui_menu_container");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIRoundedRect::InitWithTexture();
  v3 = v82;
  if ( v82 )
  {
    v4 = *((_DWORD *)v82 + 2) - 1;
    *((_DWORD *)v82 + 2) = v4;
    if ( !v4 )
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = (void *)(v81 - 24);
  if ( (__int64 *)(v81 - 24) != &qword_6FD2E0 )
  {
    v74 = (unsigned int *)(v81 - 8);
    if ( &pthread_create )
    {
      do
        v75 = __ldaxr(v74);
      while ( __stlxr(v75 - 1, v74) );
    }
    else
    {
      v75 = (*v74)--;
    }
    if ( v75 <= 0 )
      operator delete(v5);
  }
  v6 = (Caver::MapView *)operator new(0x420u);
  Caver::MapView::MapView(v6);
  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>();
  v7 = this[58];
  v8 = v82;
  v82 = this[57];
  v9 = v83;
  this[57] = v8;
  this[58] = v9;
  v83 = v7;
  if ( v7 )
  {
    v10 = *((_QWORD *)v7 + 1) - 1LL;
    *((_QWORD *)v7 + 1) = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v7 + 16LL))(v7);
      v11 = *((_QWORD *)v7 + 2) - 1LL;
      *((_QWORD *)v7 + 2) = v11;
      if ( !v11 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v7 + 24LL))(v7);
    }
  }
  *((_QWORD *)this[57] + 30) = this + 31;
  v12 = (Caver::GUIScrollView *)operator new(0x1F0u);
  Caver::GUIScrollView::GUIScrollView(v12);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>();
  v13 = this[56];
  v14 = v82;
  v82 = this[55];
  v15 = v83;
  this[55] = v14;
  this[56] = v15;
  v83 = v13;
  if ( v13 )
  {
    v16 = *((_QWORD *)v13 + 1) - 1LL;
    *((_QWORD *)v13 + 1) = v16;
    if ( !v16 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v13 + 16LL))(v13);
      v17 = *((_QWORD *)v13 + 2) - 1LL;
      *((_QWORD *)v13 + 2) = v17;
      if ( !v17 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v13 + 24LL))(v13);
    }
  }
  v18 = this[55];
  *((_BYTE *)v18 + 434) = 1;
  v19 = (void (__fastcall *)(Caver::GUILabel **, Caver::GUILabel **))*((_QWORD *)*this + 12);
  v82 = v18;
  v20 = this[56];
  v83 = v20;
  if ( v20 )
    ++*((_QWORD *)v20 + 1);
  v19(this, &v82);
  v21 = v83;
  if ( v83 )
  {
    v22 = *((_QWORD *)v83 + 1) - 1LL;
    *((_QWORD *)v83 + 1) = v22;
    if ( !v22 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v21 + 16LL))(v21);
      v23 = *((_QWORD *)v21 + 2) - 1LL;
      *((_QWORD *)v21 + 2) = v23;
      if ( !v23 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v21 + 24LL))(v21);
    }
  }
  v24 = *(void (**)(void))(*(_QWORD *)this[55] + 96LL);
  v82 = this[57];
  v25 = this[58];
  v83 = v25;
  if ( v25 )
    ++*((_QWORD *)v25 + 1);
  v24();
  v26 = v83;
  if ( v83 )
  {
    v27 = *((_QWORD *)v83 + 1) - 1LL;
    *((_QWORD *)v83 + 1) = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v26 + 16LL))(v26);
      v28 = *((_QWORD *)v26 + 2) - 1LL;
      *((_QWORD *)v26 + 2) = v28;
      if ( !v28 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v26 + 24LL))(v26);
    }
  }
  v29 = (Caver::StripeView *)operator new(0x138u);
  Caver::StripeView::StripeView(v29);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>();
  v30 = this[62];
  v31 = v82;
  v82 = this[61];
  v32 = v83;
  this[61] = v31;
  this[62] = v32;
  v83 = v30;
  if ( v30 )
  {
    v33 = *((_QWORD *)v30 + 1) - 1LL;
    *((_QWORD *)v30 + 1) = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v30 + 16LL))(v30);
      v34 = *((_QWORD *)v30 + 2) - 1LL;
      *((_QWORD *)v30 + 2) = v34;
      if ( !v34 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v30 + 24LL))(v30);
    }
  }
  v35 = (__int64 (__fastcall *)(Caver::GUILabel **, Caver::GUILabel **))*((_QWORD *)*this + 12);
  v82 = this[61];
  v36 = this[62];
  v83 = v36;
  if ( v36 )
    ++*((_QWORD *)v36 + 1);
  v37 = (Caver::TextureLibrary *)v35(this, &v82);
  v38 = v83;
  if ( v83 )
  {
    v39 = *((_QWORD *)v83 + 1) - 1LL;
    *((_QWORD *)v83 + 1) = v39;
    if ( !v39 )
    {
      v37 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v38 + 16LL))(v38);
      v40 = *((_QWORD *)v38 + 2) - 1LL;
      *((_QWORD *)v38 + 2) = v40;
      if ( !v40 )
        v37 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v38 + 24LL))(v38);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v37);
  sub_566BB8((int)&v82, "ui_menu_button");
  Caver::TextureLibrary::TextureForName();
  v41 = (char *)v82 - 24;
  if ( (__int64 *)((char *)v82 - 24) != &qword_6FD2E0 )
  {
    v76 = (unsigned int *)((char *)v82 - 8);
    if ( &pthread_create )
    {
      do
        v77 = __ldaxr(v76);
      while ( __stlxr(v77 - 1, v76) );
    }
    else
    {
      v77 = (*v76)--;
    }
    if ( v77 <= 0 )
      operator delete(v41);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v41);
  sub_566BB8((int)&v82, "ui_menu_button_pressed");
  Caver::TextureLibrary::TextureForName();
  v42 = (char *)v82 - 24;
  if ( (__int64 *)((char *)v82 - 24) != &qword_6FD2E0 )
  {
    v78 = (unsigned int *)((char *)v82 - 8);
    if ( &pthread_create )
    {
      do
        v79 = __ldaxr(v78);
      while ( __stlxr(v79 - 1, v78) );
    }
    else
    {
      v79 = (*v78)--;
    }
    if ( v79 <= 0 )
      operator delete(v42);
  }
  v43 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v43);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v45 = this[60];
  v46 = v82;
  v82 = this[59];
  v47 = v83;
  this[59] = v46;
  this[60] = v47;
  v83 = v45;
  if ( v45 )
  {
    v48 = *((_QWORD *)v45 + 1) - 1LL;
    *((_QWORD *)v45 + 1) = v48;
    if ( !v48 )
    {
      v44 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v45 + 16LL))(v45);
      v49 = *((_QWORD *)v45 + 2) - 1LL;
      *((_QWORD *)v45 + 2) = v49;
      if ( !v49 )
        v44 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v45 + 24LL))(v45);
    }
  }
  v50 = this[59];
  v51 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v44);
  Caver::FontLibrary::DefaultFont(v51);
  v52 = v82;
  if ( v82 != *((Caver::GUILabel **)v50 + 30) )
  {
    v53 = v83;
    if ( v83 )
      ++*((_QWORD *)v83 + 1);
    v54 = (_QWORD *)*((_QWORD *)v50 + 31);
    *((_QWORD *)v50 + 30) = v52;
    *((_QWORD *)v50 + 31) = v53;
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
    Caver::GUILabel::UpdateText(v50);
  }
  v57 = v83;
  if ( v83 )
  {
    v58 = *((_QWORD *)v83 + 1) - 1LL;
    *((_QWORD *)v83 + 1) = v58;
    if ( !v58 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v57 + 16LL))(v57);
      v59 = *((_QWORD *)v57 + 2) - 1LL;
      *((_QWORD *)v57 + 2) = v59;
      if ( !v59 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v57 + 24LL))(v57);
    }
  }
  v60 = this[59];
  if ( *((unsigned __int8 *)v60 + 264) != 255
    || *((unsigned __int8 *)v60 + 265) != 255
    || *((unsigned __int8 *)v60 + 266) != 255
    || *((unsigned __int8 *)v60 + 267) != 255 )
  {
    v61 = (_QWORD *)*((_QWORD *)v60 + 35);
    *((_DWORD *)v60 + 66) = -1;
    *((_QWORD *)v60 + 34) = 0;
    *((_QWORD *)v60 + 35) = 0;
    if ( v61 )
    {
      v62 = v61[1] - 1LL;
      v61[1] = v62;
      if ( !v62 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v61 + 16LL))(v61);
        v63 = v61[2] - 1LL;
        v61[2] = v63;
        if ( !v63 )
          (*(void (__fastcall **)(_QWORD *))(*v61 + 24LL))(v61);
      }
    }
    Caver::GUILabel::UpdateText(v60);
    v60 = this[59];
  }
  v64 = this[60];
  v65 = (void (__fastcall *)(Caver::GUILabel **, Caver::GUILabel **))*((_QWORD *)*this + 12);
  v82 = v60;
  v83 = v64;
  if ( v64 )
    ++*((_QWORD *)v64 + 1);
  v65(this, &v82);
  v66 = v83;
  if ( v83 )
  {
    v67 = *((_QWORD *)v83 + 1) - 1LL;
    *((_QWORD *)v83 + 1) = v67;
    if ( !v67 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v66 + 16LL))(v66);
      v68 = *((_QWORD *)v66 + 2) - 1LL;
      *((_QWORD *)v66 + 2) = v68;
      if ( !v68 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v66 + 24LL))(v66);
    }
  }
  if ( v80 )
  {
    v69 = v80[2] - 1;
    v80[2] = v69;
    if ( !v69 )
      (*(void (__fastcall **)())(*(_QWORD *)v80 + 8LL))();
  }
  result = v81;
  if ( v81 )
  {
    v71 = *(_DWORD *)(v81 + 8) - 1;
    *(_DWORD *)(v81 + 8) = v71;
    if ( !v71 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

