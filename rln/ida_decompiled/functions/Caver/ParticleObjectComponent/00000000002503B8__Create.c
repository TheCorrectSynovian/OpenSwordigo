/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002503B8
 * Mangled: _ZN5Caver23ParticleObjectComponent6CreateEv
 * Demangled: Caver::ParticleObjectComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250378  Caver::SimpleGlowComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE6F0  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x00000000002503F8  Caver::OrbitControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002503C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002503EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002503F0 string=0x00000000002503F4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ParticleObjectComponent *__fastcall Caver::ParticleObjectComponent::Create(Caver::ParticleObjectComponent *this)
{
  Caver::ParticleObjectComponent *v1; // x19

  v1 = (Caver::ParticleObjectComponent *)operator new(0x120u);
  Caver::ParticleObjectComponent::ParticleObjectComponent(v1);
  return v1;
}

