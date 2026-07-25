/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400D04
 * Mangled: _ZN5Caver12GameOverViewC2Ev
 * Demangled: Caver::GameOverView::GameOverView(void)
 *
 * Callers: 1
 *   0x00000000001F7990  Caver::GameOverView::GameOverView(void)
 *
 * Callees: 28
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5540  Caver::FontLibrary::LargeDefaultFont(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FEA70  Caver::GameOverView::AddAnimations(bool)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FFB20  Caver::GameInterfaceBuilder::TextGradient(float,float,float,float)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202FC0  Caver::GUIPropertyValue::ValueWithRectangle(Caver::Rectangle const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 284
 *   insn=0x0000000000400D18 string=0x0000000000400D1C "W"
 *   insn=0x0000000000400D2C string=0x0000000000400D30 "("
 *   insn=0x0000000000400D30 string=0x0000000000400D34 ""
 *   insn=0x0000000000400D3C string=0x0000000000400D40 "A"
 *   insn=0x0000000000400D40 string=0x0000000000400D44 "h"
 *   insn=0x0000000000400D44 string=0x0000000000400D48 "a"
 *   insn=0x0000000000400D58 string=0x0000000000400D5C ""
 *   insn=0x0000000000400D78 string=0x00000000001F8CE0 "0'"
 *   insn=0x0000000000400D80 string=0x0000000000400D84 "\n"
 *   insn=0x0000000000400D80 string=0x0000000000400D90 "t"
 *   insn=0x0000000000400D84 string=0x0000000000400D88 "J"
 *   insn=0x0000000000400D88 string=0x0000000000400D8C "\n"
 *   insn=0x0000000000400D90 string=0x0000000000400D94 "i"
 *   insn=0x0000000000400D94 string=0x0000000000400D98 "4"
 *   insn=0x0000000000400D9C string=0x0000000000400DA0 ""
 *   insn=0x0000000000400DAC string=0x0000000000400DB0 "\t@"
 *   insn=0x0000000000400DBC string=0x0000000000400DC0 ""
 *   insn=0x0000000000400DCC string=0x0000000000400DD0 "@"
 *   insn=0x0000000000400DDC string=0x0000000000400DE0 "4"
 *   insn=0x0000000000400DE4 string=0x0000000000400DE8 ""
 *   insn=0x0000000000400DF4 string=0x0000000000400DF8 "\t@"
 *   insn=0x0000000000400E04 string=0x0000000000400E08 ""
 *   insn=0x0000000000400E14 string=0x0000000000400E18 "@"
 *   insn=0x0000000000400E24 string=0x0000000000400E28 "8"
 *   insn=0x0000000000400E38 string=0x0000000000400E3C "t~@"
 *   insn=0x0000000000400E38 string=0x00000000004010F4 "\t"
 *   insn=0x0000000000400E3C string=0x0000000000400E40 "x"
 *   insn=0x0000000000400E48 string=0x00000000001F5540 "P'"
 *   insn=0x0000000000400E54 string=0x0000000000400E58 "`"
 *   insn=0x0000000000400E60 string=0x0000000000400E64 "*"
 *   insn=0x0000000000400E64 string=0x0000000000400E68 "J"
 *   insn=0x0000000000400E68 string=0x0000000000400E6C "*"
 *   insn=0x0000000000400E74 string=0x0000000000400E78 "5"
 *   insn=0x0000000000400E7C string=0x0000000000400E80 ""
 *   insn=0x0000000000400E8C string=0x0000000000400E90 "\t@"
 *   insn=0x0000000000400E9C string=0x0000000000400EA0 ""
 *   insn=0x0000000000400EAC string=0x0000000000400EB0 "@"
 *   insn=0x0000000000400EC0 string=0x00000000001F8510 "0'"
 *   insn=0x0000000000400EC4 string=0x0000000000400EC8 "4"
 *   insn=0x0000000000400EC8 string=0x0000000000400F0C "u~@"
 *   insn=0x0000000000400ECC string=0x0000000000400ED0 ""
 *   insn=0x0000000000400EDC string=0x0000000000400EE0 "\t@"
 *   insn=0x0000000000400EEC string=0x0000000000400EF0 ""
 *   insn=0x0000000000400EFC string=0x0000000000400F00 "@"
 *   insn=0x0000000000400F10 string=0x0000000000593C7C "Game Over"
 *   insn=0x0000000000400F1C string=0x0000000000400F20 "&"
 *   insn=0x0000000000400F30 string=0x0000000000400F34 "("
 *   insn=0x0000000000400F34 string=0x0000000000400F38 "_"
 *   insn=0x0000000000400F44 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000400F58 string=0x0000000000400F5C "m"
 *   insn=0x0000000000400F68 string=0x0000000000400F6C "a"
 *   insn=0x0000000000400F6C string=0x0000000000400F70 "t~@"
 *   insn=0x0000000000400F6C string=0x0000000000401118 "\t"
 *   insn=0x0000000000400F70 string=0x0000000000400F74 "("
 *   insn=0x0000000000400F84 string=0x0000000000400F88 "#"
 *   insn=0x0000000000400F94 string=0x0000000000400F98 "\n"
 *   insn=0x0000000000400F98 string=0x0000000000400F9C "J"
 *   insn=0x0000000000400F9C string=0x0000000000400FA0 "\n"
 *   insn=0x0000000000400FA8 string=0x0000000000400FAC "5"
 *   insn=0x0000000000400FB0 string=0x0000000000400FB4 ""
 *   insn=0x0000000000400FC0 string=0x0000000000400FC4 "\t@"
 *   insn=0x0000000000400FD0 string=0x0000000000400FD4 ""
 *   insn=0x0000000000400FE0 string=0x0000000000400FE4 "@"
 *   insn=0x0000000000400FF0 string=0x0000000000400FF4 "G"
 *   insn=0x0000000000400FF8 string=0x0000000000400FFC "4"
 *   insn=0x0000000000400FFC string=0x0000000000401040 "`~@"
 *   insn=0x0000000000401000 string=0x0000000000401004 ""
 *   insn=0x0000000000401010 string=0x0000000000401014 "\t@"
 *   insn=0x0000000000401020 string=0x0000000000401024 ""
 *   insn=0x0000000000401030 string=0x0000000000401034 "@"
 *   insn=0x0000000000401044 string=0x0000000000401048 "0"
 *   insn=0x000000000040104C string=0x0000000000401050 "h"
 *   insn=0x000000000040104C string=0x00000000001F5840 "P'"
 *   insn=0x0000000000401050 string=0x0000000000401054 "i~@"
 *   insn=0x0000000000401054 string=0x0000000000401058 "1@"
 *   insn=0x000000000040105C string=0x0000000000401060 "i"
 *   insn=0x0000000000401068 string=0x000000000040106C "*"
 *   insn=0x000000000040106C string=0x0000000000401070 "J"
 *   insn=0x0000000000401070 string=0x0000000000401074 "*"
 *   insn=0x0000000000401084 string=0x0000000000401088 "4"
 *   insn=0x000000000040108C string=0x0000000000401090 ""
 *   insn=0x000000000040109C string=0x00000000004010A0 "\t@"
 *   insn=0x00000000004010AC string=0x00000000004010B0 ""
 *   insn=0x00000000004010BC string=0x00000000004010C0 "@"
 *   insn=0x00000000004010D4 string=0x00000000004010D8 "A"
 *   insn=0x00000000004010D8 string=0x0000000000401180 "T"
 *   insn=0x00000000004010F4 string=0x00000000004010F8 ")=G"
 *   insn=0x00000000004010F8 string=0x00000000004010FC "!"
 *   insn=0x0000000000401100 string=0x0000000000401104 "\t"
 *   insn=0x0000000000401100 string=0x000000000040113C "\t"
 *   insn=0x0000000000401104 string=0x0000000000401108 "*"
 *   insn=0x0000000000401108 string=0x000000000040110C "\n"
 *   insn=0x0000000000401110 string=0x0000000000401114 ""
 *   insn=0x0000000000401114 string=0x0000000000401148 "?"
 *   insn=0x0000000000401118 string=0x000000000040111C ")=G"
 *   insn=0x0000000000401124 string=0x0000000000401128 "\t"
 *   insn=0x0000000000401124 string=0x000000000040115C "\t"
 *   insn=0x0000000000401128 string=0x000000000040112C "*"
 *   insn=0x000000000040112C string=0x0000000000401130 "\n"
 *   insn=0x0000000000401138 string=0x0000000000401168 "?"
 *   insn=0x000000000040113C string=0x0000000000401140 "*"
 *   insn=0x0000000000401140 string=0x0000000000401144 "\n"
 *   insn=0x0000000000401154 string=0x0000000000401158 "9"
 *   insn=0x000000000040115C string=0x0000000000401160 "*"
 *   insn=0x0000000000401160 string=0x0000000000401164 "\n"
 *   insn=0x0000000000401168 string=0x000000000040116C ","
 *   insn=0x0000000000401178 string=0x000000000040117C "}"
 *   insn=0x0000000000401180 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000401194 string=0x0000000000401198 ""
 *   insn=0x000000000040119C string=0x00000000004011A0 "A\n"
 *   insn=0x00000000004011A4 string=0x00000000004011A8 "\t@"
 *   insn=0x00000000004011B4 string=0x00000000004011B8 ""
 *   insn=0x00000000004011BC string=0x00000000004011C0 "A\t"
 *   insn=0x00000000004011C4 string=0x00000000004011C8 "@"
 *   insn=0x00000000004011D0 string=0x00000000004011D4 "E"
 *   insn=0x00000000004011E0 string=0x00000000004013B8 "u"
 *   insn=0x00000000004011E4 string=0x00000000004011E8 ""
 *   insn=0x00000000004011EC string=0x00000000004011F0 "A"
 *   insn=0x00000000004011F4 string=0x00000000004011F8 "\t@"
 *   insn=0x0000000000401204 string=0x0000000000401208 ""
 *   insn=0x000000000040120C string=0x0000000000401210 "A"
 *   insn=0x0000000000401214 string=0x0000000000401218 "@"
 *   insn=0x0000000000401220 string=0x0000000000401224 "e"
 *   insn=0x000000000040122C string=0x0000000000401230 "U"
 *   insn=0x0000000000401234 string=0x0000000000401238 ""
 *   insn=0x0000000000401244 string=0x0000000000401248 "\t@"
 *   insn=0x0000000000401254 string=0x0000000000401258 ""
 *   insn=0x0000000000401264 string=0x0000000000401268 "@"
 *   insn=0x0000000000401270 string=0x0000000000401274 "Q"
 *   insn=0x0000000000401288 string=0x000000000040128C "u\t"
 *   insn=0x0000000000401290 string=0x0000000000401294 ""
 *   insn=0x00000000004012A0 string=0x00000000004012A4 "\t@"
 *   insn=0x00000000004012B0 string=0x00000000004012B4 ""
 *   insn=0x00000000004012C0 string=0x00000000004012C4 "@"
 *   insn=0x00000000004012CC string=0x00000000004012D0 ":"
 *   insn=0x00000000004012D4 string=0x00000000004012D8 "u"
 *   insn=0x00000000004012D8 string=0x00000000004012DC "5"
 *   insn=0x00000000004012DC string=0x00000000004012E0 "H"
 *   insn=0x00000000004012E8 string=0x00000000004012EC ")"
 *   insn=0x00000000004012EC string=0x00000000004012F0 ")"
 *   insn=0x00000000004012FC string=0x0000000000401300 "\t"
 *   insn=0x0000000000401300 string=0x0000000000401304 ")=G"
 *   insn=0x0000000000401304 string=0x0000000000401308 "!"
 *   insn=0x0000000000401308 string=0x000000000040130C ")"
 *   insn=0x000000000040130C string=0x0000000000401310 "\t"
 *   insn=0x000000000040130C string=0x0000000000401330 "\t"
 *   insn=0x0000000000401310 string=0x0000000000401314 "*"
 *   insn=0x0000000000401314 string=0x0000000000401318 "\n"
 *   insn=0x000000000040131C string=0x0000000000401320 "?"
 *   insn=0x0000000000401330 string=0x0000000000401334 "*"
 *   insn=0x0000000000401334 string=0x0000000000401338 "\n"
 *   insn=0x0000000000401338 string=0x000000000040133C "?"
 *   insn=0x000000000040133C string=0x0000000000401340 "M"
 *   insn=0x000000000040134C string=0x0000000000401350 "(a"
 *   insn=0x0000000000401358 string=0x000000000040135C "\n"
 *   insn=0x000000000040135C string=0x0000000000401360 "J=G"
 *   insn=0x0000000000401360 string=0x0000000000401364 ")!"
 *   insn=0x0000000000401368 string=0x000000000040136C "*"
 *   insn=0x0000000000401368 string=0x000000000040139C "*"
 *   insn=0x000000000040136C string=0x0000000000401370 "K"
 *   insn=0x0000000000401370 string=0x0000000000401374 "+"
 *   insn=0x0000000000401378 string=0x000000000040137C "_"
 *   insn=0x000000000040138C string=0x0000000000401390 "u"
 *   insn=0x0000000000401390 string=0x0000000000401394 "u"
 *   insn=0x000000000040139C string=0x00000000004013A0 "K"
 *   insn=0x00000000004013A0 string=0x00000000004013A4 "+"
 *   insn=0x00000000004013A4 string=0x00000000004013A8 "_"
 *   insn=0x00000000004013B8 string=0x00000000004013BC "5"
 *   insn=0x00000000004013C0 string=0x00000000004013C4 ""
 *   insn=0x00000000004013D0 string=0x00000000004013D4 "\t@"
 *   insn=0x00000000004013E0 string=0x00000000004013E4 ""
 *   insn=0x00000000004013F0 string=0x00000000004013F4 "@"
 *   insn=0x0000000000401408 string=0x000000000040140C "."
 *   insn=0x000000000040142C string=0x0000000000401430 "X"
 *   insn=0x0000000000401430 string=0x0000000000401434 ""
 *   insn=0x0000000000401448 string=0x000000000040175C ""
 *   insn=0x0000000000401450 string=0x0000000000401454 "h"
 *   insn=0x0000000000401454 string=0x0000000000401458 ""
 *   insn=0x0000000000401458 string=0x000000000040145C "h"
 *   insn=0x0000000000401460 string=0x0000000000401464 "_"
 *   insn=0x0000000000401464 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000401470 string=0x00000000001F4B70 "P'"
 *   insn=0x0000000000401484 string=0x00000000001FABF0 "0'"
 *   insn=0x0000000000401490 string=0x0000000000401494 "/"
 *   insn=0x000000000040149C string=0x00000000004014A0 "(3"
 *   insn=0x00000000004014D0 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000004014E0 string=0x00000000004014E4 "(s"
 *   insn=0x00000000004014EC string=0x00000000004014F0 "\n"
 *   insn=0x00000000004014EC string=0x00000000004014FC "7C@"
 *   insn=0x00000000004014F0 string=0x00000000004014F4 "J"
 *   insn=0x00000000004014F4 string=0x00000000004014F8 "\n"
 *   insn=0x00000000004014FC string=0x0000000000401500 ")"
 *   insn=0x0000000000401500 string=0x0000000000401504 "7"
 *   insn=0x0000000000401508 string=0x000000000040150C ""
 *   insn=0x0000000000401518 string=0x000000000040151C "\t@"
 *   insn=0x0000000000401528 string=0x000000000040152C ""
 *   insn=0x0000000000401538 string=0x000000000040153C "@"
 *   insn=0x0000000000401548 string=0x000000000040154C "7"
 *   insn=0x0000000000401550 string=0x0000000000401554 ""
 *   insn=0x0000000000401560 string=0x0000000000401564 "\t@"
 *   insn=0x0000000000401570 string=0x0000000000401574 ""
 *   insn=0x0000000000401580 string=0x0000000000401584 "@"
 *   insn=0x00000000004015AC string=0x00000000004015B0 "\n"
 *   insn=0x00000000004015B0 string=0x00000000004015B4 "J"
 *   insn=0x00000000004015B4 string=0x00000000004015B8 "\n"
 *   insn=0x00000000004015C0 string=0x00000000004015C4 "6"
 *   insn=0x00000000004015C8 string=0x00000000004015CC ""
 *   insn=0x00000000004015D8 string=0x00000000004015DC "\t@"
 *   insn=0x00000000004015E8 string=0x00000000004015EC ""
 *   insn=0x00000000004015F8 string=0x00000000004015FC "@"
 *   insn=0x0000000000401608 string=0x000000000040160C "6"
 *   insn=0x0000000000401610 string=0x0000000000401614 ""
 *   insn=0x0000000000401620 string=0x0000000000401624 "\t@"
 *   insn=0x0000000000401630 string=0x0000000000401634 ""
 *   insn=0x0000000000401640 string=0x0000000000401644 "@"
 *   insn=0x0000000000401654 string=0x0000000000592060 "333?"
 *   insn=0x0000000000401658 string=0x000000000040165C "!1@"
 *   insn=0x0000000000401674 string=0x00000000001FB0E0 "0'"
 *   insn=0x000000000040168C string=0x00000000004016A4 "\t"
 *   insn=0x0000000000401698 string=0x000000000040169C "\t"
 *   insn=0x00000000004016A4 string=0x00000000004016A8 " iO"
 *   insn=0x00000000004016A8 string=0x00000000004016AC "I3"
 *   insn=0x00000000004016AC string=0x00000000004016B4 "\tY"
 *   insn=0x00000000004016C0 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000004016CC string=0x00000000001F8A30 "0'"
 *   insn=0x00000000004016D0 string=0x00000000004016D4 "4"
 *   insn=0x00000000004016D4 string=0x0000000000401718 "3"
 *   insn=0x00000000004016D8 string=0x00000000004016DC ""
 *   insn=0x00000000004016E8 string=0x00000000004016EC "\t@"
 *   insn=0x00000000004016F8 string=0x00000000004016FC ""
 *   insn=0x0000000000401708 string=0x000000000040170C "@"
 *   insn=0x0000000000401718 string=0x000000000040171C "h"
 *   insn=0x000000000040171C string=0x0000000000401720 ""
 *   insn=0x0000000000401720 string=0x0000000000401724 "h"
 *   insn=0x0000000000401728 string=0x000000000040172C "h"
 *   insn=0x0000000000401730 string=0x0000000000401734 "\t@"
 *   insn=0x0000000000401738 string=0x000000000040173C "h\n@"
 *   insn=0x000000000040173C string=0x0000000000401740 ""
 *   insn=0x0000000000401740 string=0x0000000000401744 "h\n"
 *   insn=0x0000000000401748 string=0x000000000040174C "h"
 *   insn=0x0000000000401750 string=0x0000000000401754 "@"
 *   insn=0x0000000000401798 string=0x000000000040179C ""
 *   insn=0x00000000004017A0 string=0x00000000004017A4 "a"
 *   insn=0x00000000004017A8 string=0x00000000004017AC "\t@"
 *   insn=0x00000000004017B8 string=0x00000000004017BC ""
 *   insn=0x00000000004017C0 string=0x00000000004017C4 "a"
 *   insn=0x00000000004017C8 string=0x00000000004017CC "@"
 *   insn=0x00000000004017E0 string=0x00000000004017E4 "u"
 *   insn=0x00000000004017E8 string=0x00000000004017EC ""
 *   insn=0x00000000004017F8 string=0x00000000004017FC "\t@"
 *   insn=0x0000000000401808 string=0x000000000040180C ""
 *   insn=0x0000000000401818 string=0x000000000040181C "@"
 *   insn=0x0000000000401824 string=0x0000000000401828 "\n"
 *   insn=0x0000000000401838 string=0x000000000040183C "S"
 *   insn=0x0000000000401838 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040183C string=0x0000000000401840 ")"
 *   insn=0x000000000040183C string=0x00000000004018A4 "h"
 *   insn=0x0000000000401850 string=0x0000000000401854 "u"
 *   insn=0x0000000000401854 string=0x00000000004018A0 "3"
 *   insn=0x0000000000401858 string=0x000000000040185C ""
 *   insn=0x0000000000401868 string=0x000000000040186C "\t@"
 *   insn=0x0000000000401878 string=0x000000000040187C ""
 *   insn=0x0000000000401888 string=0x000000000040188C "@"
 *   insn=0x00000000004018A4 string=0x00000000004018A8 ""
 *   insn=0x00000000004018A8 string=0x00000000004018AC "h"
 *   insn=0x00000000004018B0 string=0x00000000004018B4 "h"
 *   insn=0x00000000004018B4 string=0x00000000004018B8 "\t@"
 *   insn=0x00000000004018C0 string=0x00000000004018C4 "h\n@"
 *   insn=0x00000000004018C4 string=0x00000000004018C8 ""
 *   insn=0x00000000004018C8 string=0x00000000004018CC "h\n"
 *   insn=0x00000000004018D0 string=0x00000000004018D4 "h"
 *   insn=0x00000000004018D4 string=0x00000000004018D8 "@"
 *   insn=0x00000000004018FC string=0x0000000000401900 "T"
 *   insn=0x0000000000401914 string=0x0000000000401918 "`~@"
 *   insn=0x0000000000401918 string=0x000000000040191C "`"
 *   insn=0x000000000040191C string=0x0000000000401920 "a"
 *   insn=0x0000000000401920 string=0x0000000000401924 "x@"
 *   insn=0x0000000000401928 string=0x000000000040192C " ( "
 *   insn=0x0000000000401930 string=0x0000000000401934 "h"
 *   insn=0x0000000000401938 string=0x000000000040193C "a""
 *   insn=0x0000000000401950 string=0x0000000000401954 ""
 *   insn=0x0000000000401954 string=0x00000000001FB170 "0'"
 *   insn=0x000000000040195C string=0x0000000000401960 "D"
 *   insn=0x0000000000401970 string=0x0000000000401984 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverView::GameOverView(void **this)
{
  void *v2; // x8
  void *v3; // x9
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  Caver::GUILabel *v11; // x20
  Caver::FontLibrary *v12; // x0
  void *v13; // x8
  _QWORD *v14; // x9
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  Caver::GUILabel *v21; // x21
  char *v22; // x22
  size_t v23; // x2
  __int64 *v24; // x20
  _QWORD *v25; // x1
  Caver::GameInterfaceBuilder *updated; // x0
  Caver::GUILabel *v27; // x20
  _QWORD *v28; // x8
  void *v29; // x9
  _QWORD *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x8
  Caver::GUILabel *v36; // x0
  __int64 (__fastcall *v37)(void **, void **); // x8
  _QWORD *v38; // x9
  __int64 result; // x0
  _QWORD *v40; // x20
  __int64 v41; // x8
  __int64 v42; // x8
  unsigned int *v43; // x8
  int v44; // w9
  unsigned int *v45; // x8
  int v46; // w9
  __int64 v47; // [xsp+F0h] [xbp-58h] BYREF
  void *v48; // [xsp+F8h] [xbp-50h] BYREF
  _QWORD *v49; // [xsp+100h] [xbp-48h]
  __int64 v50; // [xsp+110h] [xbp-38h]

  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView((Caver::GUIView *)this);
  this[31] = 0;
  this[32] = 0;
  this[30] = 0;
  *this = off_6D1720;
  sub_566BB8((int)&v47, "");
  Caver::GameInterfaceBuilder::NormalLabel();
  v3 = v48;
  v2 = v49;
  if ( v49 )
    ++v49[1];
  v4 = this[32];
  this[31] = v3;
  this[32] = v2;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v7 = v49;
  if ( v49 )
  {
    v8 = v49[1] - 1LL;
    v49[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v10);
  }
  v11 = (Caver::GUILabel *)this[31];
  v12 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary((Caver::FontLibrary *)v10);
  Caver::FontLibrary::LargeDefaultFont(v12);
  v13 = v48;
  if ( v48 != *((void **)v11 + 30) )
  {
    v14 = v49;
    if ( v49 )
      ++v49[1];
    v15 = (_QWORD *)*((_QWORD *)v11 + 31);
    *((_QWORD *)v11 + 30) = v13;
    *((_QWORD *)v11 + 31) = v14;
    if ( v15 )
    {
      v16 = v15[1] - 1LL;
      v15[1] = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v17 = v15[2] - 1LL;
        v15[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      }
    }
    Caver::GUILabel::UpdateText(v11);
  }
  v18 = v49;
  if ( v49 )
  {
    v19 = v49[1] - 1LL;
    v49[1] = v19;
    if ( !v19 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v20 = v18[2] - 1LL;
      v18[2] = v20;
      if ( !v20 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
  v21 = (Caver::GUILabel *)this[31];
  sub_566BB8((int)&v48, "Game Over");
  v22 = (char *)v48;
  v24 = (__int64 *)((char *)v48 - 24);
  v23 = *((_QWORD *)v48 - 3);
  v25 = (_QWORD *)*((_QWORD *)v21 + 32);
  if ( v23 != *(v25 - 3) || (updated = (Caver::GameInterfaceBuilder *)memcmp(v48, v25, v23), (_DWORD)updated) )
  {
    sub_56A6A8((char *)v21 + 256);
    updated = (Caver::GameInterfaceBuilder *)Caver::GUILabel::UpdateText(v21);
    v22 = (char *)v48;
    v24 = (__int64 *)((char *)v48 - 24);
  }
  if ( v24 != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v22 - 8);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
      operator delete(v24);
  }
  v27 = (Caver::GUILabel *)this[31];
  Caver::GameInterfaceBuilder::TextGradient(updated, 0.1, 1.0, 0.75, 1.0);
  v29 = v48;
  v28 = v49;
  if ( v49 )
    ++v49[1];
  v30 = (_QWORD *)*((_QWORD *)v27 + 35);
  *((_QWORD *)v27 + 34) = v29;
  *((_QWORD *)v27 + 35) = v28;
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
  Caver::GUILabel::UpdateText(v27);
  v33 = v49;
  if ( v49 )
  {
    v34 = v49[1] - 1LL;
    v49[1] = v34;
    if ( !v34 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
      v35 = v33[2] - 1LL;
      v33[2] = v35;
      if ( !v35 )
        (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
    }
  }
  v36 = (Caver::GUILabel *)this[31];
  *((_DWORD *)v36 + 76) = 4;
  Caver::GUILabel::UpdateBounds(v36);
  v37 = (__int64 (__fastcall *)(void **, void **))*((_QWORD *)*this + 12);
  v48 = this[31];
  v38 = this[32];
  v49 = v38;
  if ( v38 )
    ++v38[1];
  result = v37(this, &v48);
  v40 = v49;
  if ( v49 )
  {
    v41 = v49[1] - 1LL;
    v49[1] = v41;
    if ( !v41 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      v42 = v40[2] - 1LL;
      v40[2] = v42;
      if ( !v42 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
    }
  }
  return result;
}

