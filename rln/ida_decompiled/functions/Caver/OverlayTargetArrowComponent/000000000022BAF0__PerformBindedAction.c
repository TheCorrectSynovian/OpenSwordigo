/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAF0
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent19PerformBindedActionEi
 * Demangled: Caver::OverlayTargetArrowComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC940  Caver::OverlayComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000022BAF0 string=0x00000000001FC940 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTargetArrowComponent::PerformBindedAction(
        Caver::OverlayTargetArrowComponent *this,
        int a2)
{
  return Caver::OverlayComponent::PerformBindedAction(this, a2);
}

