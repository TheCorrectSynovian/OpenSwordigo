/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AC5C
 * Mangled: _Z19PVRTMatrixIdentityFR11PVRTMATRIXf
 * Demangled: PVRTMatrixIdentityF(PVRTMATRIXf &)
 *
 * Callers: 1
 *   0x00000000001FE600  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000051AC5C string=0x000000000051AC60 "I"
 *   insn=0x000000000051AC60 string=0x000000000051AC64 "J"
 *   insn=0x000000000051AC64 string=0x000000000051AC68 "K"
 *   insn=0x000000000051AC6C string=0x000000000051AC70 "!"
 *   insn=0x000000000051AC70 string=0x000000000051AC74 "B"
 *   insn=0x000000000051AC74 string=0x000000000051AC78 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixIdentityF(_OWORD *a1)
{
  long double result; // q0

  result = *(long double *)&xmmword_583490;
  *a1 = xmmword_583490;
  a1[1] = xmmword_5837E0;
  a1[2] = xmmword_5837F0;
  a1[3] = xmmword_583800;
  return result;
}

