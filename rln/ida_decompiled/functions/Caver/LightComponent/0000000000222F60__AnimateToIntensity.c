/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222F60
 * Mangled: _ZN5Caver14LightComponent18AnimateToIntensityEff
 * Demangled: Caver::LightComponent::AnimateToIntensity(float,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000222F60 string=0x0000000000583944 "\n"
 *   insn=0x0000000000222F64 string=0x0000000000222F68 "  ""
 *   insn=0x0000000000222F68 string=0x0000000000222F6C ""
 *   insn=0x0000000000222F6C string=0x0000000000222F8C ""
 *   insn=0x0000000000222F74 string=0x0000000000222F78 "@"
 *   insn=0x0000000000222F7C string=0x0000000000222F80 "A"
 *   insn=0x0000000000222F8C string=0x0000000000222F90 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightComponent::AnimateToIntensity(__int64 this, float a2, float a3)
{
  float v3; // s2

  if ( a3 <= 0.01 )
  {
    *(_DWORD *)(this + 116) = *(_DWORD *)(this + 136);
  }
  else
  {
    v3 = *(float *)(this + 116);
    *(_BYTE *)(this + 144) = 1;
    *(float *)(this + 136) = a2;
    *(float *)(this + 140) = (float)(a2 - v3) / a3;
  }
  return this;
}

