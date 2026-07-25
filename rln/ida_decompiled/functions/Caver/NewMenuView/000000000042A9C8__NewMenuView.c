/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A9C8
 * Mangled: _ZN5Caver11NewMenuViewC2Ev
 * Demangled: Caver::NewMenuView::NewMenuView(void)
 *
 * Callers: 1
 *   0x000000000042A738  Caver::MenuItemSlot::~MenuItemSlot()
 *
 * Callees: 23
 *   0x00000000001F3EE0  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIButton>*,std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>>,boost::shared_ptr<Caver::GUIButton> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8F40  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(Caver::GUIButton *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FEAD0  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000042B3E8  Caver::NewMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 273
 *   insn=0x000000000042A9E4 string=0x000000000042A9E8 "W"
 *   insn=0x000000000042A9F4 string=0x000000000042A9F8 "Rd"
 *   insn=0x000000000042A9FC string=0x000000000042AA00 ""
 *   insn=0x000000000042AA04 string=0x000000000042AA08 "A"
 *   insn=0x000000000042AA08 string=0x000000000042AA0C "h"
 *   insn=0x000000000042AA14 string=0x000000000042AA18 "!"
 *   insn=0x000000000042AA18 string=0x000000000058E4F6 "char"
 *   insn=0x000000000042AA28 string=0x000000000042AA2C "c"
 *   insn=0x000000000042AA30 string=0x000000000042AA34 "!"
 *   insn=0x000000000042AA34 string=0x0000000000591F83 "map"
 *   insn=0x000000000042AA40 string=0x000000000042AA44 "]"
 *   insn=0x000000000042AA4C string=0x000000000042AA50 "!"
 *   insn=0x000000000042AA50 string=0x000000000058E4EC "inventory"
 *   insn=0x000000000042AA5C string=0x000000000042AA60 "V"
 *   insn=0x000000000042AA68 string=0x000000000042AA6C "!"
 *   insn=0x000000000042AA78 string=0x000000000042AA7C "O"
 *   insn=0x000000000042AA84 string=0x000000000042AA88 "Z"
 *   insn=0x000000000042AA88 string=0x000000000042AA8C "{"
 *   insn=0x000000000042AA90 string=0x000000000042AA94 "U"
 *   insn=0x000000000042AA94 string=0x000000000042AA98 "W"
 *   insn=0x000000000042AA94 string=0x0000000000592AE8 "ui_tab_"
 *   insn=0x000000000042AA98 string=0x0000000000594EF9 "_selected"
 *   insn=0x000000000042AAAC string=0x000000000042AAB0 "#"
 *   insn=0x000000000042AAB4 string=0x000000000042AAB8 ")=G"
 *   insn=0x000000000042AAB8 string=0x000000000042AABC "!"
 *   insn=0x000000000042AAC0 string=0x000000000042AAC4 "\t"
 *   insn=0x000000000042AAC0 string=0x000000000042AAFC "\t"
 *   insn=0x000000000042AAC4 string=0x000000000042AAC8 "*"
 *   insn=0x000000000042AAC8 string=0x000000000042AACC "\n"
 *   insn=0x000000000042AAD0 string=0x000000000042AAD4 ""
 *   insn=0x000000000042AAD4 string=0x000000000042AB08 "?"
 *   insn=0x000000000042AAD8 string=0x000000000042AADC ")=G"
 *   insn=0x000000000042AADC string=0x000000000042AAE0 "!"
 *   insn=0x000000000042AAE4 string=0x000000000042AAE8 "\t"
 *   insn=0x000000000042AAE4 string=0x000000000042AB1C "\t"
 *   insn=0x000000000042AAE8 string=0x000000000042AAEC "*"
 *   insn=0x000000000042AAEC string=0x000000000042AAF0 "\n"
 *   insn=0x000000000042AAF8 string=0x000000000042AB28 "?"
 *   insn=0x000000000042AAFC string=0x000000000042AB00 "*"
 *   insn=0x000000000042AB00 string=0x000000000042AB04 "\n"
 *   insn=0x000000000042AB08 string=0x000000000042AB0C "l"
 *   insn=0x000000000042AB10 string=0x000000000042AB14 "$"
 *   insn=0x000000000042AB14 string=0x000000000042AB18 "("
 *   insn=0x000000000042AB1C string=0x000000000042AB20 "*"
 *   insn=0x000000000042AB20 string=0x000000000042AB24 "\n"
 *   insn=0x000000000042AB34 string=0x000000000042AB38 "$"
 *   insn=0x000000000042AB40 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000042AB5C string=0x00000000001F8F40 "0'"
 *   insn=0x000000000042AB60 string=0x00000000001FA350 "0'"
 *   insn=0x000000000042AB64 string=0x000000000042AB68 "!"
 *   insn=0x000000000042AB70 string=0x000000000042AB74 "/"
 *   insn=0x000000000042AB7C string=0x000000000042AB80 "j"
 *   insn=0x000000000042AB84 string=0x000000000042AB88 """
 *   insn=0x000000000042ABD0 string=0x00000000001FC750 "0'"
 *   insn=0x000000000042ABD4 string=0x000000000042ABD8 "AE"
 *   insn=0x000000000042ABE0 string=0x000000000042ABE4 "cA"
 *   insn=0x000000000042ABE4 string=0x00000000001FB170 "0'"
 *   insn=0x000000000042ABEC string=0x000000000042ABF0 "`"
 *   insn=0x000000000042AC04 string=0x000000000042AC08 "`"
 *   insn=0x000000000042AC04 string=0x00000000001F6B70 "0'"
 *   insn=0x000000000042AC0C string=0x000000000042AC10 ""
 *   insn=0x000000000042AC24 string=0x000000000042AC28 ""
 *   insn=0x000000000042AC40 string=0x00000000001F9BE0 "0'"
 *   insn=0x000000000042AC44 string=0x000000000042AC48 "H"
 *   insn=0x000000000042AC48 string=0x000000000042AC4C ""
 *   insn=0x000000000042AC48 string=0x000000000042AC70 "h"
 *   insn=0x000000000042AC4C string=0x000000000042AC50 ""
 *   insn=0x000000000042AC50 string=0x000000000042AC54 ""
 *   insn=0x000000000042AC74 string=0x000000000042AC78 "1@"
 *   insn=0x000000000042AC80 string=0x000000000042AC84 "*"
 *   insn=0x000000000042AC84 string=0x000000000042AC88 "J"
 *   insn=0x000000000042AC88 string=0x000000000042AC8C "*"
 *   insn=0x000000000042AC9C string=0x000000000042ACA0 "8"
 *   insn=0x000000000042ACA0 string=0x000000000042ACA4 "@"
 *   insn=0x000000000042ACA0 string=0x000000000042ACE4 "a"P"
 *   insn=0x000000000042ACA4 string=0x000000000042ACA8 ""
 *   insn=0x000000000042ACA8 string=0x000000000042ACAC ""
 *   insn=0x000000000042ACB0 string=0x000000000042ACB4 ""
 *   insn=0x000000000042ACB4 string=0x000000000042ACB8 "\t@"
 *   insn=0x000000000042ACC0 string=0x000000000042ACC4 "@"
 *   insn=0x000000000042ACC4 string=0x000000000042ACC8 ""
 *   insn=0x000000000042ACC8 string=0x000000000042ACCC ""
 *   insn=0x000000000042ACD0 string=0x000000000042ACD4 ""
 *   insn=0x000000000042ACD4 string=0x000000000042ACD8 "@"
 *   insn=0x000000000042ACE4 string=0x000000000042ACE8 "?"
 *   insn=0x000000000042ACF0 string=0x000000000042ACF4 "("
 *   insn=0x000000000042ACF8 string=0x000000000042ACFC "("
 *   insn=0x000000000042AD00 string=0x000000000042AD04 "\t"
 *   insn=0x000000000042AD00 string=0x000000000042AD10 "(@"
 *   insn=0x000000000042AD04 string=0x000000000042AD08 ")"
 *   insn=0x000000000042AD08 string=0x000000000042AD0C "\t"
 *   insn=0x000000000042AD10 string=0x000000000042AD14 "h"
 *   insn=0x000000000042AD1C string=0x000000000042AD20 ""
 *   insn=0x000000000042AD1C string=0x000000000042AD38 "@"
 *   insn=0x000000000042AD28 string=0x000000000042AD2C "m$"
 *   insn=0x000000000042AD2C string=0x00000000001F3EE0 "P'"
 *   insn=0x000000000042AD38 string=0x000000000042AD3C ""
 *   insn=0x000000000042AD3C string=0x000000000042AD40 ""
 *   insn=0x000000000042AD44 string=0x000000000042AD48 ""
 *   insn=0x000000000042AD48 string=0x000000000042AD4C ""
 *   insn=0x000000000042AD54 string=0x000000000042AD58 "8"
 *   insn=0x000000000042AD58 string=0x000000000042AD5C "@"
 *   insn=0x000000000042AD5C string=0x000000000042AD60 ""
 *   insn=0x000000000042AD60 string=0x000000000042AD64 ""
 *   insn=0x000000000042AD68 string=0x000000000042AD6C ""
 *   insn=0x000000000042AD6C string=0x000000000042AD70 "\t@"
 *   insn=0x000000000042AD78 string=0x000000000042AD7C "@"
 *   insn=0x000000000042AD7C string=0x000000000042AD80 ""
 *   insn=0x000000000042AD80 string=0x000000000042AD84 ""
 *   insn=0x000000000042AD88 string=0x000000000042AD8C ""
 *   insn=0x000000000042AD8C string=0x000000000042AD90 "@"
 *   insn=0x000000000042ADB0 string=0x000000000042ADB4 "A"
 *   insn=0x000000000042ADE0 string=0x000000000042ADE4 "!"
 *   insn=0x000000000042ADE8 string=0x000000000042ADEC ""
 *   insn=0x000000000042AE1C string=0x000000000042AE20 ")=G"
 *   insn=0x000000000042AE20 string=0x000000000042AE24 "!"
 *   insn=0x000000000042AE24 string=0x000000000042AE28 ")"
 *   insn=0x000000000042AE28 string=0x000000000042AE2C "\t"
 *   insn=0x000000000042AE28 string=0x000000000042AEAC "\t"
 *   insn=0x000000000042AE2C string=0x000000000042AE30 "*"
 *   insn=0x000000000042AE30 string=0x000000000042AE34 "\n"
 *   insn=0x000000000042AE3C string=0x000000000042AEB8 "?"
 *   insn=0x000000000042AE40 string=0x000000000042AE44 ")=G"
 *   insn=0x000000000042AE44 string=0x000000000042AE48 "!"
 *   insn=0x000000000042AE48 string=0x000000000042AE4C "\t"
 *   insn=0x000000000042AE4C string=0x000000000042AE50 "\t"
 *   insn=0x000000000042AE4C string=0x000000000042AECC "\t"
 *   insn=0x000000000042AE50 string=0x000000000042AE54 "*"
 *   insn=0x000000000042AE54 string=0x000000000042AE58 "\n"
 *   insn=0x000000000042AE60 string=0x000000000042AED8 "?"
 *   insn=0x000000000042AE64 string=0x000000000042AE68 ")=G"
 *   insn=0x000000000042AE68 string=0x000000000042AE6C "!"
 *   insn=0x000000000042AE70 string=0x000000000042AE74 "\t"
 *   insn=0x000000000042AE70 string=0x000000000042AEEC "\t"
 *   insn=0x000000000042AE74 string=0x000000000042AE78 "*"
 *   insn=0x000000000042AE78 string=0x000000000042AE7C "\n"
 *   insn=0x000000000042AE84 string=0x000000000042AEF8 "?"
 *   insn=0x000000000042AE88 string=0x000000000042AE8C ")=G"
 *   insn=0x000000000042AE8C string=0x000000000042AE90 "!"
 *   insn=0x000000000042AE94 string=0x000000000042AE98 "\t"
 *   insn=0x000000000042AE94 string=0x000000000042AF0C "\t"
 *   insn=0x000000000042AE98 string=0x000000000042AE9C "*"
 *   insn=0x000000000042AE9C string=0x000000000042AEA0 "\n"
 *   insn=0x000000000042AEA8 string=0x000000000042AF18 "?"
 *   insn=0x000000000042AEAC string=0x000000000042AEB0 "*"
 *   insn=0x000000000042AEB0 string=0x000000000042AEB4 "\n"
 *   insn=0x000000000042AEC0 string=0x000000000042AEC4 "8"
 *   insn=0x000000000042AECC string=0x000000000042AED0 "*"
 *   insn=0x000000000042AED0 string=0x000000000042AED4 "\n"
 *   insn=0x000000000042AED8 string=0x000000000042AEDC "l"
 *   insn=0x000000000042AEE0 string=0x000000000042AEE4 "0"
 *   insn=0x000000000042AEEC string=0x000000000042AEF0 "*"
 *   insn=0x000000000042AEF0 string=0x000000000042AEF4 "\n"
 *   insn=0x000000000042AF00 string=0x000000000042AF04 "("
 *   insn=0x000000000042AF0C string=0x000000000042AF10 "*"
 *   insn=0x000000000042AF10 string=0x000000000042AF14 "\n"
 *   insn=0x000000000042AF18 string=0x000000000042AF1C "l"
 *   insn=0x000000000042AF20 string=0x000000000042AF24 " "
 *   insn=0x000000000042AF2C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042AF40 string=0x000000000042AF44 "9?G"
 *   insn=0x000000000042AF58 string=0x000000000042AF5C "\t"
 *   insn=0x000000000042AF58 string=0x000000000042AF70 "\t"
 *   insn=0x000000000042AF5C string=0x000000000042AF60 "*"
 *   insn=0x000000000042AF60 string=0x000000000042AF64 "\n"
 *   insn=0x000000000042AF6C string=0x000000000042AF7C "?"
 *   insn=0x000000000042AF70 string=0x000000000042AF74 "*"
 *   insn=0x000000000042AF74 string=0x000000000042AF78 "\n"
 *   insn=0x000000000042AF84 string=0x000000000042AF88 ""
 *   insn=0x000000000042AF9C string=0x000000000042AF54 "!"
 *   insn=0x000000000042AFA0 string=0x000000000042AFA4 "a"
 *   insn=0x000000000042AFA8 string=0x000000000042B228 "v"
 *   insn=0x000000000042AFC0 string=0x000000000042AFC4 "V"
 *   insn=0x000000000042AFC8 string=0x000000000042AFCC ""
 *   insn=0x000000000042AFD8 string=0x000000000042AFDC "\t@"
 *   insn=0x000000000042AFE8 string=0x000000000042AFEC ""
 *   insn=0x000000000042AFF8 string=0x000000000042AFFC "@"
 *   insn=0x000000000042B014 string=0x000000000042B018 ""
 *   insn=0x000000000042B018 string=0x000000000042B01C ""
 *   insn=0x000000000042B01C string=0x000000000042B020 ""
 *   insn=0x000000000042B03C string=0x000000000042B040 "`\t"
 *   insn=0x000000000042B040 string=0x000000000042B044 "Q"
 *   insn=0x000000000042B040 string=0x000000000042B16C "@"
 *   insn=0x000000000042B050 string=0x000000000042B054 "M"
 *   insn=0x000000000042B05C string=0x000000000042B060 "(a"
 *   insn=0x000000000042B064 string=0x000000000042B068 "@"
 *   insn=0x000000000042B06C string=0x000000000042B070 "J=G"
 *   insn=0x000000000042B070 string=0x000000000042B074 ")!"
 *   insn=0x000000000042B078 string=0x000000000042B07C "*"
 *   insn=0x000000000042B078 string=0x000000000042B0C8 "*"
 *   insn=0x000000000042B07C string=0x000000000042B080 "K"
 *   insn=0x000000000042B080 string=0x000000000042B084 "+"
 *   insn=0x000000000042B08C string=0x000000000042B0D4 "_"
 *   insn=0x000000000042B094 string=0x000000000042B098 "(a"
 *   insn=0x000000000042B0A4 string=0x000000000042B0A8 "J=G"
 *   insn=0x000000000042B0A8 string=0x000000000042B0AC ")!"
 *   insn=0x000000000042B0B0 string=0x000000000042B0B4 "*"
 *   insn=0x000000000042B0B4 string=0x000000000042B0B8 "K"
 *   insn=0x000000000042B0B8 string=0x000000000042B0BC "+"
 *   insn=0x000000000042B0C8 string=0x000000000042B0CC "K"
 *   insn=0x000000000042B0CC string=0x000000000042B0D0 "+"
 *   insn=0x000000000042B0F8 string=0x000000000042B0FC "`"
 *   insn=0x000000000042B100 string=0x000000000042B104 ")=G"
 *   insn=0x000000000042B104 string=0x000000000042B108 "!"
 *   insn=0x000000000042B10C string=0x000000000042B110 "\t"
 *   insn=0x000000000042B10C string=0x000000000042B124 "\t"
 *   insn=0x000000000042B110 string=0x000000000042B114 "*"
 *   insn=0x000000000042B114 string=0x000000000042B118 "\n"
 *   insn=0x000000000042B120 string=0x000000000042B130 "?"
 *   insn=0x000000000042B124 string=0x000000000042B128 "*"
 *   insn=0x000000000042B128 string=0x000000000042B12C "\n"
 *   insn=0x000000000042B140 string=0x000000000042B144 "v"
 *   insn=0x000000000042B144 string=0x000000000042B148 "("
 *   insn=0x000000000042B154 string=0x000000000042B158 "V0"
 *   insn=0x000000000042B158 string=0x000000000042B15C "#"
 *   insn=0x000000000042B158 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042B16C string=0x000000000042B170 ""
 *   insn=0x000000000042B170 string=0x000000000042B174 ""
 *   insn=0x000000000042B178 string=0x000000000042B17C ""
 *   insn=0x000000000042B17C string=0x000000000042B180 ""
 *   insn=0x000000000042B190 string=0x000000000042B194 ""
 *   insn=0x000000000042B198 string=0x000000000042B19C "a"
 *   insn=0x000000000042B1A0 string=0x000000000042B1A4 "\t@"
 *   insn=0x000000000042B1B0 string=0x000000000042B1B4 ""
 *   insn=0x000000000042B1B8 string=0x000000000042B1BC "a"
 *   insn=0x000000000042B1C0 string=0x000000000042B1C4 "@"
 *   insn=0x000000000042B200 string=0x000000000042B204 "A"
 *   insn=0x000000000042B230 string=0x000000000042B28C "v"
 *   insn=0x000000000042B234 string=0x000000000042B238 "7"
 *   insn=0x000000000042B23C string=0x000000000042B240 ""
 *   insn=0x000000000042B24C string=0x000000000042B250 "\t@"
 *   insn=0x000000000042B25C string=0x000000000042B260 ""
 *   insn=0x000000000042B26C string=0x000000000042B270 "@"
 *   insn=0x000000000042B290 string=0x000000000042B294 "0"
 *   insn=0x000000000042B2A8 string=0x000000000042B2AC ")=G"
 *   insn=0x000000000042B2AC string=0x000000000042B2B0 "!"
 *   insn=0x000000000042B2B0 string=0x000000000042B2B4 ")"
 *   insn=0x000000000042B2B4 string=0x000000000042B2B8 "\t"
 *   insn=0x000000000042B2B4 string=0x000000000042B338 "\t"
 *   insn=0x000000000042B2B8 string=0x000000000042B2BC "*"
 *   insn=0x000000000042B2BC string=0x000000000042B2C0 "\n"
 *   insn=0x000000000042B2C8 string=0x000000000042B344 "?"
 *   insn=0x000000000042B2CC string=0x000000000042B2D0 ")=G"
 *   insn=0x000000000042B2D0 string=0x000000000042B2D4 "!"
 *   insn=0x000000000042B2D4 string=0x000000000042B2D8 "\t"
 *   insn=0x000000000042B2D8 string=0x000000000042B2DC "\t"
 *   insn=0x000000000042B2D8 string=0x000000000042B358 "\t"
 *   insn=0x000000000042B2DC string=0x000000000042B2E0 "*"
 *   insn=0x000000000042B2E0 string=0x000000000042B2E4 "\n"
 *   insn=0x000000000042B2EC string=0x000000000042B364 "?"
 *   insn=0x000000000042B2F0 string=0x000000000042B2F4 ")=G"
 *   insn=0x000000000042B2F4 string=0x000000000042B2F8 "!"
 *   insn=0x000000000042B2FC string=0x000000000042B300 "\t"
 *   insn=0x000000000042B2FC string=0x000000000042B378 "\t"
 *   insn=0x000000000042B300 string=0x000000000042B304 "*"
 *   insn=0x000000000042B304 string=0x000000000042B308 "\n"
 *   insn=0x000000000042B310 string=0x000000000042B384 "?"
 *   insn=0x000000000042B314 string=0x000000000042B318 ")=G"
 *   insn=0x000000000042B318 string=0x000000000042B31C "!"
 *   insn=0x000000000042B320 string=0x000000000042B324 "\t"
 *   insn=0x000000000042B320 string=0x000000000042B398 "\t"
 *   insn=0x000000000042B324 string=0x000000000042B328 "*"
 *   insn=0x000000000042B328 string=0x000000000042B32C "\n"
 *   insn=0x000000000042B334 string=0x000000000042B3A4 "?"
 *   insn=0x000000000042B338 string=0x000000000042B33C "*"
 *   insn=0x000000000042B33C string=0x000000000042B340 "\n"
 *   insn=0x000000000042B358 string=0x000000000042B35C "*"
 *   insn=0x000000000042B35C string=0x000000000042B360 "\n"
 *   insn=0x000000000042B36C string=0x000000000042B370 ""
 *   insn=0x000000000042B378 string=0x000000000042B37C "*"
 *   insn=0x000000000042B37C string=0x000000000042B380 "\n"
 *   insn=0x000000000042B398 string=0x000000000042B39C "*"
 *   insn=0x000000000042B39C string=0x000000000042B3A0 "\n"
 *   insn=0x000000000042B3C8 string=0x000000000042B3CC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::NewMenuView::NewMenuView(Caver::NewMenuView *this)
{
  unsigned __int64 v2; // x28
  unsigned int *v3; // x8
  int v4; // w9
  unsigned int *v5; // x8
  int v6; // w9
  Caver::TextureLibrary *v7; // x0
  char *v8; // x0
  void *v9; // x0
  unsigned __int64 v10; // x8
  int64x2_t v11; // q0
  Caver::GUIView *v12; // x8
  void (__fastcall *v13)(int64x2_t *, int64x2_t *, __int64); // x8
  void (__fastcall *v14)(Caver::NewMenuView *, unsigned __int64 *); // x8
  _QWORD *v15; // x24
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x1
  _QWORD *v19; // x8
  _DWORD *v20; // x0
  int v21; // w8
  _QWORD *v22; // x24
  __int64 v23; // x8
  __int64 v24; // x8
  void *v26; // x0
  void *v27; // x0
  void *v28; // x0
  void *v29; // x0
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9
  unsigned __int64 v38; // [xsp+10h] [xbp-D0h] BYREF
  int64x2_t v39; // [xsp+18h] [xbp-C8h] BYREF
  Caver::NewMenuView *v40; // [xsp+28h] [xbp-B8h]
  __int64 v41; // [xsp+30h] [xbp-B0h]
  Caver::GUIView *v42; // [xsp+38h] [xbp-A8h]
  _QWORD *v43; // [xsp+40h] [xbp-A0h]
  int64x2_t v44; // [xsp+50h] [xbp-90h] BYREF
  Caver::NewMenuView *v45; // [xsp+60h] [xbp-80h]
  __int64 v46; // [xsp+68h] [xbp-78h] BYREF
  __int64 v47; // [xsp+70h] [xbp-70h] BYREF
  __int64 v48; // [xsp+78h] [xbp-68h] BYREF
  _QWORD v49[2]; // [xsp+80h] [xbp-60h] BYREF

  v49[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D3070;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  sub_566BB8((int)&v46, "char");
  sub_566BB8((int)&v47, "map");
  sub_566BB8((int)&v48, "inventory");
  sub_566BB8((int)v49, "inventory");
  v2 = 0;
  do
  {
    operator new(0x1D0u);
    Caver::GUIButton::GUIButton();
    boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>();
    Caver::TextureLibrary::sharedLibrary(v7);
    ((void (__fastcall *)(int64x2_t *__return_ptr, const char *, __int64 *))loc_25A030)(&v44, "ui_tab_", &v46 + v2);
    sub_56A528(&v38, &v44);
    sub_5677D4(&v38, "_selected", 9);
    Caver::TextureLibrary::TextureForName();
    v8 = (char *)(v38 - 24);
    if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(v38 - 8);
      if ( &pthread_create )
      {
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
      }
      else
      {
        v4 = (*v3)--;
      }
      if ( v4 <= 0 )
        operator delete(v8);
    }
    v9 = (void *)(v44.n128_u64[0] - 24);
    if ( (__int64 *)(v44.n128_u64[0] - 24) != &qword_6FD2E0 )
    {
      v5 = (unsigned int *)(v44.n128_u64[0] - 8);
      if ( &pthread_create )
      {
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
      }
      else
      {
        v6 = (*v5)--;
      }
      if ( v6 <= 0 )
        operator delete(v9);
    }
    Caver::GUIButton::SetImage();
    v10 = *(_QWORD *)(v41 + 84);
    v38 = 0;
    v39.n128_u64[0] = v10;
    Caver::GUIView::SetFrame(v42, (const Caver::Rectangle *)&v38);
    v11 = vdupq_n_s64(0);
    v11.n128_u64[0] = (unsigned __int64)Caver::NewMenuView::ButtonPressed;
    v38 = 0;
    v44 = v11;
    v45 = this;
    if ( (boost::detail::function::has_empty_target() & 1) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v40 = v45;
      v39 = v44;
      v12 = (Caver::GUIView *)&boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::NewMenuView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::NewMenuView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::NewMenuView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
    }
    v38 = (unsigned __int64)v12;
    Caver::GUIControl::AddTargetActionForControlEvent();
    if ( v38 )
    {
      if ( (v38 & 1) == 0 )
      {
        v13 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v38 & 0xFFFFFFFFFFFFFFFELL);
        if ( v13 )
          v13(&v39, &v39, 2);
      }
      v38 = 0;
    }
    v14 = *(void (__fastcall **)(Caver::NewMenuView *, unsigned __int64 *))(*(_QWORD *)this + 96LL);
    v38 = (unsigned __int64)v42;
    v39.n128_u64[0] = (unsigned __int64)v43;
    if ( v43 )
      ++v43[1];
    v14(this, &v38);
    v15 = (_QWORD *)v39.n128_u64[0];
    if ( v39.n128_u64[0] )
    {
      v16 = *(_QWORD *)(v39.n128_u64[0] + 8) - 1LL;
      *(_QWORD *)(v39.n128_u64[0] + 8) = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v17 = v15[2] - 1LL;
        v15[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      }
    }
    v18 = (_QWORD *)*((_QWORD *)this + 32);
    if ( v18 == *((_QWORD **)this + 33) )
    {
      std::vector<boost::shared_ptr<Caver::GUIButton>>::_M_insert_aux();
      v20 = (_DWORD *)v41;
      if ( !v41 )
        goto LABEL_38;
LABEL_36:
      v21 = v20[2] - 1;
      v20[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 8LL))(v20);
      goto LABEL_38;
    }
    *v18 = v42;
    v19 = v43;
    v18[1] = v43;
    if ( v19 )
      ++v19[1];
    *((_QWORD *)this + 32) = v18 + 2;
    v20 = (_DWORD *)v41;
    if ( v41 )
      goto LABEL_36;
LABEL_38:
    v22 = v43;
    if ( v43 )
    {
      v23 = v43[1] - 1LL;
      v43[1] = v23;
      if ( !v23 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        v24 = v22[2] - 1LL;
        v22[2] = v24;
        if ( !v24 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
      }
    }
  }
  while ( v2++ < 3 );
  v26 = (void *)(v49[0] - 24LL);
  if ( (__int64 *)(v49[0] - 24LL) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v49[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v31 = __ldaxr(v30);
      while ( __stlxr(v31 - 1, v30) );
    }
    else
    {
      v31 = (*v30)--;
    }
    if ( v31 <= 0 )
      operator delete(v26);
  }
  v27 = (void *)(v48 - 24);
  if ( (__int64 *)(v48 - 24) != &qword_6FD2E0 )
  {
    v32 = (unsigned int *)(v48 - 8);
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
      operator delete(v27);
  }
  v28 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v47 - 8);
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
      operator delete(v28);
  }
  v29 = (void *)(v46 - 24);
  if ( (__int64 *)(v46 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v46 - 8);
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
      operator delete(v29);
  }
}

