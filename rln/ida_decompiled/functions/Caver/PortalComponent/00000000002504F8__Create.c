/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002504F8
 * Mangled: _ZN5Caver15PortalComponent6CreateEv
 * Demangled: Caver::PortalComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002504B8  Caver::SoundEffectComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200B00  Caver::PortalComponent::PortalComponent(void)
 *   0x0000000000250538  Caver::SpawnPointComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250504 string=0x0000000000250508 "6"
 *   insn=0x0000000000250508 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025050C string=0x0000000000250510 "|"
 *   insn=0x0000000000250528 string=0x000000000025052C "a"
 *   insn=0x000000000025052C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::PortalComponent *__fastcall Caver::PortalComponent::Create(Caver::PortalComponent *this)
{
  Caver::PortalComponent *v1; // x19

  v1 = (Caver::PortalComponent *)operator new(0xA8u);
  Caver::PortalComponent::PortalComponent(v1);
  return v1;
}

