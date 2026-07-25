/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002501F8
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent6CreateEv
 * Demangled: Caver::MonsterDeathControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002501B8  Caver::BouncingMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFAB0  Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(void)
 *   0x0000000000250238  Caver::GenericMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250208 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025020C string=0x0000000000250210 "("
 *   insn=0x0000000000250228 string=0x000000000025022C "!"
 *   insn=0x000000000025022C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MonsterDeathControllerComponent *__fastcall Caver::MonsterDeathControllerComponent::Create(
        Caver::MonsterDeathControllerComponent *this)
{
  Caver::MonsterDeathControllerComponent *v1; // x19

  v1 = (Caver::MonsterDeathControllerComponent *)operator new(0xC8u);
  Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(v1);
  return v1;
}

