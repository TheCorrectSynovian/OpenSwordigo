/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022DE1C
 * Mangled: _ZThn16_N5Caver20OverlayTextComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F44F0  Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000022DE20 string=0x00000000001F44F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayTextComponent::ValueForBindedProperty(
        Caver::OverlayTextComponent *this,
        int a2)
{
  return Caver::OverlayTextComponent::ValueForBindedProperty((Caver::OverlayTextComponent *)((char *)this - 16), a2);
}

