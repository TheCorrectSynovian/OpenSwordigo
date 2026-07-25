/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BDB0
 * Mangled: _ZThn16_N5Caver22MonsterEntityComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::MonsterEntityComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC4F0  Caver::EntityComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000027BDB4 string=0x00000000001FC4F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MonsterEntityComponent::PerformBindedAction(
        Caver::MonsterEntityComponent *this,
        int a2)
{
  return Caver::EntityComponent::PerformBindedAction((Caver::MonsterEntityComponent *)((char *)this - 16), a2);
}

