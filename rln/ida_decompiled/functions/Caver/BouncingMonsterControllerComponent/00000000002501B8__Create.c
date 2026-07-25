/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002501B8
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent6CreateEv
 * Demangled: Caver::BouncingMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250178  Caver::BatMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002029E0  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x00000000002501F8  Caver::MonsterDeathControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002501C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002501E8 string=0x00000000002501EC "1"
 *   insn=0x00000000002501EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BouncingMonsterControllerComponent *__fastcall Caver::BouncingMonsterControllerComponent::Create(
        Caver::BouncingMonsterControllerComponent *this)
{
  Caver::BouncingMonsterControllerComponent *v1; // x19

  v1 = (Caver::BouncingMonsterControllerComponent *)operator new(0x120u);
  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(v1);
  return v1;
}

