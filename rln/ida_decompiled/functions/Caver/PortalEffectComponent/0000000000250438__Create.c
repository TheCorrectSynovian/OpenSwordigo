/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250438
 * Mangled: _ZN5Caver21PortalEffectComponent6CreateEv
 * Demangled: Caver::PortalEffectComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002503F8  Caver::OrbitControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA430  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *   0x0000000000250478  Caver::ParticleFieldComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250444 string=0x0000000000250448 "f"
 *   insn=0x0000000000250448 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250450 string=0x00000000001FA430 "0'"
 *   insn=0x000000000025046C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::PortalEffectComponent *__fastcall Caver::PortalEffectComponent::Create(Caver::PortalEffectComponent *this)
{
  Caver::PortalEffectComponent *v1; // x19

  v1 = (Caver::PortalEffectComponent *)operator new(0x100u);
  Caver::PortalEffectComponent::PortalEffectComponent(v1);
  return v1;
}

