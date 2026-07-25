/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1334
 * Mangled: _ZThn16_N5Caver33WalkingMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201920  Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A1334 string=0x00000000002A1338 "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::PerformBindedAction(
        Caver::WalkingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::WalkingMonsterControllerComponent *)((char *)this - 16),
           a2);
}

