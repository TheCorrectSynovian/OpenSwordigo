/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000465968
 * Mangled: _ZN5Caver5Scene6UpdateEf
 * Demangled: Caver::Scene::Update(float)
 *
 * Callers: 0
 *
 * Callees: 31
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F3E10  Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F5160  Caver::SceneObject::updateSpeedMultiplier(void)
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F5F10  Caver::CollisionPairSet::RegisterCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D70  Caver::ComponentManager::PurgeInactive(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F84C0  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *   0x00000000001F88A0  Caver::ProgramState::Update(float)
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *   0x00000000001F9280  Caver::SceneGrid::UpdateVisibleAreasWithCamera(Caver::Camera *)
 *   0x00000000001F9890  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x00000000001FA0B0  Caver::ComponentManager::Purge(void)
 *   0x00000000001FA720  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *   0x00000000001FBA50  Caver::Camera::AABBForZRange(float,float)
 *   0x00000000001FBC20  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001FC170  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *   0x00000000001FCC90  Caver::SceneObject::Update(float,bool,bool)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FF2B0  Caver::CollisionShape::CollidesWithShape(Caver::CollisionShape const&,float,Caver::CollisionInfo *)
 *   0x00000000001FF5D0  Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x0000000000200700  Caver::CollisionPairSet::Purge(void)
 *   0x0000000000202360  Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 317
 *   insn=0x0000000000465988 string=0x000000000046598C "["
 *   insn=0x000000000046598C string=0x0000000000465990 "h"
 *   insn=0x0000000000465994 string=0x0000000000465998 ""
 *   insn=0x0000000000465998 string=0x000000000046599C "`"
 *   insn=0x00000000004659A0 string=0x00000000004659A4 "h"
 *   insn=0x00000000004659A4 string=0x00000000004659A8 "i"@"
 *   insn=0x00000000004659A8 string=0x00000000004659AC "h&"
 *   insn=0x00000000004659AC string=0x00000000004659B0 ""
 *   insn=0x00000000004659B0 string=0x00000000004659B4 "?"
 *   insn=0x00000000004659B4 string=0x00000000004659B8 "h"
 *   insn=0x00000000004659BC string=0x00000000004659C0 "h"
 *   insn=0x00000000004659C4 string=0x00000000001F88A0 "0'"
 *   insn=0x00000000004659CC string=0x00000000004659D0 "h"
 *   insn=0x00000000004659D0 string=0x00000000004659D4 "\t\t"
 *   insn=0x00000000004659D4 string=0x00000000004659D8 "!}I"
 *   insn=0x00000000004659DC string=0x00000000004659E0 "(\t"
 *   insn=0x00000000004659E0 string=0x00000000004659E4 "`"A"
 *   insn=0x00000000004659F0 string=0x00000000001FBA50 "0'"
 *   insn=0x00000000004659F8 string=0x00000000004659FC "\tAI"
 *   insn=0x00000000004659FC string=0x0000000000465A00 "`"
 *   insn=0x0000000000465A08 string=0x0000000000465A0C " "
 *   insn=0x0000000000465A10 string=0x00000000001F3C90 "P'"
 *   insn=0x0000000000465A14 string=0x0000000000465A18 "hR"
 *   insn=0x0000000000465A18 string=0x0000000000465A1C "`"
 *   insn=0x0000000000465A24 string=0x0000000000465A28 "a"A"
 *   insn=0x0000000000465A2C string=0x0000000000465A30 "a"A"
 *   insn=0x0000000000465A2C string=0x00000000001F9280 "0'"
 *   insn=0x0000000000465A30 string=0x0000000000465A34 "`"
 *   insn=0x0000000000465A3C string=0x0000000000465A40 "v"
 *   insn=0x0000000000465A40 string=0x0000000000465A44 "t"
 *   insn=0x0000000000465A50 string=0x0000000000465A54 "9"
 *   insn=0x0000000000465A54 string=0x0000000000465A58 "w"
 *   insn=0x0000000000465A58 string=0x0000000000465A5C "x"
 *   insn=0x0000000000465A64 string=0x0000000000465A68 ""
 *   insn=0x0000000000465A68 string=0x0000000000465A6C "H"
 *   insn=0x0000000000465A6C string=0x0000000000465A70 ""
 *   insn=0x0000000000465A74 string=0x0000000000465A78 "U@"
 *   insn=0x0000000000465A80 string=0x0000000000465A84 ""
 *   insn=0x0000000000465A84 string=0x0000000000465A88 ""
 *   insn=0x0000000000465A8C string=0x0000000000465A90 ""
 *   insn=0x0000000000465A8C string=0x0000000000465AA4 ""
 *   insn=0x0000000000465A94 string=0x0000000000465A98 "U@"
 *   insn=0x0000000000465AA8 string=0x0000000000465AAC "Q@"
 *   insn=0x0000000000465ABC string=0x0000000000465AC0 "H"
 *   insn=0x0000000000465ACC string=0x0000000000465AD0 "U"
 *   insn=0x0000000000465ACC string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000465AD8 string=0x0000000000465ADC "A"
 *   insn=0x0000000000465AE8 string=0x0000000000465B28 "v"
 *   insn=0x0000000000465AF4 string=0x0000000000465AF8 "@"
 *   insn=0x0000000000465AF8 string=0x0000000000465AFC ""
 *   insn=0x0000000000465AFC string=0x0000000000465B00 ""
 *   insn=0x0000000000465B04 string=0x0000000000465B08 ""
 *   insn=0x0000000000465B08 string=0x0000000000465B0C ""
 *   insn=0x0000000000465B18 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000465B20 string=0x0000000000465B24 "A"
 *   insn=0x0000000000465B28 string=0x0000000000465B2C "u"
 *   insn=0x0000000000465B2C string=0x0000000000465B30 "tR"
 *   insn=0x0000000000465B3C string=0x0000000000465B40 "("
 *   insn=0x0000000000465B40 string=0x0000000000465B44 ""
 *   insn=0x0000000000465B44 string=0x0000000000465B48 "h"
 *   insn=0x0000000000465B4C string=0x0000000000465B50 "4X"
 *   insn=0x0000000000465B50 string=0x00000000001FBC20 "0'"
 *   insn=0x0000000000465B68 string=0x0000000000465BA8 "uV"
 *   insn=0x0000000000465B74 string=0x0000000000465B78 "@"
 *   insn=0x0000000000465B78 string=0x0000000000465B7C ""
 *   insn=0x0000000000465B7C string=0x0000000000465B80 ""
 *   insn=0x0000000000465B84 string=0x0000000000465B88 ""
 *   insn=0x0000000000465B88 string=0x0000000000465B8C ""
 *   insn=0x0000000000465BA0 string=0x0000000000465BA4 "A"
 *   insn=0x0000000000465BB0 string=0x0000000000465BB4 " "
 *   insn=0x0000000000465BB8 string=0x00000000001F3E10 "P'"
 *   insn=0x0000000000465BBC string=0x0000000000465BC0 "+"
 *   insn=0x0000000000465BC0 string=0x0000000000465C24 "t"
 *   insn=0x0000000000465BDC string=0x0000000000465BE0 ""
 *   insn=0x0000000000465BF0 string=0x0000000000465BF4 "6"
 *   insn=0x0000000000465BF8 string=0x0000000000465BFC ""
 *   insn=0x0000000000465C0C string=0x0000000000465C10 ""
 *   insn=0x0000000000465C1C string=0x0000000000465C20 "k"
 *   insn=0x0000000000465C24 string=0x0000000000465C28 "yB"
 *   insn=0x0000000000465C28 string=0x0000000000465C2C "?"
 *   insn=0x0000000000465C34 string=0x0000000000465C78 "h""
 *   insn=0x0000000000465C38 string=0x0000000000465C3C "?"
 *   insn=0x0000000000465C48 string=0x0000000000465C4C "h"
 *   insn=0x0000000000465C50 string=0x0000000000465C54 "C="
 *   insn=0x0000000000465C54 string=0x0000000000465C58 "h"@"
 *   insn=0x0000000000465C54 string=0x00000000001F5160 "P'"
 *   insn=0x0000000000465C58 string=0x0000000000465C5C "b.@9"
 *   insn=0x0000000000465C6C string=0x0000000000465C70 "\"
 *   insn=0x0000000000465C70 string=0x00000000001FCC90 "0'"
 *   insn=0x0000000000465C78 string=0x0000000000465C7C "i"
 *   insn=0x0000000000465C88 string=0x0000000000465C8C "i"
 *   insn=0x0000000000465C90 string=0x0000000000465C94 "a"
 *   insn=0x0000000000465C94 string=0x0000000000465CA0 "\n"
 *   insn=0x0000000000465C9C string=0x0000000000465CCC "+yj"
 *   insn=0x0000000000465CA0 string=0x0000000000465CA4 "+!"
 *   insn=0x0000000000465CA8 string=0x0000000000465CAC "m"
 *   insn=0x0000000000465CB0 string=0x0000000000465CB4 "kA"
 *   insn=0x0000000000465CBC string=0x0000000000465CC0 "a"
 *   insn=0x0000000000465CC0 string=0x0000000000465CC4 "_"
 *   insn=0x0000000000465CCC string=0x0000000000465CD0 "J"
 *   insn=0x0000000000465CD0 string=0x0000000000465CD4 "_"
 *   insn=0x0000000000465CE4 string=0x0000000000465CE8 "7"
 *   insn=0x0000000000465CE8 string=0x0000000000465CEC "?"
 *   insn=0x0000000000465CEC string=0x0000000000465CF0 "@"
 *   insn=0x0000000000465CF0 string=0x0000000000465D98 "?"
 *   insn=0x0000000000465CF4 string=0x0000000000465CF8 ""
 *   insn=0x0000000000465CFC string=0x0000000000465D2C ""
 *   insn=0x0000000000465D08 string=0x0000000000465D0C "@"
 *   insn=0x0000000000465D0C string=0x0000000000465D10 ""
 *   insn=0x0000000000465D10 string=0x0000000000465D14 ""
 *   insn=0x0000000000465D20 string=0x0000000000465D24 "x"
 *   insn=0x0000000000465D24 string=0x0000000000465D50 "@"
 *   insn=0x0000000000465D2C string=0x0000000000465D30 ""
 *   insn=0x0000000000465D34 string=0x0000000000465D38 "@"
 *   insn=0x0000000000465D38 string=0x0000000000465D3C ""
 *   insn=0x0000000000465D3C string=0x0000000000465D40 ""
 *   insn=0x0000000000465D50 string=0x0000000000465D54 ""
 *   insn=0x0000000000465D54 string=0x0000000000465D58 ""
 *   insn=0x0000000000465D5C string=0x0000000000465D60 ""
 *   insn=0x0000000000465D64 string=0x0000000000465D68 ""
 *   insn=0x0000000000465D70 string=0x0000000000465D74 "?"
 *   insn=0x0000000000465D78 string=0x0000000000465D7C "7"
 *   insn=0x0000000000465D7C string=0x0000000000465D80 "?"
 *   insn=0x0000000000465D84 string=0x0000000000465D88 "S"
 *   insn=0x0000000000465D88 string=0x0000000000465ED4 "`"
 *   insn=0x0000000000465D8C string=0x0000000000465D90 "HE"
 *   insn=0x0000000000465DA0 string=0x0000000000465DA4 ""
 *   insn=0x0000000000465DA8 string=0x0000000000465DAC "h"
 *   insn=0x0000000000465DA8 string=0x0000000000465E00 ""
 *   insn=0x0000000000465DAC string=0x0000000000465DB0 ""
 *   insn=0x0000000000465DB8 string=0x0000000000465DBC "\t@"
 *   insn=0x0000000000465DBC string=0x0000000000465DC0 ")"
 *   insn=0x0000000000465DC0 string=0x0000000000465DC4 "\t"
 *   insn=0x0000000000465DDC string=0x0000000000465DE0 "@"
 *   insn=0x0000000000465DE0 string=0x0000000000465DE4 ""
 *   insn=0x0000000000465DE4 string=0x0000000000465DE8 ""
 *   insn=0x0000000000465DE8 string=0x0000000000465DEC "A"
 *   insn=0x0000000000465DEC string=0x0000000000465DF0 ""
 *   insn=0x0000000000465DF0 string=0x0000000000465DF4 ""
 *   insn=0x0000000000465E00 string=0x0000000000465E04 "i"
 *   insn=0x0000000000465E10 string=0x0000000000465E14 "?"
 *   insn=0x0000000000465E14 string=0x0000000000465E18 "A"
 *   insn=0x0000000000465E18 string=0x0000000000465E1C "."
 *   insn=0x0000000000465E2C string=0x0000000000465E30 "+@"
 *   insn=0x0000000000465E34 string=0x0000000000465E38 ""
 *   insn=0x0000000000465E38 string=0x0000000000465E3C "h"
 *   insn=0x0000000000465E3C string=0x0000000000465E40 ""
 *   insn=0x0000000000465E3C string=0x0000000000465EA8 "h"
 *   insn=0x0000000000465E44 string=0x0000000000465E48 "h"
 *   insn=0x0000000000465E48 string=0x0000000000465E4C ""
 *   insn=0x0000000000465E50 string=0x0000000000465E54 "\t@"
 *   insn=0x0000000000465E54 string=0x0000000000465E58 ")"
 *   insn=0x0000000000465E58 string=0x0000000000465E5C "\t"
 *   insn=0x0000000000465E80 string=0x0000000000465E84 "@"
 *   insn=0x0000000000465E84 string=0x0000000000465E88 "@"
 *   insn=0x0000000000465E88 string=0x0000000000465E8C ""
 *   insn=0x0000000000465E8C string=0x0000000000465E90 ""
 *   insn=0x0000000000465E94 string=0x0000000000465E98 ""
 *   insn=0x0000000000465E98 string=0x0000000000465E9C ""
 *   insn=0x0000000000465EA8 string=0x0000000000465EAC ""
 *   insn=0x0000000000465EB0 string=0x0000000000465EB4 "\t@"
 *   insn=0x0000000000465EB4 string=0x0000000000465EB8 ")"
 *   insn=0x0000000000465EB8 string=0x0000000000465EBC "\t"
 *   insn=0x0000000000465EDC string=0x0000000000465EE0 "z"
 *   insn=0x0000000000465EDC string=0x00000000001F6D70 "0'"
 *   insn=0x0000000000465EE0 string=0x0000000000465EE4 "t"
 *   insn=0x0000000000465EE4 string=0x0000000000465EE8 "_"
 *   insn=0x0000000000465EE8 string=0x0000000000465EEC "`"
 *   insn=0x0000000000465EEC string=0x0000000000466078 "h"A"
 *   insn=0x0000000000465EF8 string=0x0000000000465EFC "["
 *   insn=0x0000000000465EFC string=0x0000000000465F00 "U"
 *   insn=0x0000000000465F04 string=0x0000000000465F08 "\t"
 *   insn=0x0000000000465F08 string=0x0000000000466028 "Z#"
 *   insn=0x0000000000465F18 string=0x0000000000465F1C "h"
 *   insn=0x0000000000465F20 string=0x0000000000465F24 "C_"
 *   insn=0x0000000000465F24 string=0x00000000001FDC30 "0'"
 *   insn=0x0000000000465F40 string=0x00000000001FC170 "0'"
 *   insn=0x0000000000465F50 string=0x0000000000465F54 "H"
 *   insn=0x0000000000465F68 string=0x0000000000465F6C "IN"
 *   insn=0x0000000000465F6C string=0x0000000000465F70 "H"
 *   insn=0x0000000000465F6C string=0x00000000001F9890 "0'"
 *   insn=0x0000000000465F78 string=0x0000000000465F7C "`"
 *   insn=0x0000000000465F84 string=0x0000000000465F88 ""
 *   insn=0x0000000000465F88 string=0x0000000000465F8C "Q@"
 *   insn=0x0000000000465F90 string=0x0000000000465F94 "@"
 *   insn=0x0000000000465F98 string=0x0000000000465F9C ""
 *   insn=0x0000000000465FAC string=0x0000000000465FB0 ""
 *   insn=0x0000000000465FAC string=0x00000000001FA720 "0'"
 *   insn=0x0000000000465FC4 string=0x0000000000465FC8 "2N"
 *   insn=0x0000000000465FCC string=0x0000000000465FDC "h"A"
 *   insn=0x0000000000465FD4 string=0x0000000000465FD8 "~e"
 *   insn=0x0000000000465FDC string=0x0000000000465FE0 "i&A"
 *   insn=0x0000000000465FE4 string=0x0000000000465FE8 ""
 *   insn=0x0000000000465FE8 string=0x0000000000466008 "i"
 *   insn=0x0000000000465FEC string=0x0000000000465FF0 "(y"
 *   insn=0x0000000000466000 string=0x0000000000466004 "("
 *   insn=0x0000000000466008 string=0x000000000046600C "\n"
 *   insn=0x000000000046600C string=0x0000000000466010 "8"
 *   insn=0x0000000000466010 string=0x0000000000466014 "j""
 *   insn=0x0000000000466028 string=0x000000000046602C "_"
 *   insn=0x0000000000466030 string=0x0000000000466034 "z"
 *   insn=0x0000000000466034 string=0x0000000000466038 "t"
 *   insn=0x000000000046604C string=0x0000000000466050 "@"
 *   insn=0x0000000000466050 string=0x0000000000466054 ""
 *   insn=0x0000000000466054 string=0x0000000000466058 ""
 *   insn=0x000000000046605C string=0x0000000000466060 ""
 *   insn=0x0000000000466060 string=0x0000000000466064 ""
 *   insn=0x0000000000466078 string=0x000000000046607C "z"
 *   insn=0x0000000000466084 string=0x0000000000466088 "w"
 *   insn=0x000000000046608C string=0x0000000000466090 ")A"
 *   insn=0x0000000000466098 string=0x000000000046609C "i"
 *   insn=0x00000000004660A0 string=0x00000000004660A4 "i"
 *   insn=0x00000000004660A4 string=0x00000000004660A8 ":y|"
 *   insn=0x00000000004660A8 string=0x00000000004660AC "I"
 *   insn=0x00000000004660B4 string=0x00000000004660B8 "X"
 *   insn=0x00000000004660C4 string=0x00000000001F84C0 "0'"
 *   insn=0x00000000004660E0 string=0x00000000004660E4 " "
 *   insn=0x00000000004660E4 string=0x00000000004660E8 "@\t"
 *   insn=0x00000000004660E8 string=0x00000000004660EC "?"
 *   insn=0x00000000004660EC string=0x00000000004660F0 "h"
 *   insn=0x00000000004660F0 string=0x00000000004660F4 "("
 *   insn=0x00000000004660F0 string=0x00000000004660FC "("
 *   insn=0x0000000000466104 string=0x0000000000466108 "`"
 *   insn=0x0000000000466104 string=0x00000000001F8C50 "0'"
 *   insn=0x0000000000466108 string=0x000000000046610C "h*@9"
 *   insn=0x0000000000466108 string=0x0000000000466114 "H"
 *   insn=0x000000000046610C string=0x0000000000466110 ""
 *   insn=0x0000000000466114 string=0x0000000000466118 ")"
 *   insn=0x0000000000466120 string=0x0000000000466124 "Hs@"
 *   insn=0x000000000046612C string=0x0000000000466130 "(s@"
 *   insn=0x0000000000466134 string=0x0000000000466138 "U"
 *   insn=0x0000000000466138 string=0x000000000046613C "9"
 *   insn=0x0000000000466144 string=0x0000000000466150 "!"
 *   insn=0x0000000000466154 string=0x00000000001F59D0 "P'"
 *   insn=0x0000000000466160 string=0x00000000001F3FD0 "P'"
 *   insn=0x000000000046617C string=0x0000000000466180 "Ld"
 *   insn=0x0000000000466180 string=0x0000000000466184 "`"
 *   insn=0x0000000000466188 string=0x000000000046618C ")"
 *   insn=0x000000000046618C string=0x0000000000466190 "\n"
 *   insn=0x0000000000466190 string=0x0000000000466194 "_"
 *   insn=0x0000000000466198 string=0x000000000046619C ")"
 *   insn=0x000000000046619C string=0x00000000004661A0 "?"
 *   insn=0x00000000004661A0 string=0x00000000004661A4 "`"
 *   insn=0x00000000004661B4 string=0x00000000004661B8 "V?"
 *   insn=0x00000000004661B8 string=0x00000000004661BC ""
 *   insn=0x00000000004661B8 string=0x00000000001F5F10 "P'"
 *   insn=0x00000000004661D0 string=0x00000000004661D4 " "
 *   insn=0x00000000004661E0 string=0x00000000004661E4 "8@"
 *   insn=0x0000000000466208 string=0x000000000046620C "(#"
 *   insn=0x0000000000466220 string=0x0000000000466224 ""
 *   insn=0x0000000000466234 string=0x0000000000583734 "o"
 *   insn=0x0000000000466240 string=0x0000000000466244 "h"@"
 *   insn=0x0000000000466240 string=0x0000000000466258 "`"
 *   insn=0x0000000000466248 string=0x000000000046624C "j"
 *   insn=0x000000000046624C string=0x0000000000466250 "`"
 *   insn=0x0000000000466250 string=0x0000000000466254 "+i"
 *   insn=0x000000000046625C string=0x00000000001FA0B0 "0'"
 *   insn=0x0000000000466260 string=0x0000000000466264 ""
 *   insn=0x000000000046626C string=0x0000000000466270 "A"
 *   insn=0x0000000000466298 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004662A0 string=0x00000000004662A4 "("
 *   insn=0x00000000004662A4 string=0x00000000004662A8 "\t\t@"
 *   insn=0x00000000004662A8 string=0x00000000004662AC ")"
 *   insn=0x00000000004662AC string=0x00000000004662B0 "\t\t"
 *   insn=0x00000000004662B4 string=0x00000000004662B8 "\t"
 *   insn=0x00000000004662B8 string=0x00000000004662BC ")"
 *   insn=0x00000000004662C0 string=0x00000000004662C4 " "
 *   insn=0x00000000004662C4 string=0x00000000004662C8 "8"
 *   insn=0x00000000004662D4 string=0x00000000004662D8 "\t\t@"
 *   insn=0x00000000004662D8 string=0x00000000004662DC ")"
 *   insn=0x00000000004662DC string=0x00000000004662E0 "\t\t"
 *   insn=0x00000000004662E0 string=0x00000000004662E4 "!"
 *   insn=0x00000000004662E4 string=0x00000000004662E8 "\t"
 *   insn=0x00000000004662E8 string=0x00000000004662EC ")"
 *   insn=0x00000000004662F0 string=0x00000000004662F4 " "
 *   insn=0x00000000004662F4 string=0x00000000004662F8 ","
 *   insn=0x0000000000466300 string=0x0000000000466304 ""
 *   insn=0x0000000000466304 string=0x0000000000466308 ""
 *   insn=0x000000000046630C string=0x0000000000466310 ""
 *   insn=0x0000000000466310 string=0x0000000000466314 ""
 *   insn=0x000000000046631C string=0x0000000000466320 """
 *   insn=0x000000000046632C string=0x0000000000466330 "\t\t@"
 *   insn=0x0000000000466330 string=0x0000000000466334 ")"
 *   insn=0x0000000000466334 string=0x0000000000466338 "\t\t"
 *   insn=0x0000000000466338 string=0x000000000046633C "a"
 *   insn=0x000000000046633C string=0x0000000000466340 "\t"
 *   insn=0x0000000000466340 string=0x0000000000466344 ")"
 *   insn=0x0000000000466348 string=0x000000000046634C " "
 *   insn=0x0000000000466358 string=0x000000000046635C "@"
 *   insn=0x000000000046635C string=0x0000000000466360 ""
 *   insn=0x0000000000466360 string=0x0000000000466364 ""
 *   insn=0x0000000000466368 string=0x000000000046636C ""
 *   insn=0x000000000046636C string=0x0000000000466370 ""
 *   insn=0x0000000000466378 string=0x000000000046637C ""
 *   insn=0x0000000000466380 string=0x0000000000466384 "6"
 *   insn=0x0000000000466388 string=0x000000000046638C ""
 *   insn=0x0000000000466398 string=0x000000000046639C ""
 *   insn=0x00000000004663A8 string=0x00000000004663AC "Fm"
 *   insn=0x00000000004663C0 string=0x00000000004663C4 "S"
 *   insn=0x00000000004663C4 string=0x00000000004663C8 "h"
 *   insn=0x00000000004663CC string=0x00000000004663D0 ")|@"
 *   insn=0x00000000004663D0 string=0x00000000004663D4 ")"
 *   insn=0x00000000004663D4 string=0x00000000004663D8 "("
 *   insn=0x00000000004663D4 string=0x00000000004663F8 ""
 *   insn=0x00000000004663DC string=0x00000000004663E0 "*A@"
 *   insn=0x00000000004663E4 string=0x00000000004663E8 "1"
 *   insn=0x00000000004663E8 string=0x00000000004663EC ")"
 *   insn=0x00000000004663F0 string=0x00000000004663F4 "\t"
 *   insn=0x00000000004663F4 string=0x0000000000466418 ")"
 *   insn=0x00000000004663F8 string=0x00000000004663FC ""
 *   insn=0x0000000000466400 string=0x0000000000466404 "\t4C"
 *   insn=0x0000000000466408 string=0x000000000046640C "1"
 *   insn=0x0000000000466410 string=0x0000000000466414 "\t"
 *   insn=0x0000000000466418 string=0x000000000046641C " "
 *   insn=0x0000000000466420 string=0x0000000000466424 "\t"
 *   insn=0x0000000000466424 string=0x0000000000466428 "j="
 *   insn=0x0000000000466428 string=0x000000000046642C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::Update(Caver::Scene *this, float a2)
{
  int v4; // w8
  int v5; // w9
  _QWORD *v6; // x22
  _QWORD **v7; // x20
  _QWORD *v8; // x0
  _QWORD *v9; // x0
  __int64 v10; // x26
  _DWORD *v11; // x0
  _QWORD *v12; // x21
  int v13; // w8
  _QWORD *v14; // x22
  _QWORD **v15; // x21
  _QWORD *v16; // x1
  _QWORD *v17; // x22
  _DWORD *v18; // x0
  _QWORD *v19; // x20
  int v20; // w8
  int ObjectsNearCamera; // w0
  __int64 v22; // x20
  __int64 v23; // x21
  _DWORD *v24; // x22
  int v25; // w8
  _QWORD *v26; // x20
  _QWORD **i; // x25
  Caver::SceneObject *v28; // x22
  float v29; // s0
  signed __int64 v30; // x8
  __int64 v31; // x9
  signed __int64 j; // x10
  __int64 *v33; // x11
  unsigned __int64 v34; // x12
  __int64 v35; // x13
  __int64 v36; // x14
  __int64 v37; // x11
  _QWORD *v38; // x23
  __int64 v39; // x24
  int v40; // w8
  __int64 v41; // x24
  void (__fastcall *v42)(Caver::Scene *, __int128 *, _QWORD); // x8
  __int64 v43; // x0
  int v44; // w8
  __int64 v45; // x8
  void (__fastcall *v46)(Caver::Scene *, __int128 *, _QWORD); // x8
  _QWORD *v47; // x20
  _DWORD *v48; // x0
  int v49; // w8
  _DWORD **v50; // x26
  _DWORD **v51; // x20
  __int64 v52; // x21
  float v53; // s0
  Caver::CollisionShapeComponent **k; // x21
  Caver::CollisionShapeComponent **v55; // x28
  Caver::CollisionShapeComponent *v56; // x24
  Caver::SceneGridEntry *v57; // x1
  int v58; // w8
  _DWORD **v59; // x20
  _DWORD **v60; // x21
  _DWORD *v61; // x0
  int v62; // w8
  int v63; // w8
  int v64; // w23
  __int64 m; // x28
  unsigned __int64 v66; // x26
  int ObjectsInBounds; // w0
  int v68; // w20
  int v69; // w22
  int v70; // w9
  char *v71; // x25
  Caver::SceneObject *v72; // x0
  int v73; // w8
  Caver::SceneObject **v74; // x21
  Caver::Rectangle *v75; // x0
  char v76; // w0
  Caver::SceneObject *v77; // x8
  __int64 v78; // x9
  char v79; // w0
  Caver::SceneObject *v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  Caver::SceneGrid *v84; // [xsp+50h] [xbp-C8h]
  int *v85; // [xsp+58h] [xbp-C0h]
  Caver::SceneGrid *v86; // [xsp+60h] [xbp-B8h]
  void **v87; // [xsp+68h] [xbp-B0h] BYREF
  void **v88; // [xsp+70h] [xbp-A8h] BYREF
  __int128 v89; // [xsp+78h] [xbp-A0h] BYREF
  __int64 v90; // [xsp+88h] [xbp-90h]
  __int64 v91; // [xsp+90h] [xbp-88h]
  __int64 v92; // [xsp+98h] [xbp-80h]
  float32x2_t v93; // [xsp+A0h] [xbp-78h]
  char v94; // [xsp+ACh] [xbp-6Ch]
  __int64 v95; // [xsp+B0h] [xbp-68h]

  v95 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)this + 196);
  v5 = *((_DWORD *)this + 8);
  *((float *)this + 9) = a2;
  *((_DWORD *)this + 196) = v4 + 1;
  *((_BYTE *)this + 120) = v5 > 0;
  Caver::ProgramState::Update((Caver::Scene *)((char *)this + 40), a2);
  *(_QWORD *)((char *)this + 804) = 0x43960000C3960000LL;
  Caver::Camera::AABBForZRange((__int64 *)&v89, *((Caver::Camera **)this + 72), -300.0, 300.0);
  *(_OWORD *)((char *)this + 812) = v89;
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v89, (Caver::Scene *)((char *)this + 812), 200.0);
  v84 = (Caver::Scene *)((char *)this + 864);
  *(_OWORD *)((char *)this + 788) = v89;
  Caver::SceneGrid::UpdateVisibleAreasWithCamera();
  v86 = (Caver::Scene *)((char *)this + 928);
  Caver::SceneGrid::UpdateVisibleAreasWithCamera();
  v6 = (_QWORD *)*((_QWORD *)this + 44);
  v7 = (_QWORD **)((char *)this + 352);
  if ( (_QWORD *)((char *)this + 352) != v6 )
  {
    do
    {
      v8 = (_QWORD *)v6[2];
      if ( v8[5] )
      {
        (*(void (__fastcall **)(_QWORD *, char *))(*v8 + 168LL))(v8, (char *)this + 384);
        v9 = (_QWORD *)v6[2];
        if ( *(_BYTE *)(v9[5] + 240LL) )
        {
          (*(void (__fastcall **)(_QWORD *, char *))(*v9 + 168LL))(v9, (char *)this + 480);
          v9 = (_QWORD *)v6[2];
        }
        if ( ((*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*v9 + 160LL))(
                v9,
                Caver::CollisionShapeComponent::Interface)
            & 1) != 0 )
        {
          v10 = *(_QWORD *)(v6[2] + 40LL);
          if ( !*(_BYTE *)(v10 + 180) )
          {
            Caver::SceneObject::RegisterForWorldBoundsUpdate(*(Caver::SceneObject **)(v6[2] + 40LL));
            *(_BYTE *)(v10 + 180) = 1;
          }
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v7 != v6 );
    v6 = *v7;
  }
  if ( v6 != v7 )
  {
    do
    {
      v11 = (_DWORD *)v6[2];
      v12 = (_QWORD *)*v6;
      if ( v11 )
      {
        v13 = v11[2] - 1;
        v11[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      operator delete(v6);
      v6 = v12;
    }
    while ( v12 != v7 );
  }
  v14 = (_QWORD *)*((_QWORD *)this + 46);
  v15 = (_QWORD **)((char *)this + 368);
  *((_QWORD *)this + 44) = v7;
  *((_QWORD *)this + 45) = v7;
  if ( v14 != (_QWORD *)((char *)this + 368) )
  {
    do
    {
      v16 = v14 + 2;
      if ( !*(_BYTE *)(v14[2] + 240LL) )
        Caver::Scene::ActivateObject();
      v14 = (_QWORD *)*v14;
    }
    while ( v15 != v14 );
    v17 = *v15;
    if ( *v15 != v15 )
    {
      do
      {
        v18 = (_DWORD *)v17[2];
        v19 = (_QWORD *)*v17;
        if ( v18 )
        {
          v20 = v18[2] - 1;
          v18[2] = v20;
          if ( !v20 )
            (*(void (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)v18 + 8LL))(v18, v16);
        }
        operator delete(v17);
        v17 = v19;
      }
      while ( v19 != v15 );
    }
    *((_QWORD *)this + 46) = v15;
    *((_QWORD *)this + 47) = v15;
  }
  ObjectsNearCamera = Caver::SceneGrid::GetObjectsNearCamera(v84, 200.0, &v87);
  if ( ObjectsNearCamera >= 1 )
  {
    v22 = 0;
    v23 = ObjectsNearCamera;
    do
    {
      v24 = v87[v22];
      *(_QWORD *)&v89 = v24;
      if ( v24 )
        ++v24[2];
      Caver::Scene::ActivateObject();
      if ( v24 )
      {
        v25 = v24[2] - 1;
        v24[2] = v25;
        if ( !v25 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 8LL))(v24);
      }
      ++v22;
    }
    while ( v22 < v23 );
  }
  v26 = (_QWORD *)*((_QWORD *)this + 34);
  for ( i = (_QWORD **)((char *)this + 272); i != v26; v26 = (_QWORD *)*v26 )
  {
    v28 = (Caver::SceneObject *)v26[2];
    if ( !*((_QWORD *)v28 + 6) )
    {
      Caver::SceneObject::updateSpeedMultiplier((Caver::SceneObject *)v26[2]);
      Caver::SceneObject::Update(v28, v29 * a2, *((_DWORD *)this + 8) > 0, *((_BYTE *)this + 11));
    }
  }
  v30 = *((int *)this + 72);
  v85 = (int *)((char *)this + 288);
  if ( (int)v30 >= 1 )
  {
    v31 = *((_QWORD *)this + 37);
    if ( (_DWORD)v30 == 1 )
    {
      for ( j = 0; j < v30; ++j )
      {
LABEL_44:
        v37 = *(_QWORD *)(v31 + 8 * j);
        *(_BYTE *)(v37 + 448) = 0;
      }
      goto LABEL_45;
    }
    j = v30 & 0xFFFFFFFFFFFFFFFELL;
    v33 = (__int64 *)(v31 + 8);
    v34 = v30 & 0xFFFFFFFFFFFFFFFELL;
    do
    {
      v35 = *(v33 - 1);
      v36 = *v33;
      v34 -= 2LL;
      v33 += 2;
      *(_BYTE *)(v35 + 448) = 0;
      *(_BYTE *)(v36 + 448) = 0;
    }
    while ( v34 );
    if ( j != v30 )
      goto LABEL_44;
  }
LABEL_45:
  *v85 = 0;
  v38 = *i;
  if ( i == *i )
    goto LABEL_59;
  do
  {
    v39 = v38[2];
    if ( !*(_BYTE *)(v39 + 242) )
    {
      if ( !*(_BYTE *)(v39 + 241) )
        goto LABEL_55;
      *(_QWORD *)&v89 = v38[2];
      ++*(_DWORD *)(v39 + 8);
      Caver::Scene::ActivateObject();
LABEL_53:
      v40 = *(_DWORD *)(v39 + 8) - 1;
      *(_DWORD *)(v39 + 8) = v40;
      if ( !v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      goto LABEL_55;
    }
    *(_BYTE *)(v39 + 242) = 0;
    *(_QWORD *)&v89 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    Caver::Scene::ActivateObject();
    if ( v39 )
      goto LABEL_53;
LABEL_55:
    v38 = (_QWORD *)*v38;
  }
  while ( i != v38 );
  v38 = *i;
  if ( i != *i )
  {
    while ( 1 )
    {
      v41 = v38[2];
      if ( *(_BYTE *)(v41 + 232) )
        break;
      if ( *(_DWORD *)(v41 + 236) == *((_DWORD *)this + 196) )
      {
        v38 = (_QWORD *)*v38;
        if ( i == v38 )
          goto LABEL_77;
      }
      else
      {
        Caver::SceneObject::HandleMessage((Caver::SceneObject *)v38[2], 6, 0);
        v45 = *(_QWORD *)(v41 + 80);
        *(_BYTE *)(v41 + 240) = 0;
        if ( *(_QWORD *)(v45 - 24) && !*(_BYTE *)(v41 + 232) )
          goto LABEL_73;
        v46 = *(void (__fastcall **)(Caver::Scene *, __int128 *, _QWORD))(*(_QWORD *)this + 48LL);
        *(_QWORD *)&v89 = v41;
        ++*(_DWORD *)(v41 + 8);
        v46(this, &v89, 0);
LABEL_64:
        v43 = v89;
        if ( (_QWORD)v89 )
        {
          v44 = *(_DWORD *)(v89 + 8) - 1;
          *(_DWORD *)(v89 + 8) = v44;
          if ( !v44 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
        }
LABEL_73:
        v47 = (_QWORD *)*v38;
        sub_52A9C8(v38);
        v48 = (_DWORD *)v38[2];
        if ( v48 )
        {
          v49 = v48[2] - 1;
          v48[2] = v49;
          if ( !v49 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v48 + 8LL))(v48);
        }
        operator delete(v38);
        v38 = v47;
LABEL_59:
        if ( i == v38 )
          goto LABEL_77;
      }
    }
    v42 = *(void (__fastcall **)(Caver::Scene *, __int128 *, _QWORD))(*(_QWORD *)this + 48LL);
    *(_QWORD *)&v89 = v38[2];
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v42(this, &v89, 0);
    goto LABEL_64;
  }
LABEL_77:
  Caver::ComponentManager::PurgeInactive((Caver::Scene *)((char *)this + 480));
  v50 = (_DWORD **)*((_QWORD *)this + 104);
  v51 = (_DWORD **)*((_QWORD *)this + 105);
  if ( v50 != v51 )
  {
    do
    {
      v52 = (__int64)*v50;
      if ( *((_QWORD *)*v50 + 4) )
      {
        v89 = *(_OWORD *)(v52 + 148);
        if ( *(_BYTE *)(v52 + 144) )
          Caver::Rectangle::FlipHorizontally((Caver::Rectangle *)&v89);
        v53 = *(float *)(v52 + 128);
        LODWORD(v88) = *(_DWORD *)(v52 + 140);
        HIDWORD(v88) = (_DWORD)v88;
        Caver::Rectangle::Transform(
          (Caver::Rectangle *)&v89,
          (const Caver::Vector2 *)(v52 + 112),
          v53,
          (const Caver::Vector2 *)&v88);
        *(_OWORD *)(v52 + 164) = v89;
        *(_BYTE *)(v52 + 180) = 0;
        Caver::SceneGrid::MoveObject(
          v84,
          (Caver::SceneGridEntry *)(*v50 + 62),
          (const Caver::Rectangle *)(*v50 + 41),
          *((float *)*v50 + 30) + *((float *)*v50 + 46));
        v55 = (Caver::CollisionShapeComponent **)*((_QWORD *)*v50 + 24);
        for ( k = (Caver::CollisionShapeComponent **)*((_QWORD *)*v50 + 25); k != v55; ++v55 )
        {
          if ( ((*(__int64 (__fastcall **)(Caver::CollisionShapeComponent *, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v55 + 160LL))(
                  *v55,
                  Caver::CollisionShapeComponent::Interface)
              & 1) != 0 )
          {
            v56 = *v55;
            if ( *((_BYTE *)*v55 + 376) )
            {
              Caver::CollisionShapeComponent::UpdateWorldAABB(*v55);
              v57 = (Caver::CollisionShapeComponent *)((char *)v56 + 400);
              if ( *((_QWORD *)v56 + 50) )
                Caver::SceneGrid::MoveObject(v86, v57, (Caver::CollisionShapeComponent *)((char *)v56 + 360), 0.0);
              else
                Caver::SceneGrid::AddObject(v86, v57, (Caver::CollisionShapeComponent *)((char *)v56 + 360), 0.0);
              v58 = *((_DWORD *)this + 72);
              if ( v58 >= *((_DWORD *)this + 73) )
              {
                Caver::FastVector<Caver::CollisionShapeComponent *>::Resize();
                v58 = *v85;
              }
              *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v58) = v56;
              *((_DWORD *)this + 72) = v58 + 1;
              *((_BYTE *)v56 + 448) = 1;
            }
          }
        }
      }
      ++v50;
    }
    while ( v50 != v51 );
    v50 = (_DWORD **)*((_QWORD *)this + 104);
    v59 = (_DWORD **)*((_QWORD *)this + 105);
    if ( v59 != v50 )
    {
      v60 = (_DWORD **)*((_QWORD *)this + 104);
      do
      {
        v61 = *v60;
        if ( *v60 )
        {
          v62 = v61[2] - 1;
          v61[2] = v62;
          if ( !v62 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v61 + 8LL))(v61);
        }
        ++v60;
      }
      while ( v59 != v60 );
    }
  }
  v63 = *((_DWORD *)this + 72);
  *((_QWORD *)this + 105) = v50;
  if ( v63 >= 1 )
  {
    v64 = *((_DWORD *)this + 196);
    for ( m = 0; m < v63; ++m )
    {
      v66 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * m);
      if ( *(_BYTE *)(v66 + 376) )
      {
        ObjectsInBounds = Caver::SceneGrid::GetObjectsInBounds(v86, (const Caver::Rectangle *)(v66 + 360), &v88);
        v68 = ObjectsInBounds - 1;
        if ( ObjectsInBounds >= 1 )
        {
          v69 = 0;
          do
          {
            if ( (v64 & 1) != 0 )
              v70 = v69;
            else
              v70 = v68;
            v71 = (char *)v88[v70];
            v72 = (Caver::SceneObject *)*((_QWORD *)v71 + 5);
            if ( v72
              && ((unsigned __int64)v71 > v66 || !v71[448])
              && v71[376]
              && ((Caver::SceneObject::isHidden(v72) & 1) == 0 || *((_BYTE *)this + 10))
              && *(_QWORD *)(v66 + 40) != *((_QWORD *)v71 + 5) )
            {
              if ( *(_DWORD *)(v66 + 112) == 3 )
              {
                v73 = *((_DWORD *)v71 + 28);
                if ( v73 == 3 )
                  v74 = (Caver::SceneObject **)v66;
                else
                  v74 = (Caver::SceneObject **)v71;
                if ( v73 != 3 )
                  v71 = (char *)v66;
                v75 = (Caver::Rectangle *)(v74 + 45);
              }
              else
              {
                v75 = (Caver::Rectangle *)(v66 + 360);
                v74 = (Caver::SceneObject **)v66;
              }
              if ( (Caver::Rectangle::IntersectsWithRect(v75, (const Caver::Rectangle *)(v71 + 360)) & 1) != 0 )
              {
                Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v74);
                Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v71);
                Caver::CollisionShape::CollidesWithShape();
                if ( (v76 & 1) != 0 )
                {
                  v77 = v74[5];
                  v78 = *((_QWORD *)v71 + 5);
                  if ( *((_QWORD *)v77 + 6) != v78 && *(Caver::SceneObject **)(v78 + 48) != v77 )
                  {
                    *(_QWORD *)&v89 = v74;
                    *((_QWORD *)&v89 + 1) = v71;
                    Caver::CollisionPairSet::RegisterCollision();
                    v94 = v79 & 1;
                    Caver::SceneObject::HandleMessage(v74[5], 7, &v89);
                    v80 = (Caver::SceneObject *)*((_QWORD *)v71 + 5);
                    v81 = *((_QWORD *)v80 + 14);
                    v93.n64_u64[0] = vneg_f32(v93).n64_u64[0];
                    *(_QWORD *)&v89 = v71;
                    *((_QWORD *)&v89 + 1) = v74;
                    v90 = v81;
                    v82 = v91;
                    v91 = v92;
                    v92 = v82;
                    Caver::SceneObject::HandleMessage(v80, 7, &v89);
                    *((_BYTE *)v74 + 136) = 1;
                    v71[136] = 1;
                  }
                }
              }
            }
            --v68;
            ++v69;
          }
          while ( v68 != -1 );
        }
        v63 = *v85;
      }
    }
  }
  if ( a2 > 0.001 && *((int *)this + 8) < 1 )
    Caver::CollisionPairSet::Purge((Caver::Scene *)((char *)this + 304));
  return Caver::ComponentManager::Purge((Caver::Scene *)((char *)this + 384));
}

