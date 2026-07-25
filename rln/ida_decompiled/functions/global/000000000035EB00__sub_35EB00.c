/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035EB00
 * Mangled: sub_35EB00
 * Demangled: sub_35EB00
 *
 * Callers: 0
 *
 * Callees: 28
 *   0x00000000001F35D0  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5700  std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7B70  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000001F7BF0  Caver::GameData::QuestForName(std::string const&)
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x00000000001F84A0  Caver::GameState::StateForQuestWithName(std::string const&)
 *   0x00000000001F9B10  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *   0x00000000001F9D30  boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>(Caver::NotificationView *)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBC60  boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000201050  Caver::NotificationView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&)
 *   0x00000000002017A0  Caver::GameViewController::ScheduleGuideTargetUpdate(void)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000002036E0  Caver::NotificationView::NotificationView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 436
 *   insn=0x000000000035EB14 string=0x000000000035EB18 "X"
 *   insn=0x000000000035EB18 string=0x000000000035EB1C ""
 *   insn=0x000000000035EB20 string=0x000000000035EB24 "/r"
 *   insn=0x000000000035EB24 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000035EB2C string=0x000000000058F176 "gameController"
 *   insn=0x000000000035EB50 string=0x000000000035EB54 "7"
 *   insn=0x000000000035EB64 string=0x000000000035EB68 "u"
 *   insn=0x000000000035EB64 string=0x000000000035EDA4 ")"
 *   insn=0x000000000035EB7C string=0x000000000035EB80 "\t@"
 *   insn=0x000000000035EB88 string=0x000000000035EB8C ""
 *   insn=0x000000000035EB9C string=0x000000000035EBA0 "@"
 *   insn=0x000000000035EBB0 string=0x000000000035EBB4 "c"
 *   insn=0x000000000035EBB8 string=0x000000000035EBBC ""
 *   insn=0x000000000035EBC8 string=0x000000000035EBCC "5f"
 *   insn=0x000000000035EBCC string=0x00000000001F84A0 "0'"
 *   insn=0x000000000035EBDC string=0x000000000035EBE0 "A"
 *   insn=0x000000000035EBE0 string=0x000000000035EBE4 ""
 *   insn=0x000000000035EBE0 string=0x000000000035EDC8 ")"
 *   insn=0x000000000035EC18 string=0x00000000001F9B10 "0'"
 *   insn=0x000000000035EC28 string=0x00000000001F7BF0 "0'"
 *   insn=0x000000000035EC2C string=0x000000000035EC30 "\t"
 *   insn=0x000000000035EC38 string=0x000000000035EC3C ";."
 *   insn=0x000000000035EC4C string=0x000000000035EC50 "!"
 *   insn=0x000000000035EC50 string=0x000000000035EE34 ")"
 *   insn=0x000000000035EC58 string=0x000000000035EC5C "aZ"
 *   insn=0x000000000035EC5C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000035EC70 string=0x000000000035EC74 "/l"
 *   insn=0x000000000035EC74 string=0x00000000001F9D30 "0'"
 *   insn=0x000000000035EC88 string=0x000000000035EC8C "'."
 *   insn=0x000000000035EC90 string=0x000000000058F18F "Quest Added: "
 *   insn=0x000000000035ECC0 string=0x000000000035EE58 ")"
 *   insn=0x000000000035ECCC string=0x000000000035ECD0 "a"
 *   insn=0x000000000035ECD0 string=0x000000000035EE7C ")"
 *   insn=0x000000000035ECD8 string=0x000000000035ECDC "@"
 *   insn=0x000000000035ECD8 string=0x000000000035ECF8 "`n@"
 *   insn=0x000000000035ECDC string=0x000000000035ECE0 ""
 *   insn=0x000000000035ECE0 string=0x000000000035ECE4 ""
 *   insn=0x000000000035ECE8 string=0x000000000035ECEC ""
 *   insn=0x000000000035ECEC string=0x000000000035ECF0 ""
 *   insn=0x000000000035ECF8 string=0x000000000035ECFC "`"
 *   insn=0x000000000035ED00 string=0x000000000035ED04 "3R"
 *   insn=0x000000000035ED04 string=0x00000000001F35D0 "P'"
 *   insn=0x000000000035ED08 string=0x000000000035ED0C "4"
 *   insn=0x000000000035ED10 string=0x000000000035ED14 ""
 *   insn=0x000000000035ED20 string=0x000000000035ED24 "\t@"
 *   insn=0x000000000035ED30 string=0x000000000035ED34 ""
 *   insn=0x000000000035ED40 string=0x000000000035ED44 "@"
 *   insn=0x000000000035ED5C string=0x000000000035ED60 "h"
 *   insn=0x000000000035ED60 string=0x000000000035ED64 ""
 *   insn=0x000000000035ED64 string=0x000000000035ED68 "h"
 *   insn=0x000000000035ED68 string=0x000000000035ED6C "A"
 *   insn=0x000000000035ED6C string=0x000000000035ED70 "h"
 *   insn=0x000000000035ED70 string=0x000000000035ED74 "\t@"
 *   insn=0x000000000035ED7C string=0x000000000035ED80 "h\n@"
 *   insn=0x000000000035ED80 string=0x000000000035ED84 ""
 *   insn=0x000000000035ED84 string=0x000000000035ED88 "h\n"
 *   insn=0x000000000035ED88 string=0x000000000035ED8C "A"
 *   insn=0x000000000035ED8C string=0x000000000035ED90 "h"
 *   insn=0x000000000035ED90 string=0x000000000035ED94 "@"
 *   insn=0x000000000035EDA4 string=0x000000000035EDA8 ")=G"
 *   insn=0x000000000035EDA8 string=0x000000000035EDAC "!"
 *   insn=0x000000000035EDB0 string=0x000000000035EDB4 "\t"
 *   insn=0x000000000035EDB0 string=0x000000000035EDEC "\t"
 *   insn=0x000000000035EDB4 string=0x000000000035EDB8 "*"
 *   insn=0x000000000035EDB8 string=0x000000000035EDBC "\n"
 *   insn=0x000000000035EDC0 string=0x000000000035EDC4 ""
 *   insn=0x000000000035EDC4 string=0x000000000035EDF8 "?"
 *   insn=0x000000000035EDC8 string=0x000000000035EDCC ")=G"
 *   insn=0x000000000035EDCC string=0x000000000035EDD0 "!"
 *   insn=0x000000000035EDD0 string=0x000000000035EDD4 "\t"
 *   insn=0x000000000035EDD4 string=0x000000000035EDD8 "\t"
 *   insn=0x000000000035EDD4 string=0x000000000035EE14 "\t"
 *   insn=0x000000000035EDD8 string=0x000000000035EDDC "*"
 *   insn=0x000000000035EDDC string=0x000000000035EDE0 "\n"
 *   insn=0x000000000035EDE8 string=0x000000000035EE20 "?"
 *   insn=0x000000000035EDEC string=0x000000000035EDF0 "*"
 *   insn=0x000000000035EDF0 string=0x000000000035EDF4 "\n"
 *   insn=0x000000000035EDF8 string=0x000000000035EDFC "l"
 *   insn=0x000000000035EE00 string=0x000000000035EE04 "h-"
 *   insn=0x000000000035EE04 string=0x000000000035EE08 "u"
 *   insn=0x000000000035EE08 string=0x000000000035EE0C "6"
 *   insn=0x000000000035EE0C string=0x000000000035EE10 "f"
 *   insn=0x000000000035EE14 string=0x000000000035EE18 "*"
 *   insn=0x000000000035EE18 string=0x000000000035EE1C "\n"
 *   insn=0x000000000035EE28 string=0x000000000035EE2C "^-"
 *   insn=0x000000000035EE2C string=0x000000000035EE30 "m"
 *   insn=0x000000000035EE34 string=0x000000000035EE38 ")=G"
 *   insn=0x000000000035EE38 string=0x000000000035EE3C "!"
 *   insn=0x000000000035EE3C string=0x000000000035EE40 "\t"
 *   insn=0x000000000035EE40 string=0x000000000035EE44 "\t"
 *   insn=0x000000000035EE40 string=0x000000000035EEA0 "\t"
 *   insn=0x000000000035EE44 string=0x000000000035EE48 "*"
 *   insn=0x000000000035EE48 string=0x000000000035EE4C "\n"
 *   insn=0x000000000035EE54 string=0x000000000035EEAC "?"
 *   insn=0x000000000035EE58 string=0x000000000035EE5C ")=G"
 *   insn=0x000000000035EE5C string=0x000000000035EE60 "!"
 *   insn=0x000000000035EE60 string=0x000000000035EE64 "\t"
 *   insn=0x000000000035EE64 string=0x000000000035EE68 "\t"
 *   insn=0x000000000035EE64 string=0x000000000035EEC4 "\t"
 *   insn=0x000000000035EE68 string=0x000000000035EE6C "*"
 *   insn=0x000000000035EE6C string=0x000000000035EE70 "\n"
 *   insn=0x000000000035EE78 string=0x000000000035EED0 "?"
 *   insn=0x000000000035EE7C string=0x000000000035EE80 ")=G"
 *   insn=0x000000000035EE80 string=0x000000000035EE84 "!"
 *   insn=0x000000000035EE88 string=0x000000000035EE8C "\t"
 *   insn=0x000000000035EE88 string=0x000000000035EEE4 "\t"
 *   insn=0x000000000035EE8C string=0x000000000035EE90 "*"
 *   insn=0x000000000035EE90 string=0x000000000035EE94 "\n"
 *   insn=0x000000000035EE9C string=0x000000000035EEF0 "?"
 *   insn=0x000000000035EEA0 string=0x000000000035EEA4 "*"
 *   insn=0x000000000035EEA4 string=0x000000000035EEA8 "\n"
 *   insn=0x000000000035EEAC string=0x000000000035EEB0 ","
 *   insn=0x000000000035EEB4 string=0x000000000035EEB8 ";-"
 *   insn=0x000000000035EEC4 string=0x000000000035EEC8 "*"
 *   insn=0x000000000035EEC8 string=0x000000000035EECC "\n"
 *   insn=0x000000000035EED8 string=0x000000000035EEDC "2-"
 *   insn=0x000000000035EEDC string=0x000000000035EEE0 "y"
 *   insn=0x000000000035EEE4 string=0x000000000035EEE8 "*"
 *   insn=0x000000000035EEE8 string=0x000000000035EEEC "\n"
 *   insn=0x000000000035EEF8 string=0x000000000035EEFC "*-"
 *   insn=0x000000000035EF04 string=0x000000000035EF08 "|"
 *   insn=0x000000000035EF0C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035EF1C string=0x000000000035EF20 "V"
 *   insn=0x000000000035EF28 string=0x000000000035EF2C "(a"
 *   insn=0x000000000035EF34 string=0x000000000035EF38 "*"
 *   insn=0x000000000035EF38 string=0x000000000035EF3C "J=G"
 *   insn=0x000000000035EF3C string=0x000000000035EF40 ")!"
 *   insn=0x000000000035EF44 string=0x000000000035EF48 "*"
 *   insn=0x000000000035EF44 string=0x000000000035EF5C "*"
 *   insn=0x000000000035EF48 string=0x000000000035EF4C "K"
 *   insn=0x000000000035EF4C string=0x000000000035EF50 "+"
 *   insn=0x000000000035EF58 string=0x000000000035EF68 "_"
 *   insn=0x000000000035EF5C string=0x000000000035EF60 "K"
 *   insn=0x000000000035EF60 string=0x000000000035EF64 "+"
 *   insn=0x000000000035EF74 string=0x000000000035EF78 "-"
 *   insn=0x000000000035EF90 string=0x000000000035EF94 ")"
 *   insn=0x000000000035EF94 string=0x000000000035EF98 ")=G"
 *   insn=0x000000000035EF98 string=0x000000000035EF9C "!"
 *   insn=0x000000000035EFA0 string=0x000000000035EFA4 "\t"
 *   insn=0x000000000035EFA0 string=0x000000000035EFB8 "\t"
 *   insn=0x000000000035EFA4 string=0x000000000035EFA8 "*"
 *   insn=0x000000000035EFA8 string=0x000000000035EFAC "\n"
 *   insn=0x000000000035EFB4 string=0x000000000035EFC4 "?"
 *   insn=0x000000000035EFB8 string=0x000000000035EFBC "*"
 *   insn=0x000000000035EFBC string=0x000000000035EFC0 "\n"
 *   insn=0x000000000035EFD8 string=0x000000000035EFDC ""
 *   insn=0x000000000035EFD8 string=0x000000000035EFEC "@"
 *   insn=0x000000000035EFEC string=0x000000000035EFF0 ""
 *   insn=0x000000000035EFF0 string=0x000000000035EFF4 ""
 *   insn=0x000000000035EFF8 string=0x000000000035EFFC ""
 *   insn=0x000000000035EFFC string=0x000000000035F000 ""
 *   insn=0x000000000035F008 string=0x000000000035F00C "t"
 *   insn=0x000000000035F010 string=0x000000000035F014 ""
 *   insn=0x000000000035F020 string=0x000000000035F024 "\t@"
 *   insn=0x000000000035F030 string=0x000000000035F034 ""
 *   insn=0x000000000035F040 string=0x000000000035F044 "@"
 *   insn=0x000000000035F04C string=0x000000000035F050 "\n"
 *   insn=0x000000000035F05C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000035F080 string=0x000000000035F084 ""
 *   insn=0x000000000035F090 string=0x000000000035F094 "\t@"
 *   insn=0x000000000035F0A0 string=0x000000000035F0A4 ""
 *   insn=0x000000000035F0B0 string=0x000000000035F0B4 "@"
 *   insn=0x000000000035F0D8 string=0x000000000035F0DC ")"
 *   insn=0x000000000035F0DC string=0x000000000035F0E0 ")=G"
 *   insn=0x000000000035F0E0 string=0x000000000035F0E4 "!"
 *   insn=0x000000000035F0E4 string=0x000000000035F0E8 ")"
 *   insn=0x000000000035F0E8 string=0x000000000035F0EC "\t"
 *   insn=0x000000000035F0E8 string=0x000000000035F10C "\t"
 *   insn=0x000000000035F0EC string=0x000000000035F0F0 "*"
 *   insn=0x000000000035F0F0 string=0x000000000035F0F4 "\n"
 *   insn=0x000000000035F0F8 string=0x000000000035F0FC "?"
 *   insn=0x000000000035F10C string=0x000000000035F110 "*"
 *   insn=0x000000000035F110 string=0x000000000035F114 "\n"
 *   insn=0x000000000035F114 string=0x000000000035F118 "?"
 *   insn=0x000000000035F118 string=0x000000000035F11C "M"
 *   insn=0x000000000035F124 string=0x000000000035F128 "*"
 *   insn=0x000000000035F128 string=0x000000000035F12C "J"
 *   insn=0x000000000035F130 string=0x000000000035F134 "(a"
 *   insn=0x000000000035F13C string=0x000000000035F140 "*"
 *   insn=0x000000000035F140 string=0x000000000035F144 "J=G"
 *   insn=0x000000000035F144 string=0x000000000035F148 ")!"
 *   insn=0x000000000035F14C string=0x000000000035F150 "*"
 *   insn=0x000000000035F14C string=0x000000000035F17C "*"
 *   insn=0x000000000035F150 string=0x000000000035F154 "K"
 *   insn=0x000000000035F154 string=0x000000000035F158 "+"
 *   insn=0x000000000035F15C string=0x000000000035F160 "_"
 *   insn=0x000000000035F17C string=0x000000000035F180 "K"
 *   insn=0x000000000035F180 string=0x000000000035F184 "+"
 *   insn=0x000000000035F184 string=0x000000000035F188 "_"
 *   insn=0x000000000035F1AC string=0x000000000035F1B0 "W"
 *   insn=0x000000000035F1D0 string=0x000000000035F1D4 "y"
 *   insn=0x000000000035F1E8 string=0x000000000035F1EC "8"
 *   insn=0x000000000035F1FC string=0x000000000035F200 "u"
 *   insn=0x000000000035F1FC string=0x000000000035F2B8 ")"
 *   insn=0x000000000035F214 string=0x000000000035F218 "\t@"
 *   insn=0x000000000035F220 string=0x000000000035F224 ""
 *   insn=0x000000000035F234 string=0x000000000035F238 "@"
 *   insn=0x000000000035F264 string=0x000000000035F268 "*j"
 *   insn=0x000000000035F26C string=0x000000000035F270 " "
 *   insn=0x000000000035F274 string=0x000000000035F278 "J"
 *   insn=0x000000000035F288 string=0x000000000035F2DC ")"
 *   insn=0x000000000035F2B8 string=0x000000000035F2BC ")=G"
 *   insn=0x000000000035F2BC string=0x000000000035F2C0 "!"
 *   insn=0x000000000035F2C4 string=0x000000000035F2C8 "\t"
 *   insn=0x000000000035F2C4 string=0x000000000035F300 "\t"
 *   insn=0x000000000035F2C8 string=0x000000000035F2CC "*"
 *   insn=0x000000000035F2CC string=0x000000000035F2D0 "\n"
 *   insn=0x000000000035F2D4 string=0x000000000035F2D8 ""
 *   insn=0x000000000035F2D8 string=0x000000000035F30C "?"
 *   insn=0x000000000035F2DC string=0x000000000035F2E0 ")=G"
 *   insn=0x000000000035F2E0 string=0x000000000035F2E4 "!"
 *   insn=0x000000000035F2E4 string=0x000000000035F2E8 "\t"
 *   insn=0x000000000035F2E8 string=0x000000000035F2EC "\t"
 *   insn=0x000000000035F2E8 string=0x000000000035F328 "\t"
 *   insn=0x000000000035F2EC string=0x000000000035F2F0 "*"
 *   insn=0x000000000035F2F0 string=0x000000000035F2F4 "\n"
 *   insn=0x000000000035F2FC string=0x000000000035F334 "?"
 *   insn=0x000000000035F300 string=0x000000000035F304 "*"
 *   insn=0x000000000035F304 string=0x000000000035F308 "\n"
 *   insn=0x000000000035F314 string=0x000000000035F318 "#,"
 *   insn=0x000000000035F318 string=0x000000000035F31C "u"
 *   insn=0x000000000035F31C string=0x000000000035F320 "V"
 *   insn=0x000000000035F328 string=0x000000000035F32C "*"
 *   insn=0x000000000035F32C string=0x000000000035F330 "\n"
 *   insn=0x000000000035F34C string=0x000000000035F350 "*"
 *   insn=0x000000000035F350 string=0x000000000035F354 "J"
 *   insn=0x000000000035F358 string=0x000000000035F35C "(a"
 *   insn=0x000000000035F364 string=0x000000000035F368 "*"
 *   insn=0x000000000035F368 string=0x000000000035F36C "J=G"
 *   insn=0x000000000035F36C string=0x000000000035F370 ")!"
 *   insn=0x000000000035F374 string=0x000000000035F378 "*"
 *   insn=0x000000000035F374 string=0x000000000035F3E8 "*"
 *   insn=0x000000000035F378 string=0x000000000035F37C "K"
 *   insn=0x000000000035F37C string=0x000000000035F380 "+"
 *   insn=0x000000000035F388 string=0x000000000035F3CC "_"
 *   insn=0x000000000035F390 string=0x000000000035F394 "L"
 *   insn=0x000000000035F39C string=0x000000000035F3A0 "(a"
 *   insn=0x000000000035F3A8 string=0x000000000035F3AC "*"
 *   insn=0x000000000035F3AC string=0x000000000035F3B0 "J=G"
 *   insn=0x000000000035F3B0 string=0x000000000035F3B4 ")!"
 *   insn=0x000000000035F3B8 string=0x000000000035F3BC "*"
 *   insn=0x000000000035F3BC string=0x000000000035F3C0 "K"
 *   insn=0x000000000035F3C0 string=0x000000000035F3C4 "+"
 *   insn=0x000000000035F3CC string=0x000000000035F3D0 "l"
 *   insn=0x000000000035F3E0 string=0x000000000035F3E4 "8"
 *   insn=0x000000000035F3E8 string=0x000000000035F3EC "K"
 *   insn=0x000000000035F3EC string=0x000000000035F3F0 "+"
 *   insn=0x000000000035F3F0 string=0x000000000035F3F4 "_"
 *   insn=0x000000000035F3FC string=0x000000000035F400 "1"
 *   insn=0x000000000035F41C string=0x000000000035F420 "W"
 *   insn=0x000000000035F444 string=0x000000000035F448 "`"
 *   insn=0x000000000035F44C string=0x000000000035F450 "L"
 *   insn=0x000000000035F458 string=0x000000000035F45C "6"
 *   insn=0x000000000035F46C string=0x000000000035F6A4 ")"
 *   insn=0x000000000035F484 string=0x000000000035F488 "\t@"
 *   insn=0x000000000035F490 string=0x000000000035F494 ""
 *   insn=0x000000000035F4A4 string=0x000000000035F4A8 "@"
 *   insn=0x000000000035F4B8 string=0x000000000035F4BC "!"
 *   insn=0x000000000035F4C0 string=0x000000000035F4C4 "GX"
 *   insn=0x000000000035F4D0 string=0x000000000035F4D4 "\t}"
 *   insn=0x000000000035F4E0 string=0x00000000001FBC60 "0'"
 *   insn=0x000000000035F4E8 string=0x000000000035F4EC "o,"
 *   insn=0x000000000035F4EC string=0x000000000035F4F0 "h"
 *   insn=0x000000000035F4F8 string=0x000000000035F4FC "5"
 *   insn=0x000000000035F518 string=0x00000000001F7B70 "0'"
 *   insn=0x000000000035F51C string=0x000000000035F520 ""
 *   insn=0x000000000035F528 string=0x000000000035F52C "('A"
 *   insn=0x000000000035F530 string=0x000000000035F534 "`"
 *   insn=0x000000000035F534 string=0x000000000035F560 " #"
 *   insn=0x000000000035F540 string=0x000000000035F544 "(@"
 *   insn=0x000000000035F548 string=0x000000000035F54C "!"
 *   insn=0x000000000035F54C string=0x000000000035F550 "("
 *   insn=0x000000000035F550 string=0x000000000035F554 ""
 *   insn=0x000000000035F56C string=0x00000000001F83A0 "0'"
 *   insn=0x000000000035F580 string=0x000000000035F584 "s"
 *   insn=0x000000000035F580 string=0x000000000035F590 "!"
 *   insn=0x000000000035F584 string=0x000000000035F588 "8"
 *   insn=0x000000000035F594 string=0x000000000035F598 "\t"
 *   insn=0x000000000035F594 string=0x000000000035F5AC "\t"
 *   insn=0x000000000035F598 string=0x000000000035F59C "*"
 *   insn=0x000000000035F59C string=0x000000000035F5A0 "\n"
 *   insn=0x000000000035F5A8 string=0x000000000035F5B8 "?"
 *   insn=0x000000000035F5AC string=0x000000000035F5B0 "*"
 *   insn=0x000000000035F5B0 string=0x000000000035F5B4 "\n"
 *   insn=0x000000000035F5B8 string=0x000000000035F5BC "L"
 *   insn=0x000000000035F5C0 string=0x000000000035F5C4 "x+"
 *   insn=0x000000000035F5C4 string=0x000000000035F5C8 "s"
 *   insn=0x000000000035F5D0 string=0x000000000035F5D4 "?"
 *   insn=0x000000000035F5DC string=0x000000000035F5E0 "("
 *   insn=0x000000000035F5E4 string=0x000000000035F5E8 "("
 *   insn=0x000000000035F5EC string=0x000000000035F5F0 "\t"
 *   insn=0x000000000035F5EC string=0x000000000035F5FC "(@"
 *   insn=0x000000000035F5F0 string=0x000000000035F5F4 ")"
 *   insn=0x000000000035F5F4 string=0x000000000035F5F8 "\t"
 *   insn=0x000000000035F608 string=0x000000000035F624 "h"
 *   insn=0x000000000035F614 string=0x000000000035F618 ":X"
 *   insn=0x000000000035F618 string=0x00000000001F5700 "P'"
 *   insn=0x000000000035F61C string=0x000000000035F620 "3"
 *   insn=0x000000000035F624 string=0x000000000035F628 ""
 *   insn=0x000000000035F628 string=0x000000000035F62C "h"
 *   insn=0x000000000035F630 string=0x000000000035F634 "h"
 *   insn=0x000000000035F634 string=0x000000000035F638 "\t@"
 *   insn=0x000000000035F640 string=0x000000000035F644 "h\n@"
 *   insn=0x000000000035F644 string=0x000000000035F648 ""
 *   insn=0x000000000035F648 string=0x000000000035F64C "h\n"
 *   insn=0x000000000035F650 string=0x000000000035F654 "h"
 *   insn=0x000000000035F654 string=0x000000000035F658 "@"
 *   insn=0x000000000035F670 string=0x000000000035F6F0 "!"
 *   insn=0x000000000035F67C string=0x000000000035F680 "a"
 *   insn=0x000000000035F6A4 string=0x000000000035F6A8 ")=G"
 *   insn=0x000000000035F6A8 string=0x000000000035F6AC "!"
 *   insn=0x000000000035F6B0 string=0x000000000035F6B4 "\t"
 *   insn=0x000000000035F6B0 string=0x000000000035F6C8 "\t"
 *   insn=0x000000000035F6B4 string=0x000000000035F6B8 "*"
 *   insn=0x000000000035F6B8 string=0x000000000035F6BC "\n"
 *   insn=0x000000000035F6C4 string=0x000000000035F6D4 "?"
 *   insn=0x000000000035F6C8 string=0x000000000035F6CC "*"
 *   insn=0x000000000035F6CC string=0x000000000035F6D0 "\n"
 *   insn=0x000000000035F6DC string=0x000000000035F6E0 "1+"
 *   insn=0x000000000035F6E8 string=0x000000000035F6EC "q"
 *   insn=0x000000000035F6F4 string=0x000000000035F6F8 "\t"
 *   insn=0x000000000035F6F4 string=0x000000000035F70C "\t"
 *   insn=0x000000000035F6F8 string=0x000000000035F6FC "*"
 *   insn=0x000000000035F6FC string=0x000000000035F700 "\n"
 *   insn=0x000000000035F708 string=0x000000000035F718 "?"
 *   insn=0x000000000035F70C string=0x000000000035F710 "*"
 *   insn=0x000000000035F710 string=0x000000000035F714 "\n"
 *   insn=0x000000000035F720 string=0x000000000035F724 " +"
 *   insn=0x000000000035F738 string=0x000000000035F73C "*"
 *   insn=0x000000000035F73C string=0x000000000035F740 "J"
 *   insn=0x000000000035F744 string=0x000000000035F748 "(a"
 *   insn=0x000000000035F74C string=0x000000000035F750 " \n"
 *   insn=0x000000000035F750 string=0x000000000035F754 "*"
 *   insn=0x000000000035F754 string=0x000000000035F758 "J=G"
 *   insn=0x000000000035F758 string=0x000000000035F75C ")!"
 *   insn=0x000000000035F75C string=0x000000000035F760 "J"
 *   insn=0x000000000035F760 string=0x000000000035F764 "*"
 *   insn=0x000000000035F760 string=0x000000000035F788 "*"
 *   insn=0x000000000035F764 string=0x000000000035F768 "K"
 *   insn=0x000000000035F768 string=0x000000000035F76C "+"
 *   insn=0x000000000035F770 string=0x000000000035F774 "_"
 *   insn=0x000000000035F780 string=0x000000000035F784 "C"
 *   insn=0x000000000035F788 string=0x000000000035F78C "K"
 *   insn=0x000000000035F78C string=0x000000000035F790 "+"
 *   insn=0x000000000035F790 string=0x000000000035F794 "_"
 *   insn=0x000000000035F794 string=0x000000000035F798 "-"
 *   insn=0x000000000035F798 string=0x000000000035F79C ">"
 *   insn=0x000000000035F7A4 string=0x000000000035F7A8 "+"
 *   insn=0x000000000035F7B0 string=0x000000000035F7B4 "(a"
 *   insn=0x000000000035F7BC string=0x000000000035F7C0 ")!"
 *   insn=0x000000000035F7C4 string=0x000000000035F7C8 "*"
 *   insn=0x000000000035F7C4 string=0x000000000035F7DC "*"
 *   insn=0x000000000035F7C8 string=0x000000000035F7CC "K"
 *   insn=0x000000000035F7CC string=0x000000000035F7D0 "+"
 *   insn=0x000000000035F7D8 string=0x000000000035F7E8 "_"
 *   insn=0x000000000035F7DC string=0x000000000035F7E0 "K"
 *   insn=0x000000000035F7E0 string=0x000000000035F7E4 "+"
 *   insn=0x000000000035F80C string=0x000000000035F810 "4"
 *   insn=0x000000000035F814 string=0x000000000035F818 ""
 *   insn=0x000000000035F824 string=0x000000000035F828 "\t@"
 *   insn=0x000000000035F834 string=0x000000000035F838 ""
 *   insn=0x000000000035F844 string=0x000000000035F848 "@"
 *   insn=0x000000000035F860 string=0x000000000035F864 ")"
 *   insn=0x000000000035F864 string=0x000000000035F868 ")=G"
 *   insn=0x000000000035F868 string=0x000000000035F86C "!"
 *   insn=0x000000000035F86C string=0x000000000035F870 "i"
 *   insn=0x000000000035F870 string=0x000000000035F874 "\t"
 *   insn=0x000000000035F870 string=0x000000000035F89C "\t"
 *   insn=0x000000000035F874 string=0x000000000035F878 "*"
 *   insn=0x000000000035F878 string=0x000000000035F87C "\n"
 *   insn=0x000000000035F880 string=0x000000000035F884 "?"
 *   insn=0x000000000035F884 string=0x000000000035F888 "l"
 *   insn=0x000000000035F894 string=0x000000000035F898 ""
 *   insn=0x000000000035F89C string=0x000000000035F8A0 "*"
 *   insn=0x000000000035F8A0 string=0x000000000035F8A4 "\n"
 *   insn=0x000000000035F8A4 string=0x000000000035F8A8 "?"
 *   insn=0x000000000035F8A8 string=0x000000000035F8AC ""
 *   insn=0x000000000035F8CC string=0x000000000035F8D0 "V"
 *   insn=0x000000000035F8F4 string=0x000000000035F8F8 "`"
 *   insn=0x000000000035F8FC string=0x000000000035F900 " "
 *   insn=0x000000000035F908 string=0x000000000035F90C "7"
 *   insn=0x000000000035F918 string=0x000000000035F91C "A"
 *   insn=0x000000000035F91C string=0x000000000035F9C4 ")"
 *   insn=0x000000000035F934 string=0x000000000035F938 "\t@"
 *   insn=0x000000000035F940 string=0x000000000035F944 ""
 *   insn=0x000000000035F954 string=0x000000000035F958 "@"
 *   insn=0x000000000035F978 string=0x00000000001F7180 "0'"
 *   insn=0x000000000035F980 string=0x000000000035F984 "3~"
 *   insn=0x000000000035F994 string=0x000000000035F9E8 ")"
 *   insn=0x000000000035F9C4 string=0x000000000035F9C8 ")=G"
 *   insn=0x000000000035F9C8 string=0x000000000035F9CC "!"
 *   insn=0x000000000035F9D0 string=0x000000000035F9D4 "\t"
 *   insn=0x000000000035F9D0 string=0x000000000035FA0C "\t"
 *   insn=0x000000000035F9D4 string=0x000000000035F9D8 "*"
 *   insn=0x000000000035F9D8 string=0x000000000035F9DC "\n"
 *   insn=0x000000000035F9E0 string=0x000000000035F9E4 ""
 *   insn=0x000000000035F9E4 string=0x000000000035FA18 "?"
 *   insn=0x000000000035F9E8 string=0x000000000035F9EC ")=G"
 *   insn=0x000000000035F9EC string=0x000000000035F9F0 "!"
 *   insn=0x000000000035F9F0 string=0x000000000035F9F4 "\t"
 *   insn=0x000000000035F9F4 string=0x000000000035F9F8 "\t"
 *   insn=0x000000000035F9F4 string=0x000000000035FA34 "\t"
 *   insn=0x000000000035F9F8 string=0x000000000035F9FC "*"
 *   insn=0x000000000035F9FC string=0x000000000035FA00 "\n"
 *   insn=0x000000000035FA08 string=0x000000000035FA40 "?"
 *   insn=0x000000000035FA0C string=0x000000000035FA10 "*"
 *   insn=0x000000000035FA10 string=0x000000000035FA14 "\n"
 *   insn=0x000000000035FA18 string=0x000000000035FA1C ","
 *   insn=0x000000000035FA20 string=0x000000000035FA24 "`*"
 *   insn=0x000000000035FA34 string=0x000000000035FA38 "*"
 *   insn=0x000000000035FA38 string=0x000000000035FA3C "\n"
 *   insn=0x000000000035FA48 string=0x000000000035FA4C "V*"
 *   insn=0x000000000035FA58 string=0x000000000035FA5C "*"
 *   insn=0x000000000035FA5C string=0x000000000035FA60 "J"
 *   insn=0x000000000035FA64 string=0x000000000035FA68 "(a"
 *   insn=0x000000000035FA70 string=0x000000000035FA74 "*"
 *   insn=0x000000000035FA74 string=0x000000000035FA78 "J=G"
 *   insn=0x000000000035FA78 string=0x000000000035FA7C ")!"
 *   insn=0x000000000035FA7C string=0x000000000035FA80 "j"
 *   insn=0x000000000035FA80 string=0x000000000035FA84 "*"
 *   insn=0x000000000035FA80 string=0x000000000035FAEC "*"
 *   insn=0x000000000035FA84 string=0x000000000035FA88 "K"
 *   insn=0x000000000035FA88 string=0x000000000035FA8C "+"
 *   insn=0x000000000035FA94 string=0x000000000035FAD0 "_"
 *   insn=0x000000000035FAA0 string=0x000000000035FAA4 "(a"
 *   insn=0x000000000035FAAC string=0x000000000035FAB0 "*"
 *   insn=0x000000000035FAB0 string=0x000000000035FAB4 "J=G"
 *   insn=0x000000000035FAB4 string=0x000000000035FAB8 ")!"
 *   insn=0x000000000035FABC string=0x000000000035FAC0 "*"
 *   insn=0x000000000035FAC0 string=0x000000000035FAC4 "K"
 *   insn=0x000000000035FAC4 string=0x000000000035FAC8 "+"
 *   insn=0x000000000035FADC string=0x000000000035FAE0 "1*"
 *   insn=0x000000000035FAE4 string=0x000000000035FAE8 "w"
 *   insn=0x000000000035FAEC string=0x000000000035FAF0 "K"
 *   insn=0x000000000035FAF0 string=0x000000000035FAF4 "+"
 *   insn=0x000000000035FAF4 string=0x000000000035FAF8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_35EB00(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::GameViewController *v2; // x19
  void *v3; // x0
  _QWORD *v4; // x22
  __int64 v5; // x8
  void *v6; // x0
  void *v8; // x0
  __int64 v9; // x20
  Caver::NotificationView *v10; // x0
  void *v11; // x0
  void *v12; // x0
  _DWORD *v13; // x0
  int v14; // w8
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x8
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  __int64 v31; // [xsp+150h] [xbp-88h] BYREF
  __int64 v32; // [xsp+158h] [xbp-80h] BYREF
  _DWORD *v33; // [xsp+160h] [xbp-78h]
  _QWORD *v34; // [xsp+170h] [xbp-68h]
  __int64 v35; // [xsp+178h] [xbp-60h] BYREF
  __int64 v36; // [xsp+180h] [xbp-58h] BYREF
  _QWORD *v37; // [xsp+188h] [xbp-50h]
  __int64 v38[3]; // [xsp+190h] [xbp-48h] BYREF

  v38[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)&v36, "gameController");
  v2 = (Caver::GameViewController *)Caver::ProgramTable::PointerForKey();
  v3 = (void *)(v36 - 24);
  if ( (__int64 *)(v36 - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v21 = (unsigned int *)(v36 - 8);
  if ( &pthread_create )
  {
    do
      v22 = __ldaxr(v21);
    while ( __stlxr(v22 - 1, v21) );
  }
  else
  {
    v22 = (*v21)--;
  }
  if ( v22 > 0 )
  {
LABEL_2:
    v4 = (_QWORD *)*((_QWORD *)v2 + 22);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    operator delete(v3);
    v4 = (_QWORD *)*((_QWORD *)v2 + 22);
    if ( !v4 )
      goto LABEL_6;
  }
  if ( !v4[1] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    v5 = v4[2] - 1LL;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  }
LABEL_6:
  Caver::ProgramState::StringAtStackIndex(v38, v1, 1);
  if ( !*(_QWORD *)(v38[0] - 24) || Caver::GameState::StateForQuestWithName() )
    goto LABEL_8;
  Caver::GameState::AddStateForQuestWithName();
  Caver::GameData::QuestForName();
  if ( v36 )
  {
    sub_56A528(&v35, v36 + 16);
    v8 = (void *)(v35 - 24);
    v9 = *(_QWORD *)(v35 - 24);
    if ( (__int64 *)(v35 - 24) != &qword_6FD2E0 )
    {
      v25 = (unsigned int *)(v35 - 8);
      if ( &pthread_create )
      {
        do
          v26 = __ldaxr(v25);
        while ( __stlxr(v26 - 1, v25) );
      }
      else
      {
        v26 = (*v25)--;
      }
      if ( v26 <= 0 )
      {
        operator delete(v8);
        if ( !v9 )
          goto LABEL_24;
LABEL_13:
        v10 = (Caver::NotificationView *)operator new(0x1A8u);
        Caver::NotificationView::NotificationView(v10);
        boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>();
        v33 = 0;
        sub_56A528(&v31, v36 + 16);
        ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64 *))loc_25A030)(&v32, "Quest Added: ", &v31);
        Caver::NotificationView::Init();
        v11 = (void *)(v32 - 24);
        if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
        {
          v27 = (unsigned int *)(v32 - 8);
          if ( &pthread_create )
          {
            do
              v28 = __ldaxr(v27);
            while ( __stlxr(v28 - 1, v27) );
          }
          else
          {
            v28 = (*v27)--;
          }
          if ( v28 <= 0 )
            operator delete(v11);
        }
        v12 = (void *)(v31 - 24);
        if ( (__int64 *)(v31 - 24) == &qword_6FD2E0 )
          goto LABEL_15;
        v29 = (unsigned int *)(v31 - 8);
        if ( &pthread_create )
        {
          do
            v30 = __ldaxr(v29);
          while ( __stlxr(v30 - 1, v29) );
        }
        else
        {
          v30 = (*v29)--;
        }
        if ( v30 > 0 )
        {
LABEL_15:
          v13 = v33;
          if ( !v33 )
          {
LABEL_18:
            if ( *((_QWORD *)v2 + 27) )
              Caver::GameSceneView::ShowNotification();
            v15 = v34;
            if ( v34 )
            {
              v16 = v34[1] - 1LL;
              v34[1] = v16;
              if ( !v16 )
              {
                (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
                v17 = v15[2] - 1LL;
                v15[2] = v17;
                if ( !v17 )
                  (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
              }
            }
            goto LABEL_24;
          }
        }
        else
        {
          operator delete(v12);
          v13 = v33;
          if ( !v33 )
            goto LABEL_18;
        }
        v14 = v13[2] - 1;
        v13[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
        goto LABEL_18;
      }
    }
    if ( v9 )
      goto LABEL_13;
  }
LABEL_24:
  Caver::GameViewController::ScheduleGuideTargetUpdate(v2);
  v18 = v37;
  if ( v37 )
  {
    v19 = v37[1] - 1LL;
    v37[1] = v19;
    if ( !v19 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v20 = v18[2] - 1LL;
      v18[2] = v20;
      if ( !v20 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
LABEL_8:
  v6 = (void *)(v38[0] - 24);
  if ( (__int64 *)(v38[0] - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v38[0] - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v6);
  }
  return 0;
}

