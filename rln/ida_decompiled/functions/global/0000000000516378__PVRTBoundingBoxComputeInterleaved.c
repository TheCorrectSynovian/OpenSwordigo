/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516378
 * Mangled: _Z33PVRTBoundingBoxComputeInterleavedP19PVRTBOUNDINGBOX_TAGPKhiii
 * Demangled: PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG *,uchar const*,int,int,int)
 *
 * Callers: 1
 *   0x0000000000202860  PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG *,uchar const*,int,int,int)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000516378 string=0x000000000051637C "("
 *   insn=0x0000000000516384 string=0x0000000000516388 "_"
 *   insn=0x0000000000516388 string=0x000000000051638C "k"
 *   insn=0x0000000000516390 string=0x0000000000516394 "\t"
 *   insn=0x0000000000516394 string=0x0000000000516398 ")"
 *   insn=0x0000000000516398 string=0x000000000051639C ")!"
 *   insn=0x000000000051639C string=0x00000000005163A0 "J"
 *   insn=0x00000000005163A0 string=0x00000000005163A4 "C"
 *   insn=0x00000000005163A4 string=0x00000000005163A8 "$"
 *   insn=0x00000000005163AC string=0x00000000005163B0 "&"
 *   insn=0x00000000005163C0 string=0x00000000005163C4 "&"
 *   insn=0x00000000005163E4 string=0x00000000005163E8 "J"
 *   insn=0x00000000005163E8 string=0x00000000005163EC ")"
 *   insn=0x00000000005163F8 string=0x00000000005163FC "$"
 *   insn=0x00000000005163FC string=0x0000000000516400 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall PVRTBoundingBoxComputeInterleaved(float *result, __int64 a2, int a3, int a4, int a5)
{
  float *v5; // x8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float *v9; // x9
  int v10; // w10
  float v11; // s3
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  float v16; // s6

  v5 = (float *)(a2 + a4);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  if ( a3 < 2 )
  {
    v13 = *v5;
    v12 = v5[1];
    v11 = v5[2];
  }
  else
  {
    v9 = (float *)(a2 + a5 + (__int64)a4 + 8);
    v10 = a3 - 1;
    v11 = v5[2];
    v12 = v5[1];
    v13 = *v5;
    do
    {
      v14 = *(v9 - 2);
      v15 = *(v9 - 1);
      if ( v14 < v13 )
        v13 = *(v9 - 2);
      if ( v14 > v6 )
        v6 = *(v9 - 2);
      v16 = *v9;
      if ( v15 < v12 )
        v12 = *(v9 - 1);
      if ( v15 > v7 )
        v7 = *(v9 - 1);
      if ( v16 < v11 )
        v11 = *v9;
      if ( v16 > v8 )
        v8 = *v9;
      --v10;
      v9 = (float *)((char *)v9 + a5);
    }
    while ( v10 );
  }
  *result = v13;
  result[1] = v12;
  result[2] = v11;
  result[3] = v13;
  result[4] = v12;
  result[5] = v8;
  result[6] = v13;
  result[7] = v7;
  result[8] = v11;
  result[9] = v13;
  result[10] = v7;
  result[11] = v8;
  result[12] = v6;
  result[13] = v12;
  result[14] = v11;
  result[15] = v6;
  result[16] = v12;
  result[17] = v8;
  result[18] = v6;
  result[19] = v7;
  result[20] = v11;
  result[21] = v6;
  result[22] = v7;
  result[23] = v8;
  return result;
}

