/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222F20
 * Mangled: _ZThn24_N5Caver14LightComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::LightComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000222F2C string=0x0000000000222F30 "D8!"
 *   insn=0x0000000000222F30 string=0x0000000000222F34 "` "
 *   insn=0x0000000000222F3C string=0x0000000000222F40 "` $"
 *   insn=0x0000000000222F44 string=0x0000000000222F54 " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall `non-virtual thunk to'Caver::LightComponent::Update(Caver::LightComponent *this, float result)
{
  float v2; // s1
  float v3; // s2

  if ( *((_BYTE *)this + 120) )
  {
    v2 = *((float *)this + 23);
    v3 = *((float *)this + 28);
    result = *((float *)this + 29) * result;
    if ( fabsf(v3 - v2) >= fabsf(result) )
    {
      result = v2 + result;
      *((float *)this + 23) = result;
    }
    else
    {
      *((float *)this + 23) = v3;
      *((_BYTE *)this + 120) = 0;
    }
  }
  return result;
}

