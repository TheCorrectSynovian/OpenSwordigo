/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CD94
 * Mangled: _ZN5Caver29ProjectileControllerComponent11CreateBlastEv
 * Demangled: Caver::ProjectileControllerComponent::CreateBlast(void)
 *
 * Callers: 1
 *   0x00000000001FE150  Caver::ProjectileControllerComponent::CreateBlast(void)
 *
 * Callees: 28
 *   0x00000000001F3DF0  Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8E80  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FDEE0  Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&,float)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x00000000001FE150  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x000000000028D5F8  Caver::ProjectileControllerComponent::~ProjectileControllerComponent()
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 235
 *   insn=0x000000000028CDA4 string=0x000000000028CDA8 "V"
 *   insn=0x000000000028CDB8 string=0x000000000028CDBC "\t"
 *   insn=0x000000000028CDBC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028CDC0 string=0x000000000028CDC4 "["
 *   insn=0x000000000028CDC4 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000028CDCC string=0x000000000028CDD0 ""
 *   insn=0x000000000028CDD4 string=0x000000000028CDD8 "h"
 *   insn=0x000000000028CDD8 string=0x000000000028CDDC ""
 *   insn=0x000000000028CDE4 string=0x0000000000588C40 "particle_blast"
 *   insn=0x000000000028CDF0 string=0x000000000028CDF4 "qg"
 *   insn=0x000000000028CE04 string=0x000000000028CE08 "^"
 *   insn=0x000000000028CE14 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000028CE1C string=0x000000000028CE20 "@"
 *   insn=0x000000000028CE20 string=0x000000000028CE24 ""
 *   insn=0x000000000028CE24 string=0x000000000028CE28 ""
 *   insn=0x000000000028CE2C string=0x000000000028CE30 ""
 *   insn=0x000000000028CE30 string=0x000000000028CE34 ""
 *   insn=0x000000000028CE40 string=0x000000000028CE44 ")"
 *   insn=0x000000000028CE50 string=0x000000000028CE54 "h"
 *   insn=0x000000000028CE58 string=0x000000000028CE5C "\t9@"
 *   insn=0x000000000028CE5C string=0x000000000028CE60 "y@"
 *   insn=0x000000000028CE70 string=0x000000000028CE74 "W"
 *   insn=0x000000000028CE88 string=0x000000000028CE8C "!"
 *   insn=0x000000000028CE8C string=0x000000000028CE90 "  ""
 *   insn=0x000000000028CE9C string=0x000000000028CEA0 "\n"
 *   insn=0x000000000028CEB0 string=0x000000000028CEB4 "#8#"
 *   insn=0x000000000028CEB4 string=0x000000000028CEB8 "c"
 *   insn=0x000000000028CEB8 string=0x000000000028CEBC "` ""
 *   insn=0x000000000028CEC0 string=0x000000000028CEC4 ")"
 *   insn=0x000000000028CEC8 string=0x000000000028CECC "\t"
 *   insn=0x000000000028CEE0 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028CEFC string=0x000000000028CF00 "h"
 *   insn=0x000000000028CF04 string=0x000000000028CF08 ""
 *   insn=0x000000000028CF08 string=0x000000000028CF0C ""
 *   insn=0x000000000028CF1C string=0x000000000028CF20 "@"
 *   insn=0x000000000028CF20 string=0x000000000028CF24 ""
 *   insn=0x000000000028CF24 string=0x000000000028CF28 ""
 *   insn=0x000000000028CF2C string=0x000000000028CF30 ""
 *   insn=0x000000000028CF30 string=0x000000000028CF34 ""
 *   insn=0x000000000028CF60 string=0x000000000028CF64 ")=G"
 *   insn=0x000000000028CF64 string=0x000000000028CF68 "!"
 *   insn=0x000000000028CF6C string=0x000000000028CF70 "\t"
 *   insn=0x000000000028CF6C string=0x000000000028CF84 "\t"
 *   insn=0x000000000028CF70 string=0x000000000028CF74 "*"
 *   insn=0x000000000028CF74 string=0x000000000028CF78 "\n"
 *   insn=0x000000000028CF80 string=0x000000000028CF90 "?"
 *   insn=0x000000000028CF84 string=0x000000000028CF88 "*"
 *   insn=0x000000000028CF88 string=0x000000000028CF8C "\n"
 *   insn=0x000000000028CFA4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028CFAC string=0x000000000028CFB0 "("
 *   insn=0x000000000028CFB0 string=0x000000000028CFB4 "\t\t@"
 *   insn=0x000000000028CFB4 string=0x000000000028CFB8 ")"
 *   insn=0x000000000028CFB8 string=0x000000000028CFBC "\t\t"
 *   insn=0x000000000028CFC0 string=0x000000000028CFC4 "\t"
 *   insn=0x000000000028CFC4 string=0x000000000028CFC8 ")"
 *   insn=0x000000000028CFCC string=0x000000000028CFD0 " "
 *   insn=0x000000000028CFD0 string=0x000000000028CFD4 ""
 *   insn=0x000000000028CFE4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028CFE8 string=0x000000000028CFEC "6"
 *   insn=0x000000000028CFF8 string=0x000000000028CFFC ")"
 *   insn=0x000000000028D00C string=0x000000000028D010 ")=G"
 *   insn=0x000000000028D010 string=0x000000000028D014 "!"
 *   insn=0x000000000028D018 string=0x000000000028D01C "\t"
 *   insn=0x000000000028D018 string=0x000000000028D048 "\t"
 *   insn=0x000000000028D01C string=0x000000000028D020 "*"
 *   insn=0x000000000028D020 string=0x000000000028D024 "\n"
 *   insn=0x000000000028D028 string=0x000000000028D02C "?"
 *   insn=0x000000000028D040 string=0x000000000028D070 "@"
 *   insn=0x000000000028D048 string=0x000000000028D04C "*"
 *   insn=0x000000000028D04C string=0x000000000028D050 "\n"
 *   insn=0x000000000028D050 string=0x000000000028D054 "?"
 *   insn=0x000000000028D070 string=0x000000000028D074 ""
 *   insn=0x000000000028D074 string=0x000000000028D078 ""
 *   insn=0x000000000028D07C string=0x000000000028D080 ""
 *   insn=0x000000000028D080 string=0x000000000028D084 ""
 *   insn=0x000000000028D08C string=0x000000000028D090 ""
 *   insn=0x000000000028D0B4 string=0x000000000028D0B8 "X"
 *   insn=0x000000000028D0B8 string=0x000000000028D0BC ""
 *   insn=0x000000000028D0C4 string=0x000000000028D0C8 "?4"
 *   insn=0x000000000028D0CC string=0x000000000028D0D0 "`"
 *   insn=0x000000000028D0D0 string=0x000000000028D0D4 "?"
 *   insn=0x000000000028D0D8 string=0x000000000028D0DC "?"
 *   insn=0x000000000028D0DC string=0x000000000028D0E0 "!"
 *   insn=0x000000000028D0E0 string=0x000000000028D0E4 "h"
 *   insn=0x000000000028D0E0 string=0x000000000028D4A4 ""
 *   insn=0x000000000028D0E8 string=0x000000000028D0EC "\t"
 *   insn=0x000000000028D100 string=0x000000000028D104 "H"
 *   insn=0x000000000028D104 string=0x000000000028D3AC "h"
 *   insn=0x000000000028D110 string=0x000000000028D114 """
 *   insn=0x000000000028D118 string=0x000000000028D11C "B""
 *   insn=0x000000000028D124 string=0x000000000028D128 "-"
 *   insn=0x000000000028D128 string=0x000000000028D12C "H"
 *   insn=0x000000000028D140 string=0x000000000028D144 "A"
 *   insn=0x000000000028D14C string=0x000000000028D150 "!(B"
 *   insn=0x000000000028D150 string=0x000000000028D154 "#"
 *   insn=0x000000000028D150 string=0x000000000021C13C "@&"
 *   insn=0x000000000028D164 string=0x000000000028D2F4 "h>@"
 *   insn=0x000000000028D16C string=0x000000000028D170 "!hF"
 *   insn=0x000000000028D170 string=0x000000000028D174 ""
 *   insn=0x000000000028D170 string=0x000000000021C148 "@&"
 *   insn=0x000000000028D174 string=0x000000000028D178 "h>@"
 *   insn=0x000000000028D180 string=0x000000000028D184 "\t"
 *   insn=0x000000000028D184 string=0x000000000028D188 "?"
 *   insn=0x000000000028D18C string=0x000000000028D2FC "\t"
 *   insn=0x000000000028D190 string=0x000000000058493C "fff?"
 *   insn=0x000000000028D194 string=0x000000000028D198 "!=I"
 *   insn=0x000000000028D1A8 string=0x000000000028D1AC "!5D"
 *   insn=0x000000000028D1B0 string=0x000000000028D1B4 "E\n"
 *   insn=0x000000000028D1B4 string=0x000000000028D1B8 "}"
 *   insn=0x000000000028D1BC string=0x000000000028D1C0 "(\t"
 *   insn=0x000000000028D1C0 string=0x000000000028D2E4 "h"
 *   insn=0x000000000028D1C8 string=0x000000000028D1CC "!hF"
 *   insn=0x000000000028D1D8 string=0x000000000028D1DC "h>@"
 *   insn=0x000000000028D1D8 string=0x000000000028D20C "I"
 *   insn=0x000000000028D1DC string=0x000000000028D1E0 "h"
 *   insn=0x000000000028D1E4 string=0x000000000028D1E8 "\t"
 *   insn=0x000000000028D1EC string=0x000000000028D1F0 ")y"
 *   insn=0x000000000028D1F0 string=0x000000000028D1F4 "\t"
 *   insn=0x000000000028D1F8 string=0x000000000028D1FC "\t"
 *   insn=0x000000000028D1FC string=0x000000000028D200 "Iy"
 *   insn=0x000000000028D200 string=0x000000000028D204 "\t"
 *   insn=0x000000000028D204 string=0x000000000028D208 "\t"
 *   insn=0x000000000028D20C string=0x00000000001FDF30 "0'"
 *   insn=0x000000000028D214 string=0x00000000001FD0C0 "0'"
 *   insn=0x000000000028D21C string=0x0000000000588CAF "shield_block"
 *   insn=0x000000000028D228 string=0x000000000028D22C "cf"
 *   insn=0x000000000028D238 string=0x000000000028D23C "Y"
 *   insn=0x000000000028D23C string=0x00000000001FDFA0 "0'"
 *   insn=0x000000000028D24C string=0x000000000028D250 "$"
 *   insn=0x000000000028D250 string=0x00000000001FDEE0 "0'"
 *   insn=0x000000000028D258 string=0x000000000028D25C "@"
 *   insn=0x000000000028D25C string=0x000000000028D260 ""
 *   insn=0x000000000028D260 string=0x000000000028D264 ""
 *   insn=0x000000000028D268 string=0x000000000028D26C ""
 *   insn=0x000000000028D26C string=0x000000000028D270 ""
 *   insn=0x000000000028D27C string=0x000000000028D280 "@"
 *   insn=0x000000000028D280 string=0x000000000028D284 ""
 *   insn=0x000000000028D284 string=0x000000000028D288 ""
 *   insn=0x000000000028D28C string=0x000000000028D290 ""
 *   insn=0x000000000028D290 string=0x000000000028D294 ""
 *   insn=0x000000000028D2A0 string=0x000000000028D2A4 ")"
 *   insn=0x000000000028D2B4 string=0x000000000028D430 "h"
 *   insn=0x000000000028D2C0 string=0x000000000028D2C4 "h"
 *   insn=0x000000000028D2C4 string=0x000000000028D2C8 "J3"
 *   insn=0x000000000028D2C8 string=0x000000000028D2D0 "A"
 *   insn=0x000000000028D2D4 string=0x000000000028D2D8 " "
 *   insn=0x000000000028D2DC string=0x000000000028D2E0 "X"
 *   insn=0x000000000028D2E0 string=0x000000000028D440 "\n"
 *   insn=0x000000000028D2E8 string=0x000000000028D2EC "\t"
 *   insn=0x000000000028D2EC string=0x000000000028D2F0 "k"
 *   insn=0x000000000028D2FC string=0x000000000028D300 "i"
 *   insn=0x000000000028D304 string=0x000000000028D308 ""
 *   insn=0x000000000028D318 string=0x000000000028D31C "-"
 *   insn=0x000000000028D31C string=0x000000000028D320 "h"
 *   insn=0x000000000028D31C string=0x00000000001F3FD0 "P'"
 *   insn=0x000000000028D32C string=0x00000000001F8E80 "0'"
 *   insn=0x000000000028D330 string=0x000000000028D334 "v>@"
 *   insn=0x000000000028D33C string=0x000000000028D34C "h"
 *   insn=0x000000000028D340 string=0x000000000028D344 ""
 *   insn=0x000000000028D34C string=0x000000000028D350 "5@"
 *   insn=0x000000000028D35C string=0x00000000001F8E10 "0'"
 *   insn=0x000000000028D384 string=0x00000000001F3DF0 "P'"
 *   insn=0x000000000028D38C string=0x000000000028D390 "@"
 *   insn=0x000000000028D390 string=0x000000000028D394 ""
 *   insn=0x000000000028D394 string=0x000000000028D398 ""
 *   insn=0x000000000028D39C string=0x000000000028D3A0 ""
 *   insn=0x000000000028D3A0 string=0x000000000028D3A4 ""
 *   insn=0x000000000028D3B0 string=0x000000000028D3B4 "H"
 *   insn=0x000000000028D3B4 string=0x000000000028D3B8 "h"
 *   insn=0x000000000028D3BC string=0x000000000028D3C0 "("
 *   insn=0x000000000028D3C4 string=0x000000000028D3C8 "!"
 *   insn=0x000000000028D3C8 string=0x000000000028D3CC " \t "
 *   insn=0x000000000028D3D4 string=0x000000000028D3D8 "  "
 *   insn=0x000000000028D3D8 string=0x000000000028D3DC "E"
 *   insn=0x000000000028D3E0 string=0x000000000028D3E4 "["
 *   insn=0x000000000028D3E4 string=0x000000000028D3E8 "?"
 *   insn=0x000000000028D3EC string=0x000000000028D3F0 ")=G"
 *   insn=0x000000000028D3F0 string=0x000000000028D3F4 "!"
 *   insn=0x000000000028D3F8 string=0x000000000028D3FC "\t"
 *   insn=0x000000000028D3F8 string=0x000000000028D410 "\t"
 *   insn=0x000000000028D3FC string=0x000000000028D400 "*"
 *   insn=0x000000000028D400 string=0x000000000028D404 "\n"
 *   insn=0x000000000028D40C string=0x000000000028D41C "?"
 *   insn=0x000000000028D410 string=0x000000000028D414 "*"
 *   insn=0x000000000028D414 string=0x000000000028D418 "\n"
 *   insn=0x000000000028D428 string=0x000000000028D42C "u"
 *   insn=0x000000000028D434 string=0x000000000028D438 " "
 *   insn=0x000000000028D440 string=0x000000000028D444 " "
 *   insn=0x000000000028D444 string=0x000000000028D448 "@"
 *   insn=0x000000000028D450 string=0x000000000028D454 "\t"
 *   insn=0x000000000028D460 string=0x000000000028D464 "\t\t@"
 *   insn=0x000000000028D464 string=0x000000000028D468 ")"
 *   insn=0x000000000028D468 string=0x000000000028D46C "\t\t"
 *   insn=0x000000000028D470 string=0x000000000028D474 "G"
 *   insn=0x000000000028D474 string=0x00000000001F6190 "0'"
 *   insn=0x000000000028D47C string=0x000000000028D480 "@"
 *   insn=0x000000000028D480 string=0x000000000028D484 ""
 *   insn=0x000000000028D484 string=0x000000000028D488 ""
 *   insn=0x000000000028D48C string=0x000000000028D490 ""
 *   insn=0x000000000028D490 string=0x000000000028D494 ""
 *   insn=0x000000000028D49C string=0x000000000028D4A0 ","
 *   insn=0x000000000028D4AC string=0x000000000028D4B0 "A"
 *   insn=0x000000000028D4B0 string=0x000000000028D4D8 "~"
 *   insn=0x000000000028D4E4 string=0x000000000028D4E8 "B"
 *   insn=0x000000000028D4F4 string=0x000000000028D4F8 ""
 *   insn=0x000000000028D504 string=0x000000000028D508 ""
 *   insn=0x000000000028D510 string=0x000000000028D514 "7"
 *   insn=0x000000000028D520 string=0x000000000028D524 "\t\t@"
 *   insn=0x000000000028D524 string=0x000000000028D528 ")"
 *   insn=0x000000000028D528 string=0x000000000028D52C "\t\t"
 *   insn=0x000000000028D530 string=0x000000000028D534 "\t"
 *   insn=0x000000000028D534 string=0x000000000028D538 ")"
 *   insn=0x000000000028D53C string=0x000000000028D540 " "
 *   insn=0x000000000028D540 string=0x000000000028D544 "+"
 *   insn=0x000000000028D55C string=0x000000000028D560 "\t\t@"
 *   insn=0x000000000028D560 string=0x000000000028D564 ")"
 *   insn=0x000000000028D564 string=0x000000000028D568 "\t\t"
 *   insn=0x000000000028D56C string=0x000000000028D570 "\t"
 *   insn=0x000000000028D570 string=0x000000000028D574 ")"
 *   insn=0x000000000028D578 string=0x000000000028D57C " "
 *   insn=0x000000000028D590 string=0x000000000028D594 ")"
 *   insn=0x000000000028D5A4 string=0x000000000028D5A8 ")=G"
 *   insn=0x000000000028D5A8 string=0x000000000028D5AC "!"
 *   insn=0x000000000028D5AC string=0x000000000028D5B0 "i"
 *   insn=0x000000000028D5B0 string=0x000000000028D5B4 "\t"
 *   insn=0x000000000028D5B0 string=0x000000000028D5DC "\t"
 *   insn=0x000000000028D5B4 string=0x000000000028D5B8 "*"
 *   insn=0x000000000028D5B8 string=0x000000000028D5BC "\n"
 *   insn=0x000000000028D5C0 string=0x000000000028D5C4 "?"
 *   insn=0x000000000028D5C4 string=0x000000000028D5C8 "L"
 *   insn=0x000000000028D5CC string=0x000000000028D5D0 "us"
 *   insn=0x000000000028D5DC string=0x000000000028D5E0 "*"
 *   insn=0x000000000028D5E0 string=0x000000000028D5E4 "\n"
 *   insn=0x000000000028D5E4 string=0x000000000028D5E8 "?"
 *   insn=0x000000000028D5E8 string=0x000000000028D5EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::ProjectileControllerComponent::CreateBlast(
        Caver::ProjectileControllerComponent *this)
{
  Caver::SceneObject *v2; // x20
  int v3; // w8
  __int64 v4; // x0
  int v5; // w8
  void *v6; // x0
  __int64 v7; // x8
  Caver::SceneObject *v8; // x20
  __int64 v9; // x9
  int v10; // w9
  _DWORD *v11; // x8
  Caver::SceneObject *v12; // x0
  Caver::SceneObject *result; // x0
  int v14; // w8
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+A0h] [xbp-58h] BYREF
  int v18; // [xsp+A8h] [xbp-50h]
  Caver::SceneObject *v19; // [xsp+B8h] [xbp-40h] BYREF
  _QWORD v20[3]; // [xsp+C0h] [xbp-38h] BYREF

  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::SceneObject *)operator new(0x128u);
  Caver::SceneObject::SceneObject(v2);
  v3 = *((_DWORD *)v2 + 2);
  v19 = v2;
  *((_DWORD *)v2 + 2) = v3 + 1;
  sub_566BB8((int)v20, "particle_blast");
  Caver::ObjectLibrary::TemplateForName();
  Caver::SceneObject::InitWithTemplate(v2);
  v4 = v17;
  if ( v17 )
  {
    v5 = *(_DWORD *)(v17 + 8) - 1;
    *(_DWORD *)(v17 + 8) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)(v20[0] - 24LL);
  if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v20[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v6);
  }
  v7 = *((_QWORD *)this + 5);
  v8 = v19;
  v9 = *(_QWORD *)(v7 + 112);
  LODWORD(v7) = *(_DWORD *)(v7 + 120);
  v17 = v9;
  v18 = v7;
  Caver::Vector2::Vector2((Caver::Vector2 *)v20, (const Caver::Vector3 *)&v17);
  if ( fabsf(*(float *)v20 - *((float *)v8 + 28)) <= 0.0001 )
  {
    v11 = (_DWORD *)((char *)v8 + 116);
    v12 = v8;
    if ( fabsf(*((float *)v20 + 1) - *((float *)v8 + 29)) <= 0.0001 )
      goto LABEL_11;
    v10 = HIDWORD(v20[0]);
  }
  else
  {
    v10 = HIDWORD(v20[0]);
    v11 = (_DWORD *)((char *)v8 + 116);
  }
  *((_DWORD *)v8 + 28) = v20[0];
  *v11 = v10;
  v12 = v8;
  if ( !*((_BYTE *)v8 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate(v8);
    *((_BYTE *)v8 + 180) = 1;
    v12 = v19;
  }
LABEL_11:
  *((_DWORD *)v8 + 30) = v18;
  Caver::SceneObject::SetInstanceScaling(v12, 1.0);
  (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(*((_QWORD *)this + 5) + 32LL) + 40LL))(
    *(_QWORD *)(*((_QWORD *)this + 5) + 32LL),
    &v19);
  result = v19;
  if ( v19 )
  {
    v14 = *((_DWORD *)v19 + 2) - 1;
    *((_DWORD *)v19 + 2) = v14;
    if ( !v14 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

