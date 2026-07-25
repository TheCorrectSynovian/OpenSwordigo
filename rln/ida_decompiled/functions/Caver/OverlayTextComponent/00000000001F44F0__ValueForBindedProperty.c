/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F44F0
 * Mangled: ._ZN5Caver20OverlayTextComponent22ValueForBindedPropertyEi
 * Demangled: Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x000000000022DE1C  `non-virtual thunk to'Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000022DDC8  Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F44F4 string=0x000000000022DDC8 ")"
 *   insn=0x00000000001F44F8 string=0x00000000001F44FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTextComponent::ValueForBindedProperty(Caver::OverlayTextComponent *this, int a2)
{
  return _ZN5Caver20OverlayTextComponent22ValueForBindedPropertyEi(this, a2);
}

