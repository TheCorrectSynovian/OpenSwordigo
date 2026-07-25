/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FC38
 * Mangled: _ZN5Caver15HealthComponent6CreateEv
 * Demangled: Caver::HealthComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FBF8  Caver::DamageComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBD70  Caver::HealthComponent::HealthComponent(void)
 *   0x000000000024FC78  Caver::SwingableWeaponComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024FC44 string=0x000000000024FC48 "f"
 *   insn=0x000000000024FC48 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FC4C string=0x000000000024FC50 "H"
 *   insn=0x000000000024FC50 string=0x00000000001FBD70 "0'"
 *   insn=0x000000000024FC6C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::HealthComponent *__fastcall Caver::HealthComponent::Create(Caver::HealthComponent *this)
{
  Caver::HealthComponent *v1; // x19

  v1 = (Caver::HealthComponent *)operator new(0xC8u);
  Caver::HealthComponent::HealthComponent(v1);
  return v1;
}

