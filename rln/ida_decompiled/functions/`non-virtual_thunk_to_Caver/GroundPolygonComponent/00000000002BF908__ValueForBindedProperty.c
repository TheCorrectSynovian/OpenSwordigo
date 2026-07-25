/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BF908
 * Mangled: _ZThn16_N5Caver22GroundPolygonComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9160  Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002BF90C string=0x00000000001F9160 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GroundPolygonComponent::ValueForBindedProperty(
        Caver::GroundPolygonComponent *this,
        int a2)
{
  return Caver::GroundPolygonComponent::ValueForBindedProperty((Caver::GroundPolygonComponent *)((char *)this - 16), a2);
}

