/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0CBC
 * Mangled: _ZN5Caver19SimpleGlowComponent14AnimateToScaleEff
 * Demangled: Caver::SimpleGlowComponent::AnimateToScale(float,float)
 *
 * Callers: 1
 *   0x00000000001FC3C0  Caver::SimpleGlowComponent::AnimateToScale(float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SimpleGlowComponent::AnimateToScale(__int64 this, float a2, float a3)
{
  *(float *)(this + 216) = a2;
  *(float *)(this + 220) = a3;
  *(_DWORD *)(this + 212) = 0;
  return this;
}

