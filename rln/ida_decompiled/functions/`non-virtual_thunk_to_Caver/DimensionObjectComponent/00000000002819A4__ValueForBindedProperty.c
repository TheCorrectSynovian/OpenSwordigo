/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002819A4
 * Mangled: _ZThn16_N5Caver24DimensionObjectComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::DimensionObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002819A4 string=0x00000000002819A8 "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DimensionObjectComponent::ValueForBindedProperty(
        Caver::DimensionObjectComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::DimensionObjectComponent *)((char *)this - 16), a2);
}

