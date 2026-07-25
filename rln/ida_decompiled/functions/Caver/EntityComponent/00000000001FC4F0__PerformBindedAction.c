/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC4F0
 * Mangled: ._ZN5Caver15EntityComponent19PerformBindedActionEi
 * Demangled: Caver::EntityComponent::PerformBindedAction(int)
 *
 * Callers: 4
 *   0x0000000000272670  Caver::HeroEntityComponent::PerformBindedAction(int)
 *   0x0000000000272674  `non-virtual thunk to'Caver::HeroEntityComponent::PerformBindedAction(int)
 *   0x000000000027BDAC  Caver::MonsterEntityComponent::PerformBindedAction(int)
 *   0x000000000027BDB0  `non-virtual thunk to'Caver::MonsterEntityComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x0000000000268C24  Caver::EntityComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC4F8 string=0x00000000001FC4FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::PerformBindedAction(Caver::EntityComponent *this, int a2)
{
  return _ZN5Caver15EntityComponent19PerformBindedActionEi(this, a2);
}

