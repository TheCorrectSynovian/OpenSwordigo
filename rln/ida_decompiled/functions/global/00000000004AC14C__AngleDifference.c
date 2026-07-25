/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC14C
 * Mangled: _Z15AngleDifferenceff
 * Demangled: AngleDifference(float,float)
 *
 * Callers: 1
 *   0x00000000001F4590  AngleDifference(float,float)
 *
 * Callees: 1
 *   0x00000000001FC160  .fmodf
 *
 * Referenced strings: 17
 *   insn=0x00000000004AC160 string=0x00000000004AC164 "("
 *   insn=0x00000000004AC16C string=0x00000000004AC170 "#"
 *   insn=0x00000000004AC170 string=0x00000000004AC174 "c"
 *   insn=0x00000000004AC174 string=0x00000000004AC178 "` b"
 *   insn=0x00000000004AC180 string=0x00000000004AC184 "\tAK"
 *   insn=0x00000000004AC184 string=0x00000000004AC188 "!"
 *   insn=0x00000000004AC18C string=0x00000000004AC190 "\n"
 *   insn=0x00000000004AC18C string=0x00000000001FC160 "0'"
 *   insn=0x00000000004AC194 string=0x00000000004AC198 "!"
 *   insn=0x00000000004AC1A4 string=0x00000000004AC1A8 ""
 *   insn=0x00000000004AC1B8 string=0x00000000004AC1BC "!"
 *   insn=0x00000000004AC1C0 string=0x00000000004AC1C4 ""
 *   insn=0x00000000004AC1C4 string=0x00000000004AC1C8 "@9("
 *   insn=0x00000000004AC1D4 string=0x00000000004AC1D8 "!"
 *   insn=0x00000000004AC1E0 string=0x00000000004AC1E4 "`! "
 *   insn=0x00000000004AC1E4 string=0x00000000004AC1E8 "aM!"
 *   insn=0x00000000004AC1F4 string=0x00000000004AC1F8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall AngleDifference(float a1, long double a2)
{
  float v2; // s8
  float v3; // s10
  float v4; // s8
  float v5; // s0
  float v6; // s11
  float v7; // s0
  float v8; // s0

  v2 = *(float *)&a2;
  *(float *)&a2 = *(float *)&a2 - a1;
  if ( fabsf(*(float *)&a2) >= 3.14159265 )
  {
    v3 = fmodf(a1, 6.2832);
    v4 = fmodf(v2, 6.2832);
    v5 = (float)(v4 - v3) + 12.5663706;
    v6 = fmodf(v5, 6.2832);
    v7 = (float)(v3 - v4) + 12.5663706;
    v8 = fmodf(v7, 6.2832);
    *(float *)&a2 = -v8;
    if ( v6 < v8 )
      *(float *)&a2 = v6;
  }
  return a2;
}

