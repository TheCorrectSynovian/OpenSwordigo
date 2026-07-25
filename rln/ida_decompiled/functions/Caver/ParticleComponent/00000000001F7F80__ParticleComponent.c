/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F80
 * Mangled: ._ZN5Caver17ParticleComponentC2Ev
 * Demangled: Caver::ParticleComponent::ParticleComponent(void)
 *
 * Callers: 1
 *   0x00000000002502B8  Caver::ParticleComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A4DA0  Caver::ParticleComponent::ParticleComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F88 string=0x00000000001F7F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleComponent::ParticleComponent(Caver::ParticleComponent *this)
{
  return _ZN5Caver17ParticleComponentC2Ev(this);
}

