/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BADC
 * Mangled: _ZThn16_N5Caver27OverlayTargetArrowComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::OverlayTargetArrowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6780  Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000022BADC string=0x000000000022BAE0 "(+"
 *   insn=0x000000000022BAE0 string=0x00000000001F6780 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayTargetArrowComponent::ValueForBindedProperty(
        Caver::OverlayTargetArrowComponent *this,
        int a2)
{
  return Caver::OverlayComponent::ValueForBindedProperty((Caver::OverlayTargetArrowComponent *)((char *)this - 16), a2);
}

