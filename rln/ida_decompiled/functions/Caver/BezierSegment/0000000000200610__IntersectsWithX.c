/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200610
 * Mangled: ._ZN5Caver13BezierSegment15IntersectsWithXEfPiPf
 * Demangled: Caver::BezierSegment::IntersectsWithX(float,int *,float *)
 *
 * Callers: 1
 *   0x00000000004A6C50  Caver::GUIAnimationCurve::ValueAtTime(float)
 *
 * Callees: 1
 *   0x00000000004ABF8C  Caver::BezierSegment::IntersectsWithX(float,int *,float *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200618 string=0x000000000020061C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BezierSegment::IntersectsWithX(Caver::BezierSegment *this, float a2, int *a3, float *a4)
{
  return _ZN5Caver13BezierSegment15IntersectsWithXEfPiPf(this, a2, a3, a4);
}

