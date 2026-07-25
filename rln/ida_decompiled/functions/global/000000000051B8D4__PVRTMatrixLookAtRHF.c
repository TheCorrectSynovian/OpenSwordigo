/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051B8D4
 * Mangled: _Z19PVRTMatrixLookAtRHFR11PVRTMATRIXfRK12PVRTVECTOR3fS3_S3_
 * Demangled: PVRTMatrixLookAtRHF(PVRTMATRIXf &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA690  .sqrt
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 55
 *   insn=0x000000000051B8EC string=0x000000000051B8F0 "V"
 *   insn=0x000000000051B904 string=0x000000000051B908 "@"
 *   insn=0x000000000051B908 string=0x000000000051B90C "b"
 *   insn=0x000000000051B90C string=0x000000000051B910 "D@"
 *   insn=0x000000000051B910 string=0x000000000051B914 "e\n@"
 *   insn=0x000000000051B914 string=0x000000000051B918 "8""
 *   insn=0x000000000051B918 string=0x000000000051B91C ")8#"
 *   insn=0x000000000051B924 string=0x000000000051B928 "!\t)"
 *   insn=0x000000000051B92C string=0x000000000051B930 "A\t*"
 *   insn=0x000000000051B938 string=0x000000000051B93C " "
 *   insn=0x000000000051B940 string=0x000000000051B944 "g"
 *   insn=0x000000000051B944 string=0x000000000051B948 " "
 *   insn=0x000000000051B948 string=0x000000000051B94C "Q{"
 *   insn=0x000000000051B94C string=0x00000000001FA690 "0'"
 *   insn=0x000000000051B950 string=0x000000000051B954 ""
 *   insn=0x000000000051B954 string=0x000000000051B958 "`"
 *   insn=0x000000000051B95C string=0x000000000051B960 "!!"
 *   insn=0x000000000051B960 string=0x000000000051B964 "B""
 *   insn=0x000000000051B964 string=0x000000000051B968 "!(""
 *   insn=0x000000000051B96C string=0x000000000051B970 "\t#"
 *   insn=0x000000000051B970 string=0x000000000051B974 ")\t#"
 *   insn=0x000000000051B974 string=0x000000000051B978 "J\t#"
 *   insn=0x000000000051B978 string=0x000000000051B97C "@""
 *   insn=0x000000000051B97C string=0x000000000051B980 " ( "
 *   insn=0x000000000051B984 string=0x000000000051B988 " "
 *   insn=0x000000000051B98C string=0x000000000051B990 "g"
 *   insn=0x000000000051B990 string=0x000000000051B994 " "
 *   insn=0x000000000051B994 string=0x000000000051B998 ">{"
 *   insn=0x000000000051B9A0 string=0x000000000051B9A4 "`"
 *   insn=0x000000000051B9A8 string=0x000000000051B9AC "FA!"
 *   insn=0x000000000051B9AC string=0x000000000051B9B0 "! "
 *   insn=0x000000000051B9B0 string=0x000000000051B9B4 "B "
 *   insn=0x000000000051B9B4 string=0x000000000051B9B8 "` "
 *   insn=0x000000000051B9BC string=0x000000000051B9C0 "#\t "
 *   insn=0x000000000051B9C0 string=0x000000000051B9C4 "F\t""
 *   insn=0x000000000051B9C4 string=0x000000000051B9C8 "c8&"
 *   insn=0x000000000051B9C8 string=0x000000000051B9CC "F\t!"
 *   insn=0x000000000051B9D4 string=0x000000000051B9D8 "!\t!"
 *   insn=0x000000000051B9DC string=0x000000000051B9E0 "A8!"
 *   insn=0x000000000051B9E4 string=0x000000000051B9E8 "H"
 *   insn=0x000000000051B9E8 string=0x000000000051B9EC "B\t "
 *   insn=0x000000000051B9EC string=0x000000000051B9F0 "&\t!"
 *   insn=0x000000000051B9F0 string=0x000000000051B9F4 "%A!"
 *   insn=0x000000000051B9FC string=0x000000000051BA00 "H"
 *   insn=0x000000000051BA00 string=0x000000000051BA04 "B8&"
 *   insn=0x000000000051BA08 string=0x000000000051BA0C "G\t#"
 *   insn=0x000000000051BA0C string=0x000000000051BA10 "0\t#"
 *   insn=0x000000000051BA24 string=0x000000000051BA28 ":1"
 *   insn=0x000000000051BA48 string=0x000000000051BA4C "`"
 *   insn=0x000000000051BA4C string=0x000000000051BA50 "b\n@"
 *   insn=0x000000000051BA50 string=0x000000000051BA54 "I"
 *   insn=0x000000000051BA54 string=0x000000000051BA58 "#"
 *   insn=0x000000000051BA5C string=0x000000000051BA60 "!@!"
 *   insn=0x000000000051BA60 string=0x000000000051BA64 "B@!"
 *   insn=0x000000000051BAB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTMatrixLookAtRHF(__int64 a1, float *a2, float *a3, float *a4)
{
  float v4; // s8
  float v5; // s9
  float v6; // s10
  float v7; // s3
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s0
  float v15; // s3
  float v16; // s0
  float v17; // s1

  _ReadStatusReg(TPIDR_EL0);
  v4 = *a3 - *a2;
  v5 = a3[1] - a2[1];
  v6 = a3[2] - a2[2];
  v7 = 1.0 / sqrt((float)((float)((float)(v4 * v4) + (float)(v5 * v5)) + (float)(v6 * v6)));
  v8 = v4 * v7;
  v9 = v5 * v7;
  v10 = v6 * v7;
  v11 = 1.0 / sqrt((float)((float)((float)(*a4 * *a4) + (float)(a4[1] * a4[1])) + (float)(a4[2] * a4[2])));
  v12 = *a4 * v11;
  v13 = a4[1] * v11;
  v14 = a4[2] * v11;
  *(float *)(a1 + 40) = -v10;
  v15 = (float)(v9 * v14) - (float)(v10 * v13);
  v16 = (float)(v10 * v12) - (float)(v8 * v14);
  v17 = (float)(v8 * v13) - (float)(v9 * v12);
  *(float *)(a1 + 8) = -v8;
  *(float *)(a1 + 24) = -v9;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)a1 = v15;
  *(float *)(a1 + 4) = (float)(v10 * v16) - (float)(v9 * v17);
  *(float *)(a1 + 16) = v16;
  *(float *)(a1 + 20) = (float)(v8 * v17) - (float)(v10 * v15);
  *(float *)(a1 + 32) = v17;
  *(float *)(a1 + 36) = (float)(v9 * v15) - (float)(v8 * v16);
  return PVRTMatrixMultiplyF();
}

