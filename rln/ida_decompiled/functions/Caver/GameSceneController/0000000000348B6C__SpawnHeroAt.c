/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000348B6C
 * Mangled: _ZN5Caver19GameSceneController11SpawnHeroAtERKSs
 * Demangled: Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FEE00  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callees: 31
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F4780  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6630  Caver::GameSceneController::CreateHeroObjectAt(Caver::Vector3 const&,int,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8E20  Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F9F30  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FBD70  Caver::HealthComponent::HealthComponent(void)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x00000000002018F0  Caver::Scene::ObjectWithIdentifier(std::string const&)
 *   0x0000000000201B60  Caver::ModelComponent::setModelName(std::string const&)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x0000000000203B10  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x0000000000203B60  Caver::ManaComponent::ManaComponent(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x000000000023BB0C  Caver::SpawnPointComponent::className(void)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 320
 *   insn=0x0000000000348B7C string=0x0000000000348B80 "U"
 *   insn=0x0000000000348B90 string=0x0000000000348B94 "`"
 *   insn=0x0000000000348B98 string=0x0000000000348B9C "U"
 *   insn=0x0000000000348BA0 string=0x0000000000348BA4 ""
 *   insn=0x0000000000348BA4 string=0x0000000000348BA8 "h"
 *   insn=0x0000000000348BA8 string=0x0000000000348BB4 "t"
 *   insn=0x0000000000348BB4 string=0x0000000000348BB8 "!"
 *   insn=0x0000000000348BB8 string=0x000000000058EA84 "spawn_default"
 *   insn=0x0000000000348BD4 string=0x0000000000348BD8 "F"
 *   insn=0x0000000000348BE0 string=0x0000000000348BE4 "@"
 *   insn=0x0000000000348BE4 string=0x0000000000348BE8 ""
 *   insn=0x0000000000348BE8 string=0x0000000000348BEC ""
 *   insn=0x0000000000348BF8 string=0x0000000000348BFC "\t\t@"
 *   insn=0x0000000000348BFC string=0x0000000000348C00 ")"
 *   insn=0x0000000000348C00 string=0x0000000000348C04 "\t\t"
 *   insn=0x0000000000348C04 string=0x0000000000348C08 "@"
 *   insn=0x0000000000348C08 string=0x0000000000348C30 "\t"
 *   insn=0x0000000000348C0C string=0x0000000000348C10 "@"
 *   insn=0x0000000000348C10 string=0x0000000000348C14 ""
 *   insn=0x0000000000348C14 string=0x0000000000348C18 ""
 *   insn=0x0000000000348C18 string=0x0000000000348C1C "a"
 *   insn=0x0000000000348C1C string=0x0000000000348C20 ""
 *   insn=0x0000000000348C20 string=0x0000000000348C24 ""
 *   insn=0x0000000000348C28 string=0x0000000000348C2C ""
 *   insn=0x0000000000348C30 string=0x0000000000348C34 ")"
 *   insn=0x0000000000348C38 string=0x0000000000348C3C " "
 *   insn=0x0000000000348C40 string=0x0000000000348C44 "`"
 *   insn=0x0000000000348C4C string=0x0000000000348C50 ")"
 *   insn=0x0000000000348C58 string=0x0000000000348C5C "A"
 *   insn=0x0000000000348C68 string=0x0000000000348C6C "!|A"
 *   insn=0x0000000000348C6C string=0x0000000000348C70 "\"
 *   insn=0x0000000000348C6C string=0x000000000023BB64 "@%"
 *   insn=0x0000000000348CAC string=0x0000000000348CB0 "a2"
 *   insn=0x0000000000348CB4 string=0x0000000000348CB8 "a(""
 *   insn=0x0000000000348CB8 string=0x0000000000348CBC " "
 *   insn=0x0000000000348CBC string=0x0000000000348CC0 "aV"
 *   insn=0x0000000000348CC8 string=0x0000000000348CCC "Y"
 *   insn=0x0000000000348CCC string=0x0000000000348CD0 "hNA"
 *   insn=0x0000000000348CCC string=0x00000000001F6630 "0'"
 *   insn=0x0000000000348CD0 string=0x0000000000348CD4 "iRA"
 *   insn=0x0000000000348CD4 string=0x0000000000348CD8 "`"
 *   insn=0x0000000000348CD8 string=0x0000000000348CDC "jVA"
 *   insn=0x0000000000348CDC string=0x0000000000348CE0 "bF@"
 *   insn=0x0000000000348CE8 string=0x0000000000348CEC "#"
 *   insn=0x0000000000348CEC string=0x0000000000348CF0 "!(#"
 *   insn=0x0000000000348CF0 string=0x0000000000348CF4 "C"
 *   insn=0x0000000000348CF4 string=0x0000000000348CF8 "B(#"
 *   insn=0x0000000000348CF8 string=0x0000000000348CFC "h&)jb"
 *   insn=0x0000000000348CFC string=0x0000000000348D00 "jb"
 *   insn=0x0000000000348D00 string=0x0000000000348D04 "h"
 *   insn=0x0000000000348D04 string=0x0000000000348D08 "j~"
 *   insn=0x0000000000348D08 string=0x0000000000348D0C "`"
 *   insn=0x0000000000348D0C string=0x0000000000348D10 "bR"
 *   insn=0x0000000000348D10 string=0x0000000000348D14 "`"
 *   insn=0x0000000000348D14 string=0x0000000000348D18 "br"
 *   insn=0x0000000000348D20 string=0x0000000000348D24 "@"
 *   insn=0x0000000000348D24 string=0x0000000000348D28 ""
 *   insn=0x0000000000348D28 string=0x0000000000348D2C ""
 *   insn=0x0000000000348D30 string=0x0000000000348D34 ""
 *   insn=0x0000000000348D34 string=0x0000000000348D38 ""
 *   insn=0x0000000000348D48 string=0x0000000000348D4C "!"
 *   insn=0x0000000000348D4C string=0x0000000000348DB0 "H"
 *   insn=0x0000000000348D64 string=0x0000000000348D68 ")=G"
 *   insn=0x0000000000348D68 string=0x0000000000348D6C "!"
 *   insn=0x0000000000348D70 string=0x0000000000348D74 "\t"
 *   insn=0x0000000000348D70 string=0x0000000000348D88 "\t"
 *   insn=0x0000000000348D74 string=0x0000000000348D78 "*"
 *   insn=0x0000000000348D78 string=0x0000000000348D7C "\n"
 *   insn=0x0000000000348D84 string=0x0000000000348D94 "?"
 *   insn=0x0000000000348D88 string=0x0000000000348D8C "*"
 *   insn=0x0000000000348D8C string=0x0000000000348D90 "\n"
 *   insn=0x0000000000348D94 string=0x0000000000348D98 "L"
 *   insn=0x0000000000348DB0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000348DBC string=0x0000000000348DC0 "\t\t@"
 *   insn=0x0000000000348DC0 string=0x0000000000348DC4 ")"
 *   insn=0x0000000000348DC4 string=0x0000000000348DC8 "\t\t"
 *   insn=0x0000000000348DCC string=0x0000000000348DD0 "\t"
 *   insn=0x0000000000348DD0 string=0x0000000000348DD4 ")"
 *   insn=0x0000000000348DD8 string=0x0000000000348DDC " "
 *   insn=0x0000000000348DF0 string=0x0000000000348DF4 ")"
 *   insn=0x0000000000348DFC string=0x0000000000348E00 " "
 *   insn=0x0000000000348E04 string=0x0000000000348E08 ")=G"
 *   insn=0x0000000000348E08 string=0x0000000000348E0C "!"
 *   insn=0x0000000000348E10 string=0x0000000000348E14 "\t"
 *   insn=0x0000000000348E10 string=0x0000000000348E40 "\t"
 *   insn=0x0000000000348E14 string=0x0000000000348E18 "*"
 *   insn=0x0000000000348E18 string=0x0000000000348E1C "\n"
 *   insn=0x0000000000348E20 string=0x0000000000348E24 "?"
 *   insn=0x0000000000348E2C string=0x0000000000348E30 "]"
 *   insn=0x0000000000348E38 string=0x0000000000348E6C "@"
 *   insn=0x0000000000348E40 string=0x0000000000348E44 "*"
 *   insn=0x0000000000348E44 string=0x0000000000348E48 "\n"
 *   insn=0x0000000000348E48 string=0x0000000000348E4C "?"
 *   insn=0x0000000000348E6C string=0x0000000000348E70 ""
 *   insn=0x0000000000348E70 string=0x0000000000348E74 ""
 *   insn=0x0000000000348E78 string=0x0000000000348E7C ""
 *   insn=0x0000000000348E7C string=0x0000000000348E80 ""
 *   insn=0x0000000000348E8C string=0x0000000000348E90 "/"
 *   insn=0x0000000000348EAC string=0x0000000000348EB0 "Y"
 *   insn=0x0000000000348EB0 string=0x0000000000348EB4 "("
 *   insn=0x0000000000348EC4 string=0x0000000000348EC8 "hn@"
 *   insn=0x0000000000348ECC string=0x0000000000348ED0 "h"
 *   insn=0x0000000000348ED4 string=0x0000000000348ED8 "\t"
 *   insn=0x0000000000348EE0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000348EE8 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000348EEC string=0x0000000000348EF0 ""
 *   insn=0x0000000000348EF4 string=0x0000000000348EF8 "`n@"
 *   insn=0x0000000000348EF8 string=0x0000000000348EFC "wn"
 *   insn=0x0000000000348EFC string=0x0000000000348F00 " "
 *   insn=0x0000000000348F00 string=0x0000000000348F04 "@"
 *   insn=0x0000000000348F00 string=0x0000000000348F24 "!"
 *   insn=0x0000000000348F04 string=0x0000000000348F08 ""
 *   insn=0x0000000000348F08 string=0x0000000000348F0C ""
 *   insn=0x0000000000348F10 string=0x0000000000348F14 ""
 *   insn=0x0000000000348F14 string=0x0000000000348F18 ""
 *   insn=0x0000000000348F1C string=0x0000000000348F20 "wn@"
 *   insn=0x0000000000348F24 string=0x000000000058EA92 "hiro"
 *   insn=0x0000000000348F30 string=0x0000000000348F34 "!w"
 *   insn=0x0000000000348F40 string=0x00000000001F4780 "P'"
 *   insn=0x0000000000348F44 string=0x0000000000348F48 "!"
 *   insn=0x0000000000348F78 string=0x00000000001F5A20 "P'"
 *   insn=0x0000000000348F80 string=0x0000000000348F84 "@"
 *   insn=0x0000000000348F84 string=0x0000000000348F88 ""
 *   insn=0x0000000000348F88 string=0x0000000000348F8C ""
 *   insn=0x0000000000348F90 string=0x0000000000348F94 ""
 *   insn=0x0000000000348F94 string=0x0000000000348F98 ""
 *   insn=0x0000000000348FB0 string=0x0000000000348FB4 "!"
 *   insn=0x0000000000348FB8 string=0x0000000000348FBC "7"
 *   insn=0x0000000000348FC0 string=0x0000000000348FC4 ""
 *   insn=0x0000000000348FD0 string=0x0000000000348FD4 "\t@"
 *   insn=0x0000000000348FE0 string=0x0000000000348FE4 ""
 *   insn=0x0000000000348FF0 string=0x0000000000348FF4 "@"
 *   insn=0x000000000034900C string=0x0000000000349010 "wn@"
 *   insn=0x0000000000349010 string=0x0000000000349014 "A"
 *   insn=0x0000000000349014 string=0x000000000059496B "hero"
 *   insn=0x0000000000349030 string=0x00000000001FB490 "0'"
 *   insn=0x0000000000349040 string=0x0000000000349044 "wn@"
 *   insn=0x0000000000349064 string=0x0000000000349068 "!"
 *   insn=0x0000000000349068 string=0x000000000034906C "  ""
 *   insn=0x0000000000349078 string=0x000000000034907C "\t"
 *   insn=0x0000000000349088 string=0x000000000034908C "#8#"
 *   insn=0x000000000034908C string=0x0000000000349090 "c"
 *   insn=0x0000000000349090 string=0x0000000000349094 "` ""
 *   insn=0x0000000000349094 string=0x0000000000349098 "I"
 *   insn=0x0000000000349098 string=0x000000000034909C ")"
 *   insn=0x00000000003490A0 string=0x00000000003490A4 "\t"
 *   insn=0x00000000003490B0 string=0x00000000003490B4 ";"
 *   insn=0x00000000003490B4 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000003490C8 string=0x00000000003490CC "`n@"
 *   insn=0x00000000003490CC string=0x00000000003490D0 "!0D"
 *   insn=0x00000000003490D0 string=0x00000000003490D4 "C"
 *   insn=0x00000000003490D4 string=0x00000000003490D8 "h"
 *   insn=0x00000000003490E0 string=0x00000000003490E4 "w"
 *   insn=0x00000000003490F0 string=0x00000000001F9F30 "0'"
 *   insn=0x00000000003490FC string=0x0000000000349100 "H"
 *   insn=0x0000000000349100 string=0x00000000001F8E20 "0'"
 *   insn=0x0000000000349118 string=0x000000000034911C "A"
 *   insn=0x0000000000349120 string=0x0000000000349124 "6"
 *   insn=0x0000000000349128 string=0x000000000034912C ""
 *   insn=0x000000000034913C string=0x0000000000349140 "\t@"
 *   insn=0x0000000000349148 string=0x000000000034914C ""
 *   insn=0x000000000034915C string=0x0000000000349160 "@"
 *   insn=0x0000000000349174 string=0x00000000001FBD70 "0'"
 *   insn=0x0000000000349178 string=0x000000000034917C "vz"
 *   insn=0x0000000000349180 string=0x0000000000349184 "h"
 *   insn=0x0000000000349188 string=0x000000000034918C "\t"
 *   insn=0x000000000034918C string=0x0000000000349190 ")y"
 *   insn=0x0000000000349190 string=0x0000000000349194 ")"
 *   insn=0x000000000034919C string=0x00000000003491A0 ""
 *   insn=0x000000000034919C string=0x00000000003491B4 "`n@"
 *   insn=0x00000000003491A0 string=0x00000000003491A4 "?"
 *   insn=0x00000000003491A4 string=0x00000000003491A8 ""
 *   insn=0x00000000003491A8 string=0x00000000003491AC "}"
 *   insn=0x00000000003491BC string=0x00000000001F45A0 "P'"
 *   insn=0x00000000003491C0 string=0x00000000003491C4 "`n@"
 *   insn=0x00000000003491C4 string=0x00000000003491C8 "!"
 *   insn=0x00000000003491C8 string=0x0000000000261698 " $"
 *   insn=0x00000000003491CC string=0x00000000003491D0 "hn@"
 *   insn=0x00000000003491D0 string=0x00000000003491D4 "`r"
 *   insn=0x00000000003491D8 string=0x00000000003491DC "!"
 *   insn=0x00000000003491E8 string=0x00000000003491EC "`v"
 *   insn=0x00000000003491F0 string=0x00000000001FD020 "0'"
 *   insn=0x00000000003491FC string=0x0000000000349200 "X"
 *   insn=0x0000000000349200 string=0x0000000000349204 "h"
 *   insn=0x0000000000349204 string=0x0000000000349208 "u~"
 *   insn=0x0000000000349210 string=0x0000000000349214 "\t"
 *   insn=0x0000000000349214 string=0x0000000000349218 ")}\n))"
 *   insn=0x0000000000349218 string=0x000000000034921C "))"
 *   insn=0x0000000000349220 string=0x0000000000349224 ""
 *   insn=0x0000000000349224 string=0x0000000000349228 "?"
 *   insn=0x0000000000349228 string=0x000000000034922C ""
 *   insn=0x000000000034922C string=0x0000000000349230 "}"
 *   insn=0x0000000000349234 string=0x0000000000349238 "`n@"
 *   insn=0x000000000034923C string=0x0000000000349240 "t"
 *   insn=0x0000000000349240 string=0x000000000034924C "("
 *   insn=0x0000000000349244 string=0x0000000000349248 "2"
 *   insn=0x0000000000349278 string=0x000000000034927C ")=G"
 *   insn=0x000000000034927C string=0x0000000000349280 "!"
 *   insn=0x0000000000349280 string=0x0000000000349284 ")"
 *   insn=0x0000000000349284 string=0x0000000000349288 "\t"
 *   insn=0x0000000000349284 string=0x0000000000349308 "\t"
 *   insn=0x0000000000349288 string=0x000000000034928C "*"
 *   insn=0x000000000034928C string=0x0000000000349290 "\n"
 *   insn=0x0000000000349298 string=0x0000000000349314 "?"
 *   insn=0x000000000034929C string=0x00000000003492A0 ")=G"
 *   insn=0x00000000003492A0 string=0x00000000003492A4 "!"
 *   insn=0x00000000003492A4 string=0x00000000003492A8 "I"
 *   insn=0x00000000003492A8 string=0x00000000003492AC "\t"
 *   insn=0x00000000003492A8 string=0x0000000000349330 "\t"
 *   insn=0x00000000003492AC string=0x00000000003492B0 "*"
 *   insn=0x00000000003492B0 string=0x00000000003492B4 "\n"
 *   insn=0x00000000003492B8 string=0x00000000003492BC " "
 *   insn=0x00000000003492BC string=0x000000000034933C "?"
 *   insn=0x00000000003492C0 string=0x00000000003492C4 ")=G"
 *   insn=0x00000000003492C4 string=0x00000000003492C8 "!"
 *   insn=0x00000000003492C8 string=0x00000000003492CC ")"
 *   insn=0x00000000003492CC string=0x00000000003492D0 "\t"
 *   insn=0x00000000003492CC string=0x0000000000349350 "\t"
 *   insn=0x00000000003492D0 string=0x00000000003492D4 "*"
 *   insn=0x00000000003492D4 string=0x00000000003492D8 "\n"
 *   insn=0x00000000003492E0 string=0x000000000034935C "?"
 *   insn=0x00000000003492E4 string=0x00000000003492E8 ")=G"
 *   insn=0x00000000003492E8 string=0x00000000003492EC "!"
 *   insn=0x00000000003492EC string=0x00000000003492F0 "\t"
 *   insn=0x00000000003492F0 string=0x00000000003492F4 "\t"
 *   insn=0x00000000003492F0 string=0x0000000000349370 "\t"
 *   insn=0x00000000003492F4 string=0x00000000003492F8 "*"
 *   insn=0x00000000003492F8 string=0x00000000003492FC "\n"
 *   insn=0x0000000000349304 string=0x000000000034937C "?"
 *   insn=0x0000000000349308 string=0x000000000034930C "*"
 *   insn=0x000000000034930C string=0x0000000000349310 "\n"
 *   insn=0x000000000034931C string=0x0000000000349320 "!"
 *   insn=0x0000000000349328 string=0x000000000034932C "5"
 *   insn=0x0000000000349330 string=0x0000000000349334 "*"
 *   insn=0x0000000000349334 string=0x0000000000349338 "\n"
 *   insn=0x0000000000349348 string=0x000000000034934C "1"
 *   insn=0x0000000000349350 string=0x0000000000349354 "*"
 *   insn=0x0000000000349354 string=0x0000000000349358 "\n"
 *   insn=0x000000000034935C string=0x0000000000349360 ","
 *   insn=0x0000000000349368 string=0x000000000034936C "6"
 *   insn=0x0000000000349370 string=0x0000000000349374 "*"
 *   insn=0x0000000000349374 string=0x0000000000349378 "\n"
 *   insn=0x0000000000349384 string=0x0000000000349388 ""
 *   insn=0x0000000000349390 string=0x0000000000349394 "u"
 *   insn=0x00000000003493A0 string=0x00000000003493A4 "a"
 *   insn=0x00000000003493A4 string=0x0000000000349528 "b"
 *   insn=0x00000000003493AC string=0x00000000003493B0 "^"
 *   insn=0x00000000003493B8 string=0x00000000003493BC "(a"
 *   insn=0x00000000003493C8 string=0x00000000003493CC "J=G"
 *   insn=0x00000000003493CC string=0x00000000003493D0 ")!"
 *   insn=0x00000000003493D4 string=0x00000000003493D8 "*"
 *   insn=0x00000000003493D4 string=0x0000000000349408 "*"
 *   insn=0x00000000003493D8 string=0x00000000003493DC "K"
 *   insn=0x00000000003493DC string=0x00000000003493E0 "+"
 *   insn=0x00000000003493E4 string=0x00000000003493E8 "_"
 *   insn=0x00000000003493FC string=0x0000000000349400 "t"
 *   insn=0x0000000000349408 string=0x000000000034940C "K"
 *   insn=0x000000000034940C string=0x0000000000349410 "+"
 *   insn=0x0000000000349410 string=0x0000000000349414 "_"
 *   insn=0x0000000000349424 string=0x0000000000349428 "t"
 *   insn=0x000000000034942C string=0x0000000000349430 ""
 *   insn=0x000000000034943C string=0x0000000000349440 "\t@"
 *   insn=0x000000000034944C string=0x0000000000349450 ""
 *   insn=0x000000000034945C string=0x0000000000349460 "@"
 *   insn=0x0000000000349468 string=0x000000000034946C "z"
 *   insn=0x0000000000349474 string=0x0000000000349478 "(a"
 *   insn=0x0000000000349484 string=0x0000000000349488 "J=G"
 *   insn=0x0000000000349488 string=0x000000000034948C ")!"
 *   insn=0x0000000000349490 string=0x0000000000349494 "*"
 *   insn=0x0000000000349490 string=0x00000000003494C0 "*"
 *   insn=0x0000000000349494 string=0x0000000000349498 "K"
 *   insn=0x0000000000349498 string=0x000000000034949C "+"
 *   insn=0x00000000003494A0 string=0x00000000003494A4 "_"
 *   insn=0x00000000003494A4 string=0x00000000003494A8 "l"
 *   insn=0x00000000003494C0 string=0x00000000003494C4 "K"
 *   insn=0x00000000003494C4 string=0x00000000003494C8 "+"
 *   insn=0x00000000003494C8 string=0x00000000003494CC "_"
 *   insn=0x00000000003494D0 string=0x00000000003494D4 "`"
 *   insn=0x00000000003494E4 string=0x00000000003494E8 "\t\t@"
 *   insn=0x00000000003494E8 string=0x00000000003494EC ")"
 *   insn=0x00000000003494EC string=0x00000000003494F0 "\t\t"
 *   insn=0x00000000003494F0 string=0x00000000003494F4 "!"
 *   insn=0x00000000003494F4 string=0x00000000003494F8 "\t"
 *   insn=0x00000000003494F8 string=0x00000000003494FC ")"
 *   insn=0x0000000000349500 string=0x0000000000349504 " "
 *   insn=0x0000000000349510 string=0x0000000000349514 "4"
 *   insn=0x0000000000349514 string=0x0000000000349518 "6"
 *   insn=0x0000000000349528 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000034953C string=0x0000000000349540 ")"
 *   insn=0x0000000000349558 string=0x000000000034955C ""
 *   insn=0x0000000000349560 string=0x0000000000349564 "a"
 *   insn=0x0000000000349568 string=0x000000000034956C "\t@"
 *   insn=0x0000000000349578 string=0x000000000034957C ""
 *   insn=0x0000000000349580 string=0x0000000000349584 "a"
 *   insn=0x0000000000349588 string=0x000000000034958C "@"
 *   insn=0x000000000034959C string=0x00000000003495A0 ")=G"
 *   insn=0x00000000003495A0 string=0x00000000003495A4 "!"
 *   insn=0x00000000003495A8 string=0x00000000003495AC "\t"
 *   insn=0x00000000003495A8 string=0x00000000003495C0 "\t"
 *   insn=0x00000000003495AC string=0x00000000003495B0 "*"
 *   insn=0x00000000003495B0 string=0x00000000003495B4 "\n"
 *   insn=0x00000000003495BC string=0x00000000003495CC "?"
 *   insn=0x00000000003495C0 string=0x00000000003495C4 "*"
 *   insn=0x00000000003495C4 string=0x00000000003495C8 "\n"
 *   insn=0x00000000003495D4 string=0x00000000003495D8 "s"
 *   insn=0x00000000003495F4 string=0x00000000003495F8 ")"
 *   insn=0x0000000000349608 string=0x000000000034960C ")=G"
 *   insn=0x000000000034960C string=0x0000000000349610 "!"
 *   insn=0x0000000000349610 string=0x0000000000349614 "i"
 *   insn=0x0000000000349614 string=0x0000000000349618 "\t"
 *   insn=0x0000000000349614 string=0x0000000000349640 "\t"
 *   insn=0x0000000000349618 string=0x000000000034961C "*"
 *   insn=0x000000000034961C string=0x0000000000349620 "\n"
 *   insn=0x0000000000349624 string=0x0000000000349628 "?"
 *   insn=0x0000000000349628 string=0x000000000034962C "L"
 *   insn=0x0000000000349630 string=0x0000000000349634 "\"
 *   insn=0x0000000000349640 string=0x0000000000349644 "*"
 *   insn=0x0000000000349644 string=0x0000000000349648 "\n"
 *   insn=0x0000000000349648 string=0x000000000034964C "?"
 *   insn=0x000000000034964C string=0x0000000000349650 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::GameSceneController::SpawnHeroAt(float *a1, _QWORD *a2)
{
  Caver::SceneObject *result; // x0
  Caver::SceneObject *v5; // x0
  Caver::SceneObject *v6; // x8
  int v7; // w9
  int v8; // w8
  void *v9; // x0
  __int64 v10; // x20
  Caver::SceneObject *v11; // x22
  float v12; // s2
  float v13; // s3
  float v14; // w8
  float v15; // w9
  float v16; // s0
  float v17; // s1
  float v18; // s3
  float v19; // s2
  int v20; // w8
  unsigned int *v21; // x8
  int v22; // w9
  Caver::SceneObject *v23; // [xsp+A8h] [xbp-58h] BYREF
  int v24; // [xsp+B0h] [xbp-50h]
  float32x2_t v25; // [xsp+C0h] [xbp-40h] BYREF
  Caver::SceneObject *v26; // [xsp+C8h] [xbp-38h]
  __int64 v27; // [xsp+D8h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Scene::ObjectWithIdentifier();
  if ( *(_QWORD *)(*a2 - 24LL) )
  {
    result = v26;
    if ( v26 )
      goto LABEL_13;
  }
  sub_566BB8((int)&v25, "spawn_default");
  Caver::Scene::ObjectWithIdentifier();
  v5 = v23;
  if ( v23 )
    ++*((_DWORD *)v23 + 2);
  v6 = v26;
  v26 = v5;
  if ( v6 && (v7 = *((_DWORD *)v6 + 2) - 1, (*((_DWORD *)v6 + 2) = v7) == 0) )
  {
    (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v6 + 8LL))(v6);
    v5 = v23;
    if ( !v23 )
      goto LABEL_11;
  }
  else if ( !v5 )
  {
    goto LABEL_11;
  }
  v8 = *((_DWORD *)v5 + 2) - 1;
  *((_DWORD *)v5 + 2) = v8;
  if ( !v8 )
    (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v5 + 8LL))(v5);
LABEL_11:
  v9 = (void *)(v25.n64_u64[0] - 24);
  if ( (__int64 *)(v25.n64_u64[0] - 24) == &qword_6FD2E0 )
    goto LABEL_12;
  v21 = (unsigned int *)(v25.n64_u64[0] - 8);
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
LABEL_12:
    result = v26;
    if ( !v26 )
      return result;
  }
  else
  {
    operator delete(v9);
    result = v26;
    if ( !v26 )
      return result;
  }
LABEL_13:
  v10 = Caver::SceneObject::ComponentWithInterface(result, (__int64)Caver::SpawnPointComponent::Interface);
  v11 = v26;
  v23 = *(Caver::SceneObject **)(v10 + 116);
  v24 = *(_DWORD *)(v10 + 124);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v25, (const Caver::Vector3 *)&v23);
  v12 = *(float *)(v10 + 124);
  v13 = *((float *)v26 + 30);
  *(float32x2_t *)(a1 + 83) = vadd_f32(*(float32x2_t *)((char *)v11 + 112), v25);
  a1[85] = v13 + v12;
  Caver::GameSceneController::CreateHeroObjectAt();
  v14 = a1[83];
  v15 = a1[84];
  v16 = a1[15] + v14;
  v17 = a1[16] + v15;
  v18 = a1[85];
  v19 = a1[17] + v18;
  a1[22] = v14;
  a1[23] = v15;
  a1[24] = v18;
  a1[29] = v14;
  a1[30] = v15;
  a1[31] = v18;
  a1[18] = v16;
  a1[19] = v17;
  a1[20] = v19;
  a1[26] = v16;
  a1[27] = v17;
  a1[28] = v19;
  result = v26;
  if ( v26 )
  {
    v20 = *((_DWORD *)v26 + 2) - 1;
    *((_DWORD *)v26 + 2) = v20;
    if ( !v20 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

