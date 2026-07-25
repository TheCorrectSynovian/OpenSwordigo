/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AA56C
 * Mangled: _ZN5Caver24ParticleEmitterComponent8SetColorERKNS_10FloatColorE
 * Demangled: Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&)
 *
 * Callers: 1
 *   0x00000000002024F0  Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&)
 *
 * Callees: 1
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AA58C string=0x00000000002AA590 "h"
 *   insn=0x00000000002AA58C string=0x00000000001F3BC0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleEmitterComponent::SetColor(__int64 this, const Caver::FloatColor *a2)
{
  __int64 v2; // x20

  v2 = *(_QWORD *)(this + 344);
  if ( v2 )
  {
    this = Caver::FloatColor::GetHSLComponents(a2, (float *)(v2 + 168));
    *(_DWORD *)(v2 + 180) = *((_DWORD *)a2 + 3);
  }
  return this;
}

