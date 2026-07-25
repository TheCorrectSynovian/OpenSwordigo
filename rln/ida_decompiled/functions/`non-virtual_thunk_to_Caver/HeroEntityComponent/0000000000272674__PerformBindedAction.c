/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272674
 * Mangled: _ZThn16_N5Caver19HeroEntityComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::HeroEntityComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC4F0  Caver::EntityComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000272678 string=0x00000000001FC4F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HeroEntityComponent::PerformBindedAction(
        Caver::HeroEntityComponent *this,
        int a2)
{
  return Caver::EntityComponent::PerformBindedAction((Caver::HeroEntityComponent *)((char *)this - 16), a2);
}

