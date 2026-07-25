/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202010
 * Mangled: ._ZN5Caver23ParticleObjectComponentC2Ev_0
 * Demangled: Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Callers: 1
 *   0x00000000002ACFDC  Caver::ParticleObjectComponent::~ParticleObjectComponent()
 *
 * Callees: 1
 *   0x00000000002AC914  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202018 string=0x000000000020201C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleObjectComponent::ParticleObjectComponent(Caver::ParticleObjectComponent *this)
{
  return _ZN5Caver23ParticleObjectComponentC2Ev(this);
}

