/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272D10
 * Mangled: _ZN5Caver19HeroEntityComponent21HandleDamageCollisionEPNS_23CollisionShapeComponentES2_RKNS_13CollisionInfoE
 * Demangled: Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Callers: 1
 *   0x00000000001F96C0  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Callees: 23
 *   0x00000000001F3730  Caver::SpellComponent::CasterObject(void)
 *   0x00000000001F4B80  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F5A60  Caver::HeroEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F9D60  Caver::HealthComponent::TakeDamage(int)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x00000000001FFCC0  Caver::MagicExplosionComponent::CasterObject(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202BC0  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x0000000000203950  Caver::HealthComponent::TakeDamageWithImpact(Caver::DamageImpact *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 160
 *   insn=0x0000000000272D24 string=0x0000000000272D28 "W"
 *   insn=0x0000000000272D40 string=0x0000000000272D44 "!hF"
 *   insn=0x0000000000272D44 string=0x000000000021C148 "@&"
 *   insn=0x0000000000272D4C string=0x0000000000272D50 "$6"
 *   insn=0x0000000000272D50 string=0x0000000000272D54 "h"
 *   insn=0x0000000000272D58 string=0x0000000000272D5C "!5G"
 *   insn=0x0000000000272D58 string=0x0000000000583734 "o"
 *   insn=0x0000000000272D74 string=0x0000000000272D78 "i"
 *   insn=0x0000000000272D78 string=0x0000000000272D7C "9"
 *   insn=0x0000000000272D90 string=0x0000000000272D94 "h"
 *   insn=0x0000000000272D98 string=0x0000000000272D9C "a"
 *   insn=0x0000000000272DA4 string=0x0000000000272DA8 "  ""
 *   insn=0x0000000000272DAC string=0x0000000000272DB0 "a"
 *   insn=0x0000000000272DB0 string=0x0000000000272DB4 "(  "
 *   insn=0x0000000000272DB4 string=0x0000000000272DB8 "m"
 *   insn=0x0000000000272DB8 string=0x0000000000272DBC "b"
 *   insn=0x0000000000272DBC string=0x0000000000272DC0 "$"
 *   insn=0x0000000000272DC0 string=0x0000000000272DC4 "C"
 *   insn=0x0000000000272DC4 string=0x0000000000272DC8 "c($"
 *   insn=0x0000000000272DC8 string=0x0000000000272DCC "h  "
 *   insn=0x0000000000272DD0 string=0x0000000000272DD4 "  "
 *   insn=0x0000000000272DD8 string=0x0000000000272DDC " @!"
 *   insn=0x0000000000272DD8 string=0x0000000000272DE8 "@@!"
 *   insn=0x0000000000272DF0 string=0x00000000005883BC "|"
 *   insn=0x0000000000272DFC string=0x00000000001FC440 "0'"
 *   insn=0x0000000000272E0C string=0x0000000000272E10 "9@"
 *   insn=0x0000000000272E14 string=0x0000000000272E18 "h"
 *   insn=0x0000000000272E1C string=0x0000000000272E20 "\t\t@"
 *   insn=0x0000000000272E20 string=0x0000000000272E24 ")"
 *   insn=0x0000000000272E24 string=0x0000000000272E28 "\t\t"
 *   insn=0x0000000000272E34 string=0x0000000000272E38 "\n"
 *   insn=0x0000000000272E38 string=0x00000000001F5A60 "P'"
 *   insn=0x0000000000272E40 string=0x0000000000272E44 "@"
 *   insn=0x0000000000272E44 string=0x0000000000272E48 ""
 *   insn=0x0000000000272E48 string=0x0000000000272E4C ""
 *   insn=0x0000000000272E50 string=0x0000000000272E54 ""
 *   insn=0x0000000000272E54 string=0x0000000000272E58 ""
 *   insn=0x0000000000272E88 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000272E90 string=0x0000000000272E94 "("
 *   insn=0x0000000000272E94 string=0x0000000000272E98 "\t\t@"
 *   insn=0x0000000000272E98 string=0x0000000000272E9C ")"
 *   insn=0x0000000000272E9C string=0x0000000000272EA0 "\t\t"
 *   insn=0x0000000000272EA4 string=0x0000000000272EA8 "\t"
 *   insn=0x0000000000272EA8 string=0x0000000000272EAC ")"
 *   insn=0x0000000000272EB0 string=0x0000000000272EB4 " "
 *   insn=0x0000000000272EBC string=0x0000000000272EC0 "#m"
 *   insn=0x0000000000272EE0 string=0x0000000000272EE4 "W"
 *   insn=0x0000000000272EF8 string=0x0000000000272EFC ""
 *   insn=0x0000000000272F04 string=0x0000000000272F08 "h&C)"
 *   insn=0x0000000000272F0C string=0x0000000000272F10 "H"
 *   insn=0x0000000000272F14 string=0x0000000000272F18 "k"
 *   insn=0x0000000000272F18 string=0x0000000000272F1C "+"
 *   insn=0x0000000000272F1C string=0x0000000000272F20 "l"
 *   insn=0x0000000000272F28 string=0x0000000000272F2C "k"
 *   insn=0x0000000000272F2C string=0x0000000000272F30 "@"
 *   insn=0x0000000000272F38 string=0x0000000000272F3C "("
 *   insn=0x0000000000272F44 string=0x0000000000272F48 "B5D"
 *   insn=0x0000000000272F48 string=0x0000000000272F4C " "
 *   insn=0x0000000000272F50 string=0x0000000000272F54 "  ""
 *   insn=0x0000000000272F5C string=0x0000000000272F60 "(  "
 *   insn=0x0000000000272F68 string=0x0000000000272F6C "i"
 *   insn=0x0000000000272F70 string=0x0000000000272F74 "!"
 *   insn=0x0000000000272F70 string=0x00000000005883C4 "w"
 *   insn=0x0000000000272F80 string=0x00000000005883CC "L"
 *   insn=0x0000000000272F8C string=0x00000000001F5730 "P'"
 *   insn=0x0000000000272F94 string=0x0000000000272F98 "`"
 *   insn=0x0000000000272F9C string=0x0000000000272FA0 "  "
 *   insn=0x0000000000272FA0 string=0x0000000000272FA4 " "
 *   insn=0x0000000000272FA4 string=0x0000000000272FA8 "E"
 *   insn=0x0000000000272FA8 string=0x0000000000272FAC "!@!"
 *   insn=0x0000000000272FB8 string=0x0000000000272FBC ")"
 *   insn=0x0000000000272FC0 string=0x0000000000272FC4 "M"
 *   insn=0x0000000000272FCC string=0x0000000000272FD0 "\n"
 *   insn=0x0000000000272FCC string=0x00000000001F6DE0 "0'"
 *   insn=0x0000000000272FD4 string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000272FD8 string=0x0000000000272FDC ""
 *   insn=0x0000000000272FF4 string=0x0000000000272FF8 " "
 *   insn=0x0000000000273018 string=0x000000000027301C " "
 *   insn=0x000000000027301C string=0x0000000000273020 "!"
 *   insn=0x0000000000273020 string=0x0000000000273024 "\t!"
 *   insn=0x0000000000273044 string=0x0000000000273048 "h"
 *   insn=0x0000000000273044 string=0x00000000001F4B80 "P'"
 *   insn=0x0000000000273048 string=0x000000000027304C "h"
 *   insn=0x0000000000273054 string=0x0000000000273058 "!5G"
 *   insn=0x0000000000273064 string=0x0000000000273068 ""
 *   insn=0x0000000000273074 string=0x0000000000273078 ":"
 *   insn=0x0000000000273078 string=0x00000000001F9D60 "0'"
 *   insn=0x0000000000273080 string=0x0000000000273084 "3B"
 *   insn=0x0000000000273094 string=0x0000000000273098 "\t"
 *   insn=0x0000000000273098 string=0x000000000027309C "h"
 *   insn=0x00000000002730A4 string=0x00000000002730A8 "N-"
 *   insn=0x00000000002730AC string=0x00000000002730B0 ""
 *   insn=0x00000000002730B8 string=0x00000000002730C8 "h"
 *   insn=0x00000000002730BC string=0x00000000002730C0 "A"
 *   insn=0x00000000002730C0 string=0x00000000002730C4 "["
 *   insn=0x00000000002730D0 string=0x00000000002730D4 "!"
 *   insn=0x00000000002730D4 string=0x00000000002730D8 "B5"
 *   insn=0x00000000002730D8 string=0x00000000002730DC "h"
 *   insn=0x00000000002730E4 string=0x00000000002730E8 ""
 *   insn=0x00000000002730E8 string=0x00000000002730EC "!4E"
 *   insn=0x00000000002730F0 string=0x00000000002730F4 ";5"
 *   insn=0x00000000002730F8 string=0x00000000002730FC "6"
 *   insn=0x0000000000273108 string=0x00000000001F3730 "P'"
 *   insn=0x0000000000273110 string=0x0000000000273114 "6"
 *   insn=0x0000000000273118 string=0x000000000027311C ""
 *   insn=0x000000000027312C string=0x0000000000273130 ""
 *   insn=0x0000000000273138 string=0x000000000027313C "@"
 *   insn=0x0000000000273154 string=0x0000000000273158 "5"
 *   insn=0x000000000027315C string=0x0000000000273160 ""
 *   insn=0x0000000000273170 string=0x0000000000273174 ""
 *   insn=0x0000000000273184 string=0x000000000058843F "mishandlingexplosives"
 *   insn=0x00000000002731AC string=0x00000000002731B0 ")"
 *   insn=0x00000000002731B8 string=0x00000000002731BC " "
 *   insn=0x00000000002731C0 string=0x00000000002731C4 ")=G"
 *   insn=0x00000000002731C4 string=0x00000000002731C8 "!"
 *   insn=0x00000000002731C8 string=0x00000000002731CC "\t"
 *   insn=0x00000000002731CC string=0x00000000002731D0 "\t"
 *   insn=0x00000000002731CC string=0x000000000027328C "\t"
 *   insn=0x00000000002731D0 string=0x00000000002731D4 "*"
 *   insn=0x00000000002731D4 string=0x00000000002731D8 "\n"
 *   insn=0x00000000002731DC string=0x00000000002731E0 "."
 *   insn=0x00000000002731E0 string=0x0000000000273298 "?"
 *   insn=0x00000000002731E4 string=0x000000000058842E "recklessshooting"
 *   insn=0x00000000002731F0 string=0x00000000002731F4 "q"
 *   insn=0x00000000002731FC string=0x0000000000273200 "p>"
 *   insn=0x0000000000273200 string=0x0000000000273204 "k-"
 *   insn=0x000000000027320C string=0x0000000000273210 ")"
 *   insn=0x0000000000273218 string=0x000000000027321C "a"
 *   insn=0x0000000000273228 string=0x000000000027322C "a"
 *   insn=0x0000000000273240 string=0x0000000000273244 "A"
 *   insn=0x0000000000273244 string=0x00000000002732AC "\t"
 *   insn=0x0000000000273268 string=0x000000000027326C ")=G"
 *   insn=0x000000000027326C string=0x0000000000273270 "!"
 *   insn=0x0000000000273274 string=0x0000000000273278 "\t"
 *   insn=0x0000000000273278 string=0x000000000027327C "*"
 *   insn=0x000000000027327C string=0x0000000000273280 "\n"
 *   insn=0x000000000027328C string=0x0000000000273290 "*"
 *   insn=0x0000000000273290 string=0x0000000000273294 "\n"
 *   insn=0x0000000000273298 string=0x000000000027329C ","
 *   insn=0x00000000002732A0 string=0x00000000002732A4 "@"
 *   insn=0x00000000002732BC string=0x00000000002732C0 "J"
 *   insn=0x00000000002732C4 string=0x00000000002732C8 "(a"
 *   insn=0x00000000002732D4 string=0x00000000002732D8 "J=G"
 *   insn=0x00000000002732D8 string=0x00000000002732DC ")!"
 *   insn=0x00000000002732E0 string=0x00000000002732E4 "*"
 *   insn=0x00000000002732E0 string=0x0000000000273350 "*"
 *   insn=0x00000000002732E4 string=0x00000000002732E8 "K"
 *   insn=0x00000000002732E8 string=0x00000000002732EC "+"
 *   insn=0x00000000002732F4 string=0x0000000000273334 "_"
 *   insn=0x00000000002732FC string=0x0000000000273300 "J"
 *   insn=0x0000000000273304 string=0x0000000000273308 "(a"
 *   insn=0x0000000000273314 string=0x0000000000273318 "J=G"
 *   insn=0x0000000000273318 string=0x000000000027331C ")!"
 *   insn=0x0000000000273320 string=0x0000000000273324 "*"
 *   insn=0x0000000000273324 string=0x0000000000273328 "K"
 *   insn=0x0000000000273328 string=0x000000000027332C "+"
 *   insn=0x0000000000273348 string=0x000000000027334C "^9"
 *   insn=0x0000000000273350 string=0x0000000000273354 "K"
 *   insn=0x0000000000273354 string=0x0000000000273358 "+"
 *   insn=0x0000000000273358 string=0x000000000027335C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::HandleDamageCollision(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float32x2_t *a4)
{
  __int64 result; // x0
  __int64 v8; // x8
  __int64 v9; // x21
  float32x2_t v10; // d0
  float v11; // s1
  float v12; // s2
  __int64 v13; // x8
  int v14; // w8
  unsigned __int64 v15; // [xsp+A0h] [xbp-78h] BYREF
  __int64 v16; // [xsp+A8h] [xbp-70h]
  __int64 v17; // [xsp+B0h] [xbp-68h]
  unsigned __int64 v18; // [xsp+B8h] [xbp-60h]
  __int64 v19; // [xsp+E0h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::SceneObject::ComponentWithInterface(
             *(Caver::SceneObject **)(a3 + 40),
             (__int64)Caver::DamageComponent::Interface);
  v8 = *(_QWORD *)(a1 + 304);
  v9 = result;
  if ( *(float *)(v8 + 148) > 0.001 )
  {
    if ( !result || !*(_BYTE *)(result + 160) )
      return result;
    goto LABEL_6;
  }
  if ( result )
  {
LABEL_6:
    if ( v8 && (!*(_BYTE *)(result + 188) || *(_DWORD *)(result + 180)) )
      return result;
  }
  v10.n64_u64[0] = a4[3].n64_u64[0];
  if ( *(float *)(a1 + 128) < 0.1 )
  {
    v11 = *(float *)(a1 + 140);
    if ( v11 > 0.0 )
    {
      v12 = *(float *)(a1 + 136);
      if ( (float)(vmuls_n_f32(v12, v10.n64_f32[0]) + vmuls_lane_f32(v11, v10, 1)) < 0.0 )
      {
        if ( v10.n64_f32[0] >= 0.0 )
        {
          LODWORD(v15) = *(_DWORD *)(a1 + 140);
          *((float *)&v15 + 1) = -v12;
        }
        else
        {
          *(float *)&v15 = -v11;
          *((float *)&v15 + 1) = v12;
        }
        Caver::Vector2::Rotate((Caver::Vector2 *)&v15, -0.31416);
        v10.n64_u64[0] = v15;
      }
    }
  }
  v15 = v9;
  v16 = 0;
  v18 = v10.n64_u64[0];
  v17 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 112LL);
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v16 = v13;
  Caver::HeroEntityComponent::HandleDamageImpact();
  result = v16;
  if ( v16 )
  {
    v14 = *(_DWORD *)(v16 + 8) - 1;
    *(_DWORD *)(v16 + 8) = v14;
    if ( !v14 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

