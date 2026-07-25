/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD9D0
 * Mangled: ._ZNK5Caver11LineSegment6BoundsEv
 * Demangled: Caver::LineSegment::Bounds(void)
 *
 * Callers: 1
 *   0x0000000000468CE0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callees: 1
 *   0x00000000004AD998  Caver::LineSegment::Bounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD9D8 string=0x00000000001FD9DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegment::Bounds(Caver::LineSegment *this)
{
  return _ZNK5Caver11LineSegment6BoundsEv(this);
}

