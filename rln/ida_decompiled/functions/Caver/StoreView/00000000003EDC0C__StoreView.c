/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EDC0C
 * Mangled: _ZN5Caver9StoreViewC2Ev
 * Demangled: Caver::StoreView::StoreView(void)
 *
 * Callers: 2
 *   0x00000000001F55D0  Caver::StoreView::StoreView(void)
 *   0x00000000003ED824  Caver::StoreProductView::~StoreProductView()
 *
 * Callees: 27
 *   0x00000000001F3640  Caver::StripeView::StripeView(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F7060  Caver::StripeView::SetTitle(std::string const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7690  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F9AE0  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC2E0  Caver::StripeView::SetHasTag(bool,float)
 *   0x00000000001FD290  Caver::GameInterfaceBuilder::FramedButtonWithTitle(std::string const&,bool)
 *   0x00000000001FD810  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000002021A0  Caver::GUIScrollView::GUIScrollView(void)
 *   0x00000000002026D0  Caver::FontLibrary::SmallDefaultFont(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 390
 *   insn=0x00000000003EDC20 string=0x00000000003EDC24 "W"
 *   insn=0x00000000003EDC38 string=0x00000000003EDC3C ""
 *   insn=0x00000000003EDC48 string=0x00000000003EDC4C "A"
 *   insn=0x00000000003EDC58 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003EDC5C string=0x00000000003EDC60 "`"
 *   insn=0x00000000003EDC60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003EDC68 string=0x00000000003EDC6C "MQ"
 *   insn=0x00000000003EDC78 string=0x00000000003EDC7C "hVS"
 *   insn=0x00000000003EDC78 string=0x00000000001F7690 "0'"
 *   insn=0x00000000003EDC88 string=0x00000000003EDC8C "i""
 *   insn=0x00000000003EDC90 string=0x00000000003EDC94 "5"
 *   insn=0x00000000003EDC94 string=0x00000000003EDCD8 "h"
 *   insn=0x00000000003EDC98 string=0x00000000003EDC9C ""
 *   insn=0x00000000003EDCA8 string=0x00000000003EDCAC "\t@"
 *   insn=0x00000000003EDCB8 string=0x00000000003EDCBC ""
 *   insn=0x00000000003EDCC8 string=0x00000000003EDCCC "@"
 *   insn=0x00000000003EDCD8 string=0x00000000003EDCDC "i"
 *   insn=0x00000000003EDCDC string=0x00000000003EDCE0 "1@"
 *   insn=0x00000000003EDCE4 string=0x00000000003EDCE8 "i"
 *   insn=0x00000000003EDCF0 string=0x00000000003EDCF4 "*"
 *   insn=0x00000000003EDCF4 string=0x00000000003EDCF8 "J"
 *   insn=0x00000000003EDCF8 string=0x00000000003EDCFC "*"
 *   insn=0x00000000003EDD0C string=0x00000000003EDD10 "5"
 *   insn=0x00000000003EDD14 string=0x00000000003EDD18 ""
 *   insn=0x00000000003EDD24 string=0x00000000003EDD28 "\t@"
 *   insn=0x00000000003EDD34 string=0x00000000003EDD38 ""
 *   insn=0x00000000003EDD44 string=0x00000000003EDD48 "@"
 *   insn=0x00000000003EDD54 string=0x00000000003EDD58 """
 *   insn=0x00000000003EDD60 string=0x00000000003EDD64 "7"
 *   insn=0x00000000003EDD64 string=0x00000000001F3640 "P'"
 *   insn=0x00000000003EDD70 string=0x00000000003EDD74 "hVP"
 *   insn=0x00000000003EDD70 string=0x00000000001FD810 "0'"
 *   insn=0x00000000003EDD80 string=0x00000000003EDD84 "i""
 *   insn=0x00000000003EDD88 string=0x00000000003EDD8C "5"
 *   insn=0x00000000003EDD8C string=0x00000000003EDDD0 "`"
 *   insn=0x00000000003EDD90 string=0x00000000003EDD94 ""
 *   insn=0x00000000003EDDA0 string=0x00000000003EDDA4 "\t@"
 *   insn=0x00000000003EDDB0 string=0x00000000003EDDB4 ""
 *   insn=0x00000000003EDDC0 string=0x00000000003EDDC4 "@"
 *   insn=0x00000000003EDDD8 string=0x00000000003EDDDC "A9"
 *   insn=0x00000000003EDDDC string=0x00000000003EDDE0 "u"
 *   insn=0x00000000003EDDDC string=0x00000000001FC2E0 "0'"
 *   insn=0x00000000003EDDE4 string=0x0000000000590FA4 "Offers"
 *   insn=0x00000000003EDDF0 string=0x00000000003EDDF4 "q"
 *   insn=0x00000000003EDE00 string=0x00000000001F7060 "0'"
 *   insn=0x00000000003EDE18 string=0x00000000003EDE1C "h"
 *   insn=0x00000000003EDE1C string=0x00000000003EDE20 "i"
 *   insn=0x00000000003EDE20 string=0x00000000003EDE24 "1@"
 *   insn=0x00000000003EDE28 string=0x00000000003EDE2C "i"
 *   insn=0x00000000003EDE34 string=0x00000000003EDE38 "*"
 *   insn=0x00000000003EDE38 string=0x00000000003EDE3C "J"
 *   insn=0x00000000003EDE3C string=0x00000000003EDE40 "*"
 *   insn=0x00000000003EDE50 string=0x00000000003EDE54 "5"
 *   insn=0x00000000003EDE58 string=0x00000000003EDE5C ""
 *   insn=0x00000000003EDE68 string=0x00000000003EDE6C "\t@"
 *   insn=0x00000000003EDE78 string=0x00000000003EDE7C ""
 *   insn=0x00000000003EDE88 string=0x00000000003EDE8C "@"
 *   insn=0x00000000003EDEB0 string=0x00000000003EDEB4 "W>"
 *   insn=0x00000000003EDEB4 string=0x00000000003EDEB8 "hVQ"
 *   insn=0x00000000003EDEC4 string=0x00000000003EDEC8 "i""
 *   insn=0x00000000003EDECC string=0x00000000003EDED0 "5"
 *   insn=0x00000000003EDED0 string=0x00000000003EDF14 "h"
 *   insn=0x00000000003EDED4 string=0x00000000003EDED8 ""
 *   insn=0x00000000003EDEE4 string=0x00000000003EDEE8 "\t@"
 *   insn=0x00000000003EDEF4 string=0x00000000003EDEF8 ""
 *   insn=0x00000000003EDF04 string=0x00000000003EDF08 "@"
 *   insn=0x00000000003EDF14 string=0x00000000003EDF18 "i"
 *   insn=0x00000000003EDF18 string=0x00000000003EDF1C "1@"
 *   insn=0x00000000003EDF20 string=0x00000000003EDF24 "i"
 *   insn=0x00000000003EDF2C string=0x00000000003EDF30 "*"
 *   insn=0x00000000003EDF30 string=0x00000000003EDF34 "J"
 *   insn=0x00000000003EDF34 string=0x00000000003EDF38 "*"
 *   insn=0x00000000003EDF48 string=0x00000000003EDF4C "5"
 *   insn=0x00000000003EDF4C string=0x00000000003EDF90 "u"
 *   insn=0x00000000003EDF50 string=0x00000000003EDF54 ""
 *   insn=0x00000000003EDF60 string=0x00000000003EDF64 "\t@"
 *   insn=0x00000000003EDF70 string=0x00000000003EDF74 ""
 *   insn=0x00000000003EDF80 string=0x00000000003EDF84 "@"
 *   insn=0x00000000003EDFAC string=0x00000000003EDFB0 ",$"
 *   insn=0x00000000003EDFC0 string=0x00000000003EDFC4 "h"
 *   insn=0x00000000003EDFD0 string=0x00000000003EDFD4 "A"
 *   insn=0x00000000003EDFF4 string=0x00000000003EDFF8 " "
 *   insn=0x00000000003EDFFC string=0x00000000003EE000 ""
 *   insn=0x00000000003EE00C string=0x00000000003EE010 "6"
 *   insn=0x00000000003EE014 string=0x00000000003EE018 ""
 *   insn=0x00000000003EE024 string=0x00000000003EE028 "\t@"
 *   insn=0x00000000003EE034 string=0x00000000003EE038 ""
 *   insn=0x00000000003EE044 string=0x00000000003EE048 "@"
 *   insn=0x00000000003EE054 string=0x00000000003EE058 ".)"
 *   insn=0x00000000003EE058 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003EE05C string=0x00000000001FA350 "0'"
 *   insn=0x00000000003EE064 string=0x0000000000591433 "ui_button_close"
 *   insn=0x00000000003EE084 string=0x00000000003EE088 "JE"
 *   insn=0x00000000003EE094 string=0x0000000000591443 "ui_button_close_pressed"
 *   insn=0x00000000003EE0B4 string=0x00000000003EE0B8 ">E"
 *   insn=0x00000000003EE0C8 string=0x00000000001F9AE0 "0'"
 *   insn=0x00000000003EE0D0 string=0x00000000003EE0D4 "\n"
 *   insn=0x00000000003EE0D0 string=0x00000000003EE0E0 "u~@"
 *   insn=0x00000000003EE0D4 string=0x00000000003EE0D8 "J"
 *   insn=0x00000000003EE0D8 string=0x00000000003EE0DC "\n"
 *   insn=0x00000000003EE0E0 string=0x00000000003EE0E4 "i""
 *   insn=0x00000000003EE0E4 string=0x00000000003EE0E8 "5"
 *   insn=0x00000000003EE0EC string=0x00000000003EE0F0 ""
 *   insn=0x00000000003EE0FC string=0x00000000003EE100 "\t@"
 *   insn=0x00000000003EE10C string=0x00000000003EE110 ""
 *   insn=0x00000000003EE11C string=0x00000000003EE120 "@"
 *   insn=0x00000000003EE12C string=0x00000000003EE130 "5"
 *   insn=0x00000000003EE134 string=0x00000000003EE138 ""
 *   insn=0x00000000003EE144 string=0x00000000003EE148 "\t@"
 *   insn=0x00000000003EE154 string=0x00000000003EE158 ""
 *   insn=0x00000000003EE164 string=0x00000000003EE168 "@"
 *   insn=0x00000000003EE178 string=0x00000000003EE17C "@"
 *   insn=0x00000000003EE17C string=0x00000000003EE180 ""
 *   insn=0x00000000003EE180 string=0x00000000003EE184 ""
 *   insn=0x00000000003EE188 string=0x00000000003EE18C ""
 *   insn=0x00000000003EE18C string=0x00000000003EE190 ""
 *   insn=0x00000000003EE1AC string=0x00000000003EE1B0 "@"
 *   insn=0x00000000003EE1B0 string=0x00000000003EE1B4 ""
 *   insn=0x00000000003EE1B4 string=0x00000000003EE1B8 ""
 *   insn=0x00000000003EE1BC string=0x00000000003EE1C0 ""
 *   insn=0x00000000003EE1C0 string=0x00000000003EE1C4 ""
 *   insn=0x00000000003EE1D4 string=0x00000000003EE1D8 "A"
 *   insn=0x00000000003EE1DC string=0x00000000003EE1E0 "\tA"
 *   insn=0x00000000003EE1E0 string=0x00000000003EE1E4 " "
 *   insn=0x00000000003EE1E4 string=0x00000000003EE1E8 "@G"
 *   insn=0x00000000003EE1F8 string=0x00000000003EE1FC "h"
 *   insn=0x00000000003EE1F8 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003EE1FC string=0x00000000003EE200 "iz@"
 *   insn=0x00000000003EE200 string=0x00000000003EE204 "1@"
 *   insn=0x00000000003EE208 string=0x00000000003EE20C "i~@"
 *   insn=0x00000000003EE214 string=0x00000000003EE218 "*"
 *   insn=0x00000000003EE218 string=0x00000000003EE21C "J"
 *   insn=0x00000000003EE21C string=0x00000000003EE220 "*"
 *   insn=0x00000000003EE230 string=0x00000000003EE234 "4"
 *   insn=0x00000000003EE234 string=0x00000000003EE278 "!"
 *   insn=0x00000000003EE238 string=0x00000000003EE23C ""
 *   insn=0x00000000003EE248 string=0x00000000003EE24C "\t@"
 *   insn=0x00000000003EE258 string=0x00000000003EE25C ""
 *   insn=0x00000000003EE268 string=0x00000000003EE26C "@"
 *   insn=0x00000000003EE278 string=0x0000000000593298 "Restore Purchases"
 *   insn=0x00000000003EE284 string=0x00000000003EE288 "L"
 *   insn=0x00000000003EE298 string=0x00000000001FD290 "0'"
 *   insn=0x00000000003EE2A0 string=0x00000000003EE2A4 "\n"
 *   insn=0x00000000003EE2A0 string=0x00000000003EE2B0 "t"
 *   insn=0x00000000003EE2A4 string=0x00000000003EE2A8 "J"
 *   insn=0x00000000003EE2A8 string=0x00000000003EE2AC "\n"
 *   insn=0x00000000003EE2B0 string=0x00000000003EE2B4 "i""
 *   insn=0x00000000003EE2B4 string=0x00000000003EE2B8 "4"
 *   insn=0x00000000003EE2BC string=0x00000000003EE2C0 ""
 *   insn=0x00000000003EE2CC string=0x00000000003EE2D0 "\t@"
 *   insn=0x00000000003EE2DC string=0x00000000003EE2E0 ""
 *   insn=0x00000000003EE2EC string=0x00000000003EE2F0 "@"
 *   insn=0x00000000003EE2FC string=0x00000000003EE300 "4"
 *   insn=0x00000000003EE304 string=0x00000000003EE308 ""
 *   insn=0x00000000003EE314 string=0x00000000003EE318 "\t@"
 *   insn=0x00000000003EE324 string=0x00000000003EE328 ""
 *   insn=0x00000000003EE334 string=0x00000000003EE338 "@"
 *   insn=0x00000000003EE350 string=0x00000000003EE354 "`"
 *   insn=0x00000000003EE358 string=0x00000000001F6B30 "0'"
 *   insn=0x00000000003EE35C string=0x00000000003EE360 "0B"
 *   insn=0x00000000003EE374 string=0x00000000003EE378 "`"
 *   insn=0x00000000003EE380 string=0x00000000003EE384 "*"
 *   insn=0x00000000003EE384 string=0x00000000003EE388 "J"
 *   insn=0x00000000003EE388 string=0x00000000003EE38C "*"
 *   insn=0x00000000003EE394 string=0x00000000003EE398 "5"
 *   insn=0x00000000003EE39C string=0x00000000003EE3A0 ""
 *   insn=0x00000000003EE3AC string=0x00000000003EE3B0 "\t@"
 *   insn=0x00000000003EE3BC string=0x00000000003EE3C0 ""
 *   insn=0x00000000003EE3CC string=0x00000000003EE3D0 "@"
 *   insn=0x00000000003EE3DC string=0x00000000003EE3E0 "L("
 *   insn=0x00000000003EE3E4 string=0x00000000003EE3E8 "4"
 *   insn=0x00000000003EE3E8 string=0x00000000003EE42C "`"
 *   insn=0x00000000003EE3EC string=0x00000000003EE3F0 ""
 *   insn=0x00000000003EE3FC string=0x00000000003EE400 "\t@"
 *   insn=0x00000000003EE40C string=0x00000000003EE410 ""
 *   insn=0x00000000003EE41C string=0x00000000003EE420 "@"
 *   insn=0x00000000003EE42C string=0x00000000003EE430 "("
 *   insn=0x00000000003EE434 string=0x00000000003EE438 "\t@G"
 *   insn=0x00000000003EE444 string=0x00000000003EE448 "J3"
 *   insn=0x00000000003EE458 string=0x00000000003EE5D0 "@"
 *   insn=0x00000000003EE474 string=0x00000000003EE478 ")=G"
 *   insn=0x00000000003EE478 string=0x00000000003EE47C "!"
 *   insn=0x00000000003EE47C string=0x00000000003EE480 "I"
 *   insn=0x00000000003EE480 string=0x00000000003EE484 "\t"
 *   insn=0x00000000003EE480 string=0x00000000003EE528 "\t"
 *   insn=0x00000000003EE484 string=0x00000000003EE488 "*"
 *   insn=0x00000000003EE488 string=0x00000000003EE48C "\n"
 *   insn=0x00000000003EE490 string=0x00000000003EE494 "("
 *   insn=0x00000000003EE494 string=0x00000000003EE534 "?"
 *   insn=0x00000000003EE498 string=0x00000000003EE49C ")=G"
 *   insn=0x00000000003EE49C string=0x00000000003EE4A0 "!"
 *   insn=0x00000000003EE4A0 string=0x00000000003EE4A4 ")"
 *   insn=0x00000000003EE4A4 string=0x00000000003EE4A8 "\t"
 *   insn=0x00000000003EE4A4 string=0x00000000003EE548 "\t"
 *   insn=0x00000000003EE4A8 string=0x00000000003EE4AC "*"
 *   insn=0x00000000003EE4AC string=0x00000000003EE4B0 "\n"
 *   insn=0x00000000003EE4B4 string=0x00000000003EE4B8 "'"
 *   insn=0x00000000003EE4B8 string=0x00000000003EE554 "?"
 *   insn=0x00000000003EE4BC string=0x00000000003EE4C0 ")=G"
 *   insn=0x00000000003EE4C0 string=0x00000000003EE4C4 "!"
 *   insn=0x00000000003EE4C4 string=0x00000000003EE4C8 "\t"
 *   insn=0x00000000003EE4C8 string=0x00000000003EE4CC "\t"
 *   insn=0x00000000003EE4C8 string=0x00000000003EE568 "\t"
 *   insn=0x00000000003EE4CC string=0x00000000003EE4D0 "*"
 *   insn=0x00000000003EE4D0 string=0x00000000003EE4D4 "\n"
 *   insn=0x00000000003EE4D8 string=0x00000000003EE4DC "&"
 *   insn=0x00000000003EE4DC string=0x00000000003EE574 "?"
 *   insn=0x00000000003EE4E0 string=0x00000000003EE4E4 ")=G"
 *   insn=0x00000000003EE4E4 string=0x00000000003EE4E8 "!"
 *   insn=0x00000000003EE4E8 string=0x00000000003EE4EC ")"
 *   insn=0x00000000003EE4EC string=0x00000000003EE4F0 "\t"
 *   insn=0x00000000003EE4EC string=0x00000000003EE590 "\t"
 *   insn=0x00000000003EE4F0 string=0x00000000003EE4F4 "*"
 *   insn=0x00000000003EE4F4 string=0x00000000003EE4F8 "\n"
 *   insn=0x00000000003EE4FC string=0x00000000003EE500 "'"
 *   insn=0x00000000003EE500 string=0x00000000003EE59C "?"
 *   insn=0x00000000003EE504 string=0x00000000003EE508 ")=G"
 *   insn=0x00000000003EE508 string=0x00000000003EE50C "!"
 *   insn=0x00000000003EE50C string=0x00000000003EE510 "\t"
 *   insn=0x00000000003EE510 string=0x00000000003EE514 "\t"
 *   insn=0x00000000003EE510 string=0x00000000003EE5B0 "\t"
 *   insn=0x00000000003EE514 string=0x00000000003EE518 "*"
 *   insn=0x00000000003EE518 string=0x00000000003EE51C "\n"
 *   insn=0x00000000003EE520 string=0x00000000003EE524 "&"
 *   insn=0x00000000003EE524 string=0x00000000003EE5BC "?"
 *   insn=0x00000000003EE528 string=0x00000000003EE52C "*"
 *   insn=0x00000000003EE52C string=0x00000000003EE530 "\n"
 *   insn=0x00000000003EE534 string=0x00000000003EE538 ","
 *   insn=0x00000000003EE540 string=0x00000000003EE544 "6"
 *   insn=0x00000000003EE548 string=0x00000000003EE54C "*"
 *   insn=0x00000000003EE54C string=0x00000000003EE550 "\n"
 *   insn=0x00000000003EE554 string=0x00000000003EE558 "l"
 *   insn=0x00000000003EE568 string=0x00000000003EE56C "*"
 *   insn=0x00000000003EE56C string=0x00000000003EE570 "\n"
 *   insn=0x00000000003EE584 string=0x00000000003EE588 "@"
 *   insn=0x00000000003EE590 string=0x00000000003EE594 "*"
 *   insn=0x00000000003EE594 string=0x00000000003EE598 "\n"
 *   insn=0x00000000003EE5B0 string=0x00000000003EE5B4 "*"
 *   insn=0x00000000003EE5B4 string=0x00000000003EE5B8 "\n"
 *   insn=0x00000000003EE5C4 string=0x00000000003EE5C8 "w"
 *   insn=0x00000000003EE5C8 string=0x00000000003EE5CC "b"
 *   insn=0x00000000003EE5D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EE5E0 string=0x00000000003EE5E4 ""
 *   insn=0x00000000003EE5F0 string=0x00000000003EE5F4 "\t@"
 *   insn=0x00000000003EE600 string=0x00000000003EE604 ""
 *   insn=0x00000000003EE610 string=0x00000000003EE614 "@"
 *   insn=0x00000000003EE634 string=0x00000000003EE638 ""
 *   insn=0x00000000003EE63C string=0x00000000003EE640 "!"
 *   insn=0x00000000003EE644 string=0x00000000003EE648 "\t@"
 *   insn=0x00000000003EE654 string=0x00000000003EE658 ""
 *   insn=0x00000000003EE65C string=0x00000000003EE660 "!"
 *   insn=0x00000000003EE664 string=0x00000000003EE668 "@"
 *   insn=0x00000000003EE68C string=0x00000000003EEA64 "u^T"
 *   insn=0x00000000003EE690 string=0x00000000003EE694 ""
 *   insn=0x00000000003EE698 string=0x00000000003EE69C "A"
 *   insn=0x00000000003EE6A0 string=0x00000000003EE6A4 "\t@"
 *   insn=0x00000000003EE6B0 string=0x00000000003EE6B4 ""
 *   insn=0x00000000003EE6B8 string=0x00000000003EE6BC "A"
 *   insn=0x00000000003EE6C0 string=0x00000000003EE6C4 "@"
 *   insn=0x00000000003EE6E8 string=0x00000000003EE6EC ""
 *   insn=0x00000000003EE6F8 string=0x00000000003EE6FC "\t@"
 *   insn=0x00000000003EE708 string=0x00000000003EE70C ""
 *   insn=0x00000000003EE718 string=0x00000000003EE71C "@"
 *   insn=0x00000000003EE738 string=0x00000000003EE73C " "
 *   insn=0x00000000003EE73C string=0x00000000003EE9A0 "@"
 *   insn=0x00000000003EE750 string=0x00000000003EE754 "(a"
 *   insn=0x00000000003EE758 string=0x00000000003EE75C "@"
 *   insn=0x00000000003EE760 string=0x00000000003EE764 "J=G"
 *   insn=0x00000000003EE764 string=0x00000000003EE768 ")!"
 *   insn=0x00000000003EE768 string=0x00000000003EE76C "\n"
 *   insn=0x00000000003EE76C string=0x00000000003EE770 "*"
 *   insn=0x00000000003EE76C string=0x00000000003EE86C "*"
 *   insn=0x00000000003EE770 string=0x00000000003EE774 "K"
 *   insn=0x00000000003EE774 string=0x00000000003EE778 "+"
 *   insn=0x00000000003EE77C string=0x00000000003EE780 ">"
 *   insn=0x00000000003EE780 string=0x00000000003EE878 "_"
 *   insn=0x00000000003EE794 string=0x00000000003EE798 ""
 *   insn=0x00000000003EE79C string=0x00000000003EE7A0 "!"
 *   insn=0x00000000003EE7A4 string=0x00000000003EE7A8 "\t@"
 *   insn=0x00000000003EE7B4 string=0x00000000003EE7B8 ""
 *   insn=0x00000000003EE7BC string=0x00000000003EE7C0 "!"
 *   insn=0x00000000003EE7C4 string=0x00000000003EE7C8 "@"
 *   insn=0x00000000003EE7E8 string=0x00000000003EE7EC ""
 *   insn=0x00000000003EE7F8 string=0x00000000003EE7FC "\t@"
 *   insn=0x00000000003EE808 string=0x00000000003EE80C ""
 *   insn=0x00000000003EE818 string=0x00000000003EE81C "@"
 *   insn=0x00000000003EE830 string=0x00000000003EE834 "J"
 *   insn=0x00000000003EE838 string=0x00000000003EE83C "(a"
 *   insn=0x00000000003EE848 string=0x00000000003EE84C "J=G"
 *   insn=0x00000000003EE84C string=0x00000000003EE850 ")!"
 *   insn=0x00000000003EE854 string=0x00000000003EE858 "*"
 *   insn=0x00000000003EE858 string=0x00000000003EE85C "K"
 *   insn=0x00000000003EE85C string=0x00000000003EE860 "+"
 *   insn=0x00000000003EE86C string=0x00000000003EE870 "K"
 *   insn=0x00000000003EE870 string=0x00000000003EE874 "+"
 *   insn=0x00000000003EE878 string=0x00000000003EE87C "L"
 *   insn=0x00000000003EE888 string=0x00000000003EE88C "v"
 *   insn=0x00000000003EE89C string=0x00000000003EE8A0 "5"
 *   insn=0x00000000003EE8A4 string=0x00000000003EE8A8 ""
 *   insn=0x00000000003EE8B4 string=0x00000000003EE8B8 "\t@"
 *   insn=0x00000000003EE8C4 string=0x00000000003EE8C8 ""
 *   insn=0x00000000003EE8D4 string=0x00000000003EE8D8 "@"
 *   insn=0x00000000003EE8E0 string=0x00000000003EE8E4 "`"
 *   insn=0x00000000003EE8EC string=0x00000000003EE8F0 "p""
 *   insn=0x00000000003EE8F0 string=0x00000000003EE8F4 "\"
 *   insn=0x00000000003EE8F0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003EE8F8 string=0x00000000003EE8FC "#"
 *   insn=0x00000000003EE900 string=0x00000000003EE904 "."
 *   insn=0x00000000003EE914 string=0x00000000003EE918 "`\n"
 *   insn=0x00000000003EE91C string=0x00000000003EE920 ")=G"
 *   insn=0x00000000003EE920 string=0x00000000003EE924 "!"
 *   insn=0x00000000003EE928 string=0x00000000003EE92C "\t"
 *   insn=0x00000000003EE928 string=0x00000000003EE940 "\t"
 *   insn=0x00000000003EE92C string=0x00000000003EE930 "*"
 *   insn=0x00000000003EE930 string=0x00000000003EE934 "\n"
 *   insn=0x00000000003EE93C string=0x00000000003EE94C "?"
 *   insn=0x00000000003EE940 string=0x00000000003EE944 "*"
 *   insn=0x00000000003EE944 string=0x00000000003EE948 "\n"
 *   insn=0x00000000003EE958 string=0x00000000003EE95C "B"
 *   insn=0x00000000003EE968 string=0x00000000003EE96C "@"
 *   insn=0x00000000003EE96C string=0x00000000003EE970 ""
 *   insn=0x00000000003EE970 string=0x00000000003EE974 ""
 *   insn=0x00000000003EE978 string=0x00000000003EE97C ""
 *   insn=0x00000000003EE97C string=0x00000000003EE980 ""
 *   insn=0x00000000003EE9A0 string=0x00000000003EE9A4 ""
 *   insn=0x00000000003EE9A4 string=0x00000000003EE9A8 ""
 *   insn=0x00000000003EE9AC string=0x00000000003EE9B0 ""
 *   insn=0x00000000003EE9B0 string=0x00000000003EE9B4 ""
 *   insn=0x00000000003EE9CC string=0x00000000003EE9D0 ")=G"
 *   insn=0x00000000003EE9D0 string=0x00000000003EE9D4 "!"
 *   insn=0x00000000003EE9D8 string=0x00000000003EE9DC "\t"
 *   insn=0x00000000003EE9D8 string=0x00000000003EE9F0 "\t"
 *   insn=0x00000000003EE9DC string=0x00000000003EE9E0 "*"
 *   insn=0x00000000003EE9E0 string=0x00000000003EE9E4 "\n"
 *   insn=0x00000000003EE9EC string=0x00000000003EE9FC "?"
 *   insn=0x00000000003EE9F0 string=0x00000000003EE9F4 "*"
 *   insn=0x00000000003EE9F4 string=0x00000000003EE9F8 "\n"
 *   insn=0x00000000003EE9FC string=0x00000000003EEA00 ","
 *   insn=0x00000000003EEA04 string=0x00000000003EEA08 "g"
 *   insn=0x00000000003EEA10 string=0x00000000003EEA14 ")=G"
 *   insn=0x00000000003EEA14 string=0x00000000003EEA18 "!"
 *   insn=0x00000000003EEA1C string=0x00000000003EEA20 "\t"
 *   insn=0x00000000003EEA1C string=0x00000000003EEA34 "\t"
 *   insn=0x00000000003EEA20 string=0x00000000003EEA24 "*"
 *   insn=0x00000000003EEA24 string=0x00000000003EEA28 "\n"
 *   insn=0x00000000003EEA30 string=0x00000000003EEA40 "?"
 *   insn=0x00000000003EEA34 string=0x00000000003EEA38 "*"
 *   insn=0x00000000003EEA38 string=0x00000000003EEA3C "\n"
 *   insn=0x00000000003EEA48 string=0x00000000003EEA4C "V"
 *   insn=0x00000000003EEA50 string=0x00000000003EEA54 "`"
 *   insn=0x00000000003EEA6C string=0x00000000003EEAC8 "u"
 *   insn=0x00000000003EEA70 string=0x00000000003EEA74 "6"
 *   insn=0x00000000003EEA78 string=0x00000000003EEA7C ""
 *   insn=0x00000000003EEA88 string=0x00000000003EEA8C "\t@"
 *   insn=0x00000000003EEA98 string=0x00000000003EEA9C ""
 *   insn=0x00000000003EEAA8 string=0x00000000003EEAAC "@"
 *   insn=0x00000000003EEAC0 string=0x00000000003EEAC4 "u"
 *   insn=0x00000000003EEAC8 string=0x00000000003EEAD4 "u"
 *   insn=0x00000000003EEAD4 string=0x00000000003EEAD8 "5"
 *   insn=0x00000000003EEAD8 string=0x00000000003EEB1C "u"
 *   insn=0x00000000003EEADC string=0x00000000003EEAE0 ""
 *   insn=0x00000000003EEAEC string=0x00000000003EEAF0 "\t@"
 *   insn=0x00000000003EEAFC string=0x00000000003EEB00 ""
 *   insn=0x00000000003EEB0C string=0x00000000003EEB10 "@"
 *   insn=0x00000000003EEB1C string=0x00000000003EEB20 "5"
 *   insn=0x00000000003EEB20 string=0x00000000003EEB64 "u"
 *   insn=0x00000000003EEB24 string=0x00000000003EEB28 ""
 *   insn=0x00000000003EEB34 string=0x00000000003EEB38 "\t@"
 *   insn=0x00000000003EEB44 string=0x00000000003EEB48 ""
 *   insn=0x00000000003EEB54 string=0x00000000003EEB58 "@"
 *   insn=0x00000000003EEB64 string=0x00000000003EEB68 "5"
 *   insn=0x00000000003EEB68 string=0x00000000003EEBAC "u"
 *   insn=0x00000000003EEB6C string=0x00000000003EEB70 ""
 *   insn=0x00000000003EEB7C string=0x00000000003EEB80 "\t@"
 *   insn=0x00000000003EEB8C string=0x00000000003EEB90 ""
 *   insn=0x00000000003EEB9C string=0x00000000003EEBA0 "@"
 *   insn=0x00000000003EEBAC string=0x00000000003EEBB0 "5"
 *   insn=0x00000000003EEBB0 string=0x00000000003EEBF4 "u~@"
 *   insn=0x00000000003EEBB4 string=0x00000000003EEBB8 ""
 *   insn=0x00000000003EEBC4 string=0x00000000003EEBC8 "\t@"
 *   insn=0x00000000003EEBD4 string=0x00000000003EEBD8 ""
 *   insn=0x00000000003EEBE4 string=0x00000000003EEBE8 "@"
 *   insn=0x00000000003EEBF4 string=0x00000000003EEBF8 "5"
 *   insn=0x00000000003EEBFC string=0x00000000003EEC00 ""
 *   insn=0x00000000003EEC0C string=0x00000000003EEC10 "\t@"
 *   insn=0x00000000003EEC1C string=0x00000000003EEC20 ""
 *   insn=0x00000000003EEC2C string=0x00000000003EEC30 "@"
 *   insn=0x00000000003EEC3C string=0x00000000003EEC40 "|@"
 *   insn=0x00000000003EEC54 string=0x00000000003EEC58 "h"
 *   insn=0x00000000003EEC5C string=0x00000000003EEC60 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreView::StoreView(Caver::StripeView **this)
{
  char *v2; // x20
  Caver::GUIScrollView *v3; // x0
  Caver::StripeView *v4; // x21
  Caver::StripeView *v5; // x9
  Caver::StripeView *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void (__fastcall *v9)(Caver::StripeView **, Caver::StripeView **); // x8
  Caver::StripeView *v10; // x9
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x8
  Caver::StripeView *v14; // x0
  Caver::StripeView *v15; // x21
  Caver::StripeView *v16; // x9
  Caver::StripeView *v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  char *v20; // x0
  void (__fastcall *v21)(Caver::StripeView **, Caver::StripeView **); // x8
  Caver::StripeView *v22; // x9
  _QWORD *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x8
  Caver::StripeView *v26; // x0
  Caver::StripeView *v27; // x21
  Caver::StripeView *v28; // x9
  Caver::StripeView *v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  void (__fastcall *v32)(Caver::StripeView **, Caver::StripeView **); // x8
  Caver::StripeView *v33; // x9
  _QWORD *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x8
  char *updated; // x0
  __int64 v38; // x21
  _QWORD *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x8
  Caver::TextureLibrary *v42; // x0
  Caver::StripeView *v43; // x8
  Caver::StripeView *v44; // x9
  Caver::StripeView *v45; // x21
  __int64 v46; // x8
  __int64 v47; // x8
  _QWORD *v48; // x21
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x0
  int v52; // w8
  void *v53; // x0
  _DWORD *v54; // x0
  int v55; // w8
  void *v56; // x0
  Caver::GUIView *v57; // x0
  Caver::StripeView *v58; // x8
  void (__fastcall *v59)(Caver::StripeView **, Caver::StripeView **); // x8
  Caver::StripeView *v60; // x9
  _QWORD *v61; // x20
  __int64 v62; // x8
  __int64 v63; // x8
  Caver::StripeView *v64; // x8
  Caver::StripeView *v65; // x9
  Caver::StripeView *v66; // x20
  __int64 v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x20
  __int64 v70; // x8
  __int64 v71; // x8
  _DWORD *v72; // x0
  Caver::FontLibrary *v73; // x0
  Caver::FontLibrary *v74; // x20
  Caver::FontLibrary *v75; // x0
  Caver::StripeView *v76; // x8
  unsigned __int64 v77; // x9
  _QWORD *v78; // x21
  __int64 v79; // x8
  __int64 v80; // x8
  _QWORD *v81; // x20
  __int64 v82; // x8
  __int64 v83; // x8
  Caver::StripeView *v84; // x0
  Caver::StripeView *v85; // x9
  unsigned int *v87; // x8
  int v88; // w9
  unsigned int *v89; // x8
  int v90; // w9
  unsigned int *v91; // x8
  int v92; // w9
  unsigned int *v93; // x8
  int v94; // w9
  unsigned int *v95; // x8
  int v96; // w9
  __int64 v97; // [xsp+8h] [xbp-78h] BYREF
  __int64 v98; // [xsp+10h] [xbp-70h]
  __int64 v99; // [xsp+20h] [xbp-60h] BYREF
  _DWORD *v100; // [xsp+28h] [xbp-58h] BYREF
  Caver::StripeView *v101; // [xsp+30h] [xbp-50h] BYREF
  unsigned __int64 v102; // [xsp+38h] [xbp-48h]
  __int64 v103; // [xsp+48h] [xbp-38h]

  v103 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView((Caver::GUIView *)this);
  *this = (Caver::StripeView *)off_6D0CD0;
  v2 = (char *)(this + 30);
  memset(this + 30, 0, 0x68u);
  v3 = (Caver::GUIScrollView *)operator new(0x1F0u);
  Caver::GUIScrollView::GUIScrollView(v3);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>();
  v4 = this[39];
  v5 = v101;
  v101 = this[38];
  v6 = (Caver::StripeView *)v102;
  this[38] = v5;
  this[39] = v6;
  v102 = (unsigned __int64)v4;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 1) - 1LL;
    *((_QWORD *)v4 + 1) = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v4 + 16LL))(v4);
      v8 = *((_QWORD *)v4 + 2) - 1LL;
      *((_QWORD *)v4 + 2) = v8;
      if ( !v8 )
        (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v4 + 24LL))(v4);
    }
  }
  v9 = (void (__fastcall *)(Caver::StripeView **, Caver::StripeView **))*((_QWORD *)*this + 12);
  v101 = this[38];
  v10 = this[39];
  v102 = (unsigned __int64)v10;
  if ( v10 )
    ++*((_QWORD *)v10 + 1);
  v9(this, &v101);
  v11 = (_QWORD *)v102;
  if ( v102 )
  {
    v12 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (Caver::StripeView *)operator new(0x138u);
  Caver::StripeView::StripeView(v14);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>();
  v15 = this[33];
  v16 = v101;
  v101 = this[32];
  v17 = (Caver::StripeView *)v102;
  this[32] = v16;
  this[33] = v17;
  v102 = (unsigned __int64)v15;
  if ( v15 )
  {
    v18 = *((_QWORD *)v15 + 1) - 1LL;
    *((_QWORD *)v15 + 1) = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v15 + 16LL))(v15);
      v19 = *((_QWORD *)v15 + 2) - 1LL;
      *((_QWORD *)v15 + 2) = v19;
      if ( !v19 )
        (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v15 + 24LL))(v15);
    }
  }
  Caver::StripeView::SetHasTag(this[32], 1, 0.0);
  sub_566BB8((int)&v101, "Offers");
  Caver::StripeView::SetTitle();
  v20 = (char *)v101 - 24;
  if ( (__int64 *)((char *)v101 - 24) != &qword_6FD2E0 )
  {
    v87 = (unsigned int *)((char *)v101 - 8);
    if ( &pthread_create )
    {
      do
        v88 = __ldaxr(v87);
      while ( __stlxr(v88 - 1, v87) );
    }
    else
    {
      v88 = (*v87)--;
    }
    if ( v88 <= 0 )
      operator delete(v20);
  }
  v21 = (void (__fastcall *)(Caver::StripeView **, Caver::StripeView **))*((_QWORD *)*this + 12);
  v101 = this[32];
  v22 = this[33];
  v102 = (unsigned __int64)v22;
  if ( v22 )
    ++*((_QWORD *)v22 + 1);
  v21(this, &v101);
  v23 = (_QWORD *)v102;
  if ( v102 )
  {
    v24 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = (Caver::StripeView *)operator new(0x138u);
  Caver::StripeView::StripeView(v26);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>();
  v27 = this[35];
  v28 = v101;
  v101 = this[34];
  v29 = (Caver::StripeView *)v102;
  this[34] = v28;
  this[35] = v29;
  v102 = (unsigned __int64)v27;
  if ( v27 )
  {
    v30 = *((_QWORD *)v27 + 1) - 1LL;
    *((_QWORD *)v27 + 1) = v30;
    if ( !v30 )
    {
      (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v27 + 16LL))(v27);
      v31 = *((_QWORD *)v27 + 2) - 1LL;
      *((_QWORD *)v27 + 2) = v31;
      if ( !v31 )
        (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v27 + 24LL))(v27);
    }
  }
  v32 = (void (__fastcall *)(Caver::StripeView **, Caver::StripeView **))*((_QWORD *)*this + 12);
  v101 = this[34];
  v33 = this[35];
  v102 = (unsigned __int64)v33;
  if ( v33 )
    ++*((_QWORD *)v33 + 1);
  v32(this, &v101);
  v34 = (_QWORD *)v102;
  if ( v102 )
  {
    v35 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v35;
    if ( !v35 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
      v36 = v34[2] - 1LL;
      v34[2] = v36;
      if ( !v36 )
        (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
    }
  }
  sub_566BB8((int)&v101, "");
  Caver::StripeView::SetTitle();
  updated = (char *)v101 - 24;
  if ( (__int64 *)((char *)v101 - 24) != &qword_6FD2E0 )
  {
    v89 = (unsigned int *)((char *)v101 - 8);
    if ( &pthread_create )
    {
      do
        v90 = __ldaxr(v89);
      while ( __stlxr(v90 - 1, v89) );
    }
    else
    {
      v90 = (*v89)--;
    }
    if ( v90 <= 0 )
      operator delete(updated);
  }
  v38 = *((_QWORD *)this[34] + 36);
  if ( *(unsigned __int8 *)(v38 + 264) != 200
    || *(unsigned __int8 *)(v38 + 265) != 180
    || *(unsigned __int8 *)(v38 + 266) != 160
    || *(unsigned __int8 *)(v38 + 267) != 255 )
  {
    v39 = *(_QWORD **)(v38 + 280);
    *(_DWORD *)(v38 + 264) = -6245176;
    *(_QWORD *)(v38 + 272) = 0;
    *(_QWORD *)(v38 + 280) = 0;
    if ( v39 )
    {
      v40 = v39[1] - 1LL;
      v39[1] = v40;
      if ( !v40 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
        v41 = v39[2] - 1LL;
        v39[2] = v41;
        if ( !v41 )
          (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
      }
    }
    updated = (char *)Caver::GUILabel::UpdateText((Caver::GUILabel *)v38);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)updated);
  sub_566BB8((int)&v99, "ui_button_close");
  v42 = (Caver::TextureLibrary *)Caver::TextureLibrary::TextureForName();
  Caver::TextureLibrary::sharedLibrary(v42);
  sub_566BB8((int)&v97, "ui_button_close_pressed");
  Caver::TextureLibrary::TextureForName();
  Caver::GameInterfaceBuilder::IconButton();
  v44 = v101;
  v43 = (Caver::StripeView *)v102;
  if ( v102 )
    ++*(_QWORD *)(v102 + 8);
  v45 = this[31];
  this[30] = v44;
  this[31] = v43;
  if ( v45 )
  {
    v46 = *((_QWORD *)v45 + 1) - 1LL;
    *((_QWORD *)v45 + 1) = v46;
    if ( !v46 )
    {
      (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v45 + 16LL))(v45);
      v47 = *((_QWORD *)v45 + 2) - 1LL;
      *((_QWORD *)v45 + 2) = v47;
      if ( !v47 )
        (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v45 + 24LL))(v45);
    }
  }
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
  v51 = v98;
  if ( v98 )
  {
    v52 = *(_DWORD *)(v98 + 8) - 1;
    *(_DWORD *)(v98 + 8) = v52;
    if ( !v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
  }
  v53 = (void *)(v97 - 24);
  if ( (__int64 *)(v97 - 24) == &qword_6FD2E0 )
    goto LABEL_56;
  v91 = (unsigned int *)(v97 - 8);
  if ( &pthread_create )
  {
    do
      v92 = __ldaxr(v91);
    while ( __stlxr(v92 - 1, v91) );
  }
  else
  {
    v92 = (*v91)--;
  }
  if ( v92 > 0 )
  {
LABEL_56:
    v54 = v100;
    if ( !v100 )
      goto LABEL_59;
  }
  else
  {
    operator delete(v53);
    v54 = v100;
    if ( !v100 )
      goto LABEL_59;
  }
  v55 = v54[2] - 1;
  v54[2] = v55;
  if ( !v55 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v54 + 8LL))(v54);
LABEL_59:
  v56 = (void *)(v99 - 24);
  if ( (__int64 *)(v99 - 24) != &qword_6FD2E0 )
  {
    v93 = (unsigned int *)(v99 - 8);
    if ( &pthread_create )
    {
      do
        v94 = __ldaxr(v93);
      while ( __stlxr(v94 - 1, v93) );
    }
    else
    {
      v94 = (*v93)--;
    }
    if ( v94 <= 0 )
      operator delete(v56);
  }
  v57 = *(Caver::GUIView **)v2;
  v58 = *(Caver::StripeView **)(*(_QWORD *)v2 + 116LL);
  v102 = vdup_n_s32(0x42080000u).n64_u64[0];
  v101 = v58;
  Caver::GUIView::SetFrame(v57, (const Caver::Rectangle *)&v101);
  v59 = (void (__fastcall *)(Caver::StripeView **, Caver::StripeView **))*((_QWORD *)*this + 12);
  v101 = this[30];
  v60 = this[31];
  v102 = (unsigned __int64)v60;
  if ( v60 )
    ++*((_QWORD *)v60 + 1);
  v59(this, &v101);
  v61 = (_QWORD *)v102;
  if ( v102 )
  {
    v62 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v62;
    if ( !v62 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v61 + 16LL))(v61);
      v63 = v61[2] - 1LL;
      v61[2] = v63;
      if ( !v63 )
        (*(void (__fastcall **)(_QWORD *))(*v61 + 24LL))(v61);
    }
  }
  sub_566BB8((int)&v100, "Restore Purchases");
  Caver::GameInterfaceBuilder::FramedButtonWithTitle();
  v65 = v101;
  v64 = (Caver::StripeView *)v102;
  if ( v102 )
    ++*(_QWORD *)(v102 + 8);
  v66 = this[37];
  this[36] = v65;
  this[37] = v64;
  if ( v66 )
  {
    v67 = *((_QWORD *)v66 + 1) - 1LL;
    *((_QWORD *)v66 + 1) = v67;
    if ( !v67 )
    {
      (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v66 + 16LL))(v66);
      v68 = *((_QWORD *)v66 + 2) - 1LL;
      *((_QWORD *)v66 + 2) = v68;
      if ( !v68 )
        (*(void (__fastcall **)(Caver::StripeView *))(*(_QWORD *)v66 + 24LL))(v66);
    }
  }
  v69 = (_QWORD *)v102;
  if ( v102 )
  {
    v70 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v70;
    if ( !v70 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
      v71 = v69[2] - 1LL;
      v69[2] = v71;
      if ( !v71 )
        (*(void (__fastcall **)(_QWORD *))(*v69 + 24LL))(v69);
    }
  }
  v72 = v100 - 6;
  if ( v100 - 6 != (_DWORD *)&qword_6FD2E0 )
  {
    v95 = v100 - 2;
    if ( &pthread_create )
    {
      do
        v96 = __ldaxr(v95);
      while ( __stlxr(v96 - 1, v95) );
    }
    else
    {
      v96 = (*v95)--;
    }
    if ( v96 <= 0 )
      operator delete(v72);
  }
  Caver::GUIButton::titleLabel(this[36]);
  v74 = v73;
  v75 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v73);
  Caver::FontLibrary::SmallDefaultFont(v75);
  v76 = v101;
  if ( v101 != *((Caver::StripeView **)v74 + 30) )
  {
    v77 = v102;
    if ( v102 )
      ++*(_QWORD *)(v102 + 8);
    v78 = (_QWORD *)*((_QWORD *)v74 + 31);
    *((_QWORD *)v74 + 30) = v76;
    *((_QWORD *)v74 + 31) = v77;
    if ( v78 )
    {
      v79 = v78[1] - 1LL;
      v78[1] = v79;
      if ( !v79 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v78 + 16LL))(v78);
        v80 = v78[2] - 1LL;
        v78[2] = v80;
        if ( !v80 )
          (*(void (__fastcall **)(_QWORD *))(*v78 + 24LL))(v78);
      }
    }
    Caver::GUILabel::UpdateText(v74);
  }
  v81 = (_QWORD *)v102;
  if ( v102 )
  {
    v82 = *(_QWORD *)(v102 + 8) - 1LL;
    *(_QWORD *)(v102 + 8) = v82;
    if ( !v82 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v81 + 16LL))(v81);
      v83 = v81[2] - 1LL;
      v81[2] = v83;
      if ( !v83 )
        (*(void (__fastcall **)(_QWORD *))(*v81 + 24LL))(v81);
    }
  }
  v84 = this[36];
  v85 = *(Caver::StripeView **)((char *)v84 + 116);
  v102 = 0x41D0000042FC0000LL;
  v101 = v85;
  return Caver::GUIView::SetFrame(v84, (const Caver::Rectangle *)&v101);
}

