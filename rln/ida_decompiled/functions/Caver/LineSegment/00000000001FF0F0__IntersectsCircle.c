/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF0F0
 * Mangled: ._ZNK5Caver11LineSegment16IntersectsCircleERKNS_6CircleEPfS4_
 * Demangled: Caver::LineSegment::IntersectsCircle(Caver::Circle const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004AD7C4  Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Callees: 1
 *   0x00000000004ADE64  Caver::LineSegment::IntersectsCircle(Caver::Circle const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF0F8 string=0x00000000001FF0FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegment::IntersectsCircle(
        Caver::LineSegment *this,
        const Caver::Circle *a2,
        float *a3,
        float *a4)
{
  return _ZNK5Caver11LineSegment16IntersectsCircleERKNS_6CircleEPfS4_(this, a2, a3, a4);
}

