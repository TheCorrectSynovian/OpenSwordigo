/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002502F8
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent6CreateEv
 * Demangled: Caver::MagicParticleEmitterComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002502B8  Caver::ParticleComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200950  Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent(void)
 *   0x0000000000250338  Caver::FireEmitterComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250308 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025032C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250330 string=0x0000000000250334 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicParticleEmitterComponent *__fastcall Caver::MagicParticleEmitterComponent::Create(
        Caver::MagicParticleEmitterComponent *this)
{
  Caver::MagicParticleEmitterComponent *v1; // x19

  v1 = (Caver::MagicParticleEmitterComponent *)operator new(0x1E0u);
  Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent(v1);
  return v1;
}

