/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002934E4
 * Mangled: _ZThn16_N5Caver29BatMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::BatMonsterControllerComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201920  Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BatMonsterControllerComponent::PerformBindedAction(
        Caver::BatMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::BatMonsterControllerComponent *)((char *)this - 16),
           a2);
}

