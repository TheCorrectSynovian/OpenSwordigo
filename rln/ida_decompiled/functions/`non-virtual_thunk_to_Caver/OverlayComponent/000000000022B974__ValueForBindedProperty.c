/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B974
 * Mangled: _ZThn16_N5Caver16OverlayComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000022B974 string=0x000000000022B978 "VM"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayComponent::ValueForBindedProperty(
        Caver::OverlayComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::OverlayComponent *)((char *)this - 16), a2);
}

