/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4FB8
 * Mangled: _ZN5Caver12PurchaseViewC2Ev
 * Demangled: Caver::PurchaseView::PurchaseView(void)
 *
 * Callers: 1
 *   0x00000000001F80E0  Caver::PurchaseView::PurchaseView(void)
 *
 * Callees: 23
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F56B0  Caver::GameInterfaceBuilder::PlainButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F9AE0  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202F10  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 445
 *   insn=0x00000000003E4FCC string=0x00000000003E4FD0 "V"
 *   insn=0x00000000003E4FE0 string=0x00000000003E4FE4 ""
 *   insn=0x00000000003E4FE4 string=0x00000000003E4FE8 ""
 *   insn=0x00000000003E4FF4 string=0x00000000003E4FF8 "A"
 *   insn=0x00000000003E4FF8 string=0x00000000003E4FFC ""
 *   insn=0x00000000003E5000 string=0x00000000003E5004 "A"
 *   insn=0x00000000003E5000 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003E5038 string=0x00000000003E503C ")O"
 *   insn=0x00000000003E503C string=0x00000000001F8CE0 "0'"
 *   insn=0x00000000003E5044 string=0x00000000003E5048 "\n"
 *   insn=0x00000000003E5044 string=0x00000000003E5054 "t~@"
 *   insn=0x00000000003E5048 string=0x00000000003E504C "J"
 *   insn=0x00000000003E504C string=0x00000000003E5050 "\n"
 *   insn=0x00000000003E5054 string=0x00000000003E5058 "i""
 *   insn=0x00000000003E5058 string=0x00000000003E505C "4"
 *   insn=0x00000000003E5060 string=0x00000000003E5064 ""
 *   insn=0x00000000003E5070 string=0x00000000003E5074 "\t@"
 *   insn=0x00000000003E5080 string=0x00000000003E5084 ""
 *   insn=0x00000000003E5090 string=0x00000000003E5094 "@"
 *   insn=0x00000000003E50A0 string=0x00000000003E50A4 "4"
 *   insn=0x00000000003E50A8 string=0x00000000003E50AC ""
 *   insn=0x00000000003E50B8 string=0x00000000003E50BC "\t@"
 *   insn=0x00000000003E50C8 string=0x00000000003E50CC ""
 *   insn=0x00000000003E50D8 string=0x00000000003E50DC "@"
 *   insn=0x00000000003E50FC string=0x00000000003E5100 "h"
 *   insn=0x00000000003E5100 string=0x00000000003E5104 "iz@"
 *   insn=0x00000000003E5104 string=0x00000000003E5108 "1@"
 *   insn=0x00000000003E510C string=0x00000000003E5110 "i~@"
 *   insn=0x00000000003E5118 string=0x00000000003E511C "*"
 *   insn=0x00000000003E511C string=0x00000000003E5120 "J"
 *   insn=0x00000000003E5120 string=0x00000000003E5124 "*"
 *   insn=0x00000000003E5134 string=0x00000000003E5138 "4"
 *   insn=0x00000000003E513C string=0x00000000003E5140 ""
 *   insn=0x00000000003E514C string=0x00000000003E5150 "\t@"
 *   insn=0x00000000003E515C string=0x00000000003E5160 ""
 *   insn=0x00000000003E516C string=0x00000000003E5170 "@"
 *   insn=0x00000000003E5180 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E518C string=0x00000000001F7430 "0'"
 *   insn=0x00000000003E5198 string=0x00000000003E519C "h"
 *   insn=0x00000000003E5198 string=0x00000000001F5420 "P'"
 *   insn=0x00000000003E51A8 string=0x00000000003E51AC "i"
 *   insn=0x00000000003E51B0 string=0x00000000003E51B4 "4"
 *   insn=0x00000000003E51B4 string=0x00000000003E51F8 "h"
 *   insn=0x00000000003E51B8 string=0x00000000003E51BC ""
 *   insn=0x00000000003E51C8 string=0x00000000003E51CC "\t@"
 *   insn=0x00000000003E51D8 string=0x00000000003E51DC ""
 *   insn=0x00000000003E51E8 string=0x00000000003E51EC "@"
 *   insn=0x00000000003E51F8 string=0x00000000003E51FC "i"
 *   insn=0x00000000003E51FC string=0x00000000003E5200 "1@"
 *   insn=0x00000000003E5204 string=0x00000000003E5208 "i"
 *   insn=0x00000000003E5210 string=0x00000000003E5214 "*"
 *   insn=0x00000000003E5214 string=0x00000000003E5218 "J"
 *   insn=0x00000000003E5218 string=0x00000000003E521C "*"
 *   insn=0x00000000003E522C string=0x00000000003E5230 "4"
 *   insn=0x00000000003E5230 string=0x00000000003E5274 "7T"
 *   insn=0x00000000003E5234 string=0x00000000003E5238 ""
 *   insn=0x00000000003E5244 string=0x00000000003E5248 "\t@"
 *   insn=0x00000000003E5254 string=0x00000000003E5258 ""
 *   insn=0x00000000003E5264 string=0x00000000003E5268 "@"
 *   insn=0x00000000003E5274 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003E5278 string=0x00000000003E527C "A"
 *   insn=0x00000000003E527C string=0x000000000058FB21 "ui_guide_buy"
 *   insn=0x00000000003E5288 string=0x00000000003E528C "K"
 *   insn=0x00000000003E52B0 string=0x00000000003E52B4 "'T"
 *   insn=0x00000000003E52B8 string=0x00000000003E52BC "A"
 *   insn=0x00000000003E52BC string=0x000000000058FB2E "ui_guide_buy_pressed"
 *   insn=0x00000000003E52C8 string=0x00000000003E52CC ";"
 *   insn=0x00000000003E52EC string=0x00000000003E52F0 "!("
 *   insn=0x00000000003E5304 string=0x00000000001F56B0 "P'"
 *   insn=0x00000000003E530C string=0x00000000003E5310 "\n"
 *   insn=0x00000000003E530C string=0x00000000003E531C "t"
 *   insn=0x00000000003E5310 string=0x00000000003E5314 "J"
 *   insn=0x00000000003E5314 string=0x00000000003E5318 "\n"
 *   insn=0x00000000003E531C string=0x00000000003E5320 "i"
 *   insn=0x00000000003E5320 string=0x00000000003E5324 "4"
 *   insn=0x00000000003E5328 string=0x00000000003E532C ""
 *   insn=0x00000000003E5338 string=0x00000000003E533C "\t@"
 *   insn=0x00000000003E5348 string=0x00000000003E534C ""
 *   insn=0x00000000003E5358 string=0x00000000003E535C "@"
 *   insn=0x00000000003E5368 string=0x00000000003E536C "4"
 *   insn=0x00000000003E5370 string=0x00000000003E5374 ""
 *   insn=0x00000000003E5380 string=0x00000000003E5384 "\t@"
 *   insn=0x00000000003E5390 string=0x00000000003E5394 ""
 *   insn=0x00000000003E53A0 string=0x00000000003E53A4 "@"
 *   insn=0x00000000003E53B4 string=0x00000000003E53B8 "@"
 *   insn=0x00000000003E53B8 string=0x00000000003E53BC ""
 *   insn=0x00000000003E53BC string=0x00000000003E53C0 ""
 *   insn=0x00000000003E53C4 string=0x00000000003E53C8 ""
 *   insn=0x00000000003E53C8 string=0x00000000003E53CC ""
 *   insn=0x00000000003E53D8 string=0x00000000003E53DC "@"
 *   insn=0x00000000003E53D8 string=0x00000000003E53F8 "`"
 *   insn=0x00000000003E53DC string=0x00000000003E53E0 ""
 *   insn=0x00000000003E53E0 string=0x00000000003E53E4 ""
 *   insn=0x00000000003E53E8 string=0x00000000003E53EC ""
 *   insn=0x00000000003E53EC string=0x00000000003E53F0 ""
 *   insn=0x00000000003E5404 string=0x00000000003E5408 "`"
 *   insn=0x00000000003E5414 string=0x00000000003E5418 "`"
 *   insn=0x00000000003E5420 string=0x00000000003E5424 "\t@G"
 *   insn=0x00000000003E5424 string=0x00000000003E5428 "Y@"
 *   insn=0x00000000003E5434 string=0x00000000003E5438 "NW"
 *   insn=0x00000000003E5438 string=0x00000000003E543C "`"
 *   insn=0x00000000003E5438 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003E5440 string=0x00000000003E5444 "("
 *   insn=0x00000000003E5448 string=0x00000000003E544C " "
 *   insn=0x00000000003E5450 string=0x00000000003E5454 ""
 *   insn=0x00000000003E5450 string=0x00000000003E5464 "h"
 *   insn=0x00000000003E5454 string=0x00000000003E5458 ""
 *   insn=0x00000000003E545C string=0x00000000003E5460 "`"
 *   insn=0x00000000003E5464 string=0x00000000003E5468 "i"
 *   insn=0x00000000003E5468 string=0x00000000003E546C "1@"
 *   insn=0x00000000003E5474 string=0x00000000003E5478 "*"
 *   insn=0x00000000003E5478 string=0x00000000003E547C "J"
 *   insn=0x00000000003E547C string=0x00000000003E5480 "*"
 *   insn=0x00000000003E5490 string=0x00000000003E5494 "4"
 *   insn=0x00000000003E5494 string=0x00000000003E54D8 "t"
 *   insn=0x00000000003E5498 string=0x00000000003E549C ""
 *   insn=0x00000000003E54A8 string=0x00000000003E54AC "\t@"
 *   insn=0x00000000003E54B8 string=0x00000000003E54BC ""
 *   insn=0x00000000003E54C8 string=0x00000000003E54CC "@"
 *   insn=0x00000000003E54D8 string=0x00000000003E54DC "A"
 *   insn=0x00000000003E54DC string=0x000000000058F6A7 "Loading..."
 *   insn=0x00000000003E54F4 string=0x00000000003E54F8 "J["
 *   insn=0x00000000003E54F8 string=0x00000000001FC220 "0'"
 *   insn=0x00000000003E5508 string=0x00000000003E550C "`"
 *   insn=0x00000000003E551C string=0x00000000001F5960 "P'"
 *   insn=0x00000000003E5524 string=0x00000000003E5528 "a"
 *   insn=0x00000000003E5528 string=0x0000000000591433 "ui_button_close"
 *   insn=0x00000000003E5554 string=0x00000000003E5558 "a"
 *   insn=0x00000000003E5558 string=0x0000000000591443 "ui_button_close_pressed"
 *   insn=0x00000000003E5578 string=0x00000000003E557C "h"
 *   insn=0x00000000003E5588 string=0x00000000003E558C "UQ"
 *   insn=0x00000000003E558C string=0x00000000001F9AE0 "0'"
 *   insn=0x00000000003E5594 string=0x00000000003E5598 "\n"
 *   insn=0x00000000003E5594 string=0x00000000003E55A4 "t"
 *   insn=0x00000000003E5598 string=0x00000000003E559C "J"
 *   insn=0x00000000003E559C string=0x00000000003E55A0 "\n"
 *   insn=0x00000000003E55A4 string=0x00000000003E55A8 "i"
 *   insn=0x00000000003E55A8 string=0x00000000003E55AC "4"
 *   insn=0x00000000003E55B0 string=0x00000000003E55B4 ""
 *   insn=0x00000000003E55C0 string=0x00000000003E55C4 "\t@"
 *   insn=0x00000000003E55D0 string=0x00000000003E55D4 ""
 *   insn=0x00000000003E55E0 string=0x00000000003E55E4 "@"
 *   insn=0x00000000003E55F0 string=0x00000000003E55F4 "4"
 *   insn=0x00000000003E55F8 string=0x00000000003E55FC ""
 *   insn=0x00000000003E5608 string=0x00000000003E560C "\t@"
 *   insn=0x00000000003E5618 string=0x00000000003E561C ""
 *   insn=0x00000000003E5628 string=0x00000000003E562C "@"
 *   insn=0x00000000003E563C string=0x00000000003E5640 "@"
 *   insn=0x00000000003E5640 string=0x00000000003E5644 ""
 *   insn=0x00000000003E5644 string=0x00000000003E5648 ""
 *   insn=0x00000000003E564C string=0x00000000003E5650 ""
 *   insn=0x00000000003E5650 string=0x00000000003E5654 ""
 *   insn=0x00000000003E5670 string=0x00000000003E5674 "@"
 *   insn=0x00000000003E5674 string=0x00000000003E5678 ""
 *   insn=0x00000000003E5678 string=0x00000000003E567C ""
 *   insn=0x00000000003E5680 string=0x00000000003E5684 ""
 *   insn=0x00000000003E5684 string=0x00000000003E5688 ""
 *   insn=0x00000000003E5698 string=0x00000000003E569C "!"
 *   insn=0x00000000003E569C string=0x00000000003E56A0 "`"
 *   insn=0x00000000003E56A0 string=0x00000000003E56A4 "\tA"
 *   insn=0x00000000003E56A4 string=0x00000000003E56A8 " "
 *   insn=0x00000000003E56A8 string=0x00000000003E56AC "@G"
 *   insn=0x00000000003E56BC string=0x00000000003E56C0 "h"
 *   insn=0x00000000003E56C0 string=0x00000000003E56C4 "i"
 *   insn=0x00000000003E56C4 string=0x00000000003E56C8 "1@"
 *   insn=0x00000000003E56CC string=0x00000000003E56D0 "i"
 *   insn=0x00000000003E56D8 string=0x00000000003E56DC "*"
 *   insn=0x00000000003E56DC string=0x00000000003E56E0 "J"
 *   insn=0x00000000003E56E0 string=0x00000000003E56E4 "*"
 *   insn=0x00000000003E56F4 string=0x00000000003E56F8 "4"
 *   insn=0x00000000003E56FC string=0x00000000003E5700 ""
 *   insn=0x00000000003E570C string=0x00000000003E5710 "\t@"
 *   insn=0x00000000003E571C string=0x00000000003E5720 ""
 *   insn=0x00000000003E572C string=0x00000000003E5730 "@"
 *   insn=0x00000000003E5740 string=0x00000000003E5744 "@"
 *   insn=0x00000000003E5744 string=0x00000000003E5748 ""
 *   insn=0x00000000003E5748 string=0x00000000003E574C ""
 *   insn=0x00000000003E5750 string=0x00000000003E5754 ""
 *   insn=0x00000000003E5754 string=0x00000000003E5758 ""
 *   insn=0x00000000003E5764 string=0x00000000003E5768 "@"
 *   insn=0x00000000003E5768 string=0x00000000003E576C ""
 *   insn=0x00000000003E576C string=0x00000000003E5770 ""
 *   insn=0x00000000003E5774 string=0x00000000003E5778 ""
 *   insn=0x00000000003E5778 string=0x00000000003E577C ""
 *   insn=0x00000000003E5790 string=0x00000000003E594C "aB"
 *   insn=0x00000000003E57AC string=0x00000000003E57B0 ")=G"
 *   insn=0x00000000003E57B0 string=0x00000000003E57B4 "!"
 *   insn=0x00000000003E57B4 string=0x00000000003E57B8 "i"
 *   insn=0x00000000003E57B8 string=0x00000000003E57BC "\t"
 *   insn=0x00000000003E57B8 string=0x00000000003E5884 "\t"
 *   insn=0x00000000003E57BC string=0x00000000003E57C0 "*"
 *   insn=0x00000000003E57C0 string=0x00000000003E57C4 "\n"
 *   insn=0x00000000003E57C8 string=0x00000000003E57CC "1"
 *   insn=0x00000000003E57CC string=0x00000000003E5890 "?"
 *   insn=0x00000000003E57D0 string=0x00000000003E57D4 ")=G"
 *   insn=0x00000000003E57D4 string=0x00000000003E57D8 "!"
 *   insn=0x00000000003E57D8 string=0x00000000003E57DC "I"
 *   insn=0x00000000003E57DC string=0x00000000003E57E0 "\t"
 *   insn=0x00000000003E57DC string=0x00000000003E58A4 "\t"
 *   insn=0x00000000003E57E0 string=0x00000000003E57E4 "*"
 *   insn=0x00000000003E57E4 string=0x00000000003E57E8 "\n"
 *   insn=0x00000000003E57EC string=0x00000000003E57F0 "0"
 *   insn=0x00000000003E57F0 string=0x00000000003E58B0 "?"
 *   insn=0x00000000003E57F4 string=0x00000000003E57F8 ")=G"
 *   insn=0x00000000003E57F8 string=0x00000000003E57FC "!"
 *   insn=0x00000000003E57FC string=0x00000000003E5800 ")"
 *   insn=0x00000000003E5800 string=0x00000000003E5804 "\t"
 *   insn=0x00000000003E5800 string=0x00000000003E58C4 "\t"
 *   insn=0x00000000003E5804 string=0x00000000003E5808 "*"
 *   insn=0x00000000003E5808 string=0x00000000003E580C "\n"
 *   insn=0x00000000003E5810 string=0x00000000003E5814 "/"
 *   insn=0x00000000003E5814 string=0x00000000003E58D0 "?"
 *   insn=0x00000000003E5818 string=0x00000000003E581C ")=G"
 *   insn=0x00000000003E581C string=0x00000000003E5820 "!"
 *   insn=0x00000000003E5820 string=0x00000000003E5824 "\t"
 *   insn=0x00000000003E5824 string=0x00000000003E5828 "\t"
 *   insn=0x00000000003E5824 string=0x00000000003E58E4 "\t"
 *   insn=0x00000000003E5828 string=0x00000000003E582C "*"
 *   insn=0x00000000003E582C string=0x00000000003E5830 "\n"
 *   insn=0x00000000003E5834 string=0x00000000003E5838 "."
 *   insn=0x00000000003E5838 string=0x00000000003E58F0 "?"
 *   insn=0x00000000003E583C string=0x00000000003E5840 ")=G"
 *   insn=0x00000000003E5840 string=0x00000000003E5844 "!"
 *   insn=0x00000000003E5848 string=0x00000000003E584C "\t"
 *   insn=0x00000000003E5848 string=0x00000000003E5904 "\t"
 *   insn=0x00000000003E584C string=0x00000000003E5850 "*"
 *   insn=0x00000000003E5850 string=0x00000000003E5854 "\n"
 *   insn=0x00000000003E5858 string=0x00000000003E585C "-"
 *   insn=0x00000000003E585C string=0x00000000003E5910 "?"
 *   insn=0x00000000003E5860 string=0x00000000003E5864 ")=G"
 *   insn=0x00000000003E5864 string=0x00000000003E5868 "!"
 *   insn=0x00000000003E5868 string=0x00000000003E586C "\t"
 *   insn=0x00000000003E586C string=0x00000000003E5870 "\t"
 *   insn=0x00000000003E586C string=0x00000000003E592C "\t"
 *   insn=0x00000000003E5870 string=0x00000000003E5874 "*"
 *   insn=0x00000000003E5874 string=0x00000000003E5878 "\n"
 *   insn=0x00000000003E587C string=0x00000000003E5880 "."
 *   insn=0x00000000003E5880 string=0x00000000003E5938 "?"
 *   insn=0x00000000003E5884 string=0x00000000003E5888 "*"
 *   insn=0x00000000003E5888 string=0x00000000003E588C "\n"
 *   insn=0x00000000003E5890 string=0x00000000003E5894 "l"
 *   insn=0x00000000003E58A4 string=0x00000000003E58A8 "*"
 *   insn=0x00000000003E58A8 string=0x00000000003E58AC "\n"
 *   insn=0x00000000003E58BC string=0x00000000003E58C0 "}"
 *   insn=0x00000000003E58C4 string=0x00000000003E58C8 "*"
 *   insn=0x00000000003E58C8 string=0x00000000003E58CC "\n"
 *   insn=0x00000000003E58E4 string=0x00000000003E58E8 "*"
 *   insn=0x00000000003E58E8 string=0x00000000003E58EC "\n"
 *   insn=0x00000000003E5904 string=0x00000000003E5908 "*"
 *   insn=0x00000000003E5908 string=0x00000000003E590C "\n"
 *   insn=0x00000000003E5924 string=0x00000000003E5928 "Z"
 *   insn=0x00000000003E592C string=0x00000000003E5930 "*"
 *   insn=0x00000000003E5930 string=0x00000000003E5934 "\n"
 *   insn=0x00000000003E5938 string=0x00000000003E593C ","
 *   insn=0x00000000003E5944 string=0x00000000003E5948 "V"
 *   insn=0x00000000003E594C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E5958 string=0x00000000003E595C "`("
 *   insn=0x00000000003E595C string=0x00000000003E5960 "i"
 *   insn=0x00000000003E595C string=0x00000000003E5E68 "@"
 *   insn=0x00000000003E596C string=0x00000000003E5970 "U"
 *   insn=0x00000000003E5974 string=0x00000000003E5978 ""
 *   insn=0x00000000003E5984 string=0x00000000003E5988 "\t@"
 *   insn=0x00000000003E5994 string=0x00000000003E5998 ""
 *   insn=0x00000000003E59A4 string=0x00000000003E59A8 "@"
 *   insn=0x00000000003E59C8 string=0x00000000003E59CC ""
 *   insn=0x00000000003E59D0 string=0x00000000003E59D4 "A#"
 *   insn=0x00000000003E59D8 string=0x00000000003E59DC "\t@"
 *   insn=0x00000000003E59E8 string=0x00000000003E59EC ""
 *   insn=0x00000000003E59F0 string=0x00000000003E59F4 "A""
 *   insn=0x00000000003E59F8 string=0x00000000003E59FC "@"
 *   insn=0x00000000003E5A04 string=0x00000000003E5A08 ""
 *   insn=0x00000000003E5A20 string=0x00000000003E5A24 ""
 *   insn=0x00000000003E5A30 string=0x00000000003E5A34 "\t@"
 *   insn=0x00000000003E5A40 string=0x00000000003E5A44 ""
 *   insn=0x00000000003E5A50 string=0x00000000003E5A54 "@"
 *   insn=0x00000000003E5A5C string=0x00000000003E5A60 ""
 *   insn=0x00000000003E5A70 string=0x00000000003E5A74 ""
 *   insn=0x00000000003E5A78 string=0x00000000003E5A7C "A$"
 *   insn=0x00000000003E5A80 string=0x00000000003E5A84 "\t@"
 *   insn=0x00000000003E5A90 string=0x00000000003E5A94 ""
 *   insn=0x00000000003E5A98 string=0x00000000003E5A9C "A#"
 *   insn=0x00000000003E5AA0 string=0x00000000003E5AA4 "@"
 *   insn=0x00000000003E5AC4 string=0x00000000003E5D74 "@"
 *   insn=0x00000000003E5AD8 string=0x00000000003E5ADC "(a"
 *   insn=0x00000000003E5AE8 string=0x00000000003E5AEC "J=G"
 *   insn=0x00000000003E5AEC string=0x00000000003E5AF0 ")!"
 *   insn=0x00000000003E5AF4 string=0x00000000003E5AF8 "*"
 *   insn=0x00000000003E5AF4 string=0x00000000003E5B0C "*"
 *   insn=0x00000000003E5AF8 string=0x00000000003E5AFC "K"
 *   insn=0x00000000003E5AFC string=0x00000000003E5B00 "+"
 *   insn=0x00000000003E5B08 string=0x00000000003E5B18 "_"
 *   insn=0x00000000003E5B0C string=0x00000000003E5B10 "K"
 *   insn=0x00000000003E5B10 string=0x00000000003E5B14 "+"
 *   insn=0x00000000003E5B18 string=0x00000000003E5B1C "L"
 *   insn=0x00000000003E5B28 string=0x00000000003E5DDC "r"
 *   insn=0x00000000003E5B34 string=0x00000000003E5B38 "u"
 *   insn=0x00000000003E5B3C string=0x00000000003E5B40 ""
 *   insn=0x00000000003E5B4C string=0x00000000003E5B50 "\t@"
 *   insn=0x00000000003E5B5C string=0x00000000003E5B60 ""
 *   insn=0x00000000003E5B6C string=0x00000000003E5B70 "@"
 *   insn=0x00000000003E5B84 string=0x00000000003E5B88 " "
 *   insn=0x00000000003E5B88 string=0x00000000003E5F0C "@"
 *   insn=0x00000000003E5B94 string=0x00000000003E5B98 "(a"
 *   insn=0x00000000003E5B9C string=0x00000000003E5BA0 "@"
 *   insn=0x00000000003E5BA4 string=0x00000000003E5BA8 "J=G"
 *   insn=0x00000000003E5BA8 string=0x00000000003E5BAC ")!"
 *   insn=0x00000000003E5BB0 string=0x00000000003E5BB4 "*"
 *   insn=0x00000000003E5BB0 string=0x00000000003E5BC8 "*"
 *   insn=0x00000000003E5BB4 string=0x00000000003E5BB8 "K"
 *   insn=0x00000000003E5BB8 string=0x00000000003E5BBC "+"
 *   insn=0x00000000003E5BC4 string=0x00000000003E5BD4 "_"
 *   insn=0x00000000003E5BC8 string=0x00000000003E5BCC "K"
 *   insn=0x00000000003E5BCC string=0x00000000003E5BD0 "+"
 *   insn=0x00000000003E5BE8 string=0x00000000003E5BEC " "
 *   insn=0x00000000003E5BEC string=0x00000000003E5F30 "@"
 *   insn=0x00000000003E5BF0 string=0x00000000003E5F4C "u"
 *   insn=0x00000000003E5BFC string=0x00000000003E5C00 "(a"
 *   insn=0x00000000003E5C04 string=0x00000000003E5C08 " "
 *   insn=0x00000000003E5C0C string=0x00000000003E5C10 "J=G"
 *   insn=0x00000000003E5C10 string=0x00000000003E5C14 ")!"
 *   insn=0x00000000003E5C18 string=0x00000000003E5C1C "*"
 *   insn=0x00000000003E5C18 string=0x00000000003E5C30 "*"
 *   insn=0x00000000003E5C1C string=0x00000000003E5C20 "K"
 *   insn=0x00000000003E5C20 string=0x00000000003E5C24 "+"
 *   insn=0x00000000003E5C2C string=0x00000000003E5C3C "_"
 *   insn=0x00000000003E5C30 string=0x00000000003E5C34 "K"
 *   insn=0x00000000003E5C34 string=0x00000000003E5C38 "+"
 *   insn=0x00000000003E5C3C string=0x00000000003E5C40 "l"
 *   insn=0x00000000003E5C4C string=0x00000000003E5EE0 "1"
 *   insn=0x00000000003E5C60 string=0x00000000003E5C64 ""
 *   insn=0x00000000003E5C70 string=0x00000000003E5C74 "\t@"
 *   insn=0x00000000003E5C80 string=0x00000000003E5C84 ""
 *   insn=0x00000000003E5C90 string=0x00000000003E5C94 "@"
 *   insn=0x00000000003E5CAC string=0x00000000003E5CB0 "u"
 *   insn=0x00000000003E5CAC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E5CB8 string=0x00000000003E5F94 "u"
 *   insn=0x00000000003E5CC0 string=0x00000000003E5CC4 "U"
 *   insn=0x00000000003E5CC8 string=0x00000000003E5CCC ""
 *   insn=0x00000000003E5CD8 string=0x00000000003E5CDC "\t@"
 *   insn=0x00000000003E5CE8 string=0x00000000003E5CEC ""
 *   insn=0x00000000003E5CF8 string=0x00000000003E5CFC "@"
 *   insn=0x00000000003E5D24 string=0x00000000003E5D28 "@"
 *   insn=0x00000000003E5D3C string=0x00000000003E5D40 "@"
 *   insn=0x00000000003E5D40 string=0x00000000003E5D44 ""
 *   insn=0x00000000003E5D44 string=0x00000000003E5D48 ""
 *   insn=0x00000000003E5D4C string=0x00000000003E5D50 ""
 *   insn=0x00000000003E5D50 string=0x00000000003E5D54 ""
 *   insn=0x00000000003E5D64 string=0x00000000003E5D68 "!"
 *   insn=0x00000000003E5D74 string=0x00000000003E5D78 ""
 *   insn=0x00000000003E5D78 string=0x00000000003E5D7C ""
 *   insn=0x00000000003E5D80 string=0x00000000003E5D84 ""
 *   insn=0x00000000003E5D84 string=0x00000000003E5D88 ""
 *   insn=0x00000000003E5D98 string=0x00000000003E5D9C "@"
 *   insn=0x00000000003E5DA0 string=0x00000000003E5DA4 ")=G"
 *   insn=0x00000000003E5DA4 string=0x00000000003E5DA8 "!"
 *   insn=0x00000000003E5DAC string=0x00000000003E5DB0 "\t"
 *   insn=0x00000000003E5DAC string=0x00000000003E5DC4 "\t"
 *   insn=0x00000000003E5DB0 string=0x00000000003E5DB4 "*"
 *   insn=0x00000000003E5DB4 string=0x00000000003E5DB8 "\n"
 *   insn=0x00000000003E5DC0 string=0x00000000003E5DD0 "?"
 *   insn=0x00000000003E5DC4 string=0x00000000003E5DC8 "*"
 *   insn=0x00000000003E5DC8 string=0x00000000003E5DCC "\n"
 *   insn=0x00000000003E5DE0 string=0x00000000003E5DE4 "@\t"
 *   insn=0x00000000003E5DE4 string=0x00000000003E5DE8 "P"
 *   insn=0x00000000003E5DEC string=0x00000000003E5DF0 ")=G"
 *   insn=0x00000000003E5DF0 string=0x00000000003E5DF4 "!"
 *   insn=0x00000000003E5DF8 string=0x00000000003E5DFC "\t"
 *   insn=0x00000000003E5DF8 string=0x00000000003E5E10 "\t"
 *   insn=0x00000000003E5DFC string=0x00000000003E5E00 "*"
 *   insn=0x00000000003E5E00 string=0x00000000003E5E04 "\n"
 *   insn=0x00000000003E5E0C string=0x00000000003E5E1C "?"
 *   insn=0x00000000003E5E10 string=0x00000000003E5E14 "*"
 *   insn=0x00000000003E5E14 string=0x00000000003E5E18 "\n"
 *   insn=0x00000000003E5E1C string=0x00000000003E5E20 "l"
 *   insn=0x00000000003E5E24 string=0x00000000003E5E28 "_"
 *   insn=0x00000000003E5E2C string=0x00000000003E5E30 " "
 *   insn=0x00000000003E5E40 string=0x00000000003E5E44 "@"
 *   insn=0x00000000003E5E44 string=0x00000000003E5E48 ""
 *   insn=0x00000000003E5E48 string=0x00000000003E5E4C ""
 *   insn=0x00000000003E5E50 string=0x00000000003E5E54 ""
 *   insn=0x00000000003E5E54 string=0x00000000003E5E58 ""
 *   insn=0x00000000003E5E68 string=0x00000000003E5E6C ""
 *   insn=0x00000000003E5E6C string=0x00000000003E5E70 ""
 *   insn=0x00000000003E5E74 string=0x00000000003E5E78 ""
 *   insn=0x00000000003E5E78 string=0x00000000003E5E7C ""
 *   insn=0x00000000003E5E80 string=0x00000000003E5E84 " "
 *   insn=0x00000000003E5E8C string=0x00000000003E5E90 "\t"
 *   insn=0x00000000003E5E90 string=0x00000000003E5E94 ")"
 *   insn=0x00000000003E5E9C string=0x00000000003E5EA0 "`"
 *   insn=0x00000000003E5EA4 string=0x00000000003E5EA8 ")=G"
 *   insn=0x00000000003E5EA8 string=0x00000000003E5EAC "!"
 *   insn=0x00000000003E5EB0 string=0x00000000003E5EB4 "\t"
 *   insn=0x00000000003E5EB0 string=0x00000000003E5EC8 "\t"
 *   insn=0x00000000003E5EB4 string=0x00000000003E5EB8 "*"
 *   insn=0x00000000003E5EB8 string=0x00000000003E5EBC "\n"
 *   insn=0x00000000003E5EC4 string=0x00000000003E5ED4 "?"
 *   insn=0x00000000003E5EC8 string=0x00000000003E5ECC "*"
 *   insn=0x00000000003E5ECC string=0x00000000003E5ED0 "\n"
 *   insn=0x00000000003E5EE0 string=0x00000000003E5EE4 "u"
 *   insn=0x00000000003E5EE4 string=0x00000000003E5EE8 "u"
 *   insn=0x00000000003E5EE8 string=0x00000000003E5EEC "*"
 *   insn=0x00000000003E5EF0 string=0x00000000003E5EF4 "u"
 *   insn=0x00000000003E5EF8 string=0x00000000003E5EFC "&"
 *   insn=0x00000000003E5F0C string=0x00000000003E5F10 ""
 *   insn=0x00000000003E5F10 string=0x00000000003E5F14 ""
 *   insn=0x00000000003E5F18 string=0x00000000003E5F1C ""
 *   insn=0x00000000003E5F1C string=0x00000000003E5F20 ""
 *   insn=0x00000000003E5F30 string=0x00000000003E5F34 ""
 *   insn=0x00000000003E5F34 string=0x00000000003E5F38 ""
 *   insn=0x00000000003E5F3C string=0x00000000003E5F40 ""
 *   insn=0x00000000003E5F40 string=0x00000000003E5F44 ""
 *   insn=0x00000000003E5F4C string=0x00000000003E5F50 "5"
 *   insn=0x00000000003E5F54 string=0x00000000003E5F58 ""
 *   insn=0x00000000003E5F64 string=0x00000000003E5F68 "\t@"
 *   insn=0x00000000003E5F74 string=0x00000000003E5F78 ""
 *   insn=0x00000000003E5F84 string=0x00000000003E5F88 "@"
 *   insn=0x00000000003E5F94 string=0x00000000003E5F98 "5"
 *   insn=0x00000000003E5F98 string=0x00000000003E5FDC "u"
 *   insn=0x00000000003E5F9C string=0x00000000003E5FA0 ""
 *   insn=0x00000000003E5FAC string=0x00000000003E5FB0 "\t@"
 *   insn=0x00000000003E5FBC string=0x00000000003E5FC0 ""
 *   insn=0x00000000003E5FCC string=0x00000000003E5FD0 "@"
 *   insn=0x00000000003E5FDC string=0x00000000003E5FE0 "5"
 *   insn=0x00000000003E5FE0 string=0x00000000003E6024 "u^P"
 *   insn=0x00000000003E5FE4 string=0x00000000003E5FE8 ""
 *   insn=0x00000000003E5FF4 string=0x00000000003E5FF8 "\t@"
 *   insn=0x00000000003E6004 string=0x00000000003E6008 ""
 *   insn=0x00000000003E6014 string=0x00000000003E6018 "@"
 *   insn=0x00000000003E602C string=0x00000000003E6088 "u"
 *   insn=0x00000000003E6030 string=0x00000000003E6034 "6"
 *   insn=0x00000000003E6038 string=0x00000000003E603C ""
 *   insn=0x00000000003E6048 string=0x00000000003E604C "\t@"
 *   insn=0x00000000003E6058 string=0x00000000003E605C ""
 *   insn=0x00000000003E6068 string=0x00000000003E606C "@"
 *   insn=0x00000000003E6080 string=0x00000000003E6084 "u"
 *   insn=0x00000000003E6088 string=0x00000000003E6094 "u~@"
 *   insn=0x00000000003E6094 string=0x00000000003E6098 "5"
 *   insn=0x00000000003E609C string=0x00000000003E60A0 ""
 *   insn=0x00000000003E60AC string=0x00000000003E60B0 "\t@"
 *   insn=0x00000000003E60BC string=0x00000000003E60C0 ""
 *   insn=0x00000000003E60CC string=0x00000000003E60D0 "@"
 *   insn=0x00000000003E60DC string=0x00000000003E60E0 "Tc"
 *   insn=0x00000000003E60F4 string=0x00000000003E60F8 "h"
 *   insn=0x00000000003E60FC string=0x00000000003E6100 "h"
 *   insn=0x00000000003E610C string=0x00000000003E6110 "hD"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseView::PurchaseView(Caver::GUIButton **this)
{
  unsigned __int64 v2; // x8
  Caver::GUIButton *v3; // x9
  Caver::GUIButton *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  void (__fastcall *v11)(Caver::GUIButton **, Caver::GUIButton **); // x8
  unsigned __int64 v12; // x9
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  Caver::GUIFrameView *v16; // x0
  Caver::GUIButton *v17; // x20
  Caver::GUIButton *v18; // x9
  unsigned __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 (__fastcall *v22)(Caver::GUIButton **, Caver::GUIButton **); // x8
  unsigned __int64 v23; // x9
  Caver::TextureLibrary *v24; // x0
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  _DWORD *v28; // x0
  _DWORD *v29; // x0
  unsigned __int64 v30; // x8
  Caver::GUIButton *v31; // x9
  Caver::GUIButton *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x0
  int v39; // w8
  _DWORD *v40; // x0
  int v41; // w8
  Caver::GUIButton *v42; // x0
  int v43; // w8
  Caver::GUIButton *v44; // x0
  int v45; // w1
  unsigned __int64 v46; // x9
  void (__fastcall *v47)(Caver::GUIButton **, Caver::GUIButton **); // x8
  _QWORD *v48; // x20
  __int64 v49; // x8
  __int64 v50; // x8
  Caver::GUIButton *v51; // x20
  _DWORD *v52; // x0
  Caver::TextureLibrary *v53; // x0
  Caver::TextureLibrary *v54; // x0
  unsigned __int64 v55; // x8
  Caver::GUIButton *v56; // x9
  Caver::GUIButton *v57; // x20
  __int64 v58; // x8
  __int64 v59; // x8
  _QWORD *v60; // x20
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x0
  int v64; // w8
  void *v65; // x0
  _DWORD *v66; // x0
  int v67; // w8
  void *v68; // x0
  Caver::GUIButton *v69; // x0
  Caver::GUIButton *v70; // x8
  void (__fastcall *v71)(Caver::GUIButton **, Caver::GUIButton **); // x8
  unsigned __int64 v72; // x9
  _QWORD *v73; // x20
  __int64 v74; // x8
  __int64 v75; // x8
  __int64 v76; // x0
  int v77; // w8
  __int64 result; // x0
  int v79; // w8
  unsigned int *v80; // x8
  int v81; // w9
  unsigned int *v82; // x8
  int v83; // w9
  unsigned int *v84; // x8
  int v85; // w9
  unsigned int *v86; // x8
  int v87; // w9
  unsigned int *v88; // x8
  int v89; // w9
  unsigned int *v90; // x8
  int v91; // w9
  __int64 v92; // [xsp+8h] [xbp-98h] BYREF
  __int64 v93; // [xsp+10h] [xbp-90h]
  int v94; // [xsp+1Ch] [xbp-84h]
  __int64 v95; // [xsp+20h] [xbp-80h] BYREF
  _DWORD *v96; // [xsp+28h] [xbp-78h]
  __int64 v97; // [xsp+30h] [xbp-70h]
  int v98; // [xsp+38h] [xbp-68h]
  int v99; // [xsp+40h] [xbp-60h]
  __int64 v100; // [xsp+48h] [xbp-58h] BYREF
  Caver::GUIButton *v101; // [xsp+58h] [xbp-48h] BYREF
  unsigned __int64 v102; // [xsp+60h] [xbp-40h]
  __int64 v103; // [xsp+68h] [xbp-38h]

  v103 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView((Caver::GUIView *)this);
  *this = (Caver::GUIButton *)off_6D0900;
  memset(this + 30, 0, 0x58u);
  sub_566BB8((int)&v100, "");
  v99 = -4264193;
  v98 = -16777216;
  Caver::GameInterfaceBuilder::NormalLabel();
  v3 = v101;
  v2 = v102;
  if ( v102 )
    ++*(_QWORD *)(v102 + 8);
  v4 = this[31];
  this[30] = v3;
  this[31] = (Caver::GUIButton *)v2;
  if ( v4 )
  {
    v5 = *((_QWORD *)v4 + 1) - 1LL;
    *((_QWORD *)v4 + 1) = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v4 + 16LL))(v4);
      v6 = *((_QWORD *)v4 + 2) - 1LL;
      *((_QWORD *)v4 + 2) = v6;
      if ( !v6 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v4 + 24LL))(v4);
    }
  }
  v7 = (_QWORD *)v102;
  if ( v102 )
  {
    v8 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (void *)(v100 - 24);
  if ( (__int64 *)(v100 - 24) != &qword_6FD2E0 )
  {
    v80 = (unsigned int *)(v100 - 8);
    if ( &pthread_create )
    {
      do
        v81 = __ldaxr(v80);
      while ( __stlxr(v81 - 1, v80) );
    }
    else
    {
      v81 = (*v80)--;
    }
    if ( v81 <= 0 )
      operator delete(v10);
  }
  v11 = (void (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v101 = this[30];
  v12 = (unsigned __int64)this[31];
  v102 = v12;
  if ( v12 )
    ++*(_QWORD *)(v12 + 8);
  v11(this, &v101);
  v13 = (_QWORD *)v102;
  if ( v102 )
  {
    v14 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  v16 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v16);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v17 = this[36];
  v18 = v101;
  v101 = this[35];
  v19 = v102;
  this[35] = v18;
  this[36] = (Caver::GUIButton *)v19;
  v102 = (unsigned __int64)v17;
  if ( v17 )
  {
    v20 = *((_QWORD *)v17 + 1) - 1LL;
    *((_QWORD *)v17 + 1) = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v17 + 16LL))(v17);
      v21 = *((_QWORD *)v17 + 2) - 1LL;
      *((_QWORD *)v17 + 2) = v21;
      if ( !v21 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v17 + 24LL))(v17);
    }
  }
  v22 = (__int64 (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v101 = this[35];
  v23 = (unsigned __int64)this[36];
  v102 = v23;
  if ( v23 )
    ++*(_QWORD *)(v23 + 8);
  v24 = (Caver::TextureLibrary *)v22(this, &v101);
  v25 = (_QWORD *)v102;
  if ( v102 )
  {
    v26 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v26;
    if ( !v26 )
    {
      v24 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        v24 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v24);
  sub_566BB8((int)&v101, "ui_guide_buy");
  Caver::TextureLibrary::TextureForName();
  v28 = (_DWORD *)((char *)v101 - 24);
  if ( (__int64 *)((char *)v101 - 24) != &qword_6FD2E0 )
  {
    v82 = (unsigned int *)((char *)v101 - 8);
    if ( &pthread_create )
    {
      do
        v83 = __ldaxr(v82);
      while ( __stlxr(v83 - 1, v82) );
    }
    else
    {
      v83 = (*v82)--;
    }
    if ( v83 <= 0 )
      operator delete(v28);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v28);
  sub_566BB8((int)&v101, "ui_guide_buy_pressed");
  Caver::TextureLibrary::TextureForName();
  v29 = (_DWORD *)((char *)v101 - 24);
  if ( (__int64 *)((char *)v101 - 24) != &qword_6FD2E0 )
  {
    v84 = (unsigned int *)((char *)v101 - 8);
    if ( &pthread_create )
    {
      do
        v85 = __ldaxr(v84);
      while ( __stlxr(v85 - 1, v84) );
    }
    else
    {
      v85 = (*v84)--;
    }
    if ( v85 <= 0 )
      operator delete(v29);
  }
  v95 = 0;
  v96 = 0;
  Caver::GameInterfaceBuilder::PlainButton();
  v31 = v101;
  v30 = v102;
  if ( v102 )
    ++*(_QWORD *)(v102 + 8);
  v32 = this[38];
  this[37] = v31;
  this[38] = (Caver::GUIButton *)v30;
  if ( v32 )
  {
    v33 = *((_QWORD *)v32 + 1) - 1LL;
    *((_QWORD *)v32 + 1) = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v32 + 16LL))(v32);
      v34 = *((_QWORD *)v32 + 2) - 1LL;
      *((_QWORD *)v32 + 2) = v34;
      if ( !v34 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v32 + 24LL))(v32);
    }
  }
  v35 = (_QWORD *)v102;
  if ( v102 )
  {
    v36 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  v38 = v95;
  if ( v95 )
  {
    v39 = *(_DWORD *)(v95 + 8) - 1;
    *(_DWORD *)(v95 + 8) = v39;
    if ( !v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  }
  v40 = v96;
  if ( v96 )
  {
    v41 = v96[2] - 1;
    v96[2] = v41;
    if ( !v41 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 8LL))(v40);
  }
  Caver::GUIButton::SetFrameTextureForState();
  Caver::GUIButton::SetFrameTextureForState();
  v42 = this[37];
  v43 = *(_DWORD *)(v100 + 88);
  v101 = *(Caver::GUIButton **)((char *)v42 + 116);
  LODWORD(v102) = 1122369536;
  HIDWORD(v102) = v43;
  Caver::GUIView::SetFrame(v42, (const Caver::Rectangle *)&v101);
  v44 = this[37];
  v45 = *((_DWORD *)v44 + 72);
  *((_DWORD *)v44 + 72) = v45 | 2;
  if ( (v45 | 2) != v45 )
  {
    (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v44 + 304LL))(v44);
    v44 = this[37];
  }
  v46 = (unsigned __int64)this[38];
  v47 = (void (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v101 = v44;
  v102 = v46;
  if ( v46 )
    ++*(_QWORD *)(v46 + 8);
  v47(this, &v101);
  v48 = (_QWORD *)v102;
  if ( v102 )
  {
    v49 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v49;
    if ( !v49 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
      v50 = v48[2] - 1LL;
      v48[2] = v50;
      if ( !v50 )
        (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
    }
  }
  v51 = this[37];
  sub_566BB8((int)&v101, "Loading...");
  Caver::GUIButton::SetTitle(v51);
  v52 = (_DWORD *)((char *)v101 - 24);
  if ( (__int64 *)((char *)v101 - 24) != &qword_6FD2E0 )
  {
    v86 = (unsigned int *)((char *)v101 - 8);
    if ( &pthread_create )
    {
      do
        v87 = __ldaxr(v86);
      while ( __stlxr(v87 - 1, v86) );
    }
    else
    {
      v87 = (*v86)--;
    }
    if ( v87 <= 0 )
      operator delete(v52);
  }
  v94 = 2139062143;
  v53 = (Caver::TextureLibrary *)Caver::GUIButton::SetTintColor();
  Caver::TextureLibrary::sharedLibrary(v53);
  sub_566BB8((int)&v95, "ui_button_close");
  v54 = (Caver::TextureLibrary *)Caver::TextureLibrary::TextureForName();
  Caver::TextureLibrary::sharedLibrary(v54);
  sub_566BB8((int)&v92, "ui_button_close_pressed");
  Caver::TextureLibrary::TextureForName();
  Caver::GameInterfaceBuilder::IconButton();
  v56 = v101;
  v55 = v102;
  if ( v102 )
    ++*(_QWORD *)(v102 + 8);
  v57 = this[40];
  this[39] = v56;
  this[40] = (Caver::GUIButton *)v55;
  if ( v57 )
  {
    v58 = *((_QWORD *)v57 + 1) - 1LL;
    *((_QWORD *)v57 + 1) = v58;
    if ( !v58 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v57 + 16LL))(v57);
      v59 = *((_QWORD *)v57 + 2) - 1LL;
      *((_QWORD *)v57 + 2) = v59;
      if ( !v59 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v57 + 24LL))(v57);
    }
  }
  v60 = (_QWORD *)v102;
  if ( v102 )
  {
    v61 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v61;
    if ( !v61 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
      v62 = v60[2] - 1LL;
      v60[2] = v62;
      if ( !v62 )
        (*(void (__fastcall **)(_QWORD *))(*v60 + 24LL))(v60);
    }
  }
  v63 = v93;
  if ( v93 )
  {
    v64 = *(_DWORD *)(v93 + 8) - 1;
    *(_DWORD *)(v93 + 8) = v64;
    if ( !v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 8LL))(v63);
  }
  v65 = (void *)(v92 - 24);
  if ( (__int64 *)(v92 - 24) == &qword_6FD2E0 )
    goto LABEL_69;
  v88 = (unsigned int *)(v92 - 8);
  if ( &pthread_create )
  {
    do
      v89 = __ldaxr(v88);
    while ( __stlxr(v89 - 1, v88) );
  }
  else
  {
    v89 = (*v88)--;
  }
  if ( v89 > 0 )
  {
LABEL_69:
    v66 = v96;
    if ( !v96 )
      goto LABEL_72;
  }
  else
  {
    operator delete(v65);
    v66 = v96;
    if ( !v96 )
      goto LABEL_72;
  }
  v67 = v66[2] - 1;
  v66[2] = v67;
  if ( !v67 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v66 + 8LL))(v66);
LABEL_72:
  v68 = (void *)(v95 - 24);
  if ( (__int64 *)(v95 - 24) != &qword_6FD2E0 )
  {
    v90 = (unsigned int *)(v95 - 8);
    if ( &pthread_create )
    {
      do
        v91 = __ldaxr(v90);
      while ( __stlxr(v91 - 1, v90) );
    }
    else
    {
      v91 = (*v90)--;
    }
    if ( v91 <= 0 )
      operator delete(v68);
  }
  v69 = this[39];
  v70 = *(Caver::GUIButton **)((char *)v69 + 116);
  v102 = vdup_n_s32(0x42080000u).n64_u64[0];
  v101 = v70;
  Caver::GUIView::SetFrame(v69, (const Caver::Rectangle *)&v101);
  v71 = (void (__fastcall *)(Caver::GUIButton **, Caver::GUIButton **))*((_QWORD *)*this + 12);
  v101 = this[39];
  v72 = (unsigned __int64)this[40];
  v102 = v72;
  if ( v72 )
    ++*(_QWORD *)(v72 + 8);
  v71(this, &v101);
  v73 = (_QWORD *)v102;
  if ( v102 )
  {
    v74 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v74;
    if ( !v74 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v73 + 16LL))(v73);
      v75 = v73[2] - 1LL;
      v73[2] = v75;
      if ( !v75 )
        (*(void (__fastcall **)(_QWORD *))(*v73 + 24LL))(v73);
    }
  }
  v76 = v97;
  if ( v97 )
  {
    v77 = *(_DWORD *)(v97 + 8) - 1;
    *(_DWORD *)(v97 + 8) = v77;
    if ( !v77 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 8LL))(v76);
  }
  result = v100;
  if ( v100 )
  {
    v79 = *(_DWORD *)(v100 + 8) - 1;
    *(_DWORD *)(v100 + 8) = v79;
    if ( !v79 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

