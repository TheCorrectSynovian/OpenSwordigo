/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CCE8
 * Mangled: _ZThn24_N5Caver29ProjectileControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ProjectileControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Referenced strings: 15
 *   insn=0x000000000028CCF4 string=0x000000000028CCF8 "hbA9"
 *   insn=0x000000000028CCFC string=0x000000000028CD00 "t\n@"
 *   insn=0x000000000028CCFC string=0x000000000028CD58 "`2@"
 *   insn=0x000000000028CD04 string=0x0000000000583734 "o"
 *   insn=0x000000000028CD18 string=0x000000000028CD1C "!!"
 *   insn=0x000000000028CD28 string=0x000000000028CD2C "-"
 *   insn=0x000000000028CD2C string=0x00000000001F6DE0 "0'"
 *   insn=0x000000000028CD3C string=0x000000000028CD40 "!"
 *   insn=0x000000000028CD40 string=0x000000000028CD44 "  ""
 *   insn=0x000000000028CD58 string=0x000000000028CD5C "`"
 *   insn=0x000000000028CD68 string=0x000000000028CD6C "-"
 *   insn=0x000000000028CD6C string=0x00000000001F7220 "0'"
 *   insn=0x000000000028CD70 string=0x000000000028CD74 ""
 *   insn=0x000000000028CD74 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028CD7C string=0x000000000028CD80 "`2@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DamageComponent *__fastcall `non-virtual thunk to'Caver::ProjectileControllerComponent::Update(
        Caver::ProjectileControllerComponent *this,
        float a2)
{
  __int64 v3; // x20
  float v4; // s0
  int v5; // w8
  Caver::DamageComponent *result; // x0

  if ( !*((_BYTE *)this + 88)
    || (v3 = *((_QWORD *)this + 2),
        (float)((float)(*(float *)(v3 + 104) * *(float *)(v3 + 104))
              + (float)(*(float *)(v3 + 108) * *(float *)(v3 + 108))) <= 0.001)
    || (Caver::Vector2::Angle((Caver::Vector2 *)(v3 + 104)), fabsf(v4 - *(float *)(v3 + 128)) <= 0.0001)
    || (v5 = *(unsigned __int8 *)(v3 + 180), *(float *)(v3 + 128) = v4, v5) )
  {
    result = (Caver::DamageComponent *)*((_QWORD *)this + 12);
    if ( !result )
      return result;
    return (Caver::DamageComponent *)Caver::DamageComponent::ResolvePotentialImpacts(result, 0);
  }
  Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
  *(_BYTE *)(v3 + 180) = 1;
  result = (Caver::DamageComponent *)*((_QWORD *)this + 12);
  if ( result )
    return (Caver::DamageComponent *)Caver::DamageComponent::ResolvePotentialImpacts(result, 0);
  return result;
}

