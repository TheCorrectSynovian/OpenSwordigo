/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB7C8
 * Mangled: _ZN5Caver19WeaponGlowComponent6UpdateEf
 * Demangled: Caver::WeaponGlowComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD490  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CB7D4 string=0x00000000002CB7D8 "h"
 *   insn=0x00000000002CB7E0 string=0x00000000002CB7E4 "+"
 *   insn=0x00000000002CB7E4 string=0x00000000001FD490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall Caver::WeaponGlowComponent::Update(_BYTE *this, float a2)
{
  _BYTE *v2; // x19

  v2 = this;
  if ( this[160] )
  {
    this = (_BYTE *)Caver::WeaponGlowComponent::UpdateParticleEmitter((Caver::WeaponGlowComponent *)this);
    v2[160] = 0;
  }
  return this;
}

