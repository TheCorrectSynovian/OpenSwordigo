/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285DB4
 * Mangled: _ZN5Caver18MagicBombComponent19PerformBindedActionEi
 * Demangled: Caver::MagicBombComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6D80  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000285DB4 string=0x00000000001F6D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBombComponent::PerformBindedAction(Caver::MagicBombComponent *this, int a2)
{
  return Caver::SpellComponent::PerformBindedAction(this, a2);
}

