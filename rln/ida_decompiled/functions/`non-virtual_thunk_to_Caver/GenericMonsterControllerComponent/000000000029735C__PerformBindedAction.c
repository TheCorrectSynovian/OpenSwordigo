/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029735C
 * Mangled: _ZThn16_N5Caver33GenericMonsterControllerComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::GenericMonsterControllerComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201920  Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000029735C string=0x0000000000297360 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GenericMonsterControllerComponent::PerformBindedAction(
        Caver::GenericMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(
           (Caver::GenericMonsterControllerComponent *)((char *)this - 16),
           a2);
}

