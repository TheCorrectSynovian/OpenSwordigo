/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000369AD0
 * Mangled: _ZN5Caver20HeroEquipmentManager17ApplyArmorTrinketERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FE030  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 24
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7920  Caver::CharacterState::WeaponDamageRange(void)
 *   0x00000000001F7F30  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000001FE740  Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x00000000002A4D3C  Caver::OrbitControllerComponent::className(void)
 *   0x00000000005677D4  sub_5677D4
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 231
 *   insn=0x0000000000369AEC string=0x0000000000369AF0 "Y"
 *   insn=0x0000000000369AF0 string=0x0000000000369AF4 "("
 *   insn=0x0000000000369B20 string=0x0000000000369B24 "/Q"
 *   insn=0x0000000000369B24 string=0x00000000001FDFE0 "0'"
 *   insn=0x0000000000369B28 string=0x0000000000369B2C "a"
 *   insn=0x0000000000369B44 string=0x0000000000369B48 "@"
 *   insn=0x0000000000369B48 string=0x0000000000369B4C ""
 *   insn=0x0000000000369B4C string=0x0000000000369B50 ""
 *   insn=0x0000000000369B54 string=0x0000000000369B58 ""
 *   insn=0x0000000000369B58 string=0x0000000000369B5C ""
 *   insn=0x0000000000369B70 string=0x0000000000369B74 "h"
 *   insn=0x0000000000369B80 string=0x0000000000369B84 "i"
 *   insn=0x0000000000369B8C string=0x0000000000369B90 "f"
 *   insn=0x0000000000369B90 string=0x0000000000369B94 "!"
 *   insn=0x0000000000369B94 string=0x000000000058FAAB "_wisp"
 *   insn=0x0000000000369BAC string=0x0000000000369BB0 "Z"
 *   insn=0x0000000000369BD8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000369BE4 string=0x0000000000369BE8 "@"
 *   insn=0x0000000000369BE4 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000369BEC string=0x0000000000369BF0 ""
 *   insn=0x0000000000369BF0 string=0x0000000000369BF4 ""
 *   insn=0x0000000000369BFC string=0x0000000000369C00 "t9"
 *   insn=0x0000000000369C00 string=0x00000000001F81D0 "0'"
 *   insn=0x0000000000369C08 string=0x0000000000369C0C ""
 *   insn=0x0000000000369C28 string=0x0000000000369C2C "}/"
 *   insn=0x0000000000369C2C string=0x00000000001F5A20 "P'"
 *   insn=0x0000000000369C34 string=0x0000000000369C38 "@"
 *   insn=0x0000000000369C38 string=0x0000000000369C3C ""
 *   insn=0x0000000000369C3C string=0x0000000000369C40 ""
 *   insn=0x0000000000369C44 string=0x0000000000369C48 ""
 *   insn=0x0000000000369C48 string=0x0000000000369C4C ""
 *   insn=0x0000000000369C58 string=0x0000000000369C5C "aZ"
 *   insn=0x0000000000369C88 string=0x0000000000369C8C "A1"
 *   insn=0x0000000000369C8C string=0x00000000001F6190 "0'"
 *   insn=0x0000000000369C90 string=0x0000000000369C94 "?"
 *   insn=0x0000000000369C9C string=0x0000000000369CA0 "("
 *   insn=0x0000000000369CA4 string=0x0000000000369CA8 "\t\t@"
 *   insn=0x0000000000369CA4 string=0x0000000000369CB4 "( "
 *   insn=0x0000000000369CA8 string=0x0000000000369CAC ")"
 *   insn=0x0000000000369CAC string=0x0000000000369CB0 "\t\t"
 *   insn=0x0000000000369CC0 string=0x0000000000369CC4 ""
 *   insn=0x0000000000369CC0 string=0x0000000000369CDC "@"
 *   insn=0x0000000000369CD0 string=0x00000000001F7F30 "0'"
 *   insn=0x0000000000369CDC string=0x0000000000369CE0 ""
 *   insn=0x0000000000369CE0 string=0x0000000000369CE4 ""
 *   insn=0x0000000000369CE8 string=0x0000000000369CEC ""
 *   insn=0x0000000000369CEC string=0x0000000000369CF0 ""
 *   insn=0x0000000000369D08 string=0x0000000000369D0C "!"
 *   insn=0x0000000000369D10 string=0x0000000000369D14 "("
 *   insn=0x0000000000369D20 string=0x00000000001FAC60 "0'"
 *   insn=0x0000000000369D24 string=0x0000000000369D28 "%"
 *   insn=0x0000000000369D2C string=0x0000000000369D30 ")=G"
 *   insn=0x0000000000369D30 string=0x0000000000369D34 "!"
 *   insn=0x0000000000369D38 string=0x0000000000369D3C "\t"
 *   insn=0x0000000000369D38 string=0x0000000000369D50 "\t"
 *   insn=0x0000000000369D3C string=0x0000000000369D40 "*"
 *   insn=0x0000000000369D40 string=0x0000000000369D44 "\n"
 *   insn=0x0000000000369D4C string=0x0000000000369D5C "?"
 *   insn=0x0000000000369D50 string=0x0000000000369D54 "*"
 *   insn=0x0000000000369D54 string=0x0000000000369D58 "\n"
 *   insn=0x0000000000369D70 string=0x0000000000369D74 ")=G"
 *   insn=0x0000000000369D74 string=0x0000000000369D78 "!"
 *   insn=0x0000000000369D7C string=0x0000000000369D80 "\t"
 *   insn=0x0000000000369D7C string=0x0000000000369D94 "\t"
 *   insn=0x0000000000369D80 string=0x0000000000369D84 "*"
 *   insn=0x0000000000369D84 string=0x0000000000369D88 "\n"
 *   insn=0x0000000000369D90 string=0x0000000000369DA0 "?"
 *   insn=0x0000000000369D94 string=0x0000000000369D98 "*"
 *   insn=0x0000000000369D98 string=0x0000000000369D9C "\n"
 *   insn=0x0000000000369DA0 string=0x0000000000369DA4 "l"
 *   insn=0x0000000000369DA8 string=0x0000000000369DAC "~"
 *   insn=0x0000000000369DB0 string=0x0000000000369DB4 "("
 *   insn=0x0000000000369DC0 string=0x0000000000369DC4 "!(B"
 *   insn=0x0000000000369DC4 string=0x000000000021C13C "@&"
 *   insn=0x0000000000369DC8 string=0x0000000000369DCC "h"
 *   insn=0x0000000000369DD0 string=0x0000000000369DD4 "H"
 *   insn=0x0000000000369DE0 string=0x0000000000369DE4 "!"
 *   insn=0x0000000000369DE4 string=0x000000000058EB23 "firetrinket"
 *   insn=0x0000000000369DFC string=0x0000000000369E00 ")"
 *   insn=0x0000000000369E10 string=0x0000000000369E14 "t"
 *   insn=0x0000000000369E14 string=0x0000000000369E18 "+"
 *   insn=0x0000000000369E1C string=0x0000000000369FD8 "("
 *   insn=0x0000000000369E28 string=0x0000000000369E2C ")=G"
 *   insn=0x0000000000369E2C string=0x0000000000369E30 "!"
 *   insn=0x0000000000369E34 string=0x0000000000369E38 "\t"
 *   insn=0x0000000000369E34 string=0x0000000000369E4C "\t"
 *   insn=0x0000000000369E38 string=0x0000000000369E3C "*"
 *   insn=0x0000000000369E3C string=0x0000000000369E40 "\n"
 *   insn=0x0000000000369E48 string=0x0000000000369E58 "?"
 *   insn=0x0000000000369E4C string=0x0000000000369E50 "*"
 *   insn=0x0000000000369E50 string=0x0000000000369E54 "\n"
 *   insn=0x0000000000369E60 string=0x0000000000369E64 "P"
 *   insn=0x0000000000369E64 string=0x0000000000369E68 "v"
 *   insn=0x0000000000369E74 string=0x0000000000369E78 "h"
 *   insn=0x0000000000369E7C string=0x0000000000369ED0 "W"
 *   insn=0x0000000000369E88 string=0x0000000000369E8C "!"
 *   insn=0x0000000000369E8C string=0x000000000058EB35 "icetrinket"
 *   insn=0x0000000000369EA4 string=0x0000000000369EA8 ")"
 *   insn=0x0000000000369EB0 string=0x0000000000369EB4 "A"
 *   insn=0x0000000000369EB4 string=0x0000000000369EB8 "V"
 *   insn=0x0000000000369EC4 string=0x0000000000369EC8 "h"
 *   insn=0x0000000000369EDC string=0x0000000000369EE0 ")=G"
 *   insn=0x0000000000369EE0 string=0x0000000000369EE4 "!"
 *   insn=0x0000000000369EE8 string=0x0000000000369EEC "\t"
 *   insn=0x0000000000369EE8 string=0x0000000000369F00 "\t"
 *   insn=0x0000000000369EEC string=0x0000000000369EF0 "*"
 *   insn=0x0000000000369EF0 string=0x0000000000369EF4 "\n"
 *   insn=0x0000000000369EFC string=0x0000000000369F0C "?"
 *   insn=0x0000000000369F00 string=0x0000000000369F04 "*"
 *   insn=0x0000000000369F04 string=0x0000000000369F08 "\n"
 *   insn=0x0000000000369F0C string=0x0000000000369F10 "L"
 *   insn=0x0000000000369F14 string=0x0000000000369F18 "#"
 *   insn=0x0000000000369F28 string=0x0000000000369F2C "h"
 *   insn=0x0000000000369F38 string=0x0000000000369F3C "h"
 *   insn=0x0000000000369F3C string=0x0000000000369F40 ""
 *   insn=0x0000000000369F48 string=0x0000000000369F4C "w"
 *   insn=0x0000000000369F4C string=0x0000000000369F50 "!"
 *   insn=0x0000000000369F50 string=0x000000000058EB45 "shadowtrinket"
 *   insn=0x0000000000369F68 string=0x0000000000369F6C ")"
 *   insn=0x0000000000369F7C string=0x0000000000369FD0 "V"
 *   insn=0x0000000000369F8C string=0x0000000000369F90 ")=G"
 *   insn=0x0000000000369F90 string=0x0000000000369F94 "!"
 *   insn=0x0000000000369F98 string=0x0000000000369F9C "\t"
 *   insn=0x0000000000369F98 string=0x0000000000369FB0 "\t"
 *   insn=0x0000000000369F9C string=0x0000000000369FA0 "*"
 *   insn=0x0000000000369FA0 string=0x0000000000369FA4 "\n"
 *   insn=0x0000000000369FAC string=0x0000000000369FBC "?"
 *   insn=0x0000000000369FB0 string=0x0000000000369FB4 "*"
 *   insn=0x0000000000369FB4 string=0x0000000000369FB8 "\n"
 *   insn=0x0000000000369FE0 string=0x0000000000369FE4 "!"
 *   insn=0x000000000036A008 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036A010 string=0x000000000036A014 "J"
 *   insn=0x000000000036A018 string=0x000000000036A01C "(a"
 *   insn=0x000000000036A028 string=0x000000000036A02C "J=G"
 *   insn=0x000000000036A02C string=0x000000000036A030 ")!"
 *   insn=0x000000000036A030 string=0x000000000036A034 "J"
 *   insn=0x000000000036A034 string=0x000000000036A038 "*"
 *   insn=0x000000000036A034 string=0x000000000036A0DC "*"
 *   insn=0x000000000036A038 string=0x000000000036A03C "K"
 *   insn=0x000000000036A03C string=0x000000000036A040 "+"
 *   insn=0x000000000036A044 string=0x000000000036A048 " "
 *   insn=0x000000000036A048 string=0x000000000036A0C8 "_"
 *   insn=0x000000000036A050 string=0x000000000036A054 "J"
 *   insn=0x000000000036A058 string=0x000000000036A05C "(a"
 *   insn=0x000000000036A068 string=0x000000000036A06C "J=G"
 *   insn=0x000000000036A06C string=0x000000000036A070 ")!"
 *   insn=0x000000000036A070 string=0x000000000036A074 "J"
 *   insn=0x000000000036A074 string=0x000000000036A078 "*"
 *   insn=0x000000000036A078 string=0x000000000036A07C "K"
 *   insn=0x000000000036A07C string=0x000000000036A080 "+"
 *   insn=0x000000000036A090 string=0x000000000036A094 "J"
 *   insn=0x000000000036A098 string=0x000000000036A09C "(a"
 *   insn=0x000000000036A0A8 string=0x000000000036A0AC "J=G"
 *   insn=0x000000000036A0AC string=0x000000000036A0B0 ")!"
 *   insn=0x000000000036A0B0 string=0x000000000036A0B4 "J"
 *   insn=0x000000000036A0B4 string=0x000000000036A0B8 "*"
 *   insn=0x000000000036A0B8 string=0x000000000036A0BC "K"
 *   insn=0x000000000036A0BC string=0x000000000036A0C0 "+"
 *   insn=0x000000000036A0C8 string=0x000000000036A0CC "L"
 *   insn=0x000000000036A0D4 string=0x000000000036A0D8 "f"
 *   insn=0x000000000036A0D8 string=0x000000000036A270 "M"
 *   insn=0x000000000036A0DC string=0x000000000036A0E0 "K"
 *   insn=0x000000000036A0E0 string=0x000000000036A0E4 "+"
 *   insn=0x000000000036A0E4 string=0x000000000036A0E8 "_"
 *   insn=0x000000000036A0E8 string=0x000000000036A0EC "-"
 *   insn=0x000000000036A0EC string=0x000000000036A0F0 "a"
 *   insn=0x000000000036A0F8 string=0x000000000036A0FC "J"
 *   insn=0x000000000036A100 string=0x000000000036A104 "(a"
 *   insn=0x000000000036A110 string=0x000000000036A114 "J=G"
 *   insn=0x000000000036A114 string=0x000000000036A118 ")!"
 *   insn=0x000000000036A11C string=0x000000000036A120 "*"
 *   insn=0x000000000036A11C string=0x000000000036A134 "*"
 *   insn=0x000000000036A120 string=0x000000000036A124 "K"
 *   insn=0x000000000036A124 string=0x000000000036A128 "+"
 *   insn=0x000000000036A130 string=0x000000000036A140 "_"
 *   insn=0x000000000036A134 string=0x000000000036A138 "K"
 *   insn=0x000000000036A138 string=0x000000000036A13C "+"
 *   insn=0x000000000036A160 string=0x000000000036A164 ")"
 *   insn=0x000000000036A16C string=0x000000000036A170 " "
 *   insn=0x000000000036A174 string=0x000000000036A178 ")=G"
 *   insn=0x000000000036A178 string=0x000000000036A17C "!"
 *   insn=0x000000000036A17C string=0x000000000036A180 ")"
 *   insn=0x000000000036A180 string=0x000000000036A184 "\t"
 *   insn=0x000000000036A180 string=0x000000000036A1A4 "\t"
 *   insn=0x000000000036A184 string=0x000000000036A188 "*"
 *   insn=0x000000000036A188 string=0x000000000036A18C "\n"
 *   insn=0x000000000036A190 string=0x000000000036A194 "?"
 *   insn=0x000000000036A19C string=0x000000000036A1A0 "4"
 *   insn=0x000000000036A1A4 string=0x000000000036A1A8 "*"
 *   insn=0x000000000036A1A8 string=0x000000000036A1AC "\n"
 *   insn=0x000000000036A1AC string=0x000000000036A1B0 "?"
 *   insn=0x000000000036A1B0 string=0x000000000036A1B4 "M"
 *   insn=0x000000000036A1B4 string=0x000000000036A1B8 "/"
 *   insn=0x000000000036A1C0 string=0x000000000036A1C4 "h"
 *   insn=0x000000000036A1C4 string=0x000000000036A1C8 "\t\t@"
 *   insn=0x000000000036A1C8 string=0x000000000036A1CC ")"
 *   insn=0x000000000036A1CC string=0x000000000036A1D0 "\t\t"
 *   insn=0x000000000036A1D4 string=0x000000000036A1D8 "\t"
 *   insn=0x000000000036A1D8 string=0x000000000036A1DC ")"
 *   insn=0x000000000036A1E0 string=0x000000000036A1E4 " "
 *   insn=0x000000000036A1E4 string=0x000000000036A1E8 "\n"
 *   insn=0x000000000036A1F4 string=0x000000000036A1F8 ".4"
 *   insn=0x000000000036A1F8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036A204 string=0x000000000036A208 ""
 *   insn=0x000000000036A214 string=0x000000000036A218 "@"
 *   insn=0x000000000036A218 string=0x000000000036A21C ""
 *   insn=0x000000000036A21C string=0x000000000036A220 ""
 *   insn=0x000000000036A224 string=0x000000000036A228 ""
 *   insn=0x000000000036A228 string=0x000000000036A22C ""
 *   insn=0x000000000036A244 string=0x000000000036A248 ")=G"
 *   insn=0x000000000036A248 string=0x000000000036A24C "!"
 *   insn=0x000000000036A24C string=0x000000000036A250 "i"
 *   insn=0x000000000036A250 string=0x000000000036A254 "\t"
 *   insn=0x000000000036A250 string=0x000000000036A27C "\t"
 *   insn=0x000000000036A254 string=0x000000000036A258 "*"
 *   insn=0x000000000036A258 string=0x000000000036A25C "\n"
 *   insn=0x000000000036A260 string=0x000000000036A264 "?"
 *   insn=0x000000000036A264 string=0x000000000036A268 "l"
 *   insn=0x000000000036A27C string=0x000000000036A280 "*"
 *   insn=0x000000000036A280 string=0x000000000036A284 "\n"
 *   insn=0x000000000036A284 string=0x000000000036A288 "?"
 *   insn=0x000000000036A288 string=0x000000000036A28C ""
 *   insn=0x000000000036A2AC string=0x000000000036A2B0 "v"
 *   insn=0x000000000036A2B4 string=0x000000000036A2B8 "`"
 *   insn=0x000000000036A2C0 string=0x000000000021C148 "@&"
 *   insn=0x000000000036A2D0 string=0x000000000036A2D4 "5"
 *   insn=0x000000000036A2D4 string=0x000000000036A2D8 "h"
 *   insn=0x000000000036A2E4 string=0x000000000036A2E8 ""
 *   insn=0x000000000036A2E4 string=0x00000000001F7920 "0'"
 *   insn=0x000000000036A2E8 string=0x000000000036A2EC ""
 *   insn=0x000000000036A2FC string=0x000000000036A300 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEquipmentManager::ApplyArmorTrinket(__int64 a1, __int64 *a2)
{
  Caver::SceneObject **v4; // x22
  Caver::SceneObject **v5; // x23
  Caver::SceneObject *v6; // t1
  Caver::SceneObject **v7; // x23
  Caver::SceneObject **v8; // x24
  Caver::SceneObject *v9; // x0
  int v10; // w8
  char *v11; // x0
  int v12; // w8
  int v13; // w27
  Caver::SceneObject *v14; // x24
  int v15; // w8
  Caver::SceneObject *v16; // x24
  int v17; // w8
  __int64 v18; // x24
  Caver::SceneObject **v19; // x1
  Caver::SceneObject *v20; // x8
  Caver::SceneObject *v21; // x0
  int v22; // w8
  void *v23; // x0
  int v24; // w21
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  __int64 v29; // x0
  _DWORD *v30; // x20
  int v31; // w22
  void *v32; // x0
  unsigned int *v33; // x8
  int v34; // w9
  int v35; // w23
  __int64 v36; // x8
  int v37; // w22
  void *v38; // x0
  unsigned int *v39; // x8
  int v40; // w9
  int v41; // w22
  __int64 v42; // x8
  int v43; // w19
  void *v44; // x0
  unsigned int *v45; // x8
  int v46; // w9
  _DWORD *v47; // [xsp+40h] [xbp-70h]
  Caver::SceneObject *v48; // [xsp+48h] [xbp-68h] BYREF
  _QWORD v49[2]; // [xsp+50h] [xbp-60h] BYREF

  v49[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(Caver::SceneObject ***)(a1 + 48);
  v5 = *(Caver::SceneObject ***)(a1 + 56);
  if ( v4 != v5 )
  {
    do
    {
      v6 = *v4++;
      Caver::SceneObject::RemoveChildObject(*(Caver::SceneObject **)(a1 + 16), v6, 1);
    }
    while ( v5 != v4 );
    v4 = *(Caver::SceneObject ***)(a1 + 48);
    v7 = *(Caver::SceneObject ***)(a1 + 56);
    if ( v7 != v4 )
    {
      v8 = *(Caver::SceneObject ***)(a1 + 48);
      do
      {
        v9 = *v8;
        if ( *v8 )
        {
          v10 = *((_DWORD *)v9 + 2) - 1;
          *((_DWORD *)v9 + 2) = v10;
          if ( !v10 )
            (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v9 + 8LL))(v9);
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
  }
  *(_QWORD *)(a1 + 56) = v4;
  if ( !*a2 )
  {
LABEL_27:
    if ( !*(_QWORD *)a1 )
      goto LABEL_41;
    goto LABEL_28;
  }
  sub_56A528(&v48, *a2 + 8);
  sub_56A528(v49, &v48);
  sub_5677D4(v49, "_wisp", 5);
  v11 = (char *)v48 - 24;
  if ( (__int64 *)((char *)v48 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)((char *)v48 - 8);
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
      operator delete(v11);
  }
  v12 = 0;
  do
  {
    v13 = v12;
    v14 = (Caver::SceneObject *)operator new(0x128u);
    Caver::SceneObject::SceneObject(v14);
    v15 = *((_DWORD *)v14 + 2);
    v48 = v14;
    *((_DWORD *)v14 + 2) = v15 + 1;
    Caver::SceneObject::SetAlwaysActive(v14);
    v16 = v48;
    Caver::ObjectLibrary::TemplateForName();
    Caver::SceneObject::InitWithTemplate(v16);
    if ( v47 )
    {
      v17 = v47[2] - 1;
      v47[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)())(*(_QWORD *)v47 + 8LL))();
    }
    v18 = Caver::SceneObject::ComponentWithInterface(v48, (__int64)Caver::OrbitControllerComponent::Interface);
    Caver::OrbitControllerComponent::FollowObject();
    if ( v13 == 1 )
      *(float *)(v18 + 136) = -*(float *)(v18 + 136);
    Caver::SceneObject::AddChildObject();
    v19 = *(Caver::SceneObject ***)(a1 + 56);
    if ( v19 == *(Caver::SceneObject ***)(a1 + 64) )
    {
      std::vector<boost::intrusive_ptr<Caver::SceneObject>>::_M_insert_aux();
      v21 = v48;
      if ( !v48 )
        goto LABEL_25;
LABEL_23:
      v22 = *((_DWORD *)v21 + 2) - 1;
      *((_DWORD *)v21 + 2) = v22;
      if ( !v22 )
        (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v21 + 8LL))(v21);
      goto LABEL_25;
    }
    v20 = v48;
    *v19 = v48;
    if ( v20 )
      ++*((_DWORD *)v20 + 2);
    *(_QWORD *)(a1 + 56) = v19 + 1;
    v21 = v48;
    if ( v48 )
      goto LABEL_23;
LABEL_25:
    v12 = 1;
  }
  while ( !v13 );
  v23 = (void *)(v49[0] - 24LL);
  if ( (__int64 *)(v49[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_27;
  v27 = (unsigned int *)(v49[0] - 8LL);
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
  if ( v28 > 0 )
    goto LABEL_27;
  operator delete(v23);
  if ( *(_QWORD *)a1 )
  {
LABEL_28:
    v24 = Caver::CharacterState::ItemCount();
    goto LABEL_42;
  }
LABEL_41:
  v24 = 1;
LABEL_42:
  v29 = Caver::SceneObject::ComponentWithInterface(
          *(Caver::SceneObject **)(a1 + 16),
          (__int64)Caver::HealthComponent::Interface);
  v30 = (_DWORD *)v29;
  if ( !*a2 )
  {
    if ( !v29 )
      return;
    goto LABEL_48;
  }
  sub_56A528(v49, *a2 + 8);
  v31 = sub_5689E0((int)v49, "firetrinket");
  v32 = (void *)(v49[0] - 24LL);
  if ( (__int64 *)(v49[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_44;
  v33 = (unsigned int *)(v49[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v34 = __ldaxr(v33);
    while ( __stlxr(v34 - 1, v33) );
  }
  else
  {
    v34 = (*v33)--;
  }
  if ( v34 > 0 )
  {
LABEL_44:
    if ( !v31 )
      goto LABEL_55;
LABEL_45:
    if ( !v30 )
    {
LABEL_62:
      v35 = 0;
      v36 = *a2;
      if ( *a2 )
        goto LABEL_58;
LABEL_63:
      if ( (v35 & 1) == 0 )
        return;
      goto LABEL_64;
    }
LABEL_48:
    v30[39] = 0;
    goto LABEL_57;
  }
  operator delete(v32);
  if ( v31 )
    goto LABEL_45;
LABEL_55:
  if ( !v30 )
    goto LABEL_62;
  v30[39] = v24;
LABEL_57:
  v35 = 1;
  v36 = *a2;
  if ( !*a2 )
    goto LABEL_63;
LABEL_58:
  sub_56A528(v49, v36 + 8);
  v37 = sub_5689E0((int)v49, "icetrinket");
  v38 = (void *)(v49[0] - 24LL);
  if ( (__int64 *)(v49[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_59;
  v39 = (unsigned int *)(v49[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v40 = __ldaxr(v39);
    while ( __stlxr(v40 - 1, v39) );
  }
  else
  {
    v40 = (*v39)--;
  }
  if ( v40 > 0 )
  {
LABEL_59:
    if ( !v37 )
      goto LABEL_71;
LABEL_60:
    if ( !v35 )
    {
LABEL_75:
      v41 = 0;
      v42 = *a2;
      if ( !*a2 )
        goto LABEL_78;
      goto LABEL_76;
    }
LABEL_64:
    v30[40] = 0;
    goto LABEL_73;
  }
  operator delete(v38);
  if ( v37 )
    goto LABEL_60;
LABEL_71:
  if ( !v35 )
    goto LABEL_75;
  v30[40] = v24;
LABEL_73:
  v41 = 1;
  v42 = *a2;
  if ( !*a2 )
  {
LABEL_78:
    if ( v41 )
      v30[41] = 0;
    return;
  }
LABEL_76:
  sub_56A528(v49, v42 + 8);
  v43 = sub_5689E0((int)v49, "shadowtrinket");
  v44 = (void *)(v49[0] - 24LL);
  if ( (__int64 *)(v49[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_77;
  v45 = (unsigned int *)(v49[0] - 8LL);
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
  if ( v46 > 0 )
  {
LABEL_77:
    if ( v43 )
      goto LABEL_78;
  }
  else
  {
    operator delete(v44);
    if ( v43 )
      goto LABEL_78;
  }
  if ( v41 )
    v30[41] = v24;
}

