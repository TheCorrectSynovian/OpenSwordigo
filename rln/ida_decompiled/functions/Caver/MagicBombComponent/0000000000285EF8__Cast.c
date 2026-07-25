/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285EF8
 * Mangled: _ZN5Caver18MagicBombComponent4CastEv
 * Demangled: Caver::MagicBombComponent::Cast(void)
 *
 * Callers: 0
 *
 * Callees: 23
 *   0x00000000001F36C0  Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *   0x00000000001F3730  Caver::SpellComponent::CasterObject(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F84D0  Caver::MagicExplosionComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001FA3D0  Caver::SpellComponent::Cast(void)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x00000000002017B0  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *   0x0000000000201900  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *   0x00000000002863DC  Caver::MagicBombComponent::Update(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 149
 *   insn=0x0000000000285F08 string=0x0000000000285F0C "U"
 *   insn=0x0000000000285F18 string=0x0000000000285F1C "-"
 *   insn=0x0000000000285F1C string=0x00000000001FA3D0 "0'"
 *   insn=0x0000000000285F20 string=0x0000000000285F24 "h"
 *   insn=0x0000000000285F30 string=0x00000000001F3730 "P'"
 *   insn=0x0000000000285F38 string=0x0000000000285F3C "!"
 *   insn=0x0000000000285F3C string=0x0000000000261698 " $"
 *   insn=0x0000000000285F4C string=0x0000000000285F50 "@"
 *   insn=0x0000000000285F50 string=0x0000000000285F54 ""
 *   insn=0x0000000000285F54 string=0x0000000000285F58 ""
 *   insn=0x0000000000285F5C string=0x0000000000285F60 ""
 *   insn=0x0000000000285F60 string=0x0000000000285F64 ""
 *   insn=0x0000000000285F6C string=0x0000000000285F70 "a"
 *   insn=0x0000000000285F78 string=0x0000000000285F7C "a"
 *   insn=0x0000000000285FA4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000285FAC string=0x0000000000285FB0 "("
 *   insn=0x0000000000285FB0 string=0x0000000000285FB4 "\t\t@"
 *   insn=0x0000000000285FB4 string=0x0000000000285FB8 ")"
 *   insn=0x0000000000285FB8 string=0x0000000000285FBC "\t\t"
 *   insn=0x0000000000285FC0 string=0x0000000000285FC4 "\t"
 *   insn=0x0000000000285FC4 string=0x0000000000285FC8 ")"
 *   insn=0x0000000000285FCC string=0x0000000000285FD0 " "
 *   insn=0x0000000000285FD4 string=0x0000000000285FD8 ";"
 *   insn=0x0000000000285FF4 string=0x0000000000285FF8 "W"
 *   insn=0x0000000000286008 string=0x000000000028600C "u"
 *   insn=0x000000000028600C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000286014 string=0x0000000000286018 "h"
 *   insn=0x0000000000286014 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000286018 string=0x000000000028601C ""
 *   insn=0x0000000000286024 string=0x0000000000588BB8 "magic_explosion"
 *   insn=0x0000000000286050 string=0x0000000000286054 "s"
 *   insn=0x0000000000286054 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000028605C string=0x0000000000286060 "@"
 *   insn=0x0000000000286060 string=0x0000000000286064 ""
 *   insn=0x0000000000286064 string=0x0000000000286068 ""
 *   insn=0x000000000028606C string=0x0000000000286070 ""
 *   insn=0x0000000000286070 string=0x0000000000286074 ""
 *   insn=0x0000000000286080 string=0x0000000000286084 ")"
 *   insn=0x000000000028608C string=0x0000000000286090 "A"
 *   insn=0x0000000000286090 string=0x0000000000286094 "h"
 *   insn=0x000000000028609C string=0x00000000002860A0 """
 *   insn=0x00000000002860A8 string=0x00000000002860AC "!"
 *   insn=0x00000000002860AC string=0x00000000002860B0 "  ""
 *   insn=0x00000000002860B4 string=0x00000000002860B8 "\nu@"
 *   insn=0x00000000002860BC string=0x00000000002860C0 "\t"
 *   insn=0x00000000002860C8 string=0x00000000002860CC "#MG"
 *   insn=0x00000000002860CC string=0x00000000002860D0 "#8#"
 *   insn=0x00000000002860D0 string=0x00000000002860D4 "c"
 *   insn=0x00000000002860D4 string=0x00000000002860D8 "` ""
 *   insn=0x00000000002860D8 string=0x00000000002860DC "i"
 *   insn=0x00000000002860DC string=0x00000000002860E0 "*"
 *   insn=0x00000000002860DC string=0x0000000000286108 "\ty@"
 *   insn=0x00000000002860E4 string=0x00000000002860E8 "*"
 *   insn=0x00000000002860F4 string=0x00000000002860F8 "*"
 *   insn=0x00000000002860F8 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000286100 string=0x0000000000286104 "h"
 *   insn=0x0000000000286114 string=0x0000000000286118 ""
 *   insn=0x0000000000286118 string=0x000000000028611C ")"
 *   insn=0x000000000028611C string=0x0000000000286120 ""
 *   insn=0x0000000000286138 string=0x000000000028613C "@"
 *   insn=0x000000000028613C string=0x0000000000286140 ""
 *   insn=0x0000000000286140 string=0x0000000000286144 ""
 *   insn=0x0000000000286148 string=0x000000000028614C ""
 *   insn=0x000000000028614C string=0x0000000000286150 ""
 *   insn=0x0000000000286158 string=0x000000000028615C "`"
 *   insn=0x000000000028615C string=0x0000000000286160 "!hF"
 *   insn=0x0000000000286160 string=0x000000000021C148 "@&"
 *   insn=0x0000000000286168 string=0x000000000028616C "!4E"
 *   insn=0x0000000000286180 string=0x0000000000286190 "`v@"
 *   insn=0x0000000000286184 string=0x0000000000286188 ""
 *   insn=0x0000000000286190 string=0x0000000000286194 "vv"
 *   insn=0x0000000000286194 string=0x0000000000286198 " "
 *   insn=0x0000000000286198 string=0x000000000028619C "@"
 *   insn=0x000000000028619C string=0x00000000002861A0 ""
 *   insn=0x00000000002861A0 string=0x00000000002861A4 ""
 *   insn=0x00000000002861A8 string=0x00000000002861AC ""
 *   insn=0x00000000002861AC string=0x00000000002861B0 ""
 *   insn=0x00000000002861B4 string=0x00000000002861B8 "vv@"
 *   insn=0x00000000002861C0 string=0x00000000002861C4 "["
 *   insn=0x00000000002861D0 string=0x00000000001F84D0 "0'"
 *   insn=0x00000000002861D8 string=0x00000000002861DC "@"
 *   insn=0x00000000002861DC string=0x00000000002861E0 ""
 *   insn=0x00000000002861E0 string=0x00000000002861E4 ""
 *   insn=0x00000000002861E8 string=0x00000000002861EC ""
 *   insn=0x00000000002861EC string=0x00000000002861F0 ""
 *   insn=0x00000000002861F8 string=0x00000000002861FC ""
 *   insn=0x00000000002861FC string=0x0000000000286200 "`v@"
 *   insn=0x000000000028620C string=0x0000000000286210 "h"
 *   insn=0x0000000000286214 string=0x0000000000286218 "!hF"
 *   insn=0x0000000000286220 string=0x0000000000286224 "`"
 *   insn=0x0000000000286228 string=0x000000000028622C ""
 *   insn=0x0000000000286234 string=0x0000000000286238 ""
 *   insn=0x0000000000286238 string=0x000000000028623C "`v@"
 *   insn=0x000000000028624C string=0x00000000001F36C0 "P'"
 *   insn=0x0000000000286278 string=0x000000000028627C ")=G"
 *   insn=0x000000000028627C string=0x0000000000286280 "!"
 *   insn=0x0000000000286284 string=0x0000000000286288 "\t"
 *   insn=0x0000000000286284 string=0x000000000028629C "\t"
 *   insn=0x0000000000286288 string=0x000000000028628C "*"
 *   insn=0x000000000028628C string=0x0000000000286290 "\n"
 *   insn=0x0000000000286298 string=0x00000000002862A8 "?"
 *   insn=0x000000000028629C string=0x00000000002862A0 "*"
 *   insn=0x00000000002862A0 string=0x00000000002862A4 "\n"
 *   insn=0x00000000002862A8 string=0x00000000002862AC "L"
 *   insn=0x00000000002862B0 string=0x00000000002862B4 "<"
 *   insn=0x00000000002862B4 string=0x00000000002862B8 "w"
 *   insn=0x00000000002862C4 string=0x00000000002862C8 "h"
 *   insn=0x00000000002862C8 string=0x00000000002862CC "\t\t@"
 *   insn=0x00000000002862CC string=0x00000000002862D0 ")"
 *   insn=0x00000000002862D0 string=0x00000000002862D4 "\t\t"
 *   insn=0x00000000002862D8 string=0x00000000002862DC "\t"
 *   insn=0x00000000002862DC string=0x00000000002862E0 ")"
 *   insn=0x00000000002862E4 string=0x00000000002862E8 " "
 *   insn=0x00000000002862E8 string=0x00000000002862EC ":"
 *   insn=0x00000000002862F8 string=0x00000000002862FC "\t\t@"
 *   insn=0x00000000002862FC string=0x0000000000286300 ")"
 *   insn=0x0000000000286300 string=0x0000000000286304 "\t\t"
 *   insn=0x0000000000286304 string=0x0000000000286308 "a"
 *   insn=0x0000000000286308 string=0x000000000028630C "\t"
 *   insn=0x000000000028630C string=0x0000000000286310 ")"
 *   insn=0x0000000000286314 string=0x0000000000286318 " "
 *   insn=0x0000000000286318 string=0x000000000028631C "."
 *   insn=0x0000000000286324 string=0x0000000000286328 "H"
 *   insn=0x0000000000286328 string=0x000000000028632C "\t\t@"
 *   insn=0x000000000028632C string=0x0000000000286330 ")"
 *   insn=0x0000000000286330 string=0x0000000000286334 "\t\t"
 *   insn=0x0000000000286338 string=0x000000000028633C "\t"
 *   insn=0x000000000028633C string=0x0000000000286340 ")"
 *   insn=0x0000000000286344 string=0x0000000000286348 " "
 *   insn=0x0000000000286348 string=0x000000000028634C "\t"
 *   insn=0x0000000000286350 string=0x0000000000286354 "\"
 *   insn=0x0000000000286360 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000286364 string=0x0000000000286368 "W"
 *   insn=0x0000000000286374 string=0x0000000000286378 ")"
 *   insn=0x0000000000286388 string=0x000000000028638C ")=G"
 *   insn=0x000000000028638C string=0x0000000000286390 "!"
 *   insn=0x0000000000286390 string=0x0000000000286394 "i"
 *   insn=0x0000000000286394 string=0x0000000000286398 "\t"
 *   insn=0x0000000000286394 string=0x00000000002863C0 "\t"
 *   insn=0x0000000000286398 string=0x000000000028639C "*"
 *   insn=0x000000000028639C string=0x00000000002863A0 "\n"
 *   insn=0x00000000002863A4 string=0x00000000002863A8 "?"
 *   insn=0x00000000002863A8 string=0x00000000002863AC "L"
 *   insn=0x00000000002863B8 string=0x00000000002863BC "B"
 *   insn=0x00000000002863C0 string=0x00000000002863C4 "*"
 *   insn=0x00000000002863C4 string=0x00000000002863C8 "\n"
 *   insn=0x00000000002863C8 string=0x00000000002863CC "?"
 *   insn=0x00000000002863CC string=0x00000000002863D0 ""
 *   insn=0x00000000002863D4 string=0x00000000002863D8 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::MagicBombComponent::Cast(Caver::SceneObject **this)
{
  Caver::CharControllerComponent *v2; // x20
  Caver::SceneObject *result; // x0
  int v4; // w8
  Caver::SceneObject *v5[2]; // [xsp+68h] [xbp-30h] BYREF

  v5[1] = *(Caver::SceneObject **)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::Cast((Caver::SpellComponent *)this);
  *((_BYTE *)this + 184) = 1;
  Caver::SpellComponent::CasterObject((__int64 *)v5, (Caver::SpellComponent *)this);
  v2 = (Caver::CharControllerComponent *)Caver::SceneObject::ComponentWithInterface(
                                           v5[0],
                                           (__int64)Caver::CharControllerComponent::Interface);
  result = v5[0];
  if ( v5[0] )
  {
    v4 = *((_DWORD *)v5[0] + 2) - 1;
    *((_DWORD *)v5[0] + 2) = v4;
    if ( !v4 )
      result = (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
  }
  if ( v2 )
    return (Caver::SceneObject *)Caver::CharControllerComponent::Pickup(v2, this[5], 1);
  return result;
}

