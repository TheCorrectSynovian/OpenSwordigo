/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051B894
 * Mangled: _Z27PVRTMatrixVec3CrossProductFR12PVRTVECTOR3fRKS_S2_
 * Demangled: PVRTMatrixVec3CrossProductF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callers: 1
 *   0x00000000001FDBE0  PVRTMatrixVec3CrossProductF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000051B894 string=0x000000000051B898 "D"
 *   insn=0x000000000051B898 string=0x000000000051B89C "C"
 *   insn=0x000000000051B89C string=0x000000000051B8A0 "%@"
 *   insn=0x000000000051B8A0 string=0x000000000051B8A4 "&""
 *   insn=0x000000000051B8A4 string=0x000000000051B8A8 "B "
 *   insn=0x000000000051B8B4 string=0x000000000051B8B8 "!#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixVec3CrossProductF(float *a1, float *a2, float *a3)
{
  float v3; // s1
  float v4; // s2
  float v5; // s4
  float v6; // s5
  float v7; // s3
  float v8; // s2
  float result; // s0

  v3 = a2[1];
  v5 = a3[1];
  v4 = a3[2];
  v6 = a2[2];
  v7 = (float)(v3 * v4) - (float)(v6 * v5);
  v8 = (float)(v6 * *a3) - (float)(v4 * *a2);
  result = (float)(v5 * *a2) - (float)(v3 * *a3);
  *a1 = v7;
  a1[1] = v8;
  a1[2] = result;
  return result;
}

