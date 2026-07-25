/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222EE0
 * Mangled: _ZN5Caver14LightComponent6UpdateEf
 * Demangled: Caver::LightComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000222EEC string=0x0000000000222EF0 "D8!"
 *   insn=0x0000000000222EF0 string=0x0000000000222EF4 "` "
 *   insn=0x0000000000222EFC string=0x0000000000222F00 "` $"
 *   insn=0x0000000000222F04 string=0x0000000000222F14 " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::LightComponent::Update(Caver::LightComponent *this, float result)
{
  float v2; // s1
  float v3; // s2

  if ( *((_BYTE *)this + 144) )
  {
    v2 = *((float *)this + 29);
    v3 = *((float *)this + 34);
    result = *((float *)this + 35) * result;
    if ( fabsf(v3 - v2) >= fabsf(result) )
    {
      result = v2 + result;
      *((float *)this + 29) = result;
    }
    else
    {
      *((float *)this + 29) = v3;
      *((_BYTE *)this + 144) = 0;
    }
  }
  return result;
}

