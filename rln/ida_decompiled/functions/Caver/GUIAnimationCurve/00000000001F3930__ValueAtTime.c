/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3930
 * Mangled: ._ZN5Caver17GUIAnimationCurve11ValueAtTimeEf
 * Demangled: Caver::GUIAnimationCurve::ValueAtTime(float)
 *
 * Callers: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Callees: 1
 *   0x00000000004A6C50  Caver::GUIAnimationCurve::ValueAtTime(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3938 string=0x00000000001F393C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimationCurve::ValueAtTime(Caver::GUIAnimationCurve *this, float a2)
{
  return _ZN5Caver17GUIAnimationCurve11ValueAtTimeEf(this, a2);
}

