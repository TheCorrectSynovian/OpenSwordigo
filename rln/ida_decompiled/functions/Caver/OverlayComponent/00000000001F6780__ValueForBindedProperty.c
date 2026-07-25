/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6780
 * Mangled: ._ZN5Caver16OverlayComponent22ValueForBindedPropertyEi
 * Demangled: Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Callers: 3
 *   0x000000000022BAD8  Caver::OverlayTargetArrowComponent::ValueForBindedProperty(int)
 *   0x000000000022BADC  `non-virtual thunk to'Caver::OverlayTargetArrowComponent::ValueForBindedProperty(int)
 *   0x000000000022DDC8  Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000022B970  Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6784 string=0x000000000022B970 "XM"
 *   insn=0x00000000001F6788 string=0x00000000001F678C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::ValueForBindedProperty(Caver::OverlayComponent *this, int a2)
{
  return _ZN5Caver16OverlayComponent22ValueForBindedPropertyEi(this, a2);
}

