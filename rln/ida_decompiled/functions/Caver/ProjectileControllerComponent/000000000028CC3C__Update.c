/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CC3C
 * Mangled: _ZN5Caver29ProjectileControllerComponent6UpdateEf
 * Demangled: Caver::ProjectileControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Referenced strings: 15
 *   insn=0x000000000028CC48 string=0x000000000028CC4C "h"
 *   insn=0x000000000028CC50 string=0x000000000028CC54 "t"
 *   insn=0x000000000028CC50 string=0x000000000028CCAC "`>@"
 *   insn=0x000000000028CC58 string=0x0000000000583734 "o"
 *   insn=0x000000000028CC6C string=0x000000000028CC70 "!!"
 *   insn=0x000000000028CC7C string=0x000000000028CC80 "X"
 *   insn=0x000000000028CC80 string=0x00000000001F6DE0 "0'"
 *   insn=0x000000000028CC90 string=0x000000000028CC94 "!"
 *   insn=0x000000000028CC94 string=0x000000000028CC98 "  ""
 *   insn=0x000000000028CCAC string=0x000000000028CCB0 "`"
 *   insn=0x000000000028CCBC string=0x000000000028CCC0 "X"
 *   insn=0x000000000028CCC0 string=0x00000000001F7220 "0'"
 *   insn=0x000000000028CCC4 string=0x000000000028CCC8 "6"
 *   insn=0x000000000028CCC8 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028CCD0 string=0x000000000028CCD4 "`>@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DamageComponent *__fastcall Caver::ProjectileControllerComponent::Update(
        Caver::ProjectileControllerComponent *this,
        float a2)
{
  __int64 v3; // x20
  float v4; // s0
  int v5; // w8
  Caver::DamageComponent *result; // x0

  if ( !*((_BYTE *)this + 112)
    || (v3 = *((_QWORD *)this + 5),
        (float)((float)(*(float *)(v3 + 104) * *(float *)(v3 + 104))
              + (float)(*(float *)(v3 + 108) * *(float *)(v3 + 108))) <= 0.001)
    || (Caver::Vector2::Angle((Caver::Vector2 *)(v3 + 104)), fabsf(v4 - *(float *)(v3 + 128)) <= 0.0001)
    || (v5 = *(unsigned __int8 *)(v3 + 180), *(float *)(v3 + 128) = v4, v5) )
  {
    result = (Caver::DamageComponent *)*((_QWORD *)this + 15);
    if ( !result )
      return result;
    return (Caver::DamageComponent *)Caver::DamageComponent::ResolvePotentialImpacts(result, 0);
  }
  Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
  *(_BYTE *)(v3 + 180) = 1;
  result = (Caver::DamageComponent *)*((_QWORD *)this + 15);
  if ( result )
    return (Caver::DamageComponent *)Caver::DamageComponent::ResolvePotentialImpacts(result, 0);
  return result;
}

