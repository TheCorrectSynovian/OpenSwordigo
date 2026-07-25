/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250978
 * Mangled: _ZN5Caver14SkillComponent6CreateEv
 * Demangled: Caver::SkillComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250938  Caver::MagicExplosionComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F86D0  Caver::SkillComponent::SkillComponent(void)
 *   0x00000000002509B8  Caver::MagicSpellCastComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250988 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025098C string=0x0000000000250990 "P"
 *   insn=0x0000000000250990 string=0x00000000001F86D0 "0'"
 *   insn=0x00000000002509A8 string=0x00000000002509AC "A"
 *   insn=0x00000000002509AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SkillComponent *__fastcall Caver::SkillComponent::Create(Caver::SkillComponent *this)
{
  Caver::SkillComponent *v1; // x19

  v1 = (Caver::SkillComponent *)operator new(0xD0u);
  Caver::SkillComponent::SkillComponent(v1);
  return v1;
}

