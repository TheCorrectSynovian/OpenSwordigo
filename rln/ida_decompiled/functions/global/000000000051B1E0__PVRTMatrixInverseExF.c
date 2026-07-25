/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051B1E0
 * Mangled: _Z20PVRTMatrixInverseExFR11PVRTMATRIXfRKS_
 * Demangled: PVRTMatrixInverseExF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAE30  PVRTMatrixLinearEqSolveF(float *,float **,int)
 *
 * Referenced strings: 10
 *   insn=0x000000000051B1F4 string=0x000000000051B1F8 "U"
 *   insn=0x000000000051B20C string=0x000000000051B210 "(Q"
 *   insn=0x000000000051B214 string=0x000000000051B218 "("
 *   insn=0x000000000051B21C string=0x000000000051B220 "("
 *   insn=0x000000000051B268 string=0x00000000001FAE30 "0'"
 *   insn=0x000000000051B38C string=0x000000000051B390 "`"
 *   insn=0x000000000051B394 string=0x000000000051B398 "`"
 *   insn=0x000000000051B39C string=0x000000000051B3A0 "`"
 *   insn=0x000000000051B3A4 string=0x000000000051B3A8 "`\n"
 *   insn=0x000000000051B3D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixInverseExF(long double *a1, __int128 *a2)
{
  __int128 v3; // q0
  __int128 v5; // q0
  __int128 v6; // q0
  __int128 v7; // q0
  __int128 v8; // q0
  __int128 v9; // q0
  __int128 v10; // q0
  __int128 v11; // q0
  __int128 v12; // q0
  __int128 v13; // q0
  __int128 v14; // q0
  __int128 v15; // q0
  long double result; // q0
  int v17; // [xsp+8h] [xbp-F8h] BYREF
  __int128 v18; // [xsp+Ch] [xbp-F4h]
  int v19; // [xsp+1Ch] [xbp-E4h] BYREF
  __int128 v20; // [xsp+20h] [xbp-E0h]
  int v21; // [xsp+30h] [xbp-D0h] BYREF
  __int128 v22; // [xsp+34h] [xbp-CCh]
  int v23; // [xsp+44h] [xbp-BCh] BYREF
  __int128 v24; // [xsp+48h] [xbp-B8h]
  float v25; // [xsp+58h] [xbp-A8h] BYREF
  int v26; // [xsp+5Ch] [xbp-A4h]
  int v27; // [xsp+60h] [xbp-A0h]
  int v28; // [xsp+64h] [xbp-9Ch]
  float *v29[4]; // [xsp+68h] [xbp-98h] BYREF
  __int128 v30; // [xsp+88h] [xbp-78h]
  __int128 v31; // [xsp+98h] [xbp-68h]
  long double v32; // [xsp+A8h] [xbp-58h]
  __int128 v33; // [xsp+B8h] [xbp-48h]
  __int64 v34; // [xsp+C8h] [xbp-38h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v29[0] = (float *)&v17;
  v29[1] = (float *)&v19;
  v29[2] = (float *)&v21;
  v29[3] = (float *)&v23;
  v17 = 1065353216;
  v3 = *a2;
  v19 = 0;
  v18 = v3;
  v5 = a2[1];
  v21 = 0;
  v20 = v5;
  v6 = a2[2];
  v23 = 0;
  v22 = v6;
  v24 = a2[3];
  PVRTMatrixLinearEqSolveF(&v25, v29, 4);
  v17 = 0;
  *(float *)&v30 = v25;
  LODWORD(v31) = v26;
  LODWORD(v32) = v27;
  LODWORD(v33) = v28;
  v7 = *a2;
  v19 = 1065353216;
  v18 = v7;
  v8 = a2[1];
  v21 = 0;
  v20 = v8;
  v9 = a2[2];
  v23 = 0;
  v22 = v9;
  v24 = a2[3];
  PVRTMatrixLinearEqSolveF(&v25, v29, 4);
  v17 = 0;
  *((float *)&v30 + 1) = v25;
  DWORD1(v31) = v26;
  DWORD1(v32) = v27;
  DWORD1(v33) = v28;
  v10 = *a2;
  v19 = 0;
  v18 = v10;
  v11 = a2[1];
  v21 = 1065353216;
  v20 = v11;
  v12 = a2[2];
  v23 = 0;
  v22 = v12;
  v24 = a2[3];
  PVRTMatrixLinearEqSolveF(&v25, v29, 4);
  v17 = 0;
  *((float *)&v30 + 2) = v25;
  DWORD2(v31) = v26;
  DWORD2(v32) = v27;
  DWORD2(v33) = v28;
  v13 = *a2;
  v19 = 0;
  v18 = v13;
  v14 = a2[1];
  v21 = 0;
  v20 = v14;
  v15 = a2[2];
  v23 = 1065353216;
  v22 = v15;
  v24 = a2[3];
  PVRTMatrixLinearEqSolveF(&v25, v29, 4);
  HIDWORD(v33) = v28;
  *((float *)&v30 + 3) = v25;
  HIDWORD(v31) = v26;
  HIDWORD(v32) = v27;
  *((_OWORD *)a1 + 3) = v33;
  *((_OWORD *)a1 + 1) = v31;
  *(_OWORD *)a1 = v30;
  result = v32;
  a1[2] = v32;
  return result;
}

