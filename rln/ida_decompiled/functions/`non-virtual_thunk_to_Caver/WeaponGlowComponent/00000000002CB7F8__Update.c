/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB7F8
 * Mangled: _ZThn24_N5Caver19WeaponGlowComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::WeaponGlowComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD490  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CB7F8 string=0x00000000002CB7FC "H"
 *   insn=0x00000000002CB814 string=0x00000000001FD490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WeaponGlowComponent::Update(__int64 this, float a2)
{
  __int64 v2; // x19

  if ( *(_BYTE *)(this + 136) )
  {
    v2 = this - 24;
    this = Caver::WeaponGlowComponent::UpdateParticleEmitter((Caver::WeaponGlowComponent *)(this - 24));
    *(_BYTE *)(v2 + 160) = 0;
  }
  return this;
}

