/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DBBC
 * Mangled: _ZThn16_N5Caver32SkellyMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201920  Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000029DBBC string=0x000000000029DBC0 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::PerformBindedAction(
        Caver::SkellyMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::SkellyMonsterControllerComponent *)((char *)this - 16),
           a2);
}

