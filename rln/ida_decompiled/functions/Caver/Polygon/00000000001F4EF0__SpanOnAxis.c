/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4EF0
 * Mangled: ._ZNK5Caver7Polygon10SpanOnAxisERKNS_7Vector2EPfS4_
 * Demangled: Caver::Polygon::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004AFFE0  Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&,Caver::Vector2 const&,float *,float *)
 *
 * Callees: 1
 *   0x00000000004B0878  Caver::Polygon::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4EF4 string=0x00000000004B0878 ""
 *   insn=0x00000000001F4EF8 string=0x00000000001F4EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Polygon::SpanOnAxis(Caver::Polygon *this, const Caver::Vector2 *a2, float *a3, float *a4)
{
  return _ZNK5Caver7Polygon10SpanOnAxisERKNS_7Vector2EPfS4_(this, a2, a3, a4);
}

