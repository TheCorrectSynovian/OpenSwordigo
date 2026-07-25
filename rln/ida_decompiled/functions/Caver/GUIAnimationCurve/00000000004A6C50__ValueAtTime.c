/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A6C50
 * Mangled: _ZN5Caver17GUIAnimationCurve11ValueAtTimeEf
 * Demangled: Caver::GUIAnimationCurve::ValueAtTime(float)
 *
 * Callers: 1
 *   0x00000000001F3930  Caver::GUIAnimationCurve::ValueAtTime(float)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7510  Caver::BezierSegment::EvaluatePosition(float)
 *   0x0000000000200610  Caver::BezierSegment::IntersectsWithX(float,int *,float *)
 *
 * Referenced strings: 6
 *   insn=0x00000000004A6C64 string=0x0000000000597218 "r"
 *   insn=0x00000000004A6C68 string=0x00000000004A6C6C "T"
 *   insn=0x00000000004A6C6C string=0x00000000004A6C70 """
 *   insn=0x00000000004A6C8C string=0x00000000004A6C90 "`f"
 *   insn=0x00000000004A6CA8 string=0x00000000001F7510 "0'"
 *   insn=0x00000000004A6CD0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::GUIAnimationCurve::ValueAtTime(Caver::GUIAnimationCurve *this, float a2)
{
  char v3; // w0
  float result; // s0
  __int64 v5; // [xsp+0h] [xbp-30h] BYREF
  int v6; // [xsp+8h] [xbp-28h] BYREF
  float v7[3]; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = Caver::BezierSegment::IntersectsWithX(this, fminf(fmaxf(a2, 0.0001), 0.9999), &v6, v7);
  result = 0.0;
  if ( (v3 & 1) != 0 )
  {
    Caver::BezierSegment::EvaluatePosition(&v5, this, v7[0]);
    return *((float *)&v5 + 1);
  }
  return result;
}

