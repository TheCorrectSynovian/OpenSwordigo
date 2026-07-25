/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD490
 * Mangled: ._ZN5Caver19WeaponGlowComponent21UpdateParticleEmitterEv
 * Demangled: Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Callers: 3
 *   0x00000000002CB384  Caver::WeaponGlowComponent::Prepare(void)
 *   0x00000000002CB7C8  Caver::WeaponGlowComponent::Update(float)
 *   0x00000000002CB7F8  `non-virtual thunk to'Caver::WeaponGlowComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002CB43C  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD498 string=0x00000000001FD49C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponGlowComponent::UpdateParticleEmitter(Caver::WeaponGlowComponent *this)
{
  return _ZN5Caver19WeaponGlowComponent21UpdateParticleEmitterEv(this);
}

