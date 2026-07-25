/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AF7C
 * Mangled: _Z20PVRTMatrixTransposeFR11PVRTMATRIXfRKS_
 * Demangled: PVRTMatrixTransposeF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callers: 1
 *   0x00000000001FF4E0  PVRTMatrixTransposeF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000051AF7C string=0x000000000051AF80 "*,A),4B).<C)0DD)2E)#"
 *   insn=0x000000000051AF80 string=0x000000000051AF84 ",4B).<C)0DD)2E)#"
 *   insn=0x000000000051AF84 string=0x000000000051AF88 ".<C)0DD)2E)#"
 *   insn=0x000000000051AF88 string=0x000000000051AF8C "0DD)2E)#"
 *   insn=0x000000000051AF8C string=0x000000000051AF90 "2E)#"
 *   insn=0x000000000051AF90 string=0x000000000051AF94 "#"
 *   insn=0x000000000051AF94 string=0x000000000051AF98 "%"
 *   insn=0x000000000051AF98 string=0x000000000051AF9C "0"
 *   insn=0x000000000051AF9C string=0x000000000051AFA0 "\t4"
 *   insn=0x000000000051AFA8 string=0x000000000051AFAC "\n8"
 *   insn=0x000000000051AFB0 string=0x000000000051AFB4 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall PVRTMatrixTransposeF(_DWORD *result, int *a2)
{
  int v2; // w8
  int v3; // w9
  int v4; // w10
  int v5; // w11
  int v6; // w12
  int v7; // w13
  int v8; // w14
  int v9; // w15
  int v10; // w16
  int v11; // w17
  int v12; // w2
  int v13; // w18
  int v14; // w3
  int v15; // w4
  int v16; // w1
  int v17; // w5

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  v7 = a2[5];
  v8 = a2[6];
  v9 = a2[7];
  v10 = a2[8];
  v11 = a2[9];
  v13 = a2[10];
  v12 = a2[11];
  v14 = a2[12];
  v15 = a2[13];
  v17 = a2[14];
  v16 = a2[15];
  *result = v2;
  result[1] = v6;
  result[4] = v3;
  result[5] = v7;
  result[2] = v10;
  result[3] = v14;
  result[6] = v11;
  result[7] = v15;
  result[8] = v4;
  result[9] = v8;
  result[10] = v13;
  result[11] = v17;
  result[12] = v5;
  result[13] = v9;
  result[14] = v12;
  result[15] = v16;
  return result;
}

