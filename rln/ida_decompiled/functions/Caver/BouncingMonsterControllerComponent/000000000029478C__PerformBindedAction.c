/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029478C
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent19PerformBindedActionEi
 * Demangled: Caver::BouncingMonsterControllerComponent::PerformBindedAction(int)
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

// attributes: thunk
__int64 __fastcall Caver::BouncingMonsterControllerComponent::PerformBindedAction(
        Caver::BouncingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::PerformBindedAction(this, a2);
}

