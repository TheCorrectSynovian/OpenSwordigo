/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8980
 * Mangled: ._ZN5Caver27LineSegmentIntersectsCircleERKNS_11LineSegmentERKNS_6CircleERKNS_7Vector2EffPfPS6_
 * Demangled: Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Callers: 1
 *   0x000000000021742C  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *
 * Callees: 1
 *   0x00000000004AD7C4  Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8988 string=0x00000000001F898C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegmentIntersectsCircle(
        Caver *this,
        const Caver::LineSegment *a2,
        const Caver::Circle *a3,
        const Caver::Vector2 *a4,
        float a5,
        float a6,
        float *a7,
        Caver::Vector2 *a8)
{
  return _ZN5Caver27LineSegmentIntersectsCircleERKNS_11LineSegmentERKNS_6CircleERKNS_7Vector2EffPfPS6_(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}

