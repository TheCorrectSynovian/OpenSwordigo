/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282B5C
 * Mangled: _ZN5Caver19FireBreathComponent19PerformBindedActionEi
 * Demangled: Caver::FireBreathComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6D80  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000282B5C string=0x00000000001F6D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireBreathComponent::PerformBindedAction(Caver::FireBreathComponent *this, int a2)
{
  return Caver::SpellComponent::PerformBindedAction(this, a2);
}

