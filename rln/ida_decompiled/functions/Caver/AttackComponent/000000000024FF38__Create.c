/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FF38
 * Mangled: _ZN5Caver15AttackComponent6CreateEv
 * Demangled: Caver::AttackComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FEF8  Caver::MonsterEntityComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F71B0  Caver::AttackComponent::AttackComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024FF78  Caver::WalkingMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FF48 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FF50 string=0x00000000001F71B0 "0'"
 *   insn=0x000000000024FF6C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FF70 string=0x000000000024FF74 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AttackComponent *__fastcall Caver::AttackComponent::Create(Caver::AttackComponent *this)
{
  Caver::AttackComponent *v1; // x19

  v1 = (Caver::AttackComponent *)operator new(0x138u);
  Caver::AttackComponent::AttackComponent(v1);
  return v1;
}

