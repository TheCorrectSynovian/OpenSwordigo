/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF0F4
 * Mangled: _ZThn16_N5Caver16ShatterComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ShatterComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AF0F4 string=0x00000000002AF0F8 "v?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ShatterComponent::ValueForBindedProperty(
        Caver::ShatterComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::ShatterComponent *)((char *)this - 16), a2);
}

