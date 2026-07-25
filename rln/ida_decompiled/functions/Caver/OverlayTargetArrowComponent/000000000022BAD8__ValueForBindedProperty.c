/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAD8
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::OverlayTargetArrowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6780  Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000022BAD8 string=0x00000000001F6780 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTargetArrowComponent::ValueForBindedProperty(
        Caver::OverlayTargetArrowComponent *this,
        int a2)
{
  return Caver::OverlayComponent::ValueForBindedProperty(this, a2);
}

