/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295E38
 * Mangled: _ZThn16_N5Caver34ChargingMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::PerformBindedAction(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::PerformBindedAction(
        Caver::ChargingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::ChargingMonsterControllerComponent *)((char *)this - 16),
           a2);
}

