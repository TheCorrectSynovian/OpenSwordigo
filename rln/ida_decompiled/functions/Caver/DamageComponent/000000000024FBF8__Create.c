/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FBF8
 * Mangled: _ZN5Caver15DamageComponent6CreateEv
 * Demangled: Caver::DamageComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FBB8  Caver::BoneControlledCollisionShapeComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203B50  Caver::DamageComponent::DamageComponent(void)
 *   0x000000000024FC38  Caver::HealthComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FC04 string=0x000000000024FC08 "v"
 *   insn=0x000000000024FC08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FC2C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FC30 string=0x000000000024FC34 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DamageComponent *__fastcall Caver::DamageComponent::Create(Caver::DamageComponent *this)
{
  Caver::DamageComponent *v1; // x19

  v1 = (Caver::DamageComponent *)operator new(0xD8u);
  Caver::DamageComponent::DamageComponent(v1);
  return v1;
}

