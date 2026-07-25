/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9160
 * Mangled: ._ZN5Caver22GroundPolygonComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002BF908  `non-virtual thunk to'Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002BF8C4  Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9164 string=0x00000000002BF8C4 "?"
 *   insn=0x00000000001F9168 string=0x00000000001F916C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundPolygonComponent::ValueForBindedProperty(Caver::GroundPolygonComponent *this, int a2)
{
  return _ZN5Caver22GroundPolygonComponent22ValueForBindedPropertyEi(this, a2);
}

