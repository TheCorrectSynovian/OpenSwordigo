/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294790
 * Mangled: _ZThn16_N5Caver34BouncingMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201920  Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000294790 string=0x0000000000294794 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::PerformBindedAction(
        Caver::BouncingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::BouncingMonsterControllerComponent *)((char *)this - 16),
           a2);
}

