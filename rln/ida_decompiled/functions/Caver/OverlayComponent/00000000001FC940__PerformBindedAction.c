/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC940
 * Mangled: ._ZN5Caver16OverlayComponent19PerformBindedActionEi
 * Demangled: Caver::OverlayComponent::PerformBindedAction(int)
 *
 * Callers: 4
 *   0x000000000022BAF0  Caver::OverlayTargetArrowComponent::PerformBindedAction(int)
 *   0x000000000022BAF4  `non-virtual thunk to'Caver::OverlayTargetArrowComponent::PerformBindedAction(int)
 *   0x000000000022E0D0  Caver::OverlayTextComponent::PerformBindedAction(int)
 *   0x000000000022E0D4  `non-virtual thunk to'Caver::OverlayTextComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x000000000022B988  Caver::OverlayComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC948 string=0x00000000001FC94C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::PerformBindedAction(Caver::OverlayComponent *this, int a2)
{
  return _ZN5Caver16OverlayComponent19PerformBindedActionEi(this, a2);
}

