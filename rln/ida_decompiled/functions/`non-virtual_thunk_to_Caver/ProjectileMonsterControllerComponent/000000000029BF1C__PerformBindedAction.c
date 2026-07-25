/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BF1C
 * Mangled: _ZThn16_N5Caver36ProjectileMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::PerformBindedAction(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::PerformBindedAction(
        Caver::ProjectileMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::ProjectileMonsterControllerComponent *)((char *)this - 16),
           a2);
}

