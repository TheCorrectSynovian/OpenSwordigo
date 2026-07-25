/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002022C0
 * Mangled: ._ZN5Caver22ParticleFieldComponentC2Ev
 * Demangled: Caver::ParticleFieldComponent::ParticleFieldComponent(void)
 *
 * Callers: 1
 *   0x0000000000250478  Caver::ParticleFieldComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002AC6DC  Caver::ParticleFieldComponent::ParticleFieldComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002022C8 string=0x00000000002022CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleFieldComponent::ParticleFieldComponent(Caver::ParticleFieldComponent *this)
{
  return _ZN5Caver22ParticleFieldComponentC2Ev(this);
}

