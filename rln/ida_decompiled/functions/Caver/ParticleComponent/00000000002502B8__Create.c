/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002502B8
 * Mangled: _ZN5Caver17ParticleComponent6CreateEv
 * Demangled: Caver::ParticleComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250278  Caver::ParticleEmitterComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7F80  Caver::ParticleComponent::ParticleComponent(void)
 *   0x00000000002502F8  Caver::MagicParticleEmitterComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002502C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002502CC string=0x00000000002502D0 ","
 *   insn=0x00000000002502D0 string=0x00000000001F7F80 "0'"
 *   insn=0x00000000002502EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002502F0 string=0x00000000002502F4 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ParticleComponent *__fastcall Caver::ParticleComponent::Create(Caver::ParticleComponent *this)
{
  Caver::ParticleComponent *v1; // x19

  v1 = (Caver::ParticleComponent *)operator new(0x90u);
  Caver::ParticleComponent::ParticleComponent(v1);
  return v1;
}

