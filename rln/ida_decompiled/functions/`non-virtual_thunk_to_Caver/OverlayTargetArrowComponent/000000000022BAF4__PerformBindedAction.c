/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAF4
 * Mangled: _ZThn16_N5Caver27OverlayTargetArrowComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::OverlayTargetArrowComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC940  Caver::OverlayComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000022BAF8 string=0x00000000001FC940 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayTargetArrowComponent::PerformBindedAction(
        Caver::OverlayTargetArrowComponent *this,
        int a2)
{
  return Caver::OverlayComponent::PerformBindedAction((Caver::OverlayTargetArrowComponent *)((char *)this - 16), a2);
}

