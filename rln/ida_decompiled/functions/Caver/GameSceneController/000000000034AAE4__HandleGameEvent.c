/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034AAE4
 * Mangled: _ZN5Caver19GameSceneController15HandleGameEventERKNS_9GameEventE
 * Demangled: Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callers: 1
 *   0x0000000000201F10  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 39
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F4C70  Caver::TargetFrame::Show(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6EB0  Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F84F0  Caver::TargetFrame::SetCharacterLevel(int)
 *   0x00000000001F90B0  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x00000000001F9C40  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *   0x00000000001FA210  Caver::HeroEquipmentManager::ApplyWeaponTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FB110  Caver::CharacterState::ExperiencePointsRequiredForLevel(int)
 *   0x00000000001FC050  Caver::GameSceneController::EquipItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FCCD0  Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *   0x00000000001FE030  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FF4D0  Caver::ExperienceBar::UpdateExperience(void)
 *   0x00000000001FFB20  Caver::GameInterfaceBuilder::TextGradient(float,float,float,float)
 *   0x00000000001FFC00  Caver::TargetFrame::SetHealth(float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200CF0  Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x00000000002025B0  Caver::OverlayTextComponent::OverlayTextComponent(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 490
 *   insn=0x000000000034AAFC string=0x000000000034AB00 "X"
 *   insn=0x000000000034AB00 string=0x000000000034AB04 ""
 *   insn=0x000000000034AB18 string=0x000000000034AB1C ""
 *   insn=0x000000000034AB24 string=0x000000000034AB28 ")"
 *   insn=0x000000000034AB24 string=0x000000000034B0BC ""
 *   insn=0x000000000034AB28 string=0x000000000034AB30 "(y"
 *   insn=0x000000000034AB30 string=0x000000000034AB34 ""
 *   insn=0x000000000034AB38 string=0x000000000034AC88 "h"
 *   insn=0x000000000034AB38 string=0x000000000034ACE8 "h"
 *   insn=0x000000000034AB38 string=0x000000000034AD14 "h"
 *   insn=0x000000000034AB4C string=0x000000000034AB50 "\t"
 *   insn=0x000000000034AB50 string=0x000000000034AB54 ")"
 *   insn=0x000000000034AB54 string=0x000000000034AB58 "\t"
 *   insn=0x000000000034AB60 string=0x000000000034AB64 ";"
 *   insn=0x000000000034AB64 string=0x000000000034AB68 "u"
 *   insn=0x000000000034AB64 string=0x00000000001FC050 "0'"
 *   insn=0x000000000034AB70 string=0x000000000034AD88 "h"
 *   insn=0x000000000034AB74 string=0x000000000034AB78 "v"
 *   insn=0x000000000034AB78 string=0x000000000034AB7C "y"
 *   insn=0x000000000034AB88 string=0x000000000034AB8C ""
 *   insn=0x000000000034AB98 string=0x000000000034B2F0 "h"
 *   insn=0x000000000034ABA0 string=0x000000000034ABB0 " "
 *   insn=0x000000000034ABA4 string=0x000000000034ABA8 "\t"
 *   insn=0x000000000034ABB0 string=0x000000000034ABB4 "5"
 *   insn=0x000000000034ABB8 string=0x000000000034ABBC "@"
 *   insn=0x000000000034ABB8 string=0x000000000034ABD8 "5"
 *   insn=0x000000000034ABBC string=0x000000000034ABC0 ""
 *   insn=0x000000000034ABC0 string=0x000000000034ABC4 ""
 *   insn=0x000000000034ABC8 string=0x000000000034ABCC ""
 *   insn=0x000000000034ABCC string=0x000000000034ABD0 ""
 *   insn=0x000000000034ABDC string=0x000000000034ABE0 ""
 *   insn=0x000000000034ABF0 string=0x000000000034ABF4 ""
 *   insn=0x000000000034ABFC string=0x000000000034AC00 " "
 *   insn=0x000000000034AC00 string=0x000000000034AC04 "!"
 *   insn=0x000000000034AC04 string=0x000000000034AC08 "v"
 *   insn=0x000000000034AC0C string=0x000000000034AC10 "!"
 *   insn=0x000000000034AC10 string=0x000000000058EAC2 "Unknown"
 *   insn=0x000000000034AC20 string=0x000000000034AC24 "5&"
 *   insn=0x000000000034AC28 string=0x000000000034AC2C "6&"
 *   insn=0x000000000034AC38 string=0x000000000034AC3C "\t@"
 *   insn=0x000000000034AC48 string=0x000000000034AC4C ""
 *   insn=0x000000000034AC58 string=0x000000000034AC5C "@"
 *   insn=0x000000000034AC6C string=0x000000000034AC70 "V$"
 *   insn=0x000000000034AC78 string=0x000000000034AC7C ""
 *   insn=0x000000000034AC84 string=0x000000000034B0FC "A#"
 *   insn=0x000000000034AC88 string=0x000000000034AC8C "`"
 *   insn=0x000000000034AC8C string=0x000000000034AC90 "\t"
 *   insn=0x000000000034AC98 string=0x000000000034AC9C "\t"
 *   insn=0x000000000034AC9C string=0x000000000034ACA0 ")"
 *   insn=0x000000000034ACA0 string=0x000000000034ACA4 "\t"
 *   insn=0x000000000034ACAC string=0x000000000034ACB0 "#"
 *   insn=0x000000000034ACAC string=0x00000000001F6EB0 "0'"
 *   insn=0x000000000034ACB4 string=0x0000000000588455 "amount"
 *   insn=0x000000000034ACD0 string=0x00000000001F9C40 "0'"
 *   insn=0x000000000034ACD8 string=0x000000000034ACDC " "
 *   insn=0x000000000034ACE0 string=0x000000000034ACE4 "0"
 *   insn=0x000000000034ACE8 string=0x000000000034ACEC "\t"
 *   insn=0x000000000034ACF4 string=0x000000000034ACF8 "\t"
 *   insn=0x000000000034ACF4 string=0x000000000034AD04 "`"
 *   insn=0x000000000034ACF8 string=0x000000000034ACFC ")"
 *   insn=0x000000000034ACFC string=0x000000000034AD00 "\t"
 *   insn=0x000000000034AD08 string=0x000000000034AD0C "A"
 *   insn=0x000000000034AD0C string=0x000000000034AD10 ""
 *   insn=0x000000000034AD0C string=0x00000000001FA210 "0'"
 *   insn=0x000000000034AD14 string=0x000000000034AD18 "\t"
 *   insn=0x000000000034AD20 string=0x000000000034AD24 "\t"
 *   insn=0x000000000034AD20 string=0x000000000034AD30 "`"
 *   insn=0x000000000034AD24 string=0x000000000034AD28 ")"
 *   insn=0x000000000034AD28 string=0x000000000034AD2C "\t"
 *   insn=0x000000000034AD40 string=0x000000000034AD44 "h"
 *   insn=0x000000000034AD44 string=0x000000000034AD48 ""
 *   insn=0x000000000034AD48 string=0x000000000034AD4C "h"
 *   insn=0x000000000034AD4C string=0x000000000034AD50 "A"
 *   insn=0x000000000034AD50 string=0x000000000034AD54 "h"
 *   insn=0x000000000034AD58 string=0x000000000034AD5C "\t@"
 *   insn=0x000000000034AD60 string=0x000000000034AD64 "h\n@"
 *   insn=0x000000000034AD64 string=0x000000000034AD68 ""
 *   insn=0x000000000034AD68 string=0x000000000034AD6C "h\n"
 *   insn=0x000000000034AD6C string=0x000000000034AD70 "A"
 *   insn=0x000000000034AD70 string=0x000000000034AD74 "h"
 *   insn=0x000000000034AD78 string=0x000000000034AD7C "@"
 *   insn=0x000000000034AD88 string=0x000000000034AD8C "(+"
 *   insn=0x000000000034AD8C string=0x000000000034AD90 "y"
 *   insn=0x000000000034AD94 string=0x000000000034AD98 "u"
 *   insn=0x000000000034ADBC string=0x000000000034ADC0 ""
 *   insn=0x000000000034ADC0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034ADC4 string=0x000000000034ADC8 "Z"
 *   insn=0x000000000034ADC8 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000034ADE4 string=0x000000000034ADE8 "("
 *   insn=0x000000000034ADE4 string=0x00000000001F45A0 "P'"
 *   insn=0x000000000034ADE8 string=0x000000000034ADEC ")"
 *   insn=0x000000000034ADF0 string=0x000000000034ADF4 """
 *   insn=0x000000000034ADFC string=0x000000000034AE00 "#"
 *   insn=0x000000000034AE00 string=0x000000000034AE04 "G"
 *   insn=0x000000000034AE0C string=0x000000000034AE10 "\n"
 *   insn=0x000000000034AE10 string=0x000000000034AE14 "J"
 *   insn=0x000000000034AE14 string=0x000000000034AE18 "\n"
 *   insn=0x000000000034AE20 string=0x000000000034AE24 "4"
 *   insn=0x000000000034AE28 string=0x000000000034AE2C ""
 *   insn=0x000000000034AE38 string=0x000000000034AE3C "\t@"
 *   insn=0x000000000034AE48 string=0x000000000034AE4C ""
 *   insn=0x000000000034AE58 string=0x000000000034AE5C "@"
 *   insn=0x000000000034AE68 string=0x000000000034AE6C "4"
 *   insn=0x000000000034AE70 string=0x000000000034AE74 ""
 *   insn=0x000000000034AE84 string=0x000000000034AE88 "\t@"
 *   insn=0x000000000034AE90 string=0x000000000034AE94 ""
 *   insn=0x000000000034AEA4 string=0x000000000034AEA8 "@"
 *   insn=0x000000000034AEC8 string=0x000000000034AECC ")"
 *   insn=0x000000000034AED4 string=0x000000000034AEE4 """
 *   insn=0x000000000034AED8 string=0x000000000034AEDC "\t"
 *   insn=0x000000000034AEF8 string=0x000000000034AEFC "@"
 *   insn=0x000000000034AEFC string=0x000000000059239D "+"
 *   insn=0x000000000034AF08 string=0x000000000034AF0C "I<"
 *   insn=0x000000000034AF18 string=0x000000000034AF1C "!"
 *   insn=0x000000000034AF1C string=0x000000000058EAAF " xp"
 *   insn=0x000000000034AF28 string=0x000000000034AF2C "*r"
 *   insn=0x000000000034AF2C string=0x000000000034AF30 "("
 *   insn=0x000000000034AF34 string=0x000000000034AF38 "tb"
 *   insn=0x000000000034AF40 string=0x000000000034AF44 "("
 *   insn=0x000000000034AF44 string=0x000000000058EA20 "33"
 *   insn=0x000000000034AF58 string=0x000000000034AF5C "U"
 *   insn=0x000000000034AF5C string=0x00000000001F90B0 "0'"
 *   insn=0x000000000034AF68 string=0x000000000034AF6C "A"
 *   insn=0x000000000034AF8C string=0x000000000034AF90 "h"
 *   insn=0x000000000034AF90 string=0x000000000034AF94 "\t"
 *   insn=0x000000000034AF94 string=0x000000000034AF98 "?"
 *   insn=0x000000000034AF9C string=0x000000000034AFA0 "\t"
 *   insn=0x000000000034AFA0 string=0x000000000034AFA4 ")"
 *   insn=0x000000000034AFA4 string=0x000000000034AFA8 "\t"
 *   insn=0x000000000034AFA8 string=0x000000000034AFAC "h"
 *   insn=0x000000000034AFB0 string=0x000000000034AFB4 "G"
 *   insn=0x000000000034AFB4 string=0x000000000034AFB8 "h"
 *   insn=0x000000000034AFB8 string=0x000000000034AFBC "\t"
 *   insn=0x000000000034AFBC string=0x000000000034AFC0 "?"
 *   insn=0x000000000034AFCC string=0x000000000034AFD0 "!"
 *   insn=0x000000000034AFD0 string=0x000000000034AFD4 "O"
 *   insn=0x000000000034AFD4 string=0x00000000001FB110 "0'"
 *   insn=0x000000000034AFDC string=0x000000000034AFE0 "hf"
 *   insn=0x000000000034AFE8 string=0x000000000034AFEC "h~"
 *   insn=0x000000000034AFEC string=0x000000000034AFF0 "|"
 *   insn=0x000000000034B000 string=0x000000000034B004 ""
 *   insn=0x000000000034B008 string=0x000000000034B00C "h"
 *   insn=0x000000000034B014 string=0x000000000058EAB3 "hiro_xp_whoosh"
 *   insn=0x000000000034B040 string=0x000000000034B044 "w"
 *   insn=0x000000000034B044 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000034B04C string=0x000000000034B050 "@"
 *   insn=0x000000000034B050 string=0x000000000034B054 ""
 *   insn=0x000000000034B054 string=0x000000000034B058 ""
 *   insn=0x000000000034B05C string=0x000000000034B060 ""
 *   insn=0x000000000034B060 string=0x000000000034B064 ""
 *   insn=0x000000000034B080 string=0x000000000034B084 "!0E"
 *   insn=0x000000000034B084 string=0x000000000034B088 "V"
 *   insn=0x000000000034B084 string=0x0000000000241E78 " %"
 *   insn=0x000000000034B098 string=0x000000000034B09C "="
 *   insn=0x000000000034B09C string=0x00000000001F6190 "0'"
 *   insn=0x000000000034B0A4 string=0x000000000034B0A8 "@"
 *   insn=0x000000000034B0A8 string=0x000000000034B0AC ""
 *   insn=0x000000000034B0AC string=0x000000000034B0B0 ""
 *   insn=0x000000000034B0B4 string=0x000000000034B304 ""
 *   insn=0x000000000034B0C8 string=0x000000000034B578 "V"
 *   insn=0x000000000034B0E8 string=0x000000000034B0EC "G"
 *   insn=0x000000000034B100 string=0x000000000034B104 "\t}"
 *   insn=0x000000000034B10C string=0x000000000034B110 "f}"
 *   insn=0x000000000034B118 string=0x000000000034B11C ")"
 *   insn=0x000000000034B128 string=0x000000000034B12C "7"
 *   insn=0x000000000034B130 string=0x000000000034B134 ""
 *   insn=0x000000000034B140 string=0x000000000034B144 "\t@"
 *   insn=0x000000000034B150 string=0x000000000034B154 ""
 *   insn=0x000000000034B160 string=0x000000000034B164 "@"
 *   insn=0x000000000034B170 string=0x000000000034B174 "7"
 *   insn=0x000000000034B174 string=0x000000000034B178 "A@9"
 *   insn=0x000000000034B174 string=0x000000000034B1F8 "A@9"
 *   insn=0x000000000034B18C string=0x000000000034B190 "\t@"
 *   insn=0x000000000034B19C string=0x000000000034B1A0 ""
 *   insn=0x000000000034B1AC string=0x000000000034B1B0 "@"
 *   insn=0x000000000034B1D0 string=0x000000000034B1D4 "5}"
 *   insn=0x000000000034B1DC string=0x000000000034B1E0 ")"
 *   insn=0x000000000034B208 string=0x000000000034B20C ""
 *   insn=0x000000000034B20C string=0x000000000034B210 "H"
 *   insn=0x000000000034B210 string=0x000000000034B214 "h"
 *   insn=0x000000000034B214 string=0x000000000034B218 "i"
 *   insn=0x000000000034B21C string=0x000000000034B220 "!"
 *   insn=0x000000000034B224 string=0x000000000034B228 "h"
 *   insn=0x000000000034B224 string=0x00000000001F84F0 "0'"
 *   insn=0x000000000034B23C string=0x000000000034B240 " "
 *   insn=0x000000000034B23C string=0x00000000001FCCD0 "0'"
 *   insn=0x000000000034B244 string=0x000000000034B248 "!(B"
 *   insn=0x000000000034B248 string=0x000000000021C13C "@&"
 *   insn=0x000000000034B250 string=0x000000000034B254 "h"
 *   insn=0x000000000034B260 string=0x0000000000588313 "health"
 *   insn=0x000000000034B26C string=0x000000000034B270 "Rn"
 *   insn=0x000000000034B278 string=0x000000000034B27C "q"
 *   insn=0x000000000034B288 string=0x000000000034B28C "(@"
 *   insn=0x000000000034B298 string=0x000000000034B29C "Y"
 *   insn=0x000000000034B2B0 string=0x000000000034B2B4 " "
 *   insn=0x000000000034B2B8 string=0x000000000034B2BC "Q"
 *   insn=0x000000000034B2C4 string=0x000000000034B2C8 ")"
 *   insn=0x000000000034B2DC string=0x000000000034B2E0 ")"
 *   insn=0x000000000034B2F4 string=0x000000000034B2F8 "^"
 *   insn=0x000000000034B2F8 string=0x00000000001F4C70 "P'"
 *   insn=0x000000000034B2FC string=0x000000000034B300 "o"
 *   insn=0x000000000034B304 string=0x000000000034B308 ""
 *   insn=0x000000000034B310 string=0x000000000034B314 ")=G"
 *   insn=0x000000000034B314 string=0x000000000034B318 "!"
 *   insn=0x000000000034B318 string=0x000000000034B31C "I"
 *   insn=0x000000000034B31C string=0x000000000034B320 "\t"
 *   insn=0x000000000034B31C string=0x000000000034B3C4 "\t"
 *   insn=0x000000000034B320 string=0x000000000034B324 "*"
 *   insn=0x000000000034B324 string=0x000000000034B328 "\n"
 *   insn=0x000000000034B32C string=0x000000000034B330 "("
 *   insn=0x000000000034B330 string=0x000000000034B3D0 "?"
 *   insn=0x000000000034B334 string=0x000000000034B338 ")=G"
 *   insn=0x000000000034B338 string=0x000000000034B33C "!"
 *   insn=0x000000000034B33C string=0x000000000034B340 ")"
 *   insn=0x000000000034B340 string=0x000000000034B344 "\t"
 *   insn=0x000000000034B340 string=0x000000000034B3E4 "\t"
 *   insn=0x000000000034B344 string=0x000000000034B348 "*"
 *   insn=0x000000000034B348 string=0x000000000034B34C "\n"
 *   insn=0x000000000034B350 string=0x000000000034B354 "'"
 *   insn=0x000000000034B354 string=0x000000000034B3F0 "?"
 *   insn=0x000000000034B358 string=0x000000000034B35C ")=G"
 *   insn=0x000000000034B35C string=0x000000000034B360 "!"
 *   insn=0x000000000034B360 string=0x000000000034B364 "\t"
 *   insn=0x000000000034B364 string=0x000000000034B368 "\t"
 *   insn=0x000000000034B364 string=0x000000000034B404 "\t"
 *   insn=0x000000000034B368 string=0x000000000034B36C "*"
 *   insn=0x000000000034B36C string=0x000000000034B370 "\n"
 *   insn=0x000000000034B374 string=0x000000000034B378 "&"
 *   insn=0x000000000034B378 string=0x000000000034B410 "?"
 *   insn=0x000000000034B37C string=0x000000000034B380 ")=G"
 *   insn=0x000000000034B380 string=0x000000000034B384 "!"
 *   insn=0x000000000034B388 string=0x000000000034B38C "\t"
 *   insn=0x000000000034B388 string=0x000000000034B424 "\t"
 *   insn=0x000000000034B38C string=0x000000000034B390 "*"
 *   insn=0x000000000034B390 string=0x000000000034B394 "\n"
 *   insn=0x000000000034B398 string=0x000000000034B39C "%"
 *   insn=0x000000000034B39C string=0x000000000034B430 "?"
 *   insn=0x000000000034B3A0 string=0x000000000034B3A4 ")=G"
 *   insn=0x000000000034B3A4 string=0x000000000034B3A8 "!"
 *   insn=0x000000000034B3AC string=0x000000000034B3B0 "\t"
 *   insn=0x000000000034B3AC string=0x000000000034B444 "\t"
 *   insn=0x000000000034B3B0 string=0x000000000034B3B4 "*"
 *   insn=0x000000000034B3B4 string=0x000000000034B3B8 "\n"
 *   insn=0x000000000034B3BC string=0x000000000034B3C0 "$"
 *   insn=0x000000000034B3C0 string=0x000000000034B450 "?"
 *   insn=0x000000000034B3C4 string=0x000000000034B3C8 "*"
 *   insn=0x000000000034B3C8 string=0x000000000034B3CC "\n"
 *   insn=0x000000000034B3D0 string=0x000000000034B3D4 "L"
 *   insn=0x000000000034B3DC string=0x000000000034B3E0 "w"
 *   insn=0x000000000034B3E4 string=0x000000000034B3E8 "*"
 *   insn=0x000000000034B3E8 string=0x000000000034B3EC "\n"
 *   insn=0x000000000034B404 string=0x000000000034B408 "*"
 *   insn=0x000000000034B408 string=0x000000000034B40C "\n"
 *   insn=0x000000000034B410 string=0x000000000034B414 "l"
 *   insn=0x000000000034B424 string=0x000000000034B428 "*"
 *   insn=0x000000000034B428 string=0x000000000034B42C "\n"
 *   insn=0x000000000034B444 string=0x000000000034B448 "*"
 *   insn=0x000000000034B448 string=0x000000000034B44C "\n"
 *   insn=0x000000000034B464 string=0x000000000034B468 ")=G"
 *   insn=0x000000000034B468 string=0x000000000034B46C "!"
 *   insn=0x000000000034B46C string=0x000000000034B470 ")"
 *   insn=0x000000000034B470 string=0x000000000034B474 "\t"
 *   insn=0x000000000034B470 string=0x000000000034B4F4 "\t"
 *   insn=0x000000000034B474 string=0x000000000034B478 "*"
 *   insn=0x000000000034B478 string=0x000000000034B47C "\n"
 *   insn=0x000000000034B484 string=0x000000000034B500 "?"
 *   insn=0x000000000034B488 string=0x000000000034B48C ")=G"
 *   insn=0x000000000034B48C string=0x000000000034B490 "!"
 *   insn=0x000000000034B490 string=0x000000000034B494 ")"
 *   insn=0x000000000034B494 string=0x000000000034B498 "\t"
 *   insn=0x000000000034B494 string=0x000000000034B518 "\t"
 *   insn=0x000000000034B498 string=0x000000000034B49C "*"
 *   insn=0x000000000034B49C string=0x000000000034B4A0 "\n"
 *   insn=0x000000000034B4A8 string=0x000000000034B524 "?"
 *   insn=0x000000000034B4AC string=0x000000000034B4B0 ")=G"
 *   insn=0x000000000034B4B0 string=0x000000000034B4B4 "!"
 *   insn=0x000000000034B4B4 string=0x000000000034B4B8 "\t"
 *   insn=0x000000000034B4B8 string=0x000000000034B4BC "\t"
 *   insn=0x000000000034B4B8 string=0x000000000034B538 "\t"
 *   insn=0x000000000034B4BC string=0x000000000034B4C0 "*"
 *   insn=0x000000000034B4C0 string=0x000000000034B4C4 "\n"
 *   insn=0x000000000034B4CC string=0x000000000034B544 "?"
 *   insn=0x000000000034B4D0 string=0x000000000034B4D4 ")=G"
 *   insn=0x000000000034B4D4 string=0x000000000034B4D8 "!"
 *   insn=0x000000000034B4DC string=0x000000000034B4E0 "\t"
 *   insn=0x000000000034B4DC string=0x000000000034B558 "\t"
 *   insn=0x000000000034B4E0 string=0x000000000034B4E4 "*"
 *   insn=0x000000000034B4E4 string=0x000000000034B4E8 "\n"
 *   insn=0x000000000034B4F0 string=0x000000000034B564 "?"
 *   insn=0x000000000034B4F4 string=0x000000000034B4F8 "*"
 *   insn=0x000000000034B4F8 string=0x000000000034B4FC "\n"
 *   insn=0x000000000034B500 string=0x000000000034B504 "L"
 *   insn=0x000000000034B518 string=0x000000000034B51C "*"
 *   insn=0x000000000034B51C string=0x000000000034B520 "\n"
 *   insn=0x000000000034B530 string=0x000000000034B534 "i"
 *   insn=0x000000000034B538 string=0x000000000034B53C "*"
 *   insn=0x000000000034B53C string=0x000000000034B540 "\n"
 *   insn=0x000000000034B544 string=0x000000000034B548 "L"
 *   insn=0x000000000034B550 string=0x000000000034B554 "'"
 *   insn=0x000000000034B558 string=0x000000000034B55C "*"
 *   insn=0x000000000034B55C string=0x000000000034B560 "\n"
 *   insn=0x000000000034B578 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034B584 string=0x000000000034B588 "("
 *   insn=0x000000000034B588 string=0x000000000034B58C "\t\t@"
 *   insn=0x000000000034B58C string=0x000000000034B590 ")"
 *   insn=0x000000000034B590 string=0x000000000034B594 "\t\t"
 *   insn=0x000000000034B598 string=0x000000000034B59C "\t"
 *   insn=0x000000000034B59C string=0x000000000034B5A0 ")"
 *   insn=0x000000000034B5A4 string=0x000000000034B5A8 " "
 *   insn=0x000000000034B5A8 string=0x000000000034B5AC " "
 *   insn=0x000000000034B5BC string=0x000000000034B5C0 "J"
 *   insn=0x000000000034B5C4 string=0x000000000034B5C8 "(a"
 *   insn=0x000000000034B5CC string=0x000000000034B5D0 " "
 *   insn=0x000000000034B5D4 string=0x000000000034B5D8 "J=G"
 *   insn=0x000000000034B5D8 string=0x000000000034B5DC ")!"
 *   insn=0x000000000034B5DC string=0x000000000034B5E0 "*"
 *   insn=0x000000000034B5E0 string=0x000000000034B5E4 "*"
 *   insn=0x000000000034B5E0 string=0x000000000034B804 "*"
 *   insn=0x000000000034B5E4 string=0x000000000034B5E8 "K"
 *   insn=0x000000000034B5E8 string=0x000000000034B5EC "+"
 *   insn=0x000000000034B5F4 string=0x000000000034B810 "_"
 *   insn=0x000000000034B604 string=0x000000000034B608 ""
 *   insn=0x000000000034B60C string=0x000000000034B610 "a0"
 *   insn=0x000000000034B614 string=0x000000000034B618 ""
 *   insn=0x000000000034B620 string=0x000000000034B624 "~"
 *   insn=0x000000000034B634 string=0x000000000034B638 " "
 *   insn=0x000000000034B63C string=0x000000000034B640 ")=G"
 *   insn=0x000000000034B640 string=0x000000000034B644 "!"
 *   insn=0x000000000034B648 string=0x000000000034B64C "\t"
 *   insn=0x000000000034B648 string=0x000000000034B678 "\t"
 *   insn=0x000000000034B64C string=0x000000000034B650 "*"
 *   insn=0x000000000034B650 string=0x000000000034B654 "\n"
 *   insn=0x000000000034B658 string=0x000000000034B65C "?"
 *   insn=0x000000000034B664 string=0x000000000034B668 "O{"
 *   insn=0x000000000034B670 string=0x000000000034B674 "j"
 *   insn=0x000000000034B670 string=0x000000000034B7A4 "@"
 *   insn=0x000000000034B678 string=0x000000000034B67C "*"
 *   insn=0x000000000034B67C string=0x000000000034B680 "\n"
 *   insn=0x000000000034B680 string=0x000000000034B684 "?"
 *   insn=0x000000000034B688 string=0x000000000034B68C "D"
 *   insn=0x000000000034B698 string=0x000000000034B69C "J"
 *   insn=0x000000000034B6A0 string=0x000000000034B6A4 "(a"
 *   insn=0x000000000034B6B0 string=0x000000000034B6B4 "J=G"
 *   insn=0x000000000034B6B4 string=0x000000000034B6B8 ")!"
 *   insn=0x000000000034B6BC string=0x000000000034B6C0 "*"
 *   insn=0x000000000034B6BC string=0x000000000034B6D4 "*"
 *   insn=0x000000000034B6C0 string=0x000000000034B6C4 "K"
 *   insn=0x000000000034B6C4 string=0x000000000034B6C8 "+"
 *   insn=0x000000000034B6D0 string=0x000000000034B6E0 "_"
 *   insn=0x000000000034B6D4 string=0x000000000034B6D8 "K"
 *   insn=0x000000000034B6D8 string=0x000000000034B6DC "+"
 *   insn=0x000000000034B6EC string=0x000000000034B6F0 "-{"
 *   insn=0x000000000034B6F4 string=0x000000000034B6F8 "O"
 *   insn=0x000000000034B704 string=0x000000000034B708 ""
 *   insn=0x000000000034B70C string=0x000000000034B710 "!\t"
 *   insn=0x000000000034B714 string=0x000000000034B718 "\t@"
 *   insn=0x000000000034B724 string=0x000000000034B728 ""
 *   insn=0x000000000034B72C string=0x000000000034B730 "!"
 *   insn=0x000000000034B734 string=0x000000000034B738 "@"
 *   insn=0x000000000034B740 string=0x000000000034B744 "<"
 *   insn=0x000000000034B74C string=0x000000000034B750 "t&"
 *   insn=0x000000000034B754 string=0x000000000034B758 ""
 *   insn=0x000000000034B764 string=0x000000000034B768 "\t@"
 *   insn=0x000000000034B774 string=0x000000000034B778 ""
 *   insn=0x000000000034B784 string=0x000000000034B788 "@"
 *   insn=0x000000000034B790 string=0x000000000034B794 """
 *   insn=0x000000000034B7A4 string=0x000000000034B7A8 ""
 *   insn=0x000000000034B7A8 string=0x000000000034B7AC ""
 *   insn=0x000000000034B7AC string=0x000000000034B7B0 "a#"
 *   insn=0x000000000034B7B0 string=0x000000000034B7B4 ""
 *   insn=0x000000000034B7B4 string=0x000000000034B7B8 ""
 *   insn=0x000000000034B7C8 string=0x000000000034B7CC "J"
 *   insn=0x000000000034B7D0 string=0x000000000034B7D4 "(a"
 *   insn=0x000000000034B7E0 string=0x000000000034B7E4 "J=G"
 *   insn=0x000000000034B7E4 string=0x000000000034B7E8 ")!"
 *   insn=0x000000000034B7EC string=0x000000000034B7F0 "*"
 *   insn=0x000000000034B7F0 string=0x000000000034B7F4 "K"
 *   insn=0x000000000034B7F4 string=0x000000000034B7F8 "+"
 *   insn=0x000000000034B804 string=0x000000000034B808 "K"
 *   insn=0x000000000034B808 string=0x000000000034B80C "+"
 *   insn=0x000000000034B838 string=0x000000000034B83C ")"
 *   insn=0x000000000034B84C string=0x000000000034B850 ")=G"
 *   insn=0x000000000034B850 string=0x000000000034B854 "!"
 *   insn=0x000000000034B854 string=0x000000000034B858 "i"
 *   insn=0x000000000034B858 string=0x000000000034B85C "\t"
 *   insn=0x000000000034B858 string=0x000000000034B884 "\t"
 *   insn=0x000000000034B85C string=0x000000000034B860 "*"
 *   insn=0x000000000034B860 string=0x000000000034B864 "\n"
 *   insn=0x000000000034B868 string=0x000000000034B86C "?"
 *   insn=0x000000000034B86C string=0x000000000034B870 "l"
 *   insn=0x000000000034B884 string=0x000000000034B888 "*"
 *   insn=0x000000000034B888 string=0x000000000034B88C "\n"
 *   insn=0x000000000034B88C string=0x000000000034B890 "?"
 *   insn=0x000000000034B890 string=0x000000000034B894 ""
 *   insn=0x000000000034B8A0 string=0x000000000034B8A4 "(a"
 *   insn=0x000000000034B8A8 string=0x000000000034B8AC "@"
 *   insn=0x000000000034B8B0 string=0x000000000034B8B4 "J=G"
 *   insn=0x000000000034B8B4 string=0x000000000034B8B8 ")!"
 *   insn=0x000000000034B8BC string=0x000000000034B8C0 "*"
 *   insn=0x000000000034B8BC string=0x000000000034B90C "*"
 *   insn=0x000000000034B8C0 string=0x000000000034B8C4 "K"
 *   insn=0x000000000034B8C4 string=0x000000000034B8C8 "+"
 *   insn=0x000000000034B8D0 string=0x000000000034B918 "_"
 *   insn=0x000000000034B8D8 string=0x000000000034B8DC "(a"
 *   insn=0x000000000034B8E8 string=0x000000000034B8EC "J=G"
 *   insn=0x000000000034B8EC string=0x000000000034B8F0 ")!"
 *   insn=0x000000000034B8F4 string=0x000000000034B8F8 "*"
 *   insn=0x000000000034B8F8 string=0x000000000034B8FC "K"
 *   insn=0x000000000034B8FC string=0x000000000034B900 "+"
 *   insn=0x000000000034B90C string=0x000000000034B910 "K"
 *   insn=0x000000000034B910 string=0x000000000034B914 "+"
 *   insn=0x000000000034B93C string=0x000000000034B940 "`"
 *   insn=0x000000000034B944 string=0x000000000034B948 ")=G"
 *   insn=0x000000000034B948 string=0x000000000034B94C "!"
 *   insn=0x000000000034B950 string=0x000000000034B954 "\t"
 *   insn=0x000000000034B950 string=0x000000000034B968 "\t"
 *   insn=0x000000000034B954 string=0x000000000034B958 "*"
 *   insn=0x000000000034B958 string=0x000000000034B95C "\n"
 *   insn=0x000000000034B964 string=0x000000000034B974 "?"
 *   insn=0x000000000034B968 string=0x000000000034B96C "*"
 *   insn=0x000000000034B96C string=0x000000000034B970 "\n"
 *   insn=0x000000000034B994 string=0x000000000034B998 " "
 *   insn=0x000000000034B99C string=0x000000000034B9A0 ")=G"
 *   insn=0x000000000034B9A0 string=0x000000000034B9A4 "!"
 *   insn=0x000000000034B9A4 string=0x000000000034B9A8 "i"
 *   insn=0x000000000034B9A8 string=0x000000000034B9AC "\t"
 *   insn=0x000000000034B9A8 string=0x000000000034B9D4 "\t"
 *   insn=0x000000000034B9AC string=0x000000000034B9B0 "*"
 *   insn=0x000000000034B9B0 string=0x000000000034B9B4 "\n"
 *   insn=0x000000000034B9B8 string=0x000000000034B9BC "?"
 *   insn=0x000000000034B9C4 string=0x000000000034B9C8 "wz"
 *   insn=0x000000000034B9D4 string=0x000000000034B9D8 "*"
 *   insn=0x000000000034B9D8 string=0x000000000034B9DC "\n"
 *   insn=0x000000000034B9DC string=0x000000000034B9E0 "?"
 *   insn=0x000000000034B9E0 string=0x000000000034B9E4 ""
 *   insn=0x000000000034B9F4 string=0x000000000034BA00 ","
 *   insn=0x000000000034BA00 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000034BA10 string=0x000000000034BA14 "J"
 *   insn=0x000000000034BA18 string=0x000000000034BA1C "(a"
 *   insn=0x000000000034BA28 string=0x000000000034BA2C "J=G"
 *   insn=0x000000000034BA2C string=0x000000000034BA30 ")!"
 *   insn=0x000000000034BA30 string=0x000000000034BA34 "*"
 *   insn=0x000000000034BA34 string=0x000000000034BA38 "*"
 *   insn=0x000000000034BA34 string=0x000000000034BA58 "*"
 *   insn=0x000000000034BA38 string=0x000000000034BA3C "K"
 *   insn=0x000000000034BA3C string=0x000000000034BA40 "+"
 *   insn=0x000000000034BA44 string=0x000000000034BA48 "_"
 *   insn=0x000000000034BA50 string=0x000000000034BA54 "i"
 *   insn=0x000000000034BA58 string=0x000000000034BA5C "K"
 *   insn=0x000000000034BA5C string=0x000000000034BA60 "+"
 *   insn=0x000000000034BA60 string=0x000000000034BA64 "_"
 *   insn=0x000000000034BA64 string=0x000000000034BA68 "M"
 *   insn=0x000000000034BA68 string=0x000000000034BA6C "l"
 *   insn=0x000000000034BA74 string=0x000000000034BA78 "4"
 *   insn=0x000000000034BA7C string=0x000000000034BA80 ""
 *   insn=0x000000000034BA8C string=0x000000000034BA90 "\t@"
 *   insn=0x000000000034BA9C string=0x000000000034BAA0 ""
 *   insn=0x000000000034BAAC string=0x000000000034BAB0 "@"
 *   insn=0x000000000034BAB8 string=0x000000000034BABC "X"
 *   insn=0x000000000034BACC string=0x000000000034BAD0 ""
 *   insn=0x000000000034BAD4 string=0x000000000034BAD8 "!\n"
 *   insn=0x000000000034BADC string=0x000000000034BAE0 "\t@"
 *   insn=0x000000000034BAEC string=0x000000000034BAF0 ""
 *   insn=0x000000000034BAF4 string=0x000000000034BAF8 "!\t"
 *   insn=0x000000000034BAFC string=0x000000000034BB00 "@"
 *   insn=0x000000000034BB08 string=0x000000000034BB0C "D"
 *   insn=0x000000000034BB20 string=0x000000000034BB24 ""
 *   insn=0x000000000034BB30 string=0x000000000034BB34 "\t@"
 *   insn=0x000000000034BB40 string=0x000000000034BB44 ""
 *   insn=0x000000000034BB50 string=0x000000000034BB54 "@"
 *   insn=0x000000000034BB5C string=0x000000000034BB60 "/"
 *   insn=0x000000000034BB70 string=0x000000000034BB74 ""
 *   insn=0x000000000034BB80 string=0x000000000034BB84 "\t@"
 *   insn=0x000000000034BB90 string=0x000000000034BB94 ""
 *   insn=0x000000000034BBA0 string=0x000000000034BBA4 "@"
 *   insn=0x000000000034BBAC string=0x000000000034BBB0 ""
 *   insn=0x000000000034BBBC string=0x000000000034BBC0 "(a"
 *   insn=0x000000000034BBCC string=0x000000000034BBD0 "J=G"
 *   insn=0x000000000034BBD0 string=0x000000000034BBD4 ")!"
 *   insn=0x000000000034BBD8 string=0x000000000034BBDC "*"
 *   insn=0x000000000034BBD8 string=0x000000000034BC08 "*"
 *   insn=0x000000000034BBDC string=0x000000000034BBE0 "K"
 *   insn=0x000000000034BBE0 string=0x000000000034BBE4 "+"
 *   insn=0x000000000034BBE8 string=0x000000000034BBEC "_"
 *   insn=0x000000000034BBEC string=0x000000000034BBF0 "l"
 *   insn=0x000000000034BC00 string=0x000000000034BC04 "0"
 *   insn=0x000000000034BC08 string=0x000000000034BC0C "K"
 *   insn=0x000000000034BC0C string=0x000000000034BC10 "+"
 *   insn=0x000000000034BC10 string=0x000000000034BC14 "_"
 *   insn=0x000000000034BC1C string=0x000000000034BC20 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneController::HandleGameEvent(
        Caver::GameSceneController *this,
        const Caver::GameEvent *a2)
{
  __int64 result; // x0
  _QWORD *v5; // x8
  _DWORD *v6; // x21
  _DWORD *v7; // x22
  Caver::SceneObject **v8; // x25
  Caver::SceneObject *v9; // x21
  Caver::SceneObject *v10; // x0
  int v11; // w8
  int v12; // w8
  __int64 v13; // x21
  _QWORD *v14; // x22
  __int64 v15; // x26
  __int64 v16; // x8
  _QWORD *v17; // x22
  char v18; // w23
  __int64 v19; // x8
  _QWORD *v20; // x8
  Caver::SceneObject *v21; // x9
  _DWORD *v22; // x0
  int v23; // w23
  __int64 v24; // x8
  _QWORD *v25; // x8
  Caver::SceneObject *v26; // x9
  __int64 v27; // x8
  _QWORD *v28; // x8
  Caver::SceneObject *v29; // x9
  _QWORD *v30; // x19
  __int64 v31; // x8
  __int64 v32; // x8
  char *v33; // x0
  Caver::SceneObject *v34; // x20
  Caver::OverlayTextComponent *v35; // x21
  Caver::GameInterfaceBuilder *v36; // x0
  _QWORD *v37; // x8
  Caver::SceneObject *v38; // x9
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x20
  __int64 v43; // x8
  __int64 v44; // x8
  char *v45; // x25
  __int64 v46; // x0
  __int64 v47; // x8
  void *v48; // x0
  void *v49; // x0
  char *v50; // x0
  __int64 v51; // x8
  _DWORD *v52; // x8
  int v53; // w21
  int v54; // w0
  Caver::SceneObject *v55; // x21
  int v56; // w8
  __int64 v57; // x0
  int v58; // w8
  void *v59; // x0
  Caver::SceneObject *v60; // x0
  int v61; // w8
  void *v62; // x0
  __int64 v63; // x8
  __int64 v64; // x8
  _QWORD *v65; // x23
  __int64 v66; // x8
  void *v67; // x0
  __int64 v68; // x22
  __int64 v69; // x8
  Caver::TargetFrame *v70; // x21
  _DWORD *v71; // x0
  int v72; // w8
  void *v73; // x0
  char *v74; // x0
  unsigned int *v75; // x8
  int v76; // w9
  unsigned int *v77; // x8
  int v78; // w9
  unsigned int *v79; // x8
  int v80; // w9
  unsigned int *v81; // x8
  int v82; // w9
  unsigned int *v83; // x8
  int v84; // w9
  unsigned int *v85; // x8
  int v86; // w9
  unsigned int *v87; // x8
  int v88; // w9
  unsigned int *v89; // x8
  int v90; // w9
  unsigned int *v91; // x8
  int v92; // w9
  char *v93; // [xsp+0h] [xbp-80h] BYREF
  __int64 v94; // [xsp+8h] [xbp-78h] BYREF
  __int64 v95; // [xsp+10h] [xbp-70h] BYREF
  Caver::SceneObject *v96; // [xsp+20h] [xbp-60h] BYREF
  _QWORD *v97; // [xsp+28h] [xbp-58h]
  _BYTE v98[12]; // [xsp+34h] [xbp-4Ch] BYREF

  result = 0;
  *(_QWORD *)&v98[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( *(_DWORD *)a2 )
  {
    case 5:
      v96 = (Caver::SceneObject *)*((_QWORD *)a2 + 13);
      v5 = (_QWORD *)*((_QWORD *)a2 + 14);
      v97 = v5;
      if ( v5 )
        ++v5[1];
      Caver::GameSceneController::EquipItem();
      goto LABEL_36;
    case 7:
      sub_566BB8((int)&v96, "amount");
      v22 = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find();
      if ( (_DWORD *)((char *)a2 + 64) == v22 )
        v23 = 0;
      else
        v23 = v22[10];
      v33 = (char *)v96 - 24;
      if ( (__int64 *)((char *)v96 - 24) != &qword_6FD2E0 )
      {
        v75 = (unsigned int *)((char *)v96 - 8);
        if ( &pthread_create )
        {
          do
            v76 = __ldaxr(v75);
          while ( __stlxr(v76 - 1, v75) );
        }
        else
        {
          v76 = (*v75)--;
        }
        if ( v76 <= 0 )
          operator delete(v33);
      }
      v34 = (Caver::SceneObject *)operator new(0x128u);
      Caver::SceneObject::SceneObject(v34);
      v35 = (Caver::OverlayTextComponent *)operator new(0xD8u);
      Caver::OverlayTextComponent::OverlayTextComponent(v35);
      v36 = (Caver::GameInterfaceBuilder *)Caver::SceneObject::AddComponent(v34, v35);
      Caver::GameInterfaceBuilder::TextGradient(v36, 0.29, 1.0, 0.85, 1.0);
      v38 = v96;
      v37 = v97;
      if ( v97 )
        ++v97[1];
      v39 = (_QWORD *)*((_QWORD *)v35 + 26);
      *((_QWORD *)v35 + 25) = v38;
      *((_QWORD *)v35 + 26) = v37;
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
      v42 = v97;
      if ( v97 )
      {
        v43 = v97[1] - 1LL;
        v97[1] = v43;
        if ( !v43 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
          v44 = v42[2] - 1LL;
          v42[2] = v44;
          if ( !v44 )
            (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
        }
      }
      v45 = &byte_6FD2F8;
      v93 = &byte_6FD2F8;
      v46 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
      v47 = v46;
      if ( v23 < 0 )
      {
        *(_BYTE *)(v46 - 1) = 45;
        v47 = v46 - 1;
        v45 = v93;
      }
      sub_569E1C(&v93, 0, *((_QWORD *)v45 - 3), v47, &v98[-v47]);
      ((void (__fastcall *)(__int64 *__return_ptr, char *, char **))loc_25A030)(&v94, "+", &v93);
      sub_56A528(&v95, &v94);
      sub_5677D4(&v95, " xp", 3);
      LODWORD(v97) = 0;
      v96 = (Caver::SceneObject *)0x4220000000000000LL;
      Caver::OverlayTextComponent::CombatTextFromObject();
      v48 = (void *)(v95 - 24);
      if ( (__int64 *)(v95 - 24) != &qword_6FD2E0 )
      {
        v77 = (unsigned int *)(v95 - 8);
        if ( &pthread_create )
        {
          do
            v78 = __ldaxr(v77);
          while ( __stlxr(v78 - 1, v77) );
        }
        else
        {
          v78 = (*v77)--;
        }
        if ( v78 <= 0 )
          operator delete(v48);
      }
      v49 = (void *)(v94 - 24);
      if ( (__int64 *)(v94 - 24) != &qword_6FD2E0 )
      {
        v79 = (unsigned int *)(v94 - 8);
        if ( &pthread_create )
        {
          do
            v80 = __ldaxr(v79);
          while ( __stlxr(v80 - 1, v79) );
        }
        else
        {
          v80 = (*v79)--;
        }
        if ( v80 <= 0 )
          operator delete(v49);
      }
      v50 = v93 - 24;
      if ( v93 - 24 != (char *)&qword_6FD2E0 )
      {
        v81 = (unsigned int *)(v93 - 8);
        if ( &pthread_create )
        {
          do
            v82 = __ldaxr(v81);
          while ( __stlxr(v82 - 1, v81) );
        }
        else
        {
          v82 = (*v81)--;
        }
        if ( v82 <= 0 )
          operator delete(v50);
      }
      v51 = *((_QWORD *)this + 1);
      if ( *(int *)(v51 + 184) <= 98 )
      {
        *(_DWORD *)(v51 + 180) += v23;
        Caver::ExperienceBar::UpdateExperience(*(Caver::ExperienceBar **)(*((_QWORD *)this + 6) + 536LL));
        v52 = (_DWORD *)*((_QWORD *)this + 1);
        if ( (int)v52[46] <= 98 )
        {
          v53 = v52[45];
          Caver::CharacterState::ExperiencePointsRequiredForLevel((Caver::CharacterState *)(v52 + 4));
          if ( v53 >= v54 )
          {
            *((_DWORD *)this + 95) = 1060320051;
            v55 = (Caver::SceneObject *)operator new(0x128u);
            Caver::SceneObject::SceneObject(v55);
            v56 = *((_DWORD *)v55 + 2);
            v96 = v55;
            *((_DWORD *)v55 + 2) = v56 + 1;
            sub_566BB8((int)&v94, "hiro_xp_whoosh");
            Caver::ObjectLibrary::TemplateForName();
            Caver::SceneObject::InitWithTemplate(v55);
            v57 = v95;
            if ( v95 )
            {
              v58 = *(_DWORD *)(v95 + 8) - 1;
              *(_DWORD *)(v95 + 8) = v58;
              if ( !v58 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
            }
            v59 = (void *)(v94 - 24);
            if ( (__int64 *)(v94 - 24) != &qword_6FD2E0 )
            {
              v91 = (unsigned int *)(v94 - 8);
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
              if ( v92 <= 0 )
                operator delete(v59);
            }
            Caver::SceneObject::ComponentWithInterface(v96, (__int64)Caver::TransformControllerComponent::Interface);
            Caver::TransformControllerComponent::FollowObject();
            Caver::SceneObject::AddChildObject();
            v60 = v96;
            if ( v96 )
            {
              v61 = *((_DWORD *)v96 + 2) - 1;
              *((_DWORD *)v96 + 2) = v61;
              if ( !v61 )
                (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v60 + 8LL))(v60);
            }
          }
        }
      }
      return 1;
    case 0xA:
      v6 = (_DWORD *)*((_QWORD *)a2 + 13);
      if ( !v6 )
      {
        if ( !*((_QWORD *)this + 46) )
          goto LABEL_93;
        v8 = (Caver::SceneObject **)((char *)this + 368);
        v9 = (Caver::SceneObject *)*((_QWORD *)a2 + 13);
        if ( v9 )
          goto LABEL_10;
        goto LABEL_11;
      }
      v7 = (_DWORD *)*((_QWORD *)this + 46);
      v8 = (Caver::SceneObject **)((char *)this + 368);
      if ( !v6[2] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)a2 + 13));
      if ( v6 != v7 )
      {
        v9 = (Caver::SceneObject *)*((_QWORD *)a2 + 13);
        if ( v9 )
LABEL_10:
          *((_DWORD *)v9 + 2) += 2;
LABEL_11:
        v10 = *v8;
        *v8 = v9;
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 + 2) - 1;
          *((_DWORD *)v10 + 2) = v11;
          if ( !v11 )
            (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v10 + 8LL))(v10);
        }
        if ( v9 )
        {
          v12 = *((_DWORD *)v9 + 2) - 1;
          *((_DWORD *)v9 + 2) = v12;
          if ( !v12 )
            (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v9 + 8LL))(v9);
        }
        v13 = Caver::SceneObject::ComponentWithInterface(*v8, (__int64)Caver::EntityInfoComponent::Interface);
        sub_566BB8((int)&v96, "Unknown");
        if ( !v13 )
          goto LABEL_85;
        v15 = *(_QWORD *)(v13 + 128);
        v14 = *(_QWORD **)(v13 + 136);
        if ( v14 )
        {
          if ( !v14[1] )
          {
            (*(void (__fastcall **)(_QWORD))(*v14 + 16LL))(*(_QWORD *)(v13 + 136));
            v16 = v14[2] - 1LL;
            v14[2] = v16;
            if ( !v16 )
              (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
          }
          if ( v15 )
          {
            v15 = *(_QWORD *)(v13 + 128);
            v17 = *(_QWORD **)(v13 + 136);
            if ( v17 )
            {
              v18 = 0;
              ++v17[1];
LABEL_75:
              sub_56A528(&v95, v15 + 8);
              sub_56A6A8(&v96);
              v62 = (void *)(v95 - 24);
              if ( (__int64 *)(v95 - 24) == &qword_6FD2E0 )
                goto LABEL_76;
              v85 = (unsigned int *)(v95 - 8);
              if ( &pthread_create )
              {
                do
                  v86 = __ldaxr(v85);
                while ( __stlxr(v86 - 1, v85) );
              }
              else
              {
                v86 = (*v85)--;
              }
              if ( v86 > 0 )
              {
LABEL_76:
                if ( (v18 & 1) != 0 )
                {
LABEL_80:
                  v65 = *(_QWORD **)(v13 + 136);
                  if ( v65 )
                  {
                    if ( !v65[1] )
                    {
                      (*(void (__fastcall **)(_QWORD))(*v65 + 16LL))(*(_QWORD *)(v13 + 136));
                      v66 = v65[2] - 1LL;
                      v65[2] = v66;
                      if ( !v66 )
                        (*(void (__fastcall **)(_QWORD *))(*v65 + 24LL))(v65);
                    }
                  }
LABEL_85:
                  if ( *((_QWORD *)v96 - 3) )
                  {
                    Caver::TargetFrame::SetCharacterLevel(
                      *(Caver::TargetFrame **)(*((_QWORD *)this + 6) + 520LL),
                      *(_DWORD *)(*((_QWORD *)this + 1) + 184LL));
                    Caver::TargetFrame::SetTargetInfo();
                    v68 = Caver::SceneObject::ComponentWithInterface(*v8, (__int64)Caver::HealthComponent::Interface);
                    v69 = *((_QWORD *)this + 6);
                    v70 = *(Caver::TargetFrame **)(v69 + 520);
                    if ( v68 )
                    {
                      sub_566BB8((int)&v95, "health");
                      v71 = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find();
                      if ( (_DWORD *)((char *)a2 + 64) == v71 )
                        v72 = 0;
                      else
                        v72 = v71[10];
                      Caver::TargetFrame::SetHealth(v70, (float)v72 / (float)*(int *)(v68 + 124));
                      v73 = (void *)(v95 - 24);
                      if ( (__int64 *)(v95 - 24) != &qword_6FD2E0 )
                      {
                        v87 = (unsigned int *)(v95 - 8);
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
                          operator delete(v73);
                      }
                    }
                    else
                    {
                      Caver::TargetFrame::SetHealth(*(Caver::TargetFrame **)(v69 + 520), 1.0);
                    }
                  }
                  v74 = (char *)v96 - 24;
                  if ( (__int64 *)((char *)v96 - 24) != &qword_6FD2E0 )
                  {
                    v83 = (unsigned int *)((char *)v96 - 8);
                    if ( &pthread_create )
                    {
                      do
                        v84 = __ldaxr(v83);
                      while ( __stlxr(v84 - 1, v83) );
                    }
                    else
                    {
                      v84 = (*v83)--;
                    }
                    if ( v84 <= 0 )
                      operator delete(v74);
                  }
                  goto LABEL_93;
                }
              }
              else
              {
                operator delete(v62);
                if ( (v18 & 1) != 0 )
                  goto LABEL_80;
              }
              v63 = v17[1] - 1LL;
              v17[1] = v63;
              if ( !v63 )
              {
                (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
                v64 = v17[2] - 1LL;
                v17[2] = v64;
                if ( !v64 )
                  (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
              }
              goto LABEL_80;
            }
LABEL_74:
            v18 = 1;
            goto LABEL_75;
          }
        }
        else if ( v15 )
        {
          v17 = 0;
          goto LABEL_74;
        }
        sub_56A528(&v95, v13 + 120);
        sub_56A6A8(&v96);
        v67 = (void *)(v95 - 24);
        if ( (__int64 *)(v95 - 24) != &qword_6FD2E0 )
        {
          v89 = (unsigned int *)(v95 - 8);
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
            operator delete(v67);
        }
        goto LABEL_85;
      }
LABEL_93:
      Caver::TargetFrame::Show(*(Caver::TargetFrame **)(*((_QWORD *)this + 6) + 520LL));
      return 0;
    case 0xC:
      v24 = *((_QWORD *)this + 1);
      v26 = *(Caver::SceneObject **)(v24 + 120);
      v25 = *(_QWORD **)(v24 + 128);
      v96 = v26;
      v97 = v25;
      if ( v25 )
        ++v25[1];
      Caver::HeroEquipmentManager::ApplyWeaponTrinket();
      goto LABEL_36;
    case 0xD:
      v27 = *((_QWORD *)this + 1);
      v29 = *(Caver::SceneObject **)(v27 + 136);
      v28 = *(_QWORD **)(v27 + 144);
      v96 = v29;
      v97 = v28;
      if ( v28 )
        ++v28[1];
      Caver::HeroEquipmentManager::ApplyArmorTrinket();
      goto LABEL_36;
    case 0xE:
      v19 = *((_QWORD *)this + 1);
      v21 = *(Caver::SceneObject **)(v19 + 152);
      v20 = *(_QWORD **)(v19 + 160);
      v96 = v21;
      v97 = v20;
      if ( v20 )
        ++v20[1];
      Caver::HeroEquipmentManager::ApplyTrinketToSpells();
LABEL_36:
      v30 = v97;
      if ( v97 )
      {
        v31 = v97[1] - 1LL;
        v97[1] = v31;
        if ( !v31 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
          v32 = v30[2] - 1LL;
          v30[2] = v32;
          if ( !v32 )
            (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
        }
      }
      return 1;
    default:
      return result;
  }
}

