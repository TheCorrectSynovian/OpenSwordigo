/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250478
 * Mangled: _ZN5Caver22ParticleFieldComponent6CreateEv
 * Demangled: Caver::ParticleFieldComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250438  Caver::PortalEffectComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002022C0  Caver::ParticleFieldComponent::ParticleFieldComponent(void)
 *   0x00000000002504B8  Caver::SoundEffectComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250484 string=0x0000000000250488 "V"
 *   insn=0x0000000000250488 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002504AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ParticleFieldComponent *__fastcall Caver::ParticleFieldComponent::Create(Caver::ParticleFieldComponent *this)
{
  Caver::ParticleFieldComponent *v1; // x19

  v1 = (Caver::ParticleFieldComponent *)operator new(0x78u);
  Caver::ParticleFieldComponent::ParticleFieldComponent(v1);
  return v1;
}

