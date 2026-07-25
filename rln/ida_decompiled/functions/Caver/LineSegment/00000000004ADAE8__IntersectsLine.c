/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADAE8
 * Mangled: _ZNK5Caver11LineSegment14IntersectsLineERKS0_PfS3_
 * Demangled: Caver::LineSegment::IntersectsLine(Caver::LineSegment const&,float *,float *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000004ADAE8 string=0x00000000004ADAEC "$"
 *   insn=0x00000000004ADAFC string=0x00000000004ADB00 "%8#"
 *   insn=0x00000000004ADB00 string=0x00000000004ADB04 "A8&"
 *   insn=0x00000000004ADB04 string=0x00000000004ADB08 "8$"
 *   insn=0x00000000004ADB08 string=0x00000000004ADB0C "":0"
 *   insn=0x00000000004ADB1C string=0x00000000004ADB20 ""
 *   insn=0x00000000004ADB20 string=0x00000000004ADB24 "H"
 *   insn=0x00000000004ADB24 string=0x00000000005972F8 "-C"
 *   insn=0x00000000004ADB2C string=0x00000000004ADB30 "@"q"
 *   insn=0x00000000004ADB30 string=0x00000000004ADB34 "e"
 *   insn=0x00000000004ADB4C string=0x00000000004ADB50 ""
 *   insn=0x00000000004ADB68 string=0x00000000004ADB6C "H"
 *   insn=0x00000000004ADB6C string=0x00000000005972E0 "X"
 *   insn=0x00000000004ADB74 string=0x00000000004ADB78 "L"
 *   insn=0x00000000004ADB78 string=0x00000000004ADB7C "B"
 *   insn=0x00000000004ADB7C string=0x00000000004ADB80 "E"
 *   insn=0x00000000004ADB84 string=0x00000000004ADB88 "!#"
 *   insn=0x00000000004ADB8C string=0x00000000004ADB90 "!8""
 *   insn=0x00000000004ADB90 string=0x00000000004ADB94 " "
 *   insn=0x00000000004ADB94 string=0x00000000004ADB98 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegment::IntersectsLine(
        Caver::LineSegment *this,
        const Caver::LineSegment *a2,
        float *a3,
        float *a4)
{
  float v4; // s3
  float v5; // s16
  float v6; // s5
  float v7; // s1
  float v8; // s7
  float v9; // s2
  float v10; // s0
  __int64 result; // x0
  float v12; // s3
  float v13; // s4
  float v14; // s5

  v4 = *((float *)a2 + 1);
  v5 = *((float *)this + 1);
  v6 = *((float *)a2 + 3) - v4;
  v7 = *((float *)this + 2) - *(float *)this;
  v8 = *((float *)a2 + 2) - *(float *)a2;
  v9 = *((float *)this + 3) - v5;
  v10 = (float)(v6 * v7) - (float)(v8 * v9);
  if ( v10 > -0.0001 && v10 < 0.0001 )
    return 0;
  v12 = v5 - v4;
  v13 = *(float *)this - *(float *)a2;
  v14 = (float)((float)(v8 * v12) - (float)(v6 * v13)) / v10;
  result = 0;
  if ( v14 >= 0.00001 && v14 <= 0.99999 )
  {
    if ( a3 )
      *a3 = v14;
    if ( a4 )
      *a4 = (float)((float)(v7 * v12) - (float)(v13 * v9)) / v10;
    return 1;
  }
  return result;
}

