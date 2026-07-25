/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516C98
 * Mangled: _Z17PVRTTransformBackP12PVRTVECTOR4fPKS_PK11PVRTMATRIXf
 * Demangled: PVRTTransformBack(PVRTVECTOR4f *,PVRTVECTOR4f const*,PVRTMATRIXf const*)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAE30  PVRTMatrixLinearEqSolveF(float *,float **,int)
 *   0x00000000001FF4E0  PVRTMatrixTransposeF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Referenced strings: 12
 *   insn=0x0000000000516CA8 string=0x0000000000516CAC "U"
 *   insn=0x0000000000516CE0 string=0x0000000000516CE4 "\tQ"
 *   insn=0x0000000000516CE8 string=0x0000000000516CEC "\t"
 *   insn=0x0000000000516CEC string=0x0000000000516CF0 ""
 *   insn=0x0000000000516D00 string=0x0000000000516D04 "h"
 *   insn=0x0000000000516D14 string=0x0000000000516D18 "h"
 *   insn=0x0000000000516D1C string=0x0000000000516D20 "h\n@"
 *   insn=0x0000000000516D24 string=0x0000000000516D28 "h"
 *   insn=0x0000000000516D2C string=0x0000000000516D30 "@"
 *   insn=0x0000000000516D30 string=0x00000000001FAE30 "0'"
 *   insn=0x0000000000516D40 string=0x0000000000516D58 "^}"
 *   insn=0x0000000000516D58 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTTransformBack(float *a1, int *a2)
{
  __int128 v5; // [xsp+8h] [xbp-D8h]
  __int128 v6; // [xsp+18h] [xbp-C8h]
  __int128 v7; // [xsp+28h] [xbp-B8h]
  __int128 v8; // [xsp+38h] [xbp-A8h]
  int v9; // [xsp+48h] [xbp-98h] BYREF
  __int128 v10; // [xsp+4Ch] [xbp-94h]
  int v11; // [xsp+5Ch] [xbp-84h] BYREF
  __int128 v12; // [xsp+60h] [xbp-80h]
  int v13; // [xsp+70h] [xbp-70h] BYREF
  __int128 v14; // [xsp+74h] [xbp-6Ch]
  int v15; // [xsp+84h] [xbp-5Ch] BYREF
  __int128 v16; // [xsp+88h] [xbp-58h]
  float *v17[5]; // [xsp+98h] [xbp-48h] BYREF

  v17[4] = *(float **)(_ReadStatusReg(TPIDR_EL0) + 40);
  PVRTMatrixTransposeF();
  v10 = v5;
  v17[0] = (float *)&v9;
  v17[1] = (float *)&v11;
  v12 = v6;
  v14 = v7;
  v17[2] = (float *)&v13;
  v17[3] = (float *)&v15;
  v16 = v8;
  v9 = *a2;
  v11 = a2[1];
  v13 = a2[2];
  v15 = a2[3];
  return PVRTMatrixLinearEqSolveF(a1, v17, 4);
}

