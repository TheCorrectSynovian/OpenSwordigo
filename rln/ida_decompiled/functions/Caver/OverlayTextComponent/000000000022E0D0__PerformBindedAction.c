/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E0D0
 * Mangled: _ZN5Caver20OverlayTextComponent19PerformBindedActionEi
 * Demangled: Caver::OverlayTextComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC940  Caver::OverlayComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000022E0D0 string=0x00000000001FC940 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTextComponent::PerformBindedAction(Caver::OverlayTextComponent *this, int a2)
{
  return Caver::OverlayComponent::PerformBindedAction(this, a2);
}

