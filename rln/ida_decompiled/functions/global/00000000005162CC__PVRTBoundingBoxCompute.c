/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005162CC
 * Mangled: _Z22PVRTBoundingBoxComputeP19PVRTBOUNDINGBOX_TAGPK12PVRTVECTOR3fi
 * Demangled: PVRTBoundingBoxCompute(PVRTBOUNDINGBOX_TAG *,PVRTVECTOR3f const*,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000005162CC string=0x00000000005162D0 ""@"
 *   insn=0x00000000005162D0 string=0x00000000005162D4 "_"
 *   insn=0x00000000005162D4 string=0x00000000005162D8 ""
 *   insn=0x00000000005162DC string=0x00000000005162E0 "(P"
 *   insn=0x00000000005162E0 string=0x00000000005162E4 ")"
 *   insn=0x00000000005162E4 string=0x00000000005162E8 "C"
 *   insn=0x00000000005162E8 string=0x00000000005162EC "$"
 *   insn=0x0000000000516328 string=0x000000000051632C ")"
 *   insn=0x000000000051632C string=0x0000000000516330 "!"
 *   insn=0x0000000000516338 string=0x000000000051633C "$"
 *   insn=0x000000000051633C string=0x0000000000516340 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall PVRTBoundingBoxCompute(float *result, float *a2, int a3)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float *v6; // x8
  __int64 v7; // x9
  float v8; // s3
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  float v13; // t1
  float v14; // s6

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  if ( a3 < 2 )
  {
    v10 = *a2;
    v9 = a2[1];
    v8 = a2[2];
  }
  else
  {
    v6 = a2 + 5;
    v7 = (unsigned int)a3 - 1LL;
    v8 = a2[2];
    v9 = a2[1];
    v10 = *a2;
    do
    {
      v11 = *(v6 - 2);
      v12 = *(v6 - 1);
      if ( v11 < v10 )
        v10 = *(v6 - 2);
      if ( v11 > v3 )
        v3 = *(v6 - 2);
      v13 = *v6;
      v6 += 3;
      v14 = v13;
      if ( v12 < v9 )
        v9 = v12;
      if ( v12 > v4 )
        v4 = v12;
      if ( v14 < v8 )
        v8 = v14;
      if ( v14 > v5 )
        v5 = v14;
      --v7;
    }
    while ( v7 );
  }
  *result = v10;
  result[1] = v9;
  result[2] = v8;
  result[3] = v10;
  result[4] = v9;
  result[5] = v5;
  result[6] = v10;
  result[7] = v4;
  result[8] = v8;
  result[9] = v10;
  result[10] = v4;
  result[11] = v5;
  result[12] = v3;
  result[13] = v9;
  result[14] = v8;
  result[15] = v3;
  result[16] = v9;
  result[17] = v5;
  result[18] = v3;
  result[19] = v4;
  result[20] = v8;
  result[21] = v3;
  result[22] = v4;
  result[23] = v5;
  return result;
}

