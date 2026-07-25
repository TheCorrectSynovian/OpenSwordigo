/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002504B8
 * Mangled: _ZN5Caver20SoundEffectComponent6CreateEv
 * Demangled: Caver::SoundEffectComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250478  Caver::ParticleFieldComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBC80  Caver::SoundEffectComponent::SoundEffectComponent(void)
 *   0x00000000002504F8  Caver::PortalComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002504C4 string=0x00000000002504C8 "F"
 *   insn=0x00000000002504C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002504D0 string=0x00000000001FBC80 "0'"
 *   insn=0x00000000002504E8 string=0x00000000002504EC "q"
 *   insn=0x00000000002504EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SoundEffectComponent *__fastcall Caver::SoundEffectComponent::Create(Caver::SoundEffectComponent *this)
{
  Caver::SoundEffectComponent *v1; // x19

  v1 = (Caver::SoundEffectComponent *)operator new(0x98u);
  Caver::SoundEffectComponent::SoundEffectComponent(v1);
  return v1;
}

