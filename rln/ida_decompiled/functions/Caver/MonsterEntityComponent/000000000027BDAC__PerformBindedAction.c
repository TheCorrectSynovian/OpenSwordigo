/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BDAC
 * Mangled: _ZN5Caver22MonsterEntityComponent19PerformBindedActionEi
 * Demangled: Caver::MonsterEntityComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC4F0  Caver::EntityComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000027BDAC string=0x00000000001FC4F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterEntityComponent::PerformBindedAction(Caver::MonsterEntityComponent *this, int a2)
{
  return Caver::EntityComponent::PerformBindedAction(this, a2);
}

