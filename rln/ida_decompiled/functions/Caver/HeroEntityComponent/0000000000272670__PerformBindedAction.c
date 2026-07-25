/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272670
 * Mangled: _ZN5Caver19HeroEntityComponent19PerformBindedActionEi
 * Demangled: Caver::HeroEntityComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC4F0  Caver::EntityComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000272670 string=0x00000000001FC4F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEntityComponent::PerformBindedAction(Caver::HeroEntityComponent *this, int a2)
{
  return Caver::EntityComponent::PerformBindedAction(this, a2);
}

