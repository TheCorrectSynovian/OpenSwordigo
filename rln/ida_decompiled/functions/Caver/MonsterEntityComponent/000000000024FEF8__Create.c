/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FEF8
 * Mangled: _ZN5Caver22MonsterEntityComponent6CreateEv
 * Demangled: Caver::MonsterEntityComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FEB8  Caver::ShatterComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFDF0  Caver::MonsterEntityComponent::MonsterEntityComponent(void)
 *   0x000000000024FF38  Caver::AttackComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FF08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FF2C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FF30 string=0x000000000024FF34 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MonsterEntityComponent *__fastcall Caver::MonsterEntityComponent::Create(Caver::MonsterEntityComponent *this)
{
  Caver::MonsterEntityComponent *v1; // x19

  v1 = (Caver::MonsterEntityComponent *)operator new(0x1A0u);
  Caver::MonsterEntityComponent::MonsterEntityComponent(v1);
  return v1;
}

