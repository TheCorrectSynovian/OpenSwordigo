/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051B634
 * Mangled: _Z19PVRTMatrixLookAtLHFR11PVRTMATRIXfRK12PVRTVECTOR3fS3_S3_
 * Demangled: PVRTMatrixLookAtLHF(PVRTMATRIXf &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA690  .sqrt
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 53
 *   insn=0x000000000051B64C string=0x000000000051B650 "V"
 *   insn=0x000000000051B664 string=0x000000000051B668 "`"
 *   insn=0x000000000051B668 string=0x000000000051B66C "B"
 *   insn=0x000000000051B66C string=0x000000000051B670 "d\n@"
 *   insn=0x000000000051B670 string=0x000000000051B674 "E@"
 *   insn=0x000000000051B674 string=0x000000000051B678 "8""
 *   insn=0x000000000051B678 string=0x000000000051B67C ")8#"
 *   insn=0x000000000051B684 string=0x000000000051B688 "!\t)"
 *   insn=0x000000000051B68C string=0x000000000051B690 "A\t*"
 *   insn=0x000000000051B698 string=0x000000000051B69C " "
 *   insn=0x000000000051B6A0 string=0x000000000051B6A4 "g"
 *   insn=0x000000000051B6A4 string=0x000000000051B6A8 " "
 *   insn=0x000000000051B6AC string=0x00000000001FA690 "0'"
 *   insn=0x000000000051B6B0 string=0x000000000051B6B4 ""
 *   insn=0x000000000051B6B4 string=0x000000000051B6B8 "`"
 *   insn=0x000000000051B6BC string=0x000000000051B6C0 "!!"
 *   insn=0x000000000051B6C0 string=0x000000000051B6C4 "B""
 *   insn=0x000000000051B6C4 string=0x000000000051B6C8 "!(""
 *   insn=0x000000000051B6CC string=0x000000000051B6D0 "\t#"
 *   insn=0x000000000051B6D0 string=0x000000000051B6D4 ")\t#"
 *   insn=0x000000000051B6D4 string=0x000000000051B6D8 "J\t#"
 *   insn=0x000000000051B6D8 string=0x000000000051B6DC "@""
 *   insn=0x000000000051B6DC string=0x000000000051B6E0 " ( "
 *   insn=0x000000000051B6E4 string=0x000000000051B6E8 " "
 *   insn=0x000000000051B6EC string=0x000000000051B6F0 "g"
 *   insn=0x000000000051B6F0 string=0x000000000051B6F4 " "
 *   insn=0x000000000051B700 string=0x000000000051B704 "`"
 *   insn=0x000000000051B708 string=0x000000000051B70C "FA!"
 *   insn=0x000000000051B70C string=0x000000000051B710 "! "
 *   insn=0x000000000051B710 string=0x000000000051B714 "B "
 *   insn=0x000000000051B714 string=0x000000000051B718 "` "
 *   insn=0x000000000051B71C string=0x000000000051B720 "#\t "
 *   insn=0x000000000051B720 string=0x000000000051B724 "F\t""
 *   insn=0x000000000051B724 string=0x000000000051B728 "c8&"
 *   insn=0x000000000051B728 string=0x000000000051B72C "F\t!"
 *   insn=0x000000000051B734 string=0x000000000051B738 "!\t!"
 *   insn=0x000000000051B73C string=0x000000000051B740 "A8!"
 *   insn=0x000000000051B744 string=0x000000000051B748 "H"
 *   insn=0x000000000051B748 string=0x000000000051B74C "B\t "
 *   insn=0x000000000051B74C string=0x000000000051B750 "&\t!"
 *   insn=0x000000000051B750 string=0x000000000051B754 "%A!"
 *   insn=0x000000000051B75C string=0x000000000051B760 "H"
 *   insn=0x000000000051B760 string=0x000000000051B764 "B8&"
 *   insn=0x000000000051B768 string=0x000000000051B76C "G\t#"
 *   insn=0x000000000051B76C string=0x000000000051B770 "0\t#"
 *   insn=0x000000000051B784 string=0x000000000051B788 ":1"
 *   insn=0x000000000051B7A8 string=0x000000000051B7AC "`"
 *   insn=0x000000000051B7AC string=0x000000000051B7B0 "b\n@"
 *   insn=0x000000000051B7B0 string=0x000000000051B7B4 "I"
 *   insn=0x000000000051B7B4 string=0x000000000051B7B8 "#"
 *   insn=0x000000000051B7BC string=0x000000000051B7C0 "!@!"
 *   insn=0x000000000051B7C0 string=0x000000000051B7C4 "B@!"
 *   insn=0x000000000051B818 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTMatrixLookAtLHF(__int64 a1, float *a2, float *a3, float *a4)
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
  v4 = *a2 - *a3;
  v5 = a2[1] - a3[1];
  v6 = a2[2] - a3[2];
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

