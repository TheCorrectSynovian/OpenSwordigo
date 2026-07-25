/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EC094
 * Mangled: _ZN5Caver16StoreProductViewC2Ev
 * Demangled: Caver::StoreProductView::StoreProductView(void)
 *
 * Callers: 1
 *   0x00000000001FA3F0  Caver::StoreProductView::StoreProductView(void)
 *
 * Callees: 27
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F56B0  Caver::GameInterfaceBuilder::PlainButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F9150  Caver::GUIView::GUIView(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x00000000001FCFC0  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000002026D0  Caver::FontLibrary::SmallDefaultFont(void)
 *   0x0000000000202F10  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 511
 *   insn=0x00000000003EC0A8 string=0x00000000003EC0AC "V"
 *   insn=0x00000000003EC0C0 string=0x00000000003EC0C4 ""
 *   insn=0x00000000003EC0D0 string=0x00000000003EC0D4 "A"
 *   insn=0x00000000003EC0E0 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003EC0E4 string=0x00000000003EC0E8 ">%"
 *   insn=0x00000000003EC0E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003EC0F4 string=0x00000000001F7430 "0'"
 *   insn=0x00000000003EC100 string=0x00000000003EC104 "hVO"
 *   insn=0x00000000003EC100 string=0x00000000001F5420 "P'"
 *   insn=0x00000000003EC110 string=0x00000000003EC114 "i""
 *   insn=0x00000000003EC118 string=0x00000000003EC11C "5"
 *   insn=0x00000000003EC120 string=0x00000000003EC124 ""
 *   insn=0x00000000003EC130 string=0x00000000003EC134 "\t@"
 *   insn=0x00000000003EC140 string=0x00000000003EC144 ""
 *   insn=0x00000000003EC150 string=0x00000000003EC154 "@"
 *   insn=0x00000000003EC160 string=0x00000000003EC164 "{8"
 *   insn=0x00000000003EC164 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003EC168 string=0x00000000003EC16C "!"
 *   insn=0x00000000003EC16C string=0x0000000000593251 "ui_frame_dark"
 *   insn=0x00000000003EC18C string=0x00000000003EC190 "M"
 *   insn=0x00000000003EC19C string=0x00000000003EC1A0 "tW"
 *   insn=0x00000000003EC1A8 string=0x00000000003EC1AC "@"
 *   insn=0x00000000003EC1AC string=0x00000000003EC1B0 ""
 *   insn=0x00000000003EC1B0 string=0x00000000003EC1B4 ""
 *   insn=0x00000000003EC1B8 string=0x00000000003EC1BC ""
 *   insn=0x00000000003EC1BC string=0x00000000003EC1C0 ""
 *   insn=0x00000000003EC1DC string=0x00000000003EC1E0 "h"
 *   insn=0x00000000003EC1E0 string=0x00000000003EC1E4 "iz@"
 *   insn=0x00000000003EC1E4 string=0x00000000003EC1E8 "1@"
 *   insn=0x00000000003EC1EC string=0x00000000003EC1F0 "i~@"
 *   insn=0x00000000003EC1F8 string=0x00000000003EC1FC "*"
 *   insn=0x00000000003EC1FC string=0x00000000003EC200 "J"
 *   insn=0x00000000003EC200 string=0x00000000003EC204 "*"
 *   insn=0x00000000003EC214 string=0x00000000003EC218 "4"
 *   insn=0x00000000003EC218 string=0x00000000003EC25C "=8"
 *   insn=0x00000000003EC21C string=0x00000000003EC220 ""
 *   insn=0x00000000003EC22C string=0x00000000003EC230 "\t@"
 *   insn=0x00000000003EC23C string=0x00000000003EC240 ""
 *   insn=0x00000000003EC24C string=0x00000000003EC250 "@"
 *   insn=0x00000000003EC264 string=0x000000000058FB21 "ui_guide_buy"
 *   insn=0x00000000003EC270 string=0x00000000003EC274 "Q"
 *   insn=0x00000000003EC294 string=0x00000000003EC298 "AD"
 *   insn=0x00000000003EC298 string=0x00000000003EC29C "-8"
 *   insn=0x00000000003EC2A4 string=0x000000000058FB2E "ui_guide_buy_pressed"
 *   insn=0x00000000003EC2B0 string=0x00000000003EC2B4 "A"
 *   insn=0x00000000003EC2D4 string=0x00000000003EC2D8 "aC"
 *   insn=0x00000000003EC2EC string=0x00000000001F56B0 "P'"
 *   insn=0x00000000003EC2F4 string=0x00000000003EC2F8 "\n"
 *   insn=0x00000000003EC2F4 string=0x00000000003EC304 "t"
 *   insn=0x00000000003EC2F8 string=0x00000000003EC2FC "J"
 *   insn=0x00000000003EC2FC string=0x00000000003EC300 "\n"
 *   insn=0x00000000003EC304 string=0x00000000003EC308 "i""
 *   insn=0x00000000003EC308 string=0x00000000003EC30C "4"
 *   insn=0x00000000003EC310 string=0x00000000003EC314 ""
 *   insn=0x00000000003EC320 string=0x00000000003EC324 "\t@"
 *   insn=0x00000000003EC330 string=0x00000000003EC334 ""
 *   insn=0x00000000003EC340 string=0x00000000003EC344 "@"
 *   insn=0x00000000003EC350 string=0x00000000003EC354 "4"
 *   insn=0x00000000003EC358 string=0x00000000003EC35C ""
 *   insn=0x00000000003EC368 string=0x00000000003EC36C "\t@"
 *   insn=0x00000000003EC378 string=0x00000000003EC37C ""
 *   insn=0x00000000003EC388 string=0x00000000003EC38C "@"
 *   insn=0x00000000003EC39C string=0x00000000003EC3A0 "@"
 *   insn=0x00000000003EC3A0 string=0x00000000003EC3A4 ""
 *   insn=0x00000000003EC3A4 string=0x00000000003EC3A8 ""
 *   insn=0x00000000003EC3AC string=0x00000000003EC3B0 ""
 *   insn=0x00000000003EC3B0 string=0x00000000003EC3B4 ""
 *   insn=0x00000000003EC3C0 string=0x00000000003EC3C4 "@"
 *   insn=0x00000000003EC3C0 string=0x00000000003EC3E0 "t"
 *   insn=0x00000000003EC3C4 string=0x00000000003EC3C8 ""
 *   insn=0x00000000003EC3C8 string=0x00000000003EC3CC ""
 *   insn=0x00000000003EC3D0 string=0x00000000003EC3D4 ""
 *   insn=0x00000000003EC3D4 string=0x00000000003EC3D8 ""
 *   insn=0x00000000003EC3E4 string=0x000000000058F6A7 "Loading..."
 *   insn=0x00000000003EC400 string=0x00000000001FC220 "0'"
 *   insn=0x00000000003EC410 string=0x00000000003EC414 "`"
 *   insn=0x00000000003EC420 string=0x00000000003EC424 "`"
 *   insn=0x00000000003EC430 string=0x00000000003EC434 "`"
 *   insn=0x00000000003EC438 string=0x00000000003EC43C "\nb"
 *   insn=0x00000000003EC43C string=0x00000000003EC440 "\t@G"
 *   insn=0x00000000003EC440 string=0x00000000003EC444 "Y@"
 *   insn=0x00000000003EC450 string=0x00000000003EC454 "G;"
 *   insn=0x00000000003EC454 string=0x00000000003EC458 "h"
 *   insn=0x00000000003EC454 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003EC458 string=0x00000000003EC45C "i"
 *   insn=0x00000000003EC45C string=0x00000000003EC460 "1@"
 *   insn=0x00000000003EC464 string=0x00000000003EC468 "i"
 *   insn=0x00000000003EC470 string=0x00000000003EC474 "*"
 *   insn=0x00000000003EC474 string=0x00000000003EC478 "J"
 *   insn=0x00000000003EC478 string=0x00000000003EC47C "*"
 *   insn=0x00000000003EC48C string=0x00000000003EC490 "4"
 *   insn=0x00000000003EC494 string=0x00000000003EC498 ""
 *   insn=0x00000000003EC4A4 string=0x00000000003EC4A8 "\t@"
 *   insn=0x00000000003EC4B4 string=0x00000000003EC4B8 ""
 *   insn=0x00000000003EC4C4 string=0x00000000003EC4C8 "@"
 *   insn=0x00000000003EC4D4 string=0x00000000003EC4D8 "B$"
 *   insn=0x00000000003EC4F0 string=0x00000000003EC4F4 "hRQ"
 *   insn=0x00000000003EC500 string=0x00000000003EC504 "i""
 *   insn=0x00000000003EC508 string=0x00000000003EC50C "4"
 *   insn=0x00000000003EC50C string=0x00000000003EC550 "h"
 *   insn=0x00000000003EC510 string=0x00000000003EC514 ""
 *   insn=0x00000000003EC520 string=0x00000000003EC524 "\t@"
 *   insn=0x00000000003EC530 string=0x00000000003EC534 ""
 *   insn=0x00000000003EC540 string=0x00000000003EC544 "@"
 *   insn=0x00000000003EC550 string=0x00000000003EC554 "i"
 *   insn=0x00000000003EC554 string=0x00000000003EC558 "1@"
 *   insn=0x00000000003EC55C string=0x00000000003EC560 "i"
 *   insn=0x00000000003EC568 string=0x00000000003EC56C "*"
 *   insn=0x00000000003EC56C string=0x00000000003EC570 "J"
 *   insn=0x00000000003EC570 string=0x00000000003EC574 "*"
 *   insn=0x00000000003EC584 string=0x00000000003EC588 "4"
 *   insn=0x00000000003EC58C string=0x00000000003EC590 ""
 *   insn=0x00000000003EC59C string=0x00000000003EC5A0 "\t@"
 *   insn=0x00000000003EC5AC string=0x00000000003EC5B0 ""
 *   insn=0x00000000003EC5BC string=0x00000000003EC5C0 "@"
 *   insn=0x00000000003EC5DC string=0x00000000001F9150 "0'"
 *   insn=0x00000000003EC5E4 string=0x00000000003EC5E8 "vB"
 *   insn=0x00000000003EC5E8 string=0x00000000003EC5EC "hRR"
 *   insn=0x00000000003EC5E8 string=0x00000000001FCFC0 "0'"
 *   insn=0x00000000003EC5F8 string=0x00000000003EC5FC "i""
 *   insn=0x00000000003EC600 string=0x00000000003EC604 "4"
 *   insn=0x00000000003EC604 string=0x00000000003EC648 "h"
 *   insn=0x00000000003EC608 string=0x00000000003EC60C ""
 *   insn=0x00000000003EC618 string=0x00000000003EC61C "\t@"
 *   insn=0x00000000003EC628 string=0x00000000003EC62C ""
 *   insn=0x00000000003EC638 string=0x00000000003EC63C "@"
 *   insn=0x00000000003EC648 string=0x00000000003EC64C "a"
 *   insn=0x00000000003EC64C string=0x00000000003EC650 "1@"
 *   insn=0x00000000003EC668 string=0x00000000003EC66C "S"
 *   insn=0x00000000003EC66C string=0x00000000003EC670 ""
 *   insn=0x00000000003EC68C string=0x00000000001F8CE0 "0'"
 *   insn=0x00000000003EC694 string=0x00000000003EC698 "\n"
 *   insn=0x00000000003EC694 string=0x00000000003EC6A4 "t"
 *   insn=0x00000000003EC698 string=0x00000000003EC69C "J"
 *   insn=0x00000000003EC69C string=0x00000000003EC6A0 "\n"
 *   insn=0x00000000003EC6A4 string=0x00000000003EC6A8 "i""
 *   insn=0x00000000003EC6A8 string=0x00000000003EC6AC "4"
 *   insn=0x00000000003EC6B0 string=0x00000000003EC6B4 ""
 *   insn=0x00000000003EC6C0 string=0x00000000003EC6C4 "\t@"
 *   insn=0x00000000003EC6D0 string=0x00000000003EC6D4 ""
 *   insn=0x00000000003EC6E0 string=0x00000000003EC6E4 "@"
 *   insn=0x00000000003EC6F0 string=0x00000000003EC6F4 "4"
 *   insn=0x00000000003EC6F8 string=0x00000000003EC6FC ""
 *   insn=0x00000000003EC708 string=0x00000000003EC70C "\t@"
 *   insn=0x00000000003EC718 string=0x00000000003EC71C ""
 *   insn=0x00000000003EC728 string=0x00000000003EC72C "@"
 *   insn=0x00000000003EC740 string=0x00000000003EC744 "A""
 *   insn=0x00000000003EC744 string=0x00000000003EC748 "`"
 *   insn=0x00000000003EC748 string=0x00000000003EC74C "i"
 *   insn=0x00000000003EC74C string=0x00000000003EC750 ""
 *   insn=0x00000000003EC750 string=0x00000000003EC754 "1@"
 *   insn=0x00000000003EC758 string=0x00000000003EC75C "i"
 *   insn=0x00000000003EC764 string=0x00000000003EC768 "*"
 *   insn=0x00000000003EC768 string=0x00000000003EC76C "J"
 *   insn=0x00000000003EC76C string=0x00000000003EC770 "*"
 *   insn=0x00000000003EC77C string=0x00000000003EC780 "4"
 *   insn=0x00000000003EC784 string=0x00000000003EC788 ""
 *   insn=0x00000000003EC794 string=0x00000000003EC798 "\t@"
 *   insn=0x00000000003EC7A4 string=0x00000000003EC7A8 ""
 *   insn=0x00000000003EC7B4 string=0x00000000003EC7B8 "@"
 *   insn=0x00000000003EC7D4 string=0x00000000003EC7D8 ""
 *   insn=0x00000000003EC7F0 string=0x00000000003EC7F4 ";1"
 *   insn=0x00000000003EC7FC string=0x00000000003EC800 "\n"
 *   insn=0x00000000003EC7FC string=0x00000000003EC80C "t"
 *   insn=0x00000000003EC800 string=0x00000000003EC804 "J"
 *   insn=0x00000000003EC804 string=0x00000000003EC808 "\n"
 *   insn=0x00000000003EC80C string=0x00000000003EC810 "i""
 *   insn=0x00000000003EC810 string=0x00000000003EC814 "4"
 *   insn=0x00000000003EC818 string=0x00000000003EC81C ""
 *   insn=0x00000000003EC828 string=0x00000000003EC82C "\t@"
 *   insn=0x00000000003EC838 string=0x00000000003EC83C ""
 *   insn=0x00000000003EC848 string=0x00000000003EC84C "@"
 *   insn=0x00000000003EC858 string=0x00000000003EC85C "4"
 *   insn=0x00000000003EC860 string=0x00000000003EC864 ""
 *   insn=0x00000000003EC870 string=0x00000000003EC874 "\t@"
 *   insn=0x00000000003EC880 string=0x00000000003EC884 ""
 *   insn=0x00000000003EC890 string=0x00000000003EC894 "@"
 *   insn=0x00000000003EC8A8 string=0x00000000003EC8AC "!"
 *   insn=0x00000000003EC8AC string=0x00000000003EC8B0 "t"
 *   insn=0x00000000003EC8C8 string=0x00000000003EC8CC "`"
 *   insn=0x00000000003EC8D4 string=0x00000000003EC8D8 "*"
 *   insn=0x00000000003EC8D8 string=0x00000000003EC8DC "J"
 *   insn=0x00000000003EC8DC string=0x00000000003EC8E0 "*"
 *   insn=0x00000000003EC8E8 string=0x00000000003EC8EC "5"
 *   insn=0x00000000003EC8F0 string=0x00000000003EC8F4 ""
 *   insn=0x00000000003EC900 string=0x00000000003EC904 "\t@"
 *   insn=0x00000000003EC910 string=0x00000000003EC914 ""
 *   insn=0x00000000003EC920 string=0x00000000003EC924 "@"
 *   insn=0x00000000003EC934 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003EC938 string=0x00000000003EC93C "4"
 *   insn=0x00000000003EC93C string=0x00000000003EC980 "t"
 *   insn=0x00000000003EC940 string=0x00000000003EC944 ""
 *   insn=0x00000000003EC950 string=0x00000000003EC954 "\t@"
 *   insn=0x00000000003EC960 string=0x00000000003EC964 ""
 *   insn=0x00000000003EC970 string=0x00000000003EC974 "@"
 *   insn=0x00000000003EC988 string=0x00000000003EC98C "A"
 *   insn=0x00000000003EC9AC string=0x00000000003EC9B0 "@"
 *   insn=0x00000000003EC9B0 string=0x00000000003ECA18 "`"
 *   insn=0x00000000003EC9B4 string=0x00000000003EC9B8 ""
 *   insn=0x00000000003EC9C4 string=0x00000000003EC9C8 "5"
 *   insn=0x00000000003EC9CC string=0x00000000003EC9D0 ""
 *   insn=0x00000000003EC9DC string=0x00000000003EC9E0 "\t@"
 *   insn=0x00000000003EC9EC string=0x00000000003EC9F0 ""
 *   insn=0x00000000003EC9FC string=0x00000000003ECA00 "@"
 *   insn=0x00000000003ECA10 string=0x00000000003ECA14 "t"
 *   insn=0x00000000003ECA18 string=0x00000000003ECA1C "i"
 *   insn=0x00000000003ECA1C string=0x00000000003ECA20 ""
 *   insn=0x00000000003ECA20 string=0x00000000003ECA24 "1@"
 *   insn=0x00000000003ECA2C string=0x00000000003ECA30 "*"
 *   insn=0x00000000003ECA30 string=0x00000000003ECA34 "J"
 *   insn=0x00000000003ECA34 string=0x00000000003ECA38 "*"
 *   insn=0x00000000003ECA44 string=0x00000000003ECA48 "4"
 *   insn=0x00000000003ECA4C string=0x00000000003ECA50 ""
 *   insn=0x00000000003ECA5C string=0x00000000003ECA60 "\t@"
 *   insn=0x00000000003ECA6C string=0x00000000003ECA70 ""
 *   insn=0x00000000003ECA7C string=0x00000000003ECA80 "@"
 *   insn=0x00000000003ECA90 string=0x00000000003ECA94 "@"
 *   insn=0x00000000003ECA94 string=0x00000000003ECA98 ""
 *   insn=0x00000000003ECA98 string=0x00000000003ECA9C ""
 *   insn=0x00000000003ECAA0 string=0x00000000003ECAA4 ""
 *   insn=0x00000000003ECAA4 string=0x00000000003ECAA8 ""
 *   insn=0x00000000003ECAB4 string=0x00000000003ECAB8 "@"
 *   insn=0x00000000003ECAB8 string=0x00000000003ECABC ""
 *   insn=0x00000000003ECABC string=0x00000000003ECAC0 ""
 *   insn=0x00000000003ECAC4 string=0x00000000003ECAC8 ""
 *   insn=0x00000000003ECAC8 string=0x00000000003ECACC ""
 *   insn=0x00000000003ECAFC string=0x00000000003ECB00 ")=G"
 *   insn=0x00000000003ECB00 string=0x00000000003ECB04 "!"
 *   insn=0x00000000003ECB04 string=0x00000000003ECB08 "i"
 *   insn=0x00000000003ECB08 string=0x00000000003ECB0C "\t"
 *   insn=0x00000000003ECB08 string=0x00000000003ECBD4 "\t"
 *   insn=0x00000000003ECB0C string=0x00000000003ECB10 "*"
 *   insn=0x00000000003ECB10 string=0x00000000003ECB14 "\n"
 *   insn=0x00000000003ECB18 string=0x00000000003ECB1C "1"
 *   insn=0x00000000003ECB1C string=0x00000000003ECBE0 "?"
 *   insn=0x00000000003ECB20 string=0x00000000003ECB24 ")=G"
 *   insn=0x00000000003ECB24 string=0x00000000003ECB28 "!"
 *   insn=0x00000000003ECB28 string=0x00000000003ECB2C "I"
 *   insn=0x00000000003ECB2C string=0x00000000003ECB30 "\t"
 *   insn=0x00000000003ECB2C string=0x00000000003ECBF4 "\t"
 *   insn=0x00000000003ECB30 string=0x00000000003ECB34 "*"
 *   insn=0x00000000003ECB34 string=0x00000000003ECB38 "\n"
 *   insn=0x00000000003ECB3C string=0x00000000003ECB40 "0"
 *   insn=0x00000000003ECB40 string=0x00000000003ECC00 "?"
 *   insn=0x00000000003ECB44 string=0x00000000003ECB48 ")=G"
 *   insn=0x00000000003ECB48 string=0x00000000003ECB4C "!"
 *   insn=0x00000000003ECB4C string=0x00000000003ECB50 ")"
 *   insn=0x00000000003ECB50 string=0x00000000003ECB54 "\t"
 *   insn=0x00000000003ECB50 string=0x00000000003ECC14 "\t"
 *   insn=0x00000000003ECB54 string=0x00000000003ECB58 "*"
 *   insn=0x00000000003ECB58 string=0x00000000003ECB5C "\n"
 *   insn=0x00000000003ECB60 string=0x00000000003ECB64 "/"
 *   insn=0x00000000003ECB64 string=0x00000000003ECC20 "?"
 *   insn=0x00000000003ECB68 string=0x00000000003ECB6C ")=G"
 *   insn=0x00000000003ECB6C string=0x00000000003ECB70 "!"
 *   insn=0x00000000003ECB70 string=0x00000000003ECB74 "\t"
 *   insn=0x00000000003ECB74 string=0x00000000003ECB78 "\t"
 *   insn=0x00000000003ECB74 string=0x00000000003ECC34 "\t"
 *   insn=0x00000000003ECB78 string=0x00000000003ECB7C "*"
 *   insn=0x00000000003ECB7C string=0x00000000003ECB80 "\n"
 *   insn=0x00000000003ECB84 string=0x00000000003ECB88 "."
 *   insn=0x00000000003ECB88 string=0x00000000003ECC40 "?"
 *   insn=0x00000000003ECB8C string=0x00000000003ECB90 ")=G"
 *   insn=0x00000000003ECB90 string=0x00000000003ECB94 "!"
 *   insn=0x00000000003ECB98 string=0x00000000003ECB9C "\t"
 *   insn=0x00000000003ECB98 string=0x00000000003ECC54 "\t"
 *   insn=0x00000000003ECB9C string=0x00000000003ECBA0 "*"
 *   insn=0x00000000003ECBA0 string=0x00000000003ECBA4 "\n"
 *   insn=0x00000000003ECBA8 string=0x00000000003ECBAC "-"
 *   insn=0x00000000003ECBAC string=0x00000000003ECC60 "?"
 *   insn=0x00000000003ECBB0 string=0x00000000003ECBB4 ")=G"
 *   insn=0x00000000003ECBB4 string=0x00000000003ECBB8 "!"
 *   insn=0x00000000003ECBBC string=0x00000000003ECBC0 "\t"
 *   insn=0x00000000003ECBBC string=0x00000000003ECC74 "\t"
 *   insn=0x00000000003ECBC0 string=0x00000000003ECBC4 "*"
 *   insn=0x00000000003ECBC4 string=0x00000000003ECBC8 "\n"
 *   insn=0x00000000003ECBCC string=0x00000000003ECBD0 ","
 *   insn=0x00000000003ECBD0 string=0x00000000003ECC80 "?"
 *   insn=0x00000000003ECBD4 string=0x00000000003ECBD8 "*"
 *   insn=0x00000000003ECBD8 string=0x00000000003ECBDC "\n"
 *   insn=0x00000000003ECBEC string=0x00000000003ECBF0 "|"
 *   insn=0x00000000003ECBF4 string=0x00000000003ECBF8 "*"
 *   insn=0x00000000003ECBF8 string=0x00000000003ECBFC "\n"
 *   insn=0x00000000003ECC14 string=0x00000000003ECC18 "*"
 *   insn=0x00000000003ECC18 string=0x00000000003ECC1C "\n"
 *   insn=0x00000000003ECC34 string=0x00000000003ECC38 "*"
 *   insn=0x00000000003ECC38 string=0x00000000003ECC3C "\n"
 *   insn=0x00000000003ECC54 string=0x00000000003ECC58 "*"
 *   insn=0x00000000003ECC58 string=0x00000000003ECC5C "\n"
 *   insn=0x00000000003ECC60 string=0x00000000003ECC64 ","
 *   insn=0x00000000003ECC74 string=0x00000000003ECC78 "*"
 *   insn=0x00000000003ECC78 string=0x00000000003ECC7C "\n"
 *   insn=0x00000000003ECC80 string=0x00000000003ECC84 "l"
 *   insn=0x00000000003ECC8C string=0x00000000003ECC90 ""
 *   insn=0x00000000003ECC94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003ECCA4 string=0x00000000003ED294 "@"
 *   insn=0x00000000003ECCBC string=0x00000000003ECCC0 ""
 *   insn=0x00000000003ECCCC string=0x00000000003ECCD0 "\t@"
 *   insn=0x00000000003ECCDC string=0x00000000003ECCE0 ""
 *   insn=0x00000000003ECCEC string=0x00000000003ECCF0 "@"
 *   insn=0x00000000003ECCF8 string=0x00000000003ECCFC "3"
 *   insn=0x00000000003ECD10 string=0x00000000003ECD14 ""
 *   insn=0x00000000003ECD18 string=0x00000000003ECD1C "!'"
 *   insn=0x00000000003ECD20 string=0x00000000003ECD24 "\t@"
 *   insn=0x00000000003ECD30 string=0x00000000003ECD34 ""
 *   insn=0x00000000003ECD38 string=0x00000000003ECD3C "!&"
 *   insn=0x00000000003ECD40 string=0x00000000003ECD44 "@"
 *   insn=0x00000000003ECD4C string=0x00000000003ECD50 ","
 *   insn=0x00000000003ECD60 string=0x00000000003ECD64 "5("
 *   insn=0x00000000003ECD68 string=0x00000000003ECD6C ""
 *   insn=0x00000000003ECD78 string=0x00000000003ECD7C "\t@"
 *   insn=0x00000000003ECD88 string=0x00000000003ECD8C ""
 *   insn=0x00000000003ECD98 string=0x00000000003ECD9C "@"
 *   insn=0x00000000003ECDA4 string=0x00000000003ECDA8 "0"
 *   insn=0x00000000003ECDBC string=0x00000000003ECDC0 ""
 *   insn=0x00000000003ECDCC string=0x00000000003ECDD0 "\t@"
 *   insn=0x00000000003ECDDC string=0x00000000003ECDE0 ""
 *   insn=0x00000000003ECDEC string=0x00000000003ECDF0 "@"
 *   insn=0x00000000003ECDF8 string=0x00000000003ECDFC "7"
 *   insn=0x00000000003ECE0C string=0x00000000003ECE10 ""
 *   insn=0x00000000003ECE1C string=0x00000000003ECE20 "\t@"
 *   insn=0x00000000003ECE2C string=0x00000000003ECE30 ""
 *   insn=0x00000000003ECE3C string=0x00000000003ECE40 "@"
 *   insn=0x00000000003ECE48 string=0x00000000003ECE4C "#"
 *   insn=0x00000000003ECE60 string=0x00000000003ECE64 ""
 *   insn=0x00000000003ECE68 string=0x00000000003ECE6C "a#"
 *   insn=0x00000000003ECE70 string=0x00000000003ECE74 "\t@"
 *   insn=0x00000000003ECE80 string=0x00000000003ECE84 ""
 *   insn=0x00000000003ECE88 string=0x00000000003ECE8C "a""
 *   insn=0x00000000003ECE90 string=0x00000000003ECE94 "@"
 *   insn=0x00000000003ECEB0 string=0x00000000003ECEB4 "5!"
 *   insn=0x00000000003ECEB8 string=0x00000000003ECEBC ""
 *   insn=0x00000000003ECEC8 string=0x00000000003ECECC "\t@"
 *   insn=0x00000000003ECED8 string=0x00000000003ECEDC ""
 *   insn=0x00000000003ECEE8 string=0x00000000003ECEEC "@"
 *   insn=0x00000000003ECF04 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003ECF0C string=0x00000000003ED2E0 "@"
 *   insn=0x00000000003ECF20 string=0x00000000003ECF24 ""
 *   insn=0x00000000003ECF28 string=0x00000000003ECF2C "a"
 *   insn=0x00000000003ECF30 string=0x00000000003ECF34 "\t@"
 *   insn=0x00000000003ECF40 string=0x00000000003ECF44 ""
 *   insn=0x00000000003ECF48 string=0x00000000003ECF4C "a"
 *   insn=0x00000000003ECF50 string=0x00000000003ECF54 "@"
 *   insn=0x00000000003ECF6C string=0x00000000003ECF70 "(a"
 *   insn=0x00000000003ECF7C string=0x00000000003ECF80 "J=G"
 *   insn=0x00000000003ECF80 string=0x00000000003ECF84 ")!"
 *   insn=0x00000000003ECF84 string=0x00000000003ECF88 "J"
 *   insn=0x00000000003ECF88 string=0x00000000003ECF8C "*"
 *   insn=0x00000000003ECF88 string=0x00000000003ECFB0 "*"
 *   insn=0x00000000003ECF8C string=0x00000000003ECF90 "K"
 *   insn=0x00000000003ECF90 string=0x00000000003ECF94 "+"
 *   insn=0x00000000003ECF98 string=0x00000000003ECF9C "_"
 *   insn=0x00000000003ECFAC string=0x00000000003ED23C "Z"
 *   insn=0x00000000003ECFB0 string=0x00000000003ECFB4 "K"
 *   insn=0x00000000003ECFB4 string=0x00000000003ECFB8 "+"
 *   insn=0x00000000003ECFB8 string=0x00000000003ECFBC "_"
 *   insn=0x00000000003ECFBC string=0x00000000003ECFC0 "-"
 *   insn=0x00000000003ECFD0 string=0x00000000003ECFD4 "(a"
 *   insn=0x00000000003ECFE0 string=0x00000000003ECFE4 "J=G"
 *   insn=0x00000000003ECFE4 string=0x00000000003ECFE8 ")!"
 *   insn=0x00000000003ECFEC string=0x00000000003ECFF0 "*"
 *   insn=0x00000000003ECFEC string=0x00000000003ED020 "*"
 *   insn=0x00000000003ECFF0 string=0x00000000003ECFF4 "K"
 *   insn=0x00000000003ECFF4 string=0x00000000003ECFF8 "+"
 *   insn=0x00000000003ECFFC string=0x00000000003ED000 "_"
 *   insn=0x00000000003ED014 string=0x00000000003ED018 "`"
 *   insn=0x00000000003ED018 string=0x00000000003ED304 "@"
 *   insn=0x00000000003ED01C string=0x00000000003ED320 "u"
 *   insn=0x00000000003ED020 string=0x00000000003ED024 "K"
 *   insn=0x00000000003ED024 string=0x00000000003ED028 "+"
 *   insn=0x00000000003ED028 string=0x00000000003ED02C "_"
 *   insn=0x00000000003ED040 string=0x00000000003ED044 "(a"
 *   insn=0x00000000003ED050 string=0x00000000003ED054 "J=G"
 *   insn=0x00000000003ED054 string=0x00000000003ED058 ")!"
 *   insn=0x00000000003ED058 string=0x00000000003ED05C "J"
 *   insn=0x00000000003ED05C string=0x00000000003ED060 "*"
 *   insn=0x00000000003ED05C string=0x00000000003ED084 "*"
 *   insn=0x00000000003ED060 string=0x00000000003ED064 "K"
 *   insn=0x00000000003ED064 string=0x00000000003ED068 "+"
 *   insn=0x00000000003ED06C string=0x00000000003ED070 "_"
 *   insn=0x00000000003ED070 string=0x00000000003ED074 "l"
 *   insn=0x00000000003ED07C string=0x00000000003ED080 "G"
 *   insn=0x00000000003ED084 string=0x00000000003ED088 "K"
 *   insn=0x00000000003ED088 string=0x00000000003ED08C "+"
 *   insn=0x00000000003ED08C string=0x00000000003ED090 "_"
 *   insn=0x00000000003ED090 string=0x00000000003ED094 "-"
 *   insn=0x00000000003ED0AC string=0x00000000003ED0B0 ""
 *   insn=0x00000000003ED0B4 string=0x00000000003ED0B8 "A"
 *   insn=0x00000000003ED0BC string=0x00000000003ED0C0 "\t@"
 *   insn=0x00000000003ED0CC string=0x00000000003ED0D0 ""
 *   insn=0x00000000003ED0D4 string=0x00000000003ED0D8 "A"
 *   insn=0x00000000003ED0DC string=0x00000000003ED0E0 "@"
 *   insn=0x00000000003ED0F4 string=0x00000000003ED0F8 ""
 *   insn=0x00000000003ED0F8 string=0x00000000003ED0FC "\t\t@"
 *   insn=0x00000000003ED0FC string=0x00000000003ED100 ")"
 *   insn=0x00000000003ED100 string=0x00000000003ED104 "\t\t"
 *   insn=0x00000000003ED108 string=0x00000000003ED10C "\t"
 *   insn=0x00000000003ED10C string=0x00000000003ED110 ")"
 *   insn=0x00000000003ED114 string=0x00000000003ED118 " "
 *   insn=0x00000000003ED12C string=0x00000000003ED130 "`("
 *   insn=0x00000000003ED130 string=0x00000000003ED134 "u"
 *   insn=0x00000000003ED13C string=0x00000000003ED368 "u"
 *   insn=0x00000000003ED148 string=0x00000000003ED14C "u"
 *   insn=0x00000000003ED15C string=0x00000000003ED160 ")"
 *   insn=0x00000000003ED170 string=0x00000000003ED174 ")=G"
 *   insn=0x00000000003ED174 string=0x00000000003ED178 "!"
 *   insn=0x00000000003ED17C string=0x00000000003ED180 "\t"
 *   insn=0x00000000003ED17C string=0x00000000003ED1AC "\t"
 *   insn=0x00000000003ED180 string=0x00000000003ED184 "*"
 *   insn=0x00000000003ED184 string=0x00000000003ED188 "\n"
 *   insn=0x00000000003ED18C string=0x00000000003ED190 "?"
 *   insn=0x00000000003ED190 string=0x00000000003ED194 "l"
 *   insn=0x00000000003ED19C string=0x00000000003ED1A0 "u"
 *   insn=0x00000000003ED1A0 string=0x00000000003ED1A4 "5"
 *   insn=0x00000000003ED1A4 string=0x00000000003ED1A8 "p"
 *   insn=0x00000000003ED1AC string=0x00000000003ED1B0 "*"
 *   insn=0x00000000003ED1B0 string=0x00000000003ED1B4 "\n"
 *   insn=0x00000000003ED1B4 string=0x00000000003ED1B8 "?"
 *   insn=0x00000000003ED1BC string=0x00000000003ED1C0 "X"
 *   insn=0x00000000003ED1D0 string=0x00000000003ED1D4 " "
 *   insn=0x00000000003ED1D8 string=0x00000000003ED1DC ")=G"
 *   insn=0x00000000003ED1DC string=0x00000000003ED1E0 "!"
 *   insn=0x00000000003ED1E0 string=0x00000000003ED1E4 "I"
 *   insn=0x00000000003ED1E4 string=0x00000000003ED1E8 "\t"
 *   insn=0x00000000003ED1E4 string=0x00000000003ED24C "\t"
 *   insn=0x00000000003ED1E8 string=0x00000000003ED1EC "*"
 *   insn=0x00000000003ED1EC string=0x00000000003ED1F0 "\n"
 *   insn=0x00000000003ED1F8 string=0x00000000003ED230 "?"
 *   insn=0x00000000003ED208 string=0x00000000003ED20C "`"
 *   insn=0x00000000003ED210 string=0x00000000003ED214 ")=G"
 *   insn=0x00000000003ED214 string=0x00000000003ED218 "!"
 *   insn=0x00000000003ED21C string=0x00000000003ED220 "\t"
 *   insn=0x00000000003ED220 string=0x00000000003ED224 "*"
 *   insn=0x00000000003ED224 string=0x00000000003ED228 "\n"
 *   insn=0x00000000003ED230 string=0x00000000003ED234 ","
 *   insn=0x00000000003ED244 string=0x00000000003ED248 "-"
 *   insn=0x00000000003ED24C string=0x00000000003ED250 "*"
 *   insn=0x00000000003ED250 string=0x00000000003ED254 "\n"
 *   insn=0x00000000003ED254 string=0x00000000003ED258 "?"
 *   insn=0x00000000003ED26C string=0x00000000003ED270 "@"
 *   insn=0x00000000003ED270 string=0x00000000003ED274 ""
 *   insn=0x00000000003ED274 string=0x00000000003ED278 ""
 *   insn=0x00000000003ED27C string=0x00000000003ED280 ""
 *   insn=0x00000000003ED280 string=0x00000000003ED284 ""
 *   insn=0x00000000003ED28C string=0x00000000003ED290 "@"
 *   insn=0x00000000003ED294 string=0x00000000003ED298 ""
 *   insn=0x00000000003ED298 string=0x00000000003ED29C ""
 *   insn=0x00000000003ED2A0 string=0x00000000003ED2A4 ""
 *   insn=0x00000000003ED2A4 string=0x00000000003ED2A8 ""
 *   insn=0x00000000003ED2AC string=0x00000000003ED2B0 "\n"
 *   insn=0x00000000003ED2B8 string=0x00000000003ED2BC " "
 *   insn=0x00000000003ED2C4 string=0x00000000003ED2C8 "u"
 *   insn=0x00000000003ED2CC string=0x00000000003ED2D0 "&"
 *   insn=0x00000000003ED2E0 string=0x00000000003ED2E4 ""
 *   insn=0x00000000003ED2E4 string=0x00000000003ED2E8 ""
 *   insn=0x00000000003ED2EC string=0x00000000003ED2F0 ""
 *   insn=0x00000000003ED2F0 string=0x00000000003ED2F4 ""
 *   insn=0x00000000003ED304 string=0x00000000003ED308 ""
 *   insn=0x00000000003ED308 string=0x00000000003ED30C ""
 *   insn=0x00000000003ED310 string=0x00000000003ED314 ""
 *   insn=0x00000000003ED314 string=0x00000000003ED318 ""
 *   insn=0x00000000003ED320 string=0x00000000003ED324 "5"
 *   insn=0x00000000003ED328 string=0x00000000003ED32C ""
 *   insn=0x00000000003ED338 string=0x00000000003ED33C "\t@"
 *   insn=0x00000000003ED348 string=0x00000000003ED34C ""
 *   insn=0x00000000003ED358 string=0x00000000003ED35C "@"
 *   insn=0x00000000003ED368 string=0x00000000003ED36C "5"
 *   insn=0x00000000003ED36C string=0x00000000003ED3B0 "u"
 *   insn=0x00000000003ED370 string=0x00000000003ED374 ""
 *   insn=0x00000000003ED380 string=0x00000000003ED384 "\t@"
 *   insn=0x00000000003ED390 string=0x00000000003ED394 ""
 *   insn=0x00000000003ED3A0 string=0x00000000003ED3A4 "@"
 *   insn=0x00000000003ED3B0 string=0x00000000003ED3B4 "5"
 *   insn=0x00000000003ED3B4 string=0x00000000003ED3F8 "u"
 *   insn=0x00000000003ED3B8 string=0x00000000003ED3BC ""
 *   insn=0x00000000003ED3C8 string=0x00000000003ED3CC "\t@"
 *   insn=0x00000000003ED3D8 string=0x00000000003ED3DC ""
 *   insn=0x00000000003ED3E8 string=0x00000000003ED3EC "@"
 *   insn=0x00000000003ED3F8 string=0x00000000003ED3FC "5"
 *   insn=0x00000000003ED3FC string=0x00000000003ED440 "u"
 *   insn=0x00000000003ED400 string=0x00000000003ED404 ""
 *   insn=0x00000000003ED410 string=0x00000000003ED414 "\t@"
 *   insn=0x00000000003ED420 string=0x00000000003ED424 ""
 *   insn=0x00000000003ED430 string=0x00000000003ED434 "@"
 *   insn=0x00000000003ED440 string=0x00000000003ED444 "5"
 *   insn=0x00000000003ED444 string=0x00000000003ED488 "u~@"
 *   insn=0x00000000003ED448 string=0x00000000003ED44C ""
 *   insn=0x00000000003ED458 string=0x00000000003ED45C "\t@"
 *   insn=0x00000000003ED468 string=0x00000000003ED46C ""
 *   insn=0x00000000003ED478 string=0x00000000003ED47C "@"
 *   insn=0x00000000003ED488 string=0x00000000003ED48C "5"
 *   insn=0x00000000003ED490 string=0x00000000003ED494 ""
 *   insn=0x00000000003ED4A0 string=0x00000000003ED4A4 "\t@"
 *   insn=0x00000000003ED4B0 string=0x00000000003ED4B4 ""
 *   insn=0x00000000003ED4C0 string=0x00000000003ED4C4 "@"
 *   insn=0x00000000003ED4D0 string=0x00000000003ED4D4 "WF"
 *   insn=0x00000000003ED4F0 string=0x00000000003ED4F4 "T"
 *   insn=0x00000000003ED500 string=0x00000000003ED504 "`"
 *   insn=0x00000000003ED504 string=0x00000000003ED508 "!"
 *   insn=0x00000000003ED508 string=0x00000000003ED50C ""
 *   insn=0x00000000003ED518 string=0x00000000003ED51C "`"
 *   insn=0x00000000003ED518 string=0x00000000001F5960 "P'"
 *   insn=0x00000000003ED520 string=0x00000000003ED524 "(x"
 *   insn=0x00000000003ED524 string=0x00000000003ED528 ""
 *   insn=0x00000000003ED534 string=0x00000000003ED538 "\n!"
 *   insn=0x00000000003ED538 string=0x00000000003ED53C "`"
 *   insn=0x00000000003ED540 string=0x00000000003ED544 "("
 *   insn=0x00000000003ED548 string=0x00000000003ED54C " "
 *   insn=0x00000000003ED550 string=0x00000000003ED554 ""
 *   insn=0x00000000003ED554 string=0x00000000003ED558 ""
 *   insn=0x00000000003ED56C string=0x00000000003ED580 "T#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreProductView::StoreProductView(Caver::GUIButton **this)
{
  Caver::GUIFrameView *v2; // x0
  Caver::TextureLibrary *v3; // x0
  Caver::GUIButton *v4; // x21
  Caver::GUIButton *v5; // x9
  Caver::GUIButton *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUIButton *v9; // x0
  int v10; // w8
  void *v11; // x0
  __int64 (__fastcall *v12)(Caver::GUIButton **, Caver::GUIButton **); // x8
  Caver::GUIButton *v13; // x9
  Caver::TextureLibrary *v14; // x0
  Caver::GUIButton *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  char *v18; // x0
  char *v19; // x0
  Caver::GUIButton *v20; // x8
  Caver::GUIButton *v21; // x9
  Caver::GUIButton *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  Caver::GUIButton *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x0
  int v29; // w8
  Caver::GUIButton *v30; // x20
  char *v31; // x0
  Caver::GUIButton *v32; // x0
  int v33; // w8
  void (__fastcall *v34)(Caver::GUIButton **, Caver::GUIButton **); // x8
  Caver::GUIButton *v35; // x9
  Caver::GUIButton *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x8
  Caver::GUIFrameView *v39; // x0
  Caver::GUIButton *v40; // x20
  Caver::GUIButton *v41; // x9
  Caver::GUIButton *v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  void (__fastcall *v45)(Caver::GUIButton **, Caver::GUIButton **); // x8
  Caver::GUIButton *v46; // x9
  Caver::GUIButton *v47; // x20
  __int64 v48; // x8
  __int64 v49; // x8
  Caver::GUIView *v50; // x0
  Caver::GUIButton *v51; // x20
  Caver::GUIButton *v52; // x9
  Caver::GUIButton *v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  Caver::GUIButton *v56; // x8
  Caver::GUIButton *v57; // x9
  Caver::GUIButton *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x8
  Caver::GUIButton *v61; // x20
  __int64 v62; // x8
  __int64 v63; // x8
  void *v64; // x0
  void (*v65)(void); // x8
  Caver::GUIButton *v66; // x9
  Caver::GUIButton *v67; // x20
  __int64 v68; // x8
  __int64 v69; // x8
  Caver::GUIButton *v70; // x8
  Caver::GUIButton *v71; // x9
  Caver::GUIButton *v72; // x20
  __int64 v73; // x8
  __int64 v74; // x8
  Caver::GUIButton *v75; // x20
  __int64 v76; // x8
  __int64 v77; // x8
  void *v78; // x0
  Caver::GUILabel *v79; // x20
  Caver::FontLibrary *v80; // x0
  Caver::GUIButton *v81; // x8
  Caver::GUIButton *v82; // x9
  _QWORD *v83; // x21
  __int64 v84; // x8
  __int64 v85; // x8
  Caver::GUIButton *v86; // x20
  __int64 v87; // x8
  __int64 v88; // x8
  Caver::GUIButton *v89; // x20
  _QWORD *v90; // x21
  __int64 v91; // x8
  __int64 v92; // x8
  Caver::GUIButton *v93; // x0
  Caver::GUIButton *v94; // x9
  void (__fastcall *v95)(Caver::GUIButton *, Caver::GUIButton **); // x8
  Caver::GUIButton *v96; // x20
  __int64 v97; // x8
  __int64 v98; // x8
  __int64 v99; // x0
  int v100; // w8
  __int64 result; // x0
  int v102; // w8
  unsigned int *v103; // x8
  int v104; // w9
  unsigned int *v105; // x8
  int v106; // w9
  unsigned int *v107; // x8
  int v108; // w9
  unsigned int *v109; // x8
  int v110; // w9
  unsigned int *v111; // x8
  int v112; // w9
  unsigned int *v113; // x8
  int v114; // w9
  __int64 v115; // [xsp+50h] [xbp-60h] BYREF
  __int64 v116; // [xsp+58h] [xbp-58h]
  __int64 v117; // [xsp+60h] [xbp-50h] BYREF
  Caver::GUIButton *v118; // [xsp+68h] [xbp-48h] BYREF
  Caver::GUIButton *v119; // [xsp+70h] [xbp-40h]
  __int64 v120; // [xsp+78h] [xbp-38h]

  v120 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView((Caver::GUIView *)this);
  *this = (Caver::GUIButton *)off_6D0B70;
  memset(this + 30, 0, 0x60u);
  v2 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v2);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v4 = this[31];
  v5 = v118;
  v118 = this[30];
  v6 = v119;
  this[30] = v5;
  this[31] = v6;
  v119 = v4;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 1) - 1LL;
    *((_QWORD *)v4 + 1) = v7;
    if ( !v7 )
    {
      v3 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v4 + 16LL))(v4);
      v8 = *((_QWORD *)v4 + 2) - 1LL;
      *((_QWORD *)v4 + 2) = v8;
      if ( !v8 )
        v3 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v4 + 24LL))(v4);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v3);
  sub_566BB8((int)&v117, "ui_frame_dark");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIFrameView::SetFrameTexture();
  v9 = v118;
  if ( v118 )
  {
    v10 = *((_DWORD *)v118 + 2) - 1;
    *((_DWORD *)v118 + 2) = v10;
    if ( !v10 )
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (void *)(v117 - 24);
  if ( (__int64 *)(v117 - 24) != &qword_6FD2E0 )
  {
    v103 = (unsigned int *)(v117 - 8);
    if ( &pthread_create )
    {
      do
        v104 = __ldaxr(v103);
      while ( __stlxr(v104 - 1, v103) );
    }
    else
    {
      v104 = (*v103)--;
    }
    if ( v104 <= 0 )
      operator delete(v11);
  }
  v12 = (__int64 (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v118 = this[30];
  v13 = this[31];
  v119 = v13;
  if ( v13 )
    ++*((_QWORD *)v13 + 1);
  v14 = (Caver::TextureLibrary *)v12(this, &v118);
  v15 = v119;
  if ( v119 )
  {
    v16 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v16;
    if ( !v16 )
    {
      v14 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v15 + 16LL))(v15);
      v17 = *((_QWORD *)v15 + 2) - 1LL;
      *((_QWORD *)v15 + 2) = v17;
      if ( !v17 )
        v14 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v15 + 24LL))(v15);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v14);
  sub_566BB8((int)&v118, "ui_guide_buy");
  Caver::TextureLibrary::TextureForName();
  v18 = (char *)v118 - 24;
  if ( (__int64 *)((char *)v118 - 24) != &qword_6FD2E0 )
  {
    v105 = (unsigned int *)((char *)v118 - 8);
    if ( &pthread_create )
    {
      do
        v106 = __ldaxr(v105);
      while ( __stlxr(v106 - 1, v105) );
    }
    else
    {
      v106 = (*v105)--;
    }
    if ( v106 <= 0 )
      operator delete(v18);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v18);
  sub_566BB8((int)&v118, "ui_guide_buy_pressed");
  Caver::TextureLibrary::TextureForName();
  v19 = (char *)v118 - 24;
  if ( (__int64 *)((char *)v118 - 24) != &qword_6FD2E0 )
  {
    v107 = (unsigned int *)((char *)v118 - 8);
    if ( &pthread_create )
    {
      do
        v108 = __ldaxr(v107);
      while ( __stlxr(v108 - 1, v107) );
    }
    else
    {
      v108 = (*v107)--;
    }
    if ( v108 <= 0 )
      operator delete(v19);
  }
  v115 = 0;
  Caver::GameInterfaceBuilder::PlainButton();
  v21 = v118;
  v20 = v119;
  if ( v119 )
    ++*((_QWORD *)v119 + 1);
  v22 = this[33];
  this[32] = v21;
  this[33] = v20;
  if ( v22 )
  {
    v23 = *((_QWORD *)v22 + 1) - 1LL;
    *((_QWORD *)v22 + 1) = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v22 + 16LL))(v22);
      v24 = *((_QWORD *)v22 + 2) - 1LL;
      *((_QWORD *)v22 + 2) = v24;
      if ( !v24 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v22 + 24LL))(v22);
    }
  }
  v25 = v119;
  if ( v119 )
  {
    v26 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v25 + 16LL))(v25);
      v27 = *((_QWORD *)v25 + 2) - 1LL;
      *((_QWORD *)v25 + 2) = v27;
      if ( !v27 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v25 + 24LL))(v25);
    }
  }
  v28 = v115;
  if ( v115 )
  {
    v29 = *(_DWORD *)(v115 + 8) - 1;
    *(_DWORD *)(v115 + 8) = v29;
    if ( !v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  }
  v30 = this[32];
  sub_566BB8((int)&v118, "Loading...");
  Caver::GUIButton::SetTitle(v30);
  v31 = (char *)v118 - 24;
  if ( (__int64 *)((char *)v118 - 24) != &qword_6FD2E0 )
  {
    v109 = (unsigned int *)((char *)v118 - 8);
    if ( &pthread_create )
    {
      do
        v110 = __ldaxr(v109);
      while ( __stlxr(v110 - 1, v109) );
    }
    else
    {
      v110 = (*v109)--;
    }
    if ( v110 <= 0 )
      operator delete(v31);
  }
  Caver::GUIButton::SetFrameTextureForState();
  Caver::GUIButton::SetFrameTextureForState();
  v32 = this[32];
  v33 = *(_DWORD *)(v117 + 88);
  v118 = *(Caver::GUIButton **)((char *)v32 + 116);
  LODWORD(v119) = 1125122048;
  HIDWORD(v119) = v33;
  Caver::GUIView::SetFrame(v32, (const Caver::Rectangle *)&v118);
  v34 = (void (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v118 = this[32];
  v35 = this[33];
  v119 = v35;
  if ( v35 )
    ++*((_QWORD *)v35 + 1);
  v34(this, &v118);
  v36 = v119;
  if ( v119 )
  {
    v37 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v37;
    if ( !v37 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v36 + 16LL))(v36);
      v38 = *((_QWORD *)v36 + 2) - 1LL;
      *((_QWORD *)v36 + 2) = v38;
      if ( !v38 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v36 + 24LL))(v36);
    }
  }
  v39 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v39);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v40 = this[35];
  v41 = v118;
  v118 = this[34];
  v42 = v119;
  this[34] = v41;
  this[35] = v42;
  v119 = v40;
  if ( v40 )
  {
    v43 = *((_QWORD *)v40 + 1) - 1LL;
    *((_QWORD *)v40 + 1) = v43;
    if ( !v43 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v40 + 16LL))(v40);
      v44 = *((_QWORD *)v40 + 2) - 1LL;
      *((_QWORD *)v40 + 2) = v44;
      if ( !v44 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v40 + 24LL))(v40);
    }
  }
  v45 = (void (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v118 = this[34];
  v46 = this[35];
  v119 = v46;
  if ( v46 )
    ++*((_QWORD *)v46 + 1);
  v45(this, &v118);
  v47 = v119;
  if ( v119 )
  {
    v48 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v48;
    if ( !v48 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v47 + 16LL))(v47);
      v49 = *((_QWORD *)v47 + 2) - 1LL;
      *((_QWORD *)v47 + 2) = v49;
      if ( !v49 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v47 + 24LL))(v47);
    }
  }
  v50 = (Caver::GUIView *)operator new(0xF0u);
  Caver::GUIView::GUIView(v50);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>();
  v51 = this[37];
  v52 = v118;
  v118 = this[36];
  v53 = v119;
  this[36] = v52;
  this[37] = v53;
  v119 = v51;
  if ( v51 )
  {
    v54 = *((_QWORD *)v51 + 1) - 1LL;
    *((_QWORD *)v51 + 1) = v54;
    if ( !v54 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v51 + 16LL))(v51);
      v55 = *((_QWORD *)v51 + 2) - 1LL;
      *((_QWORD *)v51 + 2) = v55;
      if ( !v55 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v51 + 24LL))(v51);
    }
  }
  (*((void (__fastcall **)(Caver::GUIButton **, char *))*this + 12))(this, (char *)this + 288);
  sub_566BB8((int)&v115, "");
  Caver::GameInterfaceBuilder::NormalLabel();
  v57 = v118;
  v56 = v119;
  if ( v119 )
    ++*((_QWORD *)v119 + 1);
  v58 = this[39];
  this[38] = v57;
  this[39] = v56;
  if ( v58 )
  {
    v59 = *((_QWORD *)v58 + 1) - 1LL;
    *((_QWORD *)v58 + 1) = v59;
    if ( !v59 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v58 + 16LL))(v58);
      v60 = *((_QWORD *)v58 + 2) - 1LL;
      *((_QWORD *)v58 + 2) = v60;
      if ( !v60 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v58 + 24LL))(v58);
    }
  }
  v61 = v119;
  if ( v119 )
  {
    v62 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v62;
    if ( !v62 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v61 + 16LL))(v61);
      v63 = *((_QWORD *)v61 + 2) - 1LL;
      *((_QWORD *)v61 + 2) = v63;
      if ( !v63 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v61 + 24LL))(v61);
    }
  }
  v64 = (void *)(v115 - 24);
  if ( (__int64 *)(v115 - 24) != &qword_6FD2E0 )
  {
    v111 = (unsigned int *)(v115 - 8);
    if ( &pthread_create )
    {
      do
        v112 = __ldaxr(v111);
      while ( __stlxr(v112 - 1, v111) );
    }
    else
    {
      v112 = (*v111)--;
    }
    if ( v112 <= 0 )
      operator delete(v64);
  }
  v65 = *(void (**)(void))(*(_QWORD *)this[36] + 96LL);
  v118 = this[38];
  v66 = this[39];
  v119 = v66;
  if ( v66 )
    ++*((_QWORD *)v66 + 1);
  v65();
  v67 = v119;
  if ( v119 )
  {
    v68 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v68;
    if ( !v68 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v67 + 16LL))(v67);
      v69 = *((_QWORD *)v67 + 2) - 1LL;
      *((_QWORD *)v67 + 2) = v69;
      if ( !v69 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v67 + 24LL))(v67);
    }
  }
  sub_566BB8((int)&v115, "");
  Caver::GameInterfaceBuilder::NormalLabel();
  v71 = v118;
  v70 = v119;
  if ( v119 )
    ++*((_QWORD *)v119 + 1);
  v72 = this[41];
  this[40] = v71;
  this[41] = v70;
  if ( v72 )
  {
    v73 = *((_QWORD *)v72 + 1) - 1LL;
    *((_QWORD *)v72 + 1) = v73;
    if ( !v73 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v72 + 16LL))(v72);
      v74 = *((_QWORD *)v72 + 2) - 1LL;
      *((_QWORD *)v72 + 2) = v74;
      if ( !v74 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v72 + 24LL))(v72);
    }
  }
  v75 = v119;
  if ( v119 )
  {
    v76 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v76;
    if ( !v76 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v75 + 16LL))(v75);
      v77 = *((_QWORD *)v75 + 2) - 1LL;
      *((_QWORD *)v75 + 2) = v77;
      if ( !v77 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v75 + 24LL))(v75);
    }
  }
  v78 = (void *)(v115 - 24);
  if ( (__int64 *)(v115 - 24) != &qword_6FD2E0 )
  {
    v113 = (unsigned int *)(v115 - 8);
    if ( &pthread_create )
    {
      do
        v114 = __ldaxr(v113);
      while ( __stlxr(v114 - 1, v113) );
    }
    else
    {
      v114 = (*v113)--;
    }
    if ( v114 <= 0 )
      operator delete(v78);
  }
  v79 = this[40];
  v80 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary((Caver::FontLibrary *)v78);
  Caver::FontLibrary::SmallDefaultFont(v80);
  v81 = v118;
  if ( v118 != *((Caver::GUIButton **)v79 + 30) )
  {
    v82 = v119;
    if ( v119 )
      ++*((_QWORD *)v119 + 1);
    v83 = (_QWORD *)*((_QWORD *)v79 + 31);
    *((_QWORD *)v79 + 30) = v81;
    *((_QWORD *)v79 + 31) = v82;
    if ( v83 )
    {
      v84 = v83[1] - 1LL;
      v83[1] = v84;
      if ( !v84 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v83 + 16LL))(v83);
        v85 = v83[2] - 1LL;
        v83[2] = v85;
        if ( !v85 )
          (*(void (__fastcall **)(_QWORD *))(*v83 + 24LL))(v83);
      }
    }
    Caver::GUILabel::UpdateText(v79);
  }
  v86 = v119;
  if ( v119 )
  {
    v87 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v87;
    if ( !v87 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v86 + 16LL))(v86);
      v88 = *((_QWORD *)v86 + 2) - 1LL;
      *((_QWORD *)v86 + 2) = v88;
      if ( !v88 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v86 + 24LL))(v86);
    }
  }
  v89 = this[40];
  if ( *((unsigned __int8 *)v89 + 264) != 200
    || *((unsigned __int8 *)v89 + 265) != 180
    || *((unsigned __int8 *)v89 + 266) != 160
    || *((unsigned __int8 *)v89 + 267) != 255 )
  {
    v90 = (_QWORD *)*((_QWORD *)v89 + 35);
    *((_DWORD *)v89 + 66) = -6245176;
    *((_QWORD *)v89 + 34) = 0;
    *((_QWORD *)v89 + 35) = 0;
    if ( v90 )
    {
      v91 = v90[1] - 1LL;
      v90[1] = v91;
      if ( !v91 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v90 + 16LL))(v90);
        v92 = v90[2] - 1LL;
        v90[2] = v92;
        if ( !v92 )
          (*(void (__fastcall **)(_QWORD *))(*v90 + 24LL))(v90);
      }
    }
    Caver::GUILabel::UpdateText(v89);
    v89 = this[40];
  }
  v93 = this[36];
  v94 = this[41];
  v95 = *(void (__fastcall **)(Caver::GUIButton *, Caver::GUIButton **))(*(_QWORD *)v93 + 96LL);
  v118 = v89;
  v119 = v94;
  if ( v94 )
    ++*((_QWORD *)v94 + 1);
  v95(v93, &v118);
  v96 = v119;
  if ( v119 )
  {
    v97 = *((_QWORD *)v119 + 1) - 1LL;
    *((_QWORD *)v119 + 1) = v97;
    if ( !v97 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v96 + 16LL))(v96);
      v98 = *((_QWORD *)v96 + 2) - 1LL;
      *((_QWORD *)v96 + 2) = v98;
      if ( !v98 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v96 + 24LL))(v96);
    }
  }
  v99 = v116;
  if ( v116 )
  {
    v100 = *(_DWORD *)(v116 + 8) - 1;
    *(_DWORD *)(v116 + 8) = v100;
    if ( !v100 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 8LL))(v99);
  }
  result = v117;
  if ( v117 )
  {
    v102 = *(_DWORD *)(v117 + 8) - 1;
    *(_DWORD *)(v117 + 8) = v102;
    if ( !v102 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

