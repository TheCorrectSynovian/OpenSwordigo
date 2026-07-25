/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF40
 * Mangled: ._ZNK5Caver11LineSegment10SpanOnAxisERKNS_7Vector2EPfS4_
 * Demangled: Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callers: 2
 *   0x00000000004AFDD0  Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *   0x00000000004D4AC8  Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callees: 1
 *   0x00000000004AD9DC  Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF48 string=0x00000000001FCF4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegment::SpanOnAxis(
        Caver::LineSegment *this,
        const Caver::Vector2 *a2,
        float *a3,
        float *a4)
{
  return _ZNK5Caver11LineSegment10SpanOnAxisERKNS_7Vector2EPfS4_(this, a2, a3, a4);
}

