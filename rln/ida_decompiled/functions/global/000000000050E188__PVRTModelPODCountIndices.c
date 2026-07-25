/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050E188
 * Mangled: _Z24PVRTModelPODCountIndicesRK8SPODMesh
 * Demangled: PVRTModelPODCountIndices(SPODMesh const&)
 *
 * Callers: 1
 *   0x0000000000203220  PVRTModelPODCountIndices(SPODMesh const&)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x000000000050E18C string=0x000000000050E190 "\t"
 *   insn=0x000000000050E18C string=0x000000000050E1A8 ""
 *   insn=0x000000000050E198 string=0x000000000050E1B4 "\nq}"
 *   insn=0x000000000050E1A4 string=0x000000000050E200 ")\t\n"
 *   insn=0x000000000050E1B4 string=0x000000000050E1B8 "+A"
 *   insn=0x000000000050E1BC string=0x000000000050E1C0 "A"
 *   insn=0x000000000050E1C8 string=0x000000000050E1CC "c"
 *   insn=0x000000000050E1D0 string=0x000000000050E1D4 "k"
 *   insn=0x000000000050E1D8 string=0x000000000050E1DC "B"
 *   insn=0x000000000050E1E0 string=0x000000000050E1E4 "B"
 *   insn=0x000000000050E1E4 string=0x000000000050E1E8 "!"
 *   insn=0x000000000050E1E8 string=0x000000000050E1EC "@"
 *   insn=0x000000000050E1F0 string=0x000000000050E1F4 "_"
 *   insn=0x000000000050E200 string=0x000000000050E204 ""
 *   insn=0x000000000050E204 string=0x000000000050E208 "*E@"
 *   insn=0x000000000050E208 string=0x000000000050E20C ""
 *   insn=0x000000000050E20C string=0x000000000050E210 "\n"
 *   insn=0x000000000050E210 string=0x000000000050E214 "@\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODCountIndices(__int64 a1)
{
  __int64 v1; // x8
  int32x4_t *v2; // x9
  __int64 v3; // x10
  __int64 result; // x0
  int32x4_t *v5; // x11
  int32x4_t v6; // q0
  int32x4_t v7; // q1
  __int64 v8; // x12
  int32x4_t v9; // q2
  int32x4_t v10; // q3
  int32x4_t v11; // q4
  int *v12; // x9
  __int64 v13; // x8
  int v14; // t1

  v1 = *(unsigned int *)(a1 + 48);
  if ( !(_DWORD)v1 )
    return (unsigned int)(3 * *(_DWORD *)(a1 + 4));
  v2 = *(int32x4_t **)(a1 + 40);
  if ( (unsigned int)v1 < 8 )
  {
    v3 = 0;
    LODWORD(result) = 0;
LABEL_8:
    v12 = (int *)v2 + v3;
    v13 = v1 - v3;
    do
    {
      v14 = *v12++;
      --v13;
      result = (unsigned int)(result + v14 + 2);
    }
    while ( v13 );
    return result;
  }
  v3 = (unsigned int)v1 & 0xFFFFFFF8;
  v5 = v2 + 1;
  v6 = 0u;
  v7.n128_u64[0] = 0x200000002LL;
  v7.n128_u64[1] = 0x200000002LL;
  v8 = v3;
  v9 = 0u;
  do
  {
    v10 = v5[-1];
    v11 = *v5;
    v8 -= 8;
    v5 += 2;
    v6 = vaddq_s32(vaddq_s32(v6, v10), v7);
    v9 = vaddq_s32(vaddq_s32(v9, v11), v7);
  }
  while ( v8 );
  result = (unsigned int)vaddvq_s32(vaddq_s32(v9, v6));
  if ( v3 != v1 )
    goto LABEL_8;
  return result;
}

