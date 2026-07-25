/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7510
 * Mangled: ._ZNK5Caver13BezierSegment16EvaluatePositionEf
 * Demangled: Caver::BezierSegment::EvaluatePosition(float)
 *
 * Callers: 1
 *   0x00000000004A6C50  Caver::GUIAnimationCurve::ValueAtTime(float)
 *
 * Callees: 1
 *   0x00000000004ABBA0  Caver::BezierSegment::EvaluatePosition(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7518 string=0x00000000001F751C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BezierSegment::EvaluatePosition(Caver::BezierSegment *this, float a2)
{
  return _ZNK5Caver13BezierSegment16EvaluatePositionEf(this, a2);
}

