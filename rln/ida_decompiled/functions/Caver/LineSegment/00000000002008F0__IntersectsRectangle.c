/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002008F0
 * Mangled: ._ZNK5Caver11LineSegment19IntersectsRectangleERKNS_9RectangleEPfS4_
 * Demangled: Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,float *,float *)
 *
 * Callers: 2
 *   0x00000000004AD6D8  Caver::LineSegmentIntersectsRectangle(Caver::LineSegment const&,Caver::Rectangle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *   0x00000000004ADDBC  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 *,Caver::Vector2 *)
 *
 * Callees: 1
 *   0x00000000004ADC4C  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002008F8 string=0x00000000002008FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegment::IntersectsRectangle(
        Caver::LineSegment *this,
        const Caver::Rectangle *a2,
        float *a3,
        float *a4)
{
  return _ZNK5Caver11LineSegment19IntersectsRectangleERKNS_9RectangleEPfS4_(this, a2, a3, a4);
}

