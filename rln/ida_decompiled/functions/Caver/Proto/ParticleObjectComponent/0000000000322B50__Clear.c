/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322B50
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponent5ClearEv
 * Demangled: Caver::Proto::ParticleObjectComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000322B50 string=0x0000000000322B54 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleObjectComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 16) )
    *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return this;
}

