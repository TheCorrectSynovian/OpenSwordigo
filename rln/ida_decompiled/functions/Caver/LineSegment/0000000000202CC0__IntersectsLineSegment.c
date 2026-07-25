/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202CC0
 * Mangled: ._ZNK5Caver11LineSegment21IntersectsLineSegmentERKS0_PfS3_
 * Demangled: Caver::LineSegment::IntersectsLineSegment(Caver::LineSegment const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004AD4F8  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *
 * Callees: 1
 *   0x00000000004ADA18  Caver::LineSegment::IntersectsLineSegment(Caver::LineSegment const&,float *,float *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202CC4 string=0x00000000004ADA18 " "
 *   insn=0x0000000000202CC8 string=0x0000000000202CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegment::IntersectsLineSegment(
        Caver::LineSegment *this,
        const Caver::LineSegment *a2,
        float *a3,
        float *a4)
{
  return _ZNK5Caver11LineSegment21IntersectsLineSegmentERKS0_PfS3_(this, a2, a3, a4);
}

