/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043BACC
 * Mangled: _ZN5Caver15SkillPickerView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000001F45B0  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 35
 *   0x00000000001F34C0  Caver::CharacterState::HasSkillWithName(std::string const&)
 *   0x00000000001F4910  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5660  Caver::MenuItemSlot::Init(float)
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C10  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>(Caver::MenuItemSlot *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9150  Caver::GUIView::GUIView(void)
 *   0x00000000001F9C80  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB580  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC800  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x00000000001FCFC0  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FDF80  boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(boost::shared_ptr<Caver::GUILabel> *)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FFE10  Caver::GameData::SkillForName(std::string const&)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x00000000002026D0  Caver::FontLibrary::SmallDefaultFont(void)
 *   0x0000000000203190  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 491
 *   insn=0x000000000043BAF4 string=0x000000000043BAF8 "["
 *   insn=0x000000000043BAF8 string=0x000000000043BAFC "h"
 *   insn=0x000000000043BB08 string=0x000000000043BB0C "i"@"
 *   insn=0x000000000043BB10 string=0x000000000043BB14 "\n"
 *   insn=0x000000000043BB14 string=0x000000000043BB18 "J"
 *   insn=0x000000000043BB18 string=0x000000000043BB1C "\n"
 *   insn=0x000000000043BB24 string=0x000000000043BB28 "5"
 *   insn=0x000000000043BB2C string=0x000000000043BB30 ""
 *   insn=0x000000000043BB40 string=0x000000000043BB44 "\t@"
 *   insn=0x000000000043BB4C string=0x000000000043BB50 ""
 *   insn=0x000000000043BB60 string=0x000000000043BB64 "@"
 *   insn=0x000000000043BB70 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000043BB78 string=0x00000000001F53C0 "P'"
 *   insn=0x000000000043BB9C string=0x000000000043BBA0 "5"
 *   insn=0x000000000043BBA4 string=0x000000000043BBA8 ""
 *   insn=0x000000000043BBB8 string=0x000000000043BBBC "\t@"
 *   insn=0x000000000043BBC4 string=0x000000000043BBC8 ""
 *   insn=0x000000000043BBD8 string=0x000000000043BBDC "@"
 *   insn=0x000000000043BBEC string=0x000000000043BBF0 "p"
 *   insn=0x000000000043BBF0 string=0x00000000001FD9B0 "0'"
 *   insn=0x000000000043BBFC string=0x000000000043BC00 "`"
 *   insn=0x000000000043BC08 string=0x000000000043BC0C "*"
 *   insn=0x000000000043BC0C string=0x000000000043BC10 "J"
 *   insn=0x000000000043BC10 string=0x000000000043BC14 "*"
 *   insn=0x000000000043BC1C string=0x000000000043BC20 "6"
 *   insn=0x000000000043BC24 string=0x000000000043BC28 ""
 *   insn=0x000000000043BC34 string=0x000000000043BC38 "\t@"
 *   insn=0x000000000043BC44 string=0x000000000043BC48 ""
 *   insn=0x000000000043BC54 string=0x000000000043BC58 "@"
 *   insn=0x000000000043BC64 string=0x000000000043BC68 "*"
 *   insn=0x000000000043BC68 string=0x00000000001F8510 "0'"
 *   insn=0x000000000043BC6C string=0x000000000043BC70 "5"
 *   insn=0x000000000043BC74 string=0x000000000043BC78 ""
 *   insn=0x000000000043BC88 string=0x000000000043BC8C "\t@"
 *   insn=0x000000000043BC94 string=0x000000000043BC98 ""
 *   insn=0x000000000043BCA8 string=0x000000000043BCAC "@"
 *   insn=0x000000000043BCBC string=0x000000000043BCC0 "A"
 *   insn=0x000000000043BCE0 string=0x000000000043BCE4 " "
 *   insn=0x000000000043BCE4 string=0x000000000043BD48 "I\n"
 *   insn=0x000000000043BCE8 string=0x000000000043BCEC ""
 *   insn=0x000000000043BCF4 string=0x000000000043BCF8 "6"
 *   insn=0x000000000043BCFC string=0x000000000043BD00 ""
 *   insn=0x000000000043BD10 string=0x000000000043BD14 "\t@"
 *   insn=0x000000000043BD1C string=0x000000000043BD20 ""
 *   insn=0x000000000043BD30 string=0x000000000043BD34 "@"
 *   insn=0x000000000043BD48 string=0x000000000043BD4C ")"
 *   insn=0x000000000043BD60 string=0x000000000043BD64 "\t"
 *   insn=0x000000000043BD74 string=0x000000000043BD78 "0"
 *   insn=0x000000000043BD7C string=0x00000000001F5840 "P'"
 *   insn=0x000000000043BD84 string=0x0000000000594DF5 "Choose a spell"
 *   insn=0x000000000043BDA4 string=0x000000000043BDA8 "("
 *   insn=0x000000000043BDA8 string=0x000000000043BDAC "_"
 *   insn=0x000000000043BDB8 string=0x00000000001F5190 "P'"
 *   insn=0x000000000043BDBC string=0x000000000043BDDC "Z"
 *   insn=0x000000000043BDC4 string=0x000000000043BDC8 "8"
 *   insn=0x000000000043BDDC string=0x000000000043BDE0 "Z"
 *   insn=0x000000000043BDE8 string=0x000000000043C85C "I"
 *   insn=0x000000000043BDF8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000043BE20 string=0x00000000001F4910 "P'"
 *   insn=0x000000000043BE40 string=0x000000000043BE44 ""
 *   insn=0x000000000043BE48 string=0x000000000043BE4C " "
 *   insn=0x000000000043BE68 string=0x000000000043BE6C "u"
 *   insn=0x000000000043BE6C string=0x00000000001FBC40 "0'"
 *   insn=0x000000000043BE74 string=0x000000000043BE78 "B"
 *   insn=0x000000000043BE78 string=0x00000000001FDF80 "0'"
 *   insn=0x000000000043BE98 string=0x000000000043BE9C ""
 *   insn=0x000000000043BEA0 string=0x000000000043BEA4 " "
 *   insn=0x000000000043BEC0 string=0x000000000043BEC4 "_"
 *   insn=0x000000000043BED4 string=0x000000000058EAF4 "bolt"
 *   insn=0x000000000043BEE4 string=0x000000000043BEE8 "4"
 *   insn=0x000000000043BEF0 string=0x000000000058EAFF "bomb"
 *   insn=0x000000000043BEFC string=0x000000000043BF00 "."
 *   insn=0x000000000043BF0C string=0x000000000058EB0A "hookshot"
 *   insn=0x000000000043BF18 string=0x000000000043BF1C "'"
 *   insn=0x000000000043BF24 string=0x000000000058EB19 "dimension"
 *   insn=0x000000000043BF30 string=0x000000000043BF34 "!"
 *   insn=0x000000000043BF3C string=0x000000000043BF40 "E"
 *   insn=0x000000000043BF40 string=0x000000000043BF44 "h\n"
 *   insn=0x000000000043BF44 string=0x000000000043BF48 "\"
 *   insn=0x000000000043BF48 string=0x000000000043BF4C "\n"
 *   insn=0x000000000043BF58 string=0x000000000043BF5C ""
 *   insn=0x000000000043BF60 string=0x000000000043BF64 ""
 *   insn=0x000000000043BF74 string=0x000000000043BF78 "a="
 *   insn=0x000000000043BF88 string=0x000000000043BF8C "g"
 *   insn=0x000000000043BF98 string=0x000000000043BF9C "c"
 *   insn=0x000000000043BFAC string=0x000000000043BFB0 ""
 *   insn=0x000000000043BFB0 string=0x000000000043BFB4 "_"
 *   insn=0x000000000043BFBC string=0x000000000043BFC0 "t"
 *   insn=0x000000000043BFD0 string=0x000000000043BFD4 "H"
 *   insn=0x000000000043BFD4 string=0x000000000043C0F4 "I"
 *   insn=0x000000000043BFEC string=0x000000000043BFF0 "A\t"
 *   insn=0x000000000043BFF0 string=0x000000000043C118 "I"
 *   insn=0x000000000043BFF4 string=0x000000000043BFF8 "<"
 *   insn=0x000000000043BFF8 string=0x000000000043C03C "\"
 *   insn=0x000000000043C000 string=0x000000000043C004 "\t"
 *   insn=0x000000000043C014 string=0x000000000043C018 "!"
 *   insn=0x000000000043C038 string=0x000000000043C1AC "I"
 *   insn=0x000000000043C044 string=0x000000000043C048 "8"
 *   insn=0x000000000043C048 string=0x000000000043C04C "@"
 *   insn=0x000000000043C04C string=0x000000000043C050 ""
 *   insn=0x000000000043C050 string=0x000000000043C054 ""
 *   insn=0x000000000043C058 string=0x000000000043C05C ""
 *   insn=0x000000000043C05C string=0x000000000043C060 "\t@"
 *   insn=0x000000000043C068 string=0x000000000043C06C "@"
 *   insn=0x000000000043C06C string=0x000000000043C070 ""
 *   insn=0x000000000043C070 string=0x000000000043C074 ""
 *   insn=0x000000000043C078 string=0x000000000043C07C ""
 *   insn=0x000000000043C07C string=0x000000000043C080 "@"
 *   insn=0x000000000043C090 string=0x000000000043C094 "@"
 *   insn=0x000000000043C094 string=0x000000000043C098 ""
 *   insn=0x000000000043C098 string=0x000000000043C09C ""
 *   insn=0x000000000043C0A0 string=0x000000000043C0A4 ""
 *   insn=0x000000000043C0A4 string=0x000000000043C0A8 "\t@"
 *   insn=0x000000000043C0B0 string=0x000000000043C0B4 "@"
 *   insn=0x000000000043C0B4 string=0x000000000043C0B8 ""
 *   insn=0x000000000043C0B8 string=0x000000000043C0BC ""
 *   insn=0x000000000043C0C0 string=0x000000000043C0C4 ""
 *   insn=0x000000000043C0C4 string=0x000000000043C0C8 "@"
 *   insn=0x000000000043C0DC string=0x000000000043C0E0 "\t"
 *   insn=0x000000000043C0DC string=0x000000000043C13C "\t"
 *   insn=0x000000000043C0E0 string=0x000000000043C0E4 "*"
 *   insn=0x000000000043C0E4 string=0x000000000043C0E8 "\n"
 *   insn=0x000000000043C0F0 string=0x000000000043C148 "?"
 *   insn=0x000000000043C0F4 string=0x000000000043C0F8 ")=G"
 *   insn=0x000000000043C0F8 string=0x000000000043C0FC "(#"
 *   insn=0x000000000043C0FC string=0x000000000043C100 "\t"
 *   insn=0x000000000043C100 string=0x000000000043C104 "\t"
 *   insn=0x000000000043C100 string=0x000000000043C160 "\t"
 *   insn=0x000000000043C104 string=0x000000000043C108 "*"
 *   insn=0x000000000043C108 string=0x000000000043C10C "\n"
 *   insn=0x000000000043C114 string=0x000000000043C16C "?"
 *   insn=0x000000000043C118 string=0x000000000043C11C ")=G"
 *   insn=0x000000000043C11C string=0x000000000043C120 "!"
 *   insn=0x000000000043C120 string=0x000000000043C124 "\t"
 *   insn=0x000000000043C124 string=0x000000000043C128 "\t"
 *   insn=0x000000000043C124 string=0x000000000043C184 "\t"
 *   insn=0x000000000043C128 string=0x000000000043C12C "*"
 *   insn=0x000000000043C12C string=0x000000000043C130 "\n"
 *   insn=0x000000000043C138 string=0x000000000043C190 "?"
 *   insn=0x000000000043C13C string=0x000000000043C140 "*"
 *   insn=0x000000000043C140 string=0x000000000043C144 "\n"
 *   insn=0x000000000043C160 string=0x000000000043C164 "*"
 *   insn=0x000000000043C164 string=0x000000000043C168 "\n"
 *   insn=0x000000000043C184 string=0x000000000043C188 "*"
 *   insn=0x000000000043C188 string=0x000000000043C18C "\n"
 *   insn=0x000000000043C1AC string=0x000000000043C1B0 ")=G"
 *   insn=0x000000000043C1B0 string=0x000000000043C1B4 "!"
 *   insn=0x000000000043C1B8 string=0x000000000043C1BC "\t"
 *   insn=0x000000000043C1B8 string=0x000000000043C1D0 "\t"
 *   insn=0x000000000043C1BC string=0x000000000043C1C0 "*"
 *   insn=0x000000000043C1C0 string=0x000000000043C1C4 "\n"
 *   insn=0x000000000043C1CC string=0x000000000043C1DC "?"
 *   insn=0x000000000043C1D0 string=0x000000000043C1D4 "*"
 *   insn=0x000000000043C1D4 string=0x000000000043C1D8 "\n"
 *   insn=0x000000000043C1E8 string=0x000000000043C1EC "n"
 *   insn=0x000000000043C204 string=0x00000000001FB580 "0'"
 *   insn=0x000000000043C210 string=0x00000000001F6C10 "0'"
 *   insn=0x000000000043C220 string=0x00000000001F5660 "P'"
 *   insn=0x000000000043C23C string=0x00000000001F9150 "0'"
 *   insn=0x000000000043C244 string=0x000000000043C248 "^"
 *   insn=0x000000000043C248 string=0x00000000001FCFC0 "0'"
 *   insn=0x000000000043C250 string=0x000000000043C254 "\ty@"
 *   insn=0x000000000043C260 string=0x000000000043C264 "\t"
 *   insn=0x000000000043C27C string=0x000000000043C280 ""
 *   insn=0x000000000043C280 string=0x000000000043C284 "}@"
 *   insn=0x000000000043C294 string=0x000000000043C298 ""
 *   insn=0x000000000043C298 string=0x000000000043C29C "1@"
 *   insn=0x000000000043C2A4 string=0x000000000043C2A8 "*"
 *   insn=0x000000000043C2A8 string=0x000000000043C2AC "J"
 *   insn=0x000000000043C2AC string=0x000000000043C2B0 "*"
 *   insn=0x000000000043C2BC string=0x000000000043C2C0 "7"
 *   insn=0x000000000043C2C4 string=0x000000000043C2C8 ""
 *   insn=0x000000000043C2D4 string=0x000000000043C2D8 "\t@"
 *   insn=0x000000000043C2E4 string=0x000000000043C2E8 ""
 *   insn=0x000000000043C2F4 string=0x000000000043C2F8 "@"
 *   insn=0x000000000043C308 string=0x000000000043C30C ")"
 *   insn=0x000000000043C310 string=0x000000000043C314 ""
 *   insn=0x000000000043C310 string=0x000000000043C320 "7"
 *   insn=0x000000000043C314 string=0x000000000043C318 "k"
 *   insn=0x000000000043C318 string=0x000000000043C31C ""
 *   insn=0x000000000043C320 string=0x000000000043C324 "*!"
 *   insn=0x000000000043C324 string=0x000000000043C328 "7"
 *   insn=0x000000000043C32C string=0x000000000043C330 ""
 *   insn=0x000000000043C33C string=0x000000000043C340 "\t@"
 *   insn=0x000000000043C34C string=0x000000000043C350 ""
 *   insn=0x000000000043C35C string=0x000000000043C360 "@"
 *   insn=0x000000000043C370 string=0x000000000043C374 ")"
 *   insn=0x000000000043C378 string=0x000000000043C37C ""
 *   insn=0x000000000043C378 string=0x000000000043C388 "7"
 *   insn=0x000000000043C37C string=0x000000000043C380 "k"
 *   insn=0x000000000043C380 string=0x000000000043C384 ""
 *   insn=0x000000000043C388 string=0x000000000043C38C "*!"
 *   insn=0x000000000043C38C string=0x000000000043C390 "7"
 *   insn=0x000000000043C394 string=0x000000000043C398 ""
 *   insn=0x000000000043C3A4 string=0x000000000043C3A8 "\t@"
 *   insn=0x000000000043C3B4 string=0x000000000043C3B8 ""
 *   insn=0x000000000043C3C4 string=0x000000000043C3C8 "@"
 *   insn=0x000000000043C3D4 string=0x000000000043C3D8 "1@"
 *   insn=0x000000000043C3E4 string=0x000000000043C3E8 "h"
 *   insn=0x000000000043C3E8 string=0x000000000043C3EC "7"
 *   insn=0x000000000043C3F4 string=0x000000000043C3F8 "2"
 *   insn=0x000000000043C3F8 string=0x00000000001F34C0 "P'"
 *   insn=0x000000000043C3FC string=0x000000000043C400 "h"
 *   insn=0x000000000043C420 string=0x00000000001F9C80 "0'"
 *   insn=0x000000000043C428 string=0x000000000043C42C "\t"
 *   insn=0x000000000043C42C string=0x000000000043C430 "\t"
 *   insn=0x000000000043C434 string=0x000000000043C438 "j"
 *   insn=0x000000000043C46C string=0x000000000043C470 "`"
 *   insn=0x000000000043C478 string=0x000000000043C47C "*"
 *   insn=0x000000000043C47C string=0x000000000043C480 "J"
 *   insn=0x000000000043C480 string=0x000000000043C484 "*"
 *   insn=0x000000000043C48C string=0x000000000043C490 "8"
 *   insn=0x000000000043C490 string=0x000000000043C494 "@"
 *   insn=0x000000000043C494 string=0x000000000043C498 ""
 *   insn=0x000000000043C498 string=0x000000000043C49C ""
 *   insn=0x000000000043C4A0 string=0x000000000043C4A4 ""
 *   insn=0x000000000043C4A4 string=0x000000000043C4A8 "\t@"
 *   insn=0x000000000043C4B0 string=0x000000000043C4B4 "@"
 *   insn=0x000000000043C4B4 string=0x000000000043C4B8 ""
 *   insn=0x000000000043C4B8 string=0x000000000043C4BC ""
 *   insn=0x000000000043C4C0 string=0x000000000043C4C4 ""
 *   insn=0x000000000043C4C4 string=0x000000000043C4C8 "@"
 *   insn=0x000000000043C4DC string=0x000000000043C4E0 "7"
 *   insn=0x000000000043C4E4 string=0x000000000043C4E8 ""
 *   insn=0x000000000043C4F4 string=0x000000000043C4F8 "\t@"
 *   insn=0x000000000043C504 string=0x000000000043C508 ""
 *   insn=0x000000000043C514 string=0x000000000043C518 "@"
 *   insn=0x000000000043C52C string=0x000000000043C530 ""
 *   insn=0x000000000043C530 string=0x000000000043C534 ""
 *   insn=0x000000000043C534 string=0x000000000043C538 "\t"
 *   insn=0x000000000043C538 string=0x000000000043C53C "\t"
 *   insn=0x000000000043C564 string=0x000000000043C568 "("
 *   insn=0x000000000043C568 string=0x000000000043C56C "_"
 *   insn=0x000000000043C584 string=0x000000000043C588 "H"
 *   insn=0x000000000043C594 string=0x000000000043C598 "7c"
 *   insn=0x000000000043C5A0 string=0x000000000043C0D8 "(#"
 *   insn=0x000000000043C5A8 string=0x000000000043C5AC ""
 *   insn=0x000000000043C5AC string=0x000000000043C5B0 "1@"
 *   insn=0x000000000043C5B8 string=0x000000000043C5BC "*"
 *   insn=0x000000000043C5BC string=0x000000000043C5C0 "J"
 *   insn=0x000000000043C5C0 string=0x000000000043C5C4 "*"
 *   insn=0x000000000043C5D0 string=0x000000000043C5D4 "7"
 *   insn=0x000000000043C5D8 string=0x000000000043C5DC ""
 *   insn=0x000000000043C5E8 string=0x000000000043C5EC "\t@"
 *   insn=0x000000000043C5F8 string=0x000000000043C5FC ""
 *   insn=0x000000000043C608 string=0x000000000043C60C "@"
 *   insn=0x000000000043C61C string=0x000000000043C620 ")"
 *   insn=0x000000000043C624 string=0x000000000043C628 ""
 *   insn=0x000000000043C624 string=0x000000000043C634 "7"
 *   insn=0x000000000043C628 string=0x000000000043C62C "k"
 *   insn=0x000000000043C62C string=0x000000000043C630 ""
 *   insn=0x000000000043C634 string=0x000000000043C638 "*!"
 *   insn=0x000000000043C638 string=0x000000000043C63C "7"
 *   insn=0x000000000043C640 string=0x000000000043C644 ""
 *   insn=0x000000000043C650 string=0x000000000043C654 "\t@"
 *   insn=0x000000000043C660 string=0x000000000043C664 ""
 *   insn=0x000000000043C670 string=0x000000000043C674 "@"
 *   insn=0x000000000043C6A0 string=0x000000000043C6A4 "$u@"
 *   insn=0x000000000043C6A8 string=0x000000000043C6AC "!+"
 *   insn=0x000000000043C6B0 string=0x000000000043C6B4 "a+"
 *   insn=0x000000000043C6D0 string=0x000000000043C6D4 "h"
 *   insn=0x000000000043C6D0 string=0x00000000001FB170 "0'"
 *   insn=0x000000000043C6E8 string=0x000000000043C71C "?"
 *   insn=0x000000000043C6EC string=0x000000000043C6F0 "\t@"
 *   insn=0x000000000043C6FC string=0x000000000043C700 ""
 *   insn=0x000000000043C70C string=0x000000000043C710 "@"
 *   insn=0x000000000043C738 string=0x000000000043C73C "1"
 *   insn=0x000000000043C73C string=0x00000000001FC800 "0'"
 *   insn=0x000000000043C740 string=0x000000000043C744 "7"
 *   insn=0x000000000043C748 string=0x000000000043C74C ""
 *   insn=0x000000000043C758 string=0x000000000043C75C "\t@"
 *   insn=0x000000000043C768 string=0x000000000043C76C ""
 *   insn=0x000000000043C778 string=0x000000000043C77C "@"
 *   insn=0x000000000043C788 string=0x000000000043C78C "7"
 *   insn=0x000000000043C790 string=0x000000000043C794 ""
 *   insn=0x000000000043C7A0 string=0x000000000043C7A4 "\t@"
 *   insn=0x000000000043C7B0 string=0x000000000043C7B4 ""
 *   insn=0x000000000043C7C0 string=0x000000000043C7C4 "@"
 *   insn=0x000000000043C7EC string=0x000000000043C8A4 "I"
 *   insn=0x000000000043C7F8 string=0x000000000043C7FC "a"
 *   insn=0x000000000043C7FC string=0x000000000043C8C8 "I"
 *   insn=0x000000000043C80C string=0x000000000043C8EC "I"
 *   insn=0x000000000043C81C string=0x000000000043C820 "h"
 *   insn=0x000000000043C81C string=0x000000000043C910 "I"
 *   insn=0x000000000043C828 string=0x000000000043C82C "A"
 *   insn=0x000000000043C82C string=0x000000000043C9B4 "G"
 *   insn=0x000000000043C85C string=0x000000000043C860 ")=G"
 *   insn=0x000000000043C868 string=0x000000000043C86C "\t"
 *   insn=0x000000000043C868 string=0x000000000043C880 "\t"
 *   insn=0x000000000043C86C string=0x000000000043C870 "*"
 *   insn=0x000000000043C870 string=0x000000000043C874 "\n"
 *   insn=0x000000000043C87C string=0x000000000043C88C "?"
 *   insn=0x000000000043C880 string=0x000000000043C884 "*"
 *   insn=0x000000000043C884 string=0x000000000043C888 "\n"
 *   insn=0x000000000043C89C string=0x000000000043C8A0 "S"
 *   insn=0x000000000043C8A4 string=0x000000000043C8A8 ")=G"
 *   insn=0x000000000043C8A8 string=0x000000000043C8AC "!"
 *   insn=0x000000000043C8AC string=0x000000000043C8B0 ")"
 *   insn=0x000000000043C8B0 string=0x000000000043C8B4 "\t"
 *   insn=0x000000000043C8B0 string=0x000000000043C934 "\t"
 *   insn=0x000000000043C8B4 string=0x000000000043C8B8 "*"
 *   insn=0x000000000043C8B8 string=0x000000000043C8BC "\n"
 *   insn=0x000000000043C8C4 string=0x000000000043C940 "?"
 *   insn=0x000000000043C8C8 string=0x000000000043C8CC ")=G"
 *   insn=0x000000000043C8CC string=0x000000000043C8D0 "!"
 *   insn=0x000000000043C8D0 string=0x000000000043C8D4 "\t"
 *   insn=0x000000000043C8D4 string=0x000000000043C8D8 "\t"
 *   insn=0x000000000043C8D4 string=0x000000000043C954 "\t"
 *   insn=0x000000000043C8D8 string=0x000000000043C8DC "*"
 *   insn=0x000000000043C8DC string=0x000000000043C8E0 "\n"
 *   insn=0x000000000043C8E8 string=0x000000000043C960 "?"
 *   insn=0x000000000043C8EC string=0x000000000043C8F0 ")=G"
 *   insn=0x000000000043C8F0 string=0x000000000043C8F4 "!"
 *   insn=0x000000000043C8F8 string=0x000000000043C8FC "\t"
 *   insn=0x000000000043C8F8 string=0x000000000043C974 "\t"
 *   insn=0x000000000043C8FC string=0x000000000043C900 "*"
 *   insn=0x000000000043C900 string=0x000000000043C904 "\n"
 *   insn=0x000000000043C90C string=0x000000000043C980 "?"
 *   insn=0x000000000043C910 string=0x000000000043C914 ")=G"
 *   insn=0x000000000043C914 string=0x000000000043C918 "!"
 *   insn=0x000000000043C91C string=0x000000000043C920 "\t"
 *   insn=0x000000000043C91C string=0x000000000043C994 "\t"
 *   insn=0x000000000043C920 string=0x000000000043C924 "*"
 *   insn=0x000000000043C924 string=0x000000000043C928 "\n"
 *   insn=0x000000000043C930 string=0x000000000043C9A0 "?"
 *   insn=0x000000000043C934 string=0x000000000043C938 "*"
 *   insn=0x000000000043C938 string=0x000000000043C93C "\n"
 *   insn=0x000000000043C940 string=0x000000000043C944 "l"
 *   insn=0x000000000043C954 string=0x000000000043C958 "*"
 *   insn=0x000000000043C958 string=0x000000000043C95C "\n"
 *   insn=0x000000000043C974 string=0x000000000043C978 "*"
 *   insn=0x000000000043C978 string=0x000000000043C97C "\n"
 *   insn=0x000000000043C980 string=0x000000000043C984 "l"
 *   insn=0x000000000043C994 string=0x000000000043C998 "*"
 *   insn=0x000000000043C998 string=0x000000000043C99C "\n"
 *   insn=0x000000000043C9A8 string=0x000000000043C9AC "~"
 *   insn=0x000000000043C9B4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043C9C4 string=0x000000000043C9C8 ""
 *   insn=0x000000000043C9D4 string=0x000000000043C9D8 "\t@"
 *   insn=0x000000000043C9E4 string=0x000000000043C9E8 ""
 *   insn=0x000000000043C9F4 string=0x000000000043C9F8 "@"
 *   insn=0x000000000043CA08 string=0x000000000043CA10 "V"
 *   insn=0x000000000043CA28 string=0x000000000043CA2C "\t"
 *   insn=0x000000000043CA28 string=0x000000000043CA48 "\t"
 *   insn=0x000000000043CA2C string=0x000000000043CA30 "*"
 *   insn=0x000000000043CA30 string=0x000000000043CA34 "\n"
 *   insn=0x000000000043CA38 string=0x000000000043CA3C "?"
 *   insn=0x000000000043CA48 string=0x000000000043CA4C "*"
 *   insn=0x000000000043CA4C string=0x000000000043CA50 "\n"
 *   insn=0x000000000043CA50 string=0x000000000043CA54 "?"
 *   insn=0x000000000043CA5C string=0x000000000043CA60 "Q"
 *   insn=0x000000000043CA74 string=0x000000000043CA24 "!"
 *   insn=0x000000000043CA78 string=0x000000000043CA7C "a"
 *   insn=0x000000000043CA7C string=0x000000000043CA80 "t"
 *   insn=0x000000000043CA9C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000043CAA8 string=0x000000000043CAAC "J"
 *   insn=0x000000000043CAAC string=0x000000000043CAB0 "J"
 *   insn=0x000000000043CAB4 string=0x000000000043CAB8 "(a"
 *   insn=0x000000000043CAC0 string=0x000000000043CAC4 "J"
 *   insn=0x000000000043CAC4 string=0x000000000043CAC8 "J=G"
 *   insn=0x000000000043CAC8 string=0x000000000043CACC ")!"
 *   insn=0x000000000043CAD0 string=0x000000000043CAD4 "*"
 *   insn=0x000000000043CAD0 string=0x000000000043CB00 "*"
 *   insn=0x000000000043CAD4 string=0x000000000043CAD8 "K"
 *   insn=0x000000000043CAD8 string=0x000000000043CADC "+"
 *   insn=0x000000000043CAE0 string=0x000000000043CAE4 "_"
 *   insn=0x000000000043CAE4 string=0x000000000043CAE8 "L+"
 *   insn=0x000000000043CAF0 string=0x000000000043CAF4 ","
 *   insn=0x000000000043CAF8 string=0x000000000043CAFC "r"
 *   insn=0x000000000043CB00 string=0x000000000043CB04 "K"
 *   insn=0x000000000043CB04 string=0x000000000043CB08 "+"
 *   insn=0x000000000043CB08 string=0x000000000043CB0C "_"
 *   insn=0x000000000043CB10 string=0x000000000043CB14 "O"
 *   insn=0x000000000043CB28 string=0x000000000043CB2C "(a"
 *   insn=0x000000000043CB34 string=0x000000000043CB38 "\"
 *   insn=0x000000000043CB34 string=0x000000000043CB4C "J"
 *   insn=0x000000000043CB4C string=0x000000000043CB50 "J=G"
 *   insn=0x000000000043CB50 string=0x000000000043CB54 ")!"
 *   insn=0x000000000043CB58 string=0x000000000043CB5C "*"
 *   insn=0x000000000043CB58 string=0x000000000043CB70 "*"
 *   insn=0x000000000043CB5C string=0x000000000043CB60 "K"
 *   insn=0x000000000043CB60 string=0x000000000043CB64 "+"
 *   insn=0x000000000043CB6C string=0x000000000043CB7C "_"
 *   insn=0x000000000043CB70 string=0x000000000043CB74 "K"
 *   insn=0x000000000043CB74 string=0x000000000043CB78 "+"
 *   insn=0x000000000043CBA4 string=0x000000000043CBA8 "}"
 *   insn=0x000000000043CBB0 string=0x000000000043CBB4 "(a"
 *   insn=0x000000000043CBBC string=0x000000000043CBC0 ")!"
 *   insn=0x000000000043CBC8 string=0x000000000043CBCC "*"
 *   insn=0x000000000043CBC8 string=0x000000000043CBE0 "*"
 *   insn=0x000000000043CBCC string=0x000000000043CBD0 "K"
 *   insn=0x000000000043CBD0 string=0x000000000043CBD4 "+"
 *   insn=0x000000000043CBDC string=0x000000000043CBEC "_"
 *   insn=0x000000000043CBE0 string=0x000000000043CBE4 "K"
 *   insn=0x000000000043CBE4 string=0x000000000043CBE8 "+"
 *   insn=0x000000000043CBF8 string=0x000000000043CBFC "M"
 *   insn=0x000000000043CC18 string=0x000000000043CC1C ""
 *   insn=0x000000000043CC20 string=0x000000000043CC24 "A\t"
 *   insn=0x000000000043CC28 string=0x000000000043CC2C "\t@"
 *   insn=0x000000000043CC38 string=0x000000000043CC3C ""
 *   insn=0x000000000043CC40 string=0x000000000043CC44 "A"
 *   insn=0x000000000043CC48 string=0x000000000043CC4C "@"
 *   insn=0x000000000043CC54 string=0x000000000043CC58 "="
 *   insn=0x000000000043CC60 string=0x000000000043CC64 "T"
 *   insn=0x000000000043CC68 string=0x000000000043CC6C ""
 *   insn=0x000000000043CC78 string=0x000000000043CC7C "\t@"
 *   insn=0x000000000043CC88 string=0x000000000043CC8C ""
 *   insn=0x000000000043CC98 string=0x000000000043CC9C "@"
 *   insn=0x000000000043CCA4 string=0x000000000043CCA8 ")"
 *   insn=0x000000000043CCBC string=0x000000000043CCC0 "|"
 *   insn=0x000000000043CCC8 string=0x000000000043CCCC "l"
 *   insn=0x000000000043CCD4 string=0x000000000043CCD8 "t"
 *   insn=0x000000000043CCD8 string=0x000000000043CCDC "h"
 *   insn=0x000000000043CCE4 string=0x000000000043CCE8 "(a"
 *   insn=0x000000000043CCF0 string=0x000000000043CCF4 ")!"
 *   insn=0x000000000043CCFC string=0x000000000043CD00 "*"
 *   insn=0x000000000043CCFC string=0x000000000043CD14 "*"
 *   insn=0x000000000043CD00 string=0x000000000043CD04 "K"
 *   insn=0x000000000043CD04 string=0x000000000043CD08 "+"
 *   insn=0x000000000043CD10 string=0x000000000043CD20 "_"
 *   insn=0x000000000043CD14 string=0x000000000043CD18 "K"
 *   insn=0x000000000043CD18 string=0x000000000043CD1C "+"
 *   insn=0x000000000043CD24 string=0x000000000043CD28 ","
 *   insn=0x000000000043CD4C string=0x000000000043CD50 "t"
 *   insn=0x000000000043CD54 string=0x000000000043CD58 ""
 *   insn=0x000000000043CD64 string=0x000000000043CD68 "\t@"
 *   insn=0x000000000043CD74 string=0x000000000043CD78 ""
 *   insn=0x000000000043CD84 string=0x000000000043CD88 "@"
 *   insn=0x000000000043CDA4 string=0x000000000043CDA8 ""
 *   insn=0x000000000043CDAC string=0x000000000043CDB0 "a"
 *   insn=0x000000000043CDB4 string=0x000000000043CDB8 "\t@"
 *   insn=0x000000000043CDC4 string=0x000000000043CDC8 ""
 *   insn=0x000000000043CDCC string=0x000000000043CDD0 "a"
 *   insn=0x000000000043CDD4 string=0x000000000043CDD8 "@"
 *   insn=0x000000000043CDE0 string=0x000000000043CDE4 "&"
 *   insn=0x000000000043CDEC string=0x000000000043CDF0 "t"
 *   insn=0x000000000043CDF4 string=0x000000000043CDF8 ""
 *   insn=0x000000000043CE04 string=0x000000000043CE08 "\t@"
 *   insn=0x000000000043CE14 string=0x000000000043CE18 ""
 *   insn=0x000000000043CE24 string=0x000000000043CE28 "@"
 *   insn=0x000000000043CE44 string=0x000000000043CE48 "4"
 *   insn=0x000000000043CE48 string=0x000000000043CE4C "3"
 *   insn=0x000000000043CE5C string=0x000000000043CE60 "."
 *   insn=0x000000000043CE70 string=0x000000000043CE74 ")"
 *   insn=0x000000000043CE7C string=0x000000000043CE80 "4"
 *   insn=0x000000000043CE84 string=0x000000000043CE88 ""
 *   insn=0x000000000043CE94 string=0x000000000043CE98 "\t@"
 *   insn=0x000000000043CEA4 string=0x000000000043CEA8 ""
 *   insn=0x000000000043CEB4 string=0x000000000043CEB8 "@"
 *   insn=0x000000000043CECC string=0x000000000043CED0 ""
 *   insn=0x000000000043CEDC string=0x000000000043CEE0 "\t@"
 *   insn=0x000000000043CEEC string=0x000000000043CEF0 ""
 *   insn=0x000000000043CEFC string=0x000000000043CF00 "@"
 *   insn=0x000000000043CF20 string=0x000000000043CF24 "!"
 *   insn=0x000000000043CF24 string=0x000000000043CF88 "!"
 *   insn=0x000000000043CF34 string=0x000000000043CFA4 "!"
 *   insn=0x000000000043CF44 string=0x000000000043CFC0 "!"
 *   insn=0x000000000043CF54 string=0x000000000043CF58 "!"
 *   insn=0x000000000043CF5C string=0x000000000043CF60 "\t"
 *   insn=0x000000000043CF5C string=0x000000000043D03C "\t"
 *   insn=0x000000000043CF60 string=0x000000000043CF64 "*"
 *   insn=0x000000000043CF64 string=0x000000000043CF68 "\n"
 *   insn=0x000000000043CF6C string=0x000000000043CF70 "?"
 *   insn=0x000000000043CF78 string=0x000000000043CF7C "\n"
 *   insn=0x000000000043CF80 string=0x000000000043CF84 "P"
 *   insn=0x000000000043CF8C string=0x000000000043CF90 "\t"
 *   insn=0x000000000043CF8C string=0x000000000043CFDC "\t"
 *   insn=0x000000000043CF90 string=0x000000000043CF94 "*"
 *   insn=0x000000000043CF94 string=0x000000000043CF98 "\n"
 *   insn=0x000000000043CFA0 string=0x000000000043CFE8 "?"
 *   insn=0x000000000043CFA8 string=0x000000000043CFAC "\t"
 *   insn=0x000000000043CFA8 string=0x000000000043CFFC "\t"
 *   insn=0x000000000043CFAC string=0x000000000043CFB0 "*"
 *   insn=0x000000000043CFB0 string=0x000000000043CFB4 "\n"
 *   insn=0x000000000043CFBC string=0x000000000043D008 "?"
 *   insn=0x000000000043CFC4 string=0x000000000043CFC8 "\t"
 *   insn=0x000000000043CFC4 string=0x000000000043D01C "\t"
 *   insn=0x000000000043CFC8 string=0x000000000043CFCC "*"
 *   insn=0x000000000043CFCC string=0x000000000043CFD0 "\n"
 *   insn=0x000000000043CFD8 string=0x000000000043D028 "?"
 *   insn=0x000000000043CFDC string=0x000000000043CFE0 "*"
 *   insn=0x000000000043CFE0 string=0x000000000043CFE4 "\n"
 *   insn=0x000000000043CFFC string=0x000000000043D000 "*"
 *   insn=0x000000000043D000 string=0x000000000043D004 "\n"
 *   insn=0x000000000043D008 string=0x000000000043D00C "l"
 *   insn=0x000000000043D01C string=0x000000000043D020 "*"
 *   insn=0x000000000043D020 string=0x000000000043D024 "\n"
 *   insn=0x000000000043D03C string=0x000000000043D040 "*"
 *   insn=0x000000000043D040 string=0x000000000043D044 "\n"
 *   insn=0x000000000043D044 string=0x000000000043D048 "?"
 *   insn=0x000000000043D048 string=0x000000000043D04C "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillPickerView::InitWithGameState(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUILabel *v9; // x0
  Caver::FontLibrary *v10; // x0
  _QWORD *v11; // x21
  void *v12; // x9
  _QWORD *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  Caver::GUILabel *v16; // x21
  Caver::FontLibrary *v17; // x0
  void *v18; // x8
  _QWORD *v19; // x9
  _QWORD *v20; // x22
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x21
  _QWORD *v27; // x22
  __int64 v28; // x8
  __int64 v29; // x8
  Caver::GUILabel *v30; // x0
  Caver::GUILabel *v31; // x22
  char *v32; // x23
  size_t v33; // x2
  __int64 *v34; // x21
  _QWORD *v35; // x1
  _QWORD *v36; // x0
  void *v37; // x8
  unsigned __int64 v38; // x23
  unsigned __int64 v39; // x0
  unsigned __int64 *v40; // x0
  _QWORD *v41; // x22
  unsigned __int64 v42; // x23
  unsigned __int64 v43; // x0
  unsigned __int64 *v44; // x0
  _QWORD *v45; // x22
  void *v46; // x0
  __int64 v47; // x21
  bool v48; // w23
  char *v49; // x25
  size_t v50; // x2
  __int64 *v51; // x24
  _BOOL4 v52; // w28
  char *v53; // x0
  __int64 v54; // x24
  char *v55; // x0
  Caver::GUILabel *v56; // x24
  __int64 v57; // x8
  __int64 v58; // x8
  _QWORD *v59; // x24
  __int64 v60; // x8
  __int64 v61; // x8
  unsigned int *v62; // x8
  int v63; // w9
  unsigned int *v64; // x8
  int v65; // w9
  unsigned int *v66; // x8
  int v67; // w9
  unsigned int *v68; // x8
  int v69; // w9
  Caver::MenuItemSlot *v70; // x0
  Caver::MenuItemSlot *v71; // x0
  Caver::GUIView *v72; // x0
  float v73; // s0
  float v74; // s1
  float v75; // w9
  void (*v76)(void); // x8
  _QWORD *v77; // x23
  __int64 v78; // x8
  __int64 v79; // x8
  Caver::MenuItemSlot *v80; // x8
  Caver::MenuItemSlot *v81; // x10
  Caver::MenuItemSlot **v82; // x9
  Caver::MenuItemSlot *v83; // x23
  __int64 v84; // x8
  __int64 v85; // x8
  float *v86; // x8
  float *v87; // x10
  float **v88; // x9
  float *v89; // x23
  __int64 v90; // x8
  __int64 v91; // x8
  Caver::MenuItemSlot *v92; // x8
  Caver::GUILabel *v93; // x0
  Caver::GUILabel *v94; // x23
  Caver::FontLibrary *v95; // x0
  Caver::FontLibrary *v96; // x0
  void *v97; // x8
  __int64 v98; // x9
  _QWORD *v99; // x24
  __int64 v100; // x8
  __int64 v101; // x8
  _QWORD *v102; // x23
  __int64 v103; // x8
  __int64 v104; // x8
  Caver::GUILabel *v105; // x0
  Caver::GUILabel *v106; // x24
  char *v107; // x25
  size_t v108; // x2
  __int64 *v109; // x23
  _QWORD *v110; // x1
  void (*v111)(void); // x8
  _QWORD *v112; // x23
  __int64 v113; // x8
  __int64 v114; // x8
  Caver::GUILabel *v115; // x8
  Caver::GUILabel *v116; // x10
  Caver::GUILabel **v117; // x9
  Caver::GUILabel *v118; // x23
  __int64 v119; // x8
  __int64 v120; // x8
  float v121; // s1
  float v122; // s0
  float v123; // s4
  _QWORD *v124; // x23
  Caver::MenuItemSlot *v125; // x24
  Caver::MenuItemSlot *v126; // x25
  __int64 v127; // x8
  float *v128; // x23
  __int64 v129; // x8
  __int64 v130; // x8
  _QWORD *v131; // x23
  __int64 v132; // x8
  __int64 v133; // x8
  void *v134; // x0
  void *v135; // x0
  _QWORD *v136; // x0
  char *v137; // x0
  unsigned int *v138; // x8
  int v139; // w9
  unsigned int *v140; // x8
  int v141; // w9
  unsigned int *v142; // x8
  int v143; // w9
  unsigned int *v144; // x8
  int v145; // w9
  unsigned int *v146; // x8
  int v147; // w9
  void *v148; // [xsp+10h] [xbp-120h] BYREF
  __int64 v149; // [xsp+18h] [xbp-118h] BYREF
  void *v150; // [xsp+20h] [xbp-110h] BYREF
  __int64 v151; // [xsp+28h] [xbp-108h]
  Caver::GUILabel *v152; // [xsp+30h] [xbp-100h]
  Caver::GUILabel *v153; // [xsp+38h] [xbp-F8h]
  Caver::MenuItemSlot *v154; // [xsp+40h] [xbp-F0h]
  _QWORD *v155; // [xsp+48h] [xbp-E8h]
  float v156[4]; // [xsp+50h] [xbp-E0h] BYREF
  float *v157; // [xsp+60h] [xbp-D0h] BYREF
  float *v158; // [xsp+68h] [xbp-C8h]
  Caver::MenuItemSlot *v159; // [xsp+70h] [xbp-C0h]
  _QWORD *v160; // [xsp+78h] [xbp-B8h]
  void *v161; // [xsp+88h] [xbp-A8h] BYREF
  _QWORD *v162; // [xsp+90h] [xbp-A0h] BYREF
  __int64 v163; // [xsp+98h] [xbp-98h] BYREF
  _QWORD v164[2]; // [xsp+A0h] [xbp-90h] BYREF

  v164[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = *(_QWORD **)(a1 + 264);
  *(_QWORD *)(a1 + 256) = v5;
  *(_QWORD *)(a1 + 264) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v9);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v11 = *(_QWORD **)(a1 + 280);
  v12 = v161;
  v161 = *(void **)(a1 + 272);
  v13 = v162;
  *(_QWORD *)(a1 + 272) = v12;
  *(_QWORD *)(a1 + 280) = v13;
  v162 = v11;
  if ( v11 )
  {
    v14 = v11[1] - 1LL;
    v11[1] = v14;
    if ( !v14 )
    {
      v10 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v15 = v11[2] - 1LL;
      v11[2] = v15;
      if ( !v15 )
        v10 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v16 = *(Caver::GUILabel **)(a1 + 272);
  v17 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v10);
  Caver::FontLibrary::DefaultFont(v17);
  v18 = v161;
  if ( v161 != *((void **)v16 + 30) )
  {
    v19 = v162;
    if ( v162 )
      ++v162[1];
    v20 = (_QWORD *)*((_QWORD *)v16 + 31);
    *((_QWORD *)v16 + 30) = v18;
    *((_QWORD *)v16 + 31) = v19;
    if ( v20 )
    {
      v21 = v20[1] - 1LL;
      v20[1] = v21;
      if ( !v21 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        v22 = v20[2] - 1LL;
        v20[2] = v22;
        if ( !v22 )
          (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
      }
    }
    Caver::GUILabel::UpdateText(v16);
  }
  v23 = v162;
  if ( v162 )
  {
    v24 = v162[1] - 1LL;
    v162[1] = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = *(_QWORD *)(a1 + 272);
  if ( *(unsigned __int8 *)(v26 + 264) != 255
    || *(unsigned __int8 *)(v26 + 265) != 255
    || *(unsigned __int8 *)(v26 + 266) != 255
    || *(unsigned __int8 *)(v26 + 267) != 255 )
  {
    v27 = *(_QWORD **)(v26 + 280);
    *(_DWORD *)(v26 + 264) = -1;
    *(_QWORD *)(v26 + 272) = 0;
    *(_QWORD *)(v26 + 280) = 0;
    if ( v27 )
    {
      v28 = v27[1] - 1LL;
      v27[1] = v28;
      if ( !v28 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
        v29 = v27[2] - 1LL;
        v27[2] = v29;
        if ( !v29 )
          (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
      }
    }
    Caver::GUILabel::UpdateText((Caver::GUILabel *)v26);
    v26 = *(_QWORD *)(a1 + 272);
  }
  *(_BYTE *)(v26 + 320) = 1;
  *(_DWORD *)(v26 + 321) = -16777216;
  *(_QWORD *)(v26 + 328) = 0xBF8000003F800000LL;
  Caver::GUILabel::UpdateText((Caver::GUILabel *)v26);
  v30 = *(Caver::GUILabel **)(a1 + 272);
  *((_DWORD *)v30 + 76) = 4;
  Caver::GUILabel::UpdateBounds(v30);
  v31 = *(Caver::GUILabel **)(a1 + 272);
  sub_566BB8((int)&v161, "Choose a spell");
  v32 = (char *)v161;
  v34 = (__int64 *)((char *)v161 - 24);
  v33 = *((_QWORD *)v161 - 3);
  v35 = (_QWORD *)*((_QWORD *)v31 + 32);
  if ( v33 != *(v35 - 3) || memcmp(v161, v35, v33) )
  {
    sub_56A6A8((char *)v31 + 256);
    Caver::GUILabel::UpdateText(v31);
    v32 = (char *)v161;
    v34 = (__int64 *)((char *)v161 - 24);
  }
  if ( v34 != &qword_6FD2E0 )
  {
    v138 = (unsigned int *)(v32 - 8);
    if ( &pthread_create )
    {
      do
        v139 = __ldaxr(v138);
      while ( __stlxr(v139 - 1, v138) );
    }
    else
    {
      v139 = (*v138)--;
    }
    if ( v139 <= 0 )
      operator delete(v34);
  }
  *(_DWORD *)(a1 + 288) = 4;
  v36 = (_QWORD *)operator new[](0x48u);
  *v36 = 4;
  v36[7] = 0;
  v36[8] = 0;
  v36[5] = 0;
  v36[6] = 0;
  v36[3] = 0;
  v36[4] = 0;
  v36[2] = 0;
  v36[1] = 0;
  v37 = *(void **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = v36 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(v37);
  v38 = *(int *)(a1 + 288);
  if ( !is_mul_ok(v38, 0x10u) || 16 * v38 >= 0xFFFFFFFFFFFFFFF8LL )
    v39 = -1;
  else
    v39 = 16 * v38 + 8;
  v40 = (unsigned __int64 *)operator new[](v39);
  *v40 = v38;
  v41 = v40 + 1;
  if ( (_DWORD)v38 )
    memset(v40 + 1, 0, 16 * v38);
  *(_QWORD *)(a1 + 304) = v41;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>();
  v42 = *(int *)(a1 + 288);
  if ( !is_mul_ok(v42, 0x10u) || 16 * v42 >= 0xFFFFFFFFFFFFFFF8LL )
    v43 = -1;
  else
    v43 = 16 * v42 + 8;
  v44 = (unsigned __int64 *)operator new[](v43);
  *v44 = v42;
  v45 = v44 + 1;
  if ( (_DWORD)v42 )
    memset(v44 + 1, 0, 16 * v42);
  v46 = *(void **)(a1 + 312);
  *(_QWORD *)(a1 + 312) = v45;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(v46);
  sub_566BB8((int)&v161, "bolt");
  sub_566BB8((int)&v162, "bomb");
  sub_566BB8((int)&v163, "hookshot");
  sub_566BB8((int)v164, "dimension");
  if ( *(int *)(a1 + 288) >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      v70 = (Caver::MenuItemSlot *)operator new(0x280u);
      Caver::MenuItemSlot::MenuItemSlot(v70);
      boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>();
      v71 = v159;
      *((_QWORD *)v159 + 30) = a1 + 240;
      Caver::MenuItemSlot::Init(v71, 1.0);
      *((_BYTE *)v159 + 288) = 0;
      v72 = (Caver::GUIView *)operator new(0xF0u);
      Caver::GUIView::GUIView(v72);
      boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>();
      v73 = *((float *)v159 + 29);
      v156[1] = *((float *)v159 + 30);
      v74 = *((float *)v159 + 31);
      v75 = *((float *)v159 + 32);
      v156[0] = v73 + -100.0;
      v156[3] = v75;
      v156[2] = (float)(v73 + v74) - (float)(v73 + -100.0);
      (*(void (__fastcall **)(float *, float *))(*(_QWORD *)v157 + 248LL))(v157, v156);
      v76 = *(void (**)(void))(*(_QWORD *)v157 + 96LL);
      v154 = v159;
      v155 = v160;
      if ( v160 )
        ++v160[1];
      v76();
      v77 = v155;
      if ( v155 )
      {
        v78 = v155[1] - 1LL;
        v155[1] = v78;
        if ( !v78 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v77 + 16LL))(v77);
          v79 = v77[2] - 1LL;
          v77[2] = v79;
          if ( !v79 )
            (*(void (__fastcall **)(_QWORD *))(*v77 + 24LL))(v77);
        }
      }
      v81 = v159;
      v80 = (Caver::MenuItemSlot *)v160;
      v82 = (Caver::MenuItemSlot **)(*(_QWORD *)(a1 + 296) + 16 * v47);
      if ( v160 )
        ++v160[1];
      v83 = v82[1];
      *v82 = v81;
      v82[1] = v80;
      if ( v83 )
      {
        v84 = *((_QWORD *)v83 + 1) - 1LL;
        *((_QWORD *)v83 + 1) = v84;
        if ( !v84 )
        {
          (*(void (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v83 + 16LL))(v83);
          v85 = *((_QWORD *)v83 + 2) - 1LL;
          *((_QWORD *)v83 + 2) = v85;
          if ( !v85 )
            (*(void (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v83 + 24LL))(v83);
        }
      }
      v87 = v157;
      v86 = v158;
      v88 = (float **)(*(_QWORD *)(a1 + 312) + 16 * v47);
      if ( v158 )
        ++*((_QWORD *)v158 + 1);
      v89 = v88[1];
      *v88 = v87;
      v88[1] = v86;
      if ( v89 )
      {
        v90 = *((_QWORD *)v89 + 1) - 1LL;
        *((_QWORD *)v89 + 1) = v90;
        if ( !v90 )
        {
          (*(void (__fastcall **)(float *))(*(_QWORD *)v89 + 16LL))(v89);
          v91 = *((_QWORD *)v89 + 2) - 1LL;
          *((_QWORD *)v89 + 2) = v91;
          if ( !v91 )
            (*(void (__fastcall **)(float *))(*(_QWORD *)v89 + 24LL))(v89);
        }
      }
      (*(void (__fastcall **)(__int64, float **))(*(_QWORD *)a1 + 96LL))(a1, &v157);
      if ( (Caver::CharacterState::HasSkillWithName() & 1) != 0 )
        break;
      v48 = 0;
LABEL_144:
      Caver::SkillPickerView::SetSlotSelected((Caver::SkillPickerView *)a1, v47, v48);
      v128 = v158;
      if ( v158 )
      {
        v129 = *((_QWORD *)v158 + 1) - 1LL;
        *((_QWORD *)v158 + 1) = v129;
        if ( !v129 )
        {
          (*(void (__fastcall **)(float *))(*(_QWORD *)v128 + 16LL))(v128);
          v130 = *((_QWORD *)v128 + 2) - 1LL;
          *((_QWORD *)v128 + 2) = v130;
          if ( !v130 )
            (*(void (__fastcall **)(float *))(*(_QWORD *)v128 + 24LL))(v128);
        }
      }
      v131 = v160;
      if ( v160 )
      {
        v132 = v160[1] - 1LL;
        v160[1] = v132;
        if ( !v132 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v131 + 16LL))(v131);
          v133 = v131[2] - 1LL;
          v131[2] = v133;
          if ( !v133 )
            (*(void (__fastcall **)(_QWORD *))(*v131 + 24LL))(v131);
        }
      }
      if ( ++v47 >= *(int *)(a1 + 288) )
        goto LABEL_153;
    }
    Caver::GameData::SkillForName();
    Caver::MenuItemSlot::SetSkill();
    v92 = v159;
    *((_BYTE *)v159 + 288) = 1;
    *((_BYTE *)v92 + 290) = 1;
    v93 = (Caver::GUILabel *)operator new(0x150u);
    Caver::GUILabel::GUILabel(v93);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
    v94 = v152;
    v96 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v95);
    Caver::FontLibrary::SmallDefaultFont(v96);
    v97 = v150;
    if ( v150 != *((void **)v94 + 30) )
    {
      v98 = v151;
      if ( v151 )
        ++*(_QWORD *)(v151 + 8);
      v99 = (_QWORD *)*((_QWORD *)v94 + 31);
      *((_QWORD *)v94 + 30) = v97;
      *((_QWORD *)v94 + 31) = v98;
      if ( v99 )
      {
        v100 = v99[1] - 1LL;
        v99[1] = v100;
        if ( !v100 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v99 + 16LL))(v99);
          v101 = v99[2] - 1LL;
          v99[2] = v101;
          if ( !v101 )
            (*(void (__fastcall **)(_QWORD *))(*v99 + 24LL))(v99);
        }
      }
      Caver::GUILabel::UpdateText(v94);
    }
    v102 = (_QWORD *)v151;
    if ( v151 )
    {
      v103 = *(_QWORD *)(v151 + 8) - 1LL;
      *(_QWORD *)(v151 + 8) = v103;
      if ( !v103 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v102 + 16LL))(v102);
        v104 = v102[2] - 1LL;
        v102[2] = v104;
        if ( !v104 )
          (*(void (__fastcall **)(_QWORD *))(*v102 + 24LL))(v102);
      }
    }
    v105 = v152;
    *((_BYTE *)v152 + 320) = 1;
    *(_DWORD *)((char *)v105 + 321) = -16777216;
    *((_QWORD *)v105 + 41) = 0xBF8000003F800000LL;
    Caver::GUILabel::UpdateText(v105);
    v106 = v152;
    sub_56A528(&v150, (char *)v154 + 8);
    v107 = (char *)v150;
    v109 = (__int64 *)((char *)v150 - 24);
    v108 = *((_QWORD *)v150 - 3);
    v110 = (_QWORD *)*((_QWORD *)v106 + 32);
    if ( v108 != *(v110 - 3) || memcmp(v150, v110, v108) )
    {
      sub_56A6A8((char *)v106 + 256);
      Caver::GUILabel::UpdateText(v106);
      v107 = (char *)v150;
      v109 = (__int64 *)((char *)v150 - 24);
    }
    if ( v109 != &qword_6FD2E0 )
    {
      v62 = (unsigned int *)(v107 - 8);
      if ( &pthread_create )
      {
        do
          v63 = __ldaxr(v62);
        while ( __stlxr(v63 - 1, v62) );
      }
      else
      {
        v63 = (*v62)--;
      }
      if ( v63 <= 0 )
        operator delete(v109);
    }
    v111 = *(void (**)(void))(*(_QWORD *)v157 + 96LL);
    v150 = v152;
    v151 = (__int64)v153;
    if ( v153 )
      ++*((_QWORD *)v153 + 1);
    v111();
    v112 = (_QWORD *)v151;
    if ( v151 )
    {
      v113 = *(_QWORD *)(v151 + 8) - 1LL;
      *(_QWORD *)(v151 + 8) = v113;
      if ( !v113 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v112 + 16LL))(v112);
        v114 = v112[2] - 1LL;
        v112[2] = v114;
        if ( !v114 )
          (*(void (__fastcall **)(_QWORD *))(*v112 + 24LL))(v112);
      }
    }
    v116 = v152;
    v115 = v153;
    v117 = (Caver::GUILabel **)(*(_QWORD *)(a1 + 304) + 16 * v47);
    if ( v153 )
      ++*((_QWORD *)v153 + 1);
    v118 = v117[1];
    *v117 = v116;
    v117[1] = v115;
    if ( v118 )
    {
      v119 = *((_QWORD *)v118 + 1) - 1LL;
      *((_QWORD *)v118 + 1) = v119;
      if ( !v119 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v118 + 16LL))(v118);
        v120 = *((_QWORD *)v118 + 2) - 1LL;
        *((_QWORD *)v118 + 2) = v120;
        if ( !v120 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v118 + 24LL))(v118);
      }
    }
    Caver::GUILabel::TextSize(&v149, v152);
    v121 = v157[36];
    v122 = v157[34];
    v123 = *((float *)v159 + 29);
    v151 = v149;
    *(float *)&v150 = (float)(v123 + -10.0) - *(float *)&v149;
    HIDWORD(v150) = roundf((float)(v122 + (float)(v121 * 0.5)) - (float)(*((float *)&v149 + 1) * 0.5));
    Caver::GUIView::SetFrame(v152, (const Caver::Rectangle *)&v150);
    v125 = *(Caver::MenuItemSlot **)(*a2 + 104LL);
    v124 = *(_QWORD **)(*a2 + 112LL);
    if ( v124 )
    {
      v126 = v154;
      if ( !v124[1] )
      {
        (*(void (__fastcall **)(_QWORD))(*v124 + 16LL))(*(_QWORD *)(*a2 + 112LL));
        v127 = v124[2] - 1LL;
        v124[2] = v127;
        if ( !v127 )
          (*(void (__fastcall **)(_QWORD *))(*v124 + 24LL))(v124);
      }
      if ( v126 != v125 )
        goto LABEL_142;
    }
    else if ( v154 != v125 )
    {
LABEL_142:
      v48 = 0;
LABEL_50:
      sub_56A528(&v150, v154);
      sub_56A528(&v148, *(_QWORD *)(a1 + 256) + 424LL);
      v49 = (char *)v148;
      v50 = *((_QWORD *)v150 - 3);
      v51 = (__int64 *)((char *)v148 - 24);
      if ( v50 == *((_QWORD *)v148 - 3) )
      {
        v52 = memcmp(v150, v148, v50) == 0;
        if ( v51 == &qword_6FD2E0 )
          goto LABEL_54;
      }
      else
      {
        v52 = 0;
        if ( v51 == &qword_6FD2E0 )
          goto LABEL_54;
      }
      v64 = (unsigned int *)(v49 - 8);
      if ( &pthread_create )
      {
        do
          v65 = __ldaxr(v64);
        while ( __stlxr(v65 - 1, v64) );
      }
      else
      {
        v65 = (*v64)--;
      }
      if ( v65 <= 0 )
        operator delete(v51);
LABEL_54:
      v53 = (char *)v150 - 24;
      if ( (char *)v150 - 24 == (char *)&qword_6FD2E0 )
        goto LABEL_55;
      v66 = (unsigned int *)((char *)v150 - 8);
      if ( &pthread_create )
      {
        do
          v67 = __ldaxr(v66);
        while ( __stlxr(v67 - 1, v66) );
      }
      else
      {
        v67 = (*v66)--;
      }
      if ( v67 > 0 )
      {
LABEL_55:
        if ( !v52 )
          goto LABEL_57;
      }
      else
      {
        operator delete(v53);
        if ( !v52 )
        {
LABEL_57:
          v56 = v153;
          if ( v153 )
          {
            v57 = *((_QWORD *)v153 + 1) - 1LL;
            *((_QWORD *)v153 + 1) = v57;
            if ( !v57 )
            {
              (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v56 + 16LL))(v56);
              v58 = *((_QWORD *)v56 + 2) - 1LL;
              *((_QWORD *)v56 + 2) = v58;
              if ( !v58 )
                (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v56 + 24LL))(v56);
            }
          }
          v59 = v155;
          if ( v155 )
          {
            v60 = v155[1] - 1LL;
            v155[1] = v60;
            if ( !v60 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
              v61 = v59[2] - 1LL;
              v59[2] = v61;
              if ( !v61 )
                (*(void (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
            }
          }
          goto LABEL_144;
        }
      }
      *((_BYTE *)v159 + 632) = 1;
      v54 = *(_QWORD *)(a1 + 256);
      sub_566BB8((int)&v150, "");
      sub_56A6A8(v54 + 424);
      v55 = (char *)v150 - 24;
      if ( (char *)v150 - 24 != (char *)&qword_6FD2E0 )
      {
        v68 = (unsigned int *)((char *)v150 - 8);
        if ( &pthread_create )
        {
          do
            v69 = __ldaxr(v68);
          while ( __stlxr(v69 - 1, v68) );
        }
        else
        {
          v69 = (*v68)--;
        }
        if ( v69 <= 0 )
          operator delete(v55);
      }
      goto LABEL_57;
    }
    v48 = 1;
    *(_DWORD *)(a1 + 320) = v47;
    goto LABEL_50;
  }
LABEL_153:
  v134 = (void *)(v164[0] - 24LL);
  if ( (__int64 *)(v164[0] - 24LL) != &qword_6FD2E0 )
  {
    v140 = (unsigned int *)(v164[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v141 = __ldaxr(v140);
      while ( __stlxr(v141 - 1, v140) );
    }
    else
    {
      v141 = (*v140)--;
    }
    if ( v141 <= 0 )
      operator delete(v134);
  }
  v135 = (void *)(v163 - 24);
  if ( (__int64 *)(v163 - 24) != &qword_6FD2E0 )
  {
    v142 = (unsigned int *)(v163 - 8);
    if ( &pthread_create )
    {
      do
        v143 = __ldaxr(v142);
      while ( __stlxr(v143 - 1, v142) );
    }
    else
    {
      v143 = (*v142)--;
    }
    if ( v143 <= 0 )
      operator delete(v135);
  }
  v136 = v162 - 3;
  if ( v162 - 3 != &qword_6FD2E0 )
  {
    v144 = (unsigned int *)(v162 - 1);
    if ( &pthread_create )
    {
      do
        v145 = __ldaxr(v144);
      while ( __stlxr(v145 - 1, v144) );
    }
    else
    {
      v145 = (*v144)--;
    }
    if ( v145 <= 0 )
      operator delete(v136);
  }
  v137 = (char *)v161 - 24;
  if ( (char *)v161 - 24 != (char *)&qword_6FD2E0 )
  {
    v146 = (unsigned int *)((char *)v161 - 8);
    if ( &pthread_create )
    {
      do
        v147 = __ldaxr(v146);
      while ( __stlxr(v147 - 1, v146) );
    }
    else
    {
      v147 = (*v146)--;
    }
    if ( v147 <= 0 )
      operator delete(v137);
  }
}

