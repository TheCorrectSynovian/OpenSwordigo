/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BF2C
 * Mangled: _Z21PVRTMatrixVec3LengthFRK12PVRTVECTOR3f
 * Demangled: PVRTMatrixVec3LengthF(PVRTVECTOR3f const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 7
 *   insn=0x000000000051BF34 string=0x000000000051BF38 "!!"
 *   insn=0x000000000051BF3C string=0x000000000051BF40 "A""
 *   insn=0x000000000051BF48 string=0x000000000051BF4C "  !"
 *   insn=0x000000000051BF4C string=0x000000000051BF50 "f"
 *   insn=0x000000000051BF50 string=0x000000000051BF54 " "
 *   insn=0x000000000051BF50 string=0x000000000051BF5C "u"
 *   insn=0x000000000051BF5C string=0x00000000001FD530 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixVec3LengthF(float *a1, double a2, long double a3)
{
  *(float *)&a3 = sqrtf((float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2]));
  return a3;
}

