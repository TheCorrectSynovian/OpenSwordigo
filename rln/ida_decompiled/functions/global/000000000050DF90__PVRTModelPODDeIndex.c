/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050DF90
 * Mangled: _Z19PVRTModelPODDeIndexR8SPODMesh
 * Demangled: PVRTModelPODDeIndex(SPODMesh &)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6770  .calloc
 *   0x00000000001F89E0  .free
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 61
 *   insn=0x000000000050DFA4 string=0x000000000050DFA8 "vv@"
 *   insn=0x000000000050DFA8 string=0x000000000050DFAC "V"
 *   insn=0x000000000050DFAC string=0x000000000050DFB0 "h"
 *   insn=0x000000000050DFB0 string=0x000000000050DFB4 ""
 *   insn=0x000000000050DFB4 string=0x000000000050DFB8 "h2@"
 *   insn=0x000000000050DFBC string=0x000000000050DFC0 "i"
 *   insn=0x000000000050DFBC string=0x000000000050DFD8 "h"
 *   insn=0x000000000050DFC8 string=0x000000000050DFE4 "\nq}"
 *   insn=0x000000000050DFD4 string=0x000000000050E030 ""
 *   insn=0x000000000050DFDC string=0x000000000050DFE0 ""
 *   insn=0x000000000050DFE0 string=0x000000000050E04C "uB@"
 *   insn=0x000000000050DFE4 string=0x000000000050DFE8 "+A"
 *   insn=0x000000000050DFEC string=0x000000000050DFF0 "A"
 *   insn=0x000000000050DFF8 string=0x000000000050DFFC "c"
 *   insn=0x000000000050E000 string=0x000000000050E004 "k"
 *   insn=0x000000000050E008 string=0x000000000050E00C "B"
 *   insn=0x000000000050E010 string=0x000000000050E014 "B"
 *   insn=0x000000000050E014 string=0x000000000050E018 "!"
 *   insn=0x000000000050E018 string=0x000000000050E01C "@"
 *   insn=0x000000000050E020 string=0x000000000050E024 "_"
 *   insn=0x000000000050E030 string=0x000000000050E034 ")\t\n"
 *   insn=0x000000000050E034 string=0x000000000050E038 "*E@"
 *   insn=0x000000000050E038 string=0x000000000050E03C ""
 *   insn=0x000000000050E040 string=0x000000000050E044 "W\t"
 *   insn=0x000000000050E04C string=0x000000000050E050 "w"
 *   insn=0x000000000050E064 string=0x00000000001F6770 "0'"
 *   insn=0x000000000050E06C string=0x000000000050E074 "h"
 *   insn=0x000000000050E078 string=0x000000000050E07C "a"
 *   insn=0x000000000050E07C string=0x000000000050E080 "w"
 *   insn=0x000000000050E07C string=0x000000000050E0E8 "7"
 *   insn=0x000000000050E080 string=0x000000000050E084 "h"
 *   insn=0x000000000050E080 string=0x000000000050E14C "`v@"
 *   insn=0x000000000050E08C string=0x000000000050E090 ""
 *   insn=0x000000000050E09C string=0x000000000050E0A0 "h"
 *   insn=0x000000000050E0A4 string=0x000000000050E0A8 "#"
 *   insn=0x000000000050E0AC string=0x000000000050E0B0 "h"
 *   insn=0x000000000050E0B0 string=0x000000000050E0B4 "bB@"
 *   insn=0x000000000050E0B4 string=0x000000000050E0B8 "iv@"
 *   insn=0x000000000050E0B8 string=0x000000000050E0BC "yuxJ|"
 *   insn=0x000000000050E0BC string=0x000000000050E0C0 "J|"
 *   insn=0x000000000050E0C4 string=0x000000000050E0C8 "H|!"
 *   insn=0x000000000050E0C8 string=0x000000000050E0CC "!"
 *   insn=0x000000000050E0D0 string=0x000000000050E0D4 "h"
 *   insn=0x000000000050E0E8 string=0x000000000050E0EC "h"
 *   insn=0x000000000050E0F4 string=0x000000000050E0F8 ""
 *   insn=0x000000000050E0F8 string=0x000000000050E0FC "}"
 *   insn=0x000000000050E104 string=0x000000000050E108 "h"
 *   insn=0x000000000050E114 string=0x000000000050E118 "h"
 *   insn=0x000000000050E118 string=0x000000000050E11C "bB@"
 *   insn=0x000000000050E11C string=0x000000000050E120 "iv@"
 *   insn=0x000000000050E120 string=0x000000000050E124 "yu"
 *   insn=0x000000000050E124 string=0x000000000050E128 "J|"
 *   insn=0x000000000050E12C string=0x000000000050E130 "}"
 *   insn=0x000000000050E130 string=0x000000000050E134 "!"
 *   insn=0x000000000050E138 string=0x000000000050E13C "h"
 *   insn=0x000000000050E14C string=0x000000000050E150 "`"
 *   insn=0x000000000050E150 string=0x000000000050E154 "#"
 *   insn=0x000000000050E150 string=0x000000000050E15C "`"
 *   insn=0x000000000050E154 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050E15C string=0x000000000050E160 "tv"
 *   insn=0x000000000050E160 string=0x000000000050E164 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTModelPODDeIndex(int *a1)
{
  __int64 v2; // x22
  __int64 v3; // x8
  int32x4_t *v4; // x9
  __int64 v5; // x10
  int v6; // w23
  int32x4_t *v7; // x11
  int32x4_t v8; // q0
  int32x4_t v9; // q1
  __int64 v10; // x12
  int32x4_t v11; // q2
  int32x4_t v12; // q3
  int32x4_t v13; // q4
  __int64 v14; // x8
  int *v15; // x9
  int v16; // t1
  size_t v17; // x21
  char *v18; // x20
  unsigned __int64 v19; // x21
  unsigned __int64 v20; // x21
  void *v21; // x0
  void *v22; // x0

  v2 = *((_QWORD *)a1 + 29);
  if ( !v2 || !*a1 )
    return;
  v3 = (unsigned int)a1[12];
  if ( !(_DWORD)v3 )
  {
    v6 = 3 * a1[1];
    goto LABEL_12;
  }
  v4 = (int32x4_t *)*((_QWORD *)a1 + 5);
  if ( (unsigned int)v3 < 8 )
  {
    v5 = 0;
    v6 = 0;
LABEL_10:
    v14 = v3 - v5;
    v15 = (int *)v4 + v5;
    do
    {
      v16 = *v15++;
      --v14;
      v6 += v16 + 2;
    }
    while ( v14 );
    goto LABEL_12;
  }
  v5 = (unsigned int)v3 & 0xFFFFFFF8;
  v7 = v4 + 1;
  v8 = 0u;
  v9.n128_u64[0] = 0x200000002LL;
  v9.n128_u64[1] = 0x200000002LL;
  v10 = v5;
  v11 = 0u;
  do
  {
    v12 = v7[-1];
    v13 = *v7;
    v10 -= 8;
    v7 += 2;
    v8 = vaddq_s32(vaddq_s32(v8, v12), v9);
    v11 = vaddq_s32(vaddq_s32(v11, v13), v9);
  }
  while ( v10 );
  v6 = vaddvq_s32(vaddq_s32(v11, v8));
  if ( v5 != v3 )
    goto LABEL_10;
LABEL_12:
  v17 = (unsigned int)a1[16];
  *a1 = v6;
  if ( (_DWORD)v17 * v6 )
    v18 = (char *)calloc((unsigned int)(v17 * v6), 1u);
  else
    v18 = 0;
  if ( a1[4] == 3 )
  {
    if ( v6 )
    {
      memcpy(v18, (const void *)(v2 + (unsigned int)v17 * **((unsigned __int16 **)a1 + 4)), v17);
      if ( (unsigned int)*a1 >= 2 )
      {
        v19 = 1;
        do
        {
          memcpy(
            &v18[(unsigned int)(a1[16] * v19)],
            (const void *)(*((_QWORD *)a1 + 29)
                         + a1[16] * (unsigned int)*(unsigned __int16 *)(*((_QWORD *)a1 + 4) + 2 * v19)),
            (unsigned int)a1[16]);
          ++v19;
        }
        while ( v19 < (unsigned int)*a1 );
      }
    }
  }
  else if ( v6 )
  {
    memcpy(v18, (const void *)(v2 + (unsigned int)(**((_DWORD **)a1 + 4) * v17)), v17);
    if ( (unsigned int)*a1 >= 2 )
    {
      v20 = 1;
      do
      {
        memcpy(
          &v18[(unsigned int)(a1[16] * v20)],
          (const void *)(*((_QWORD *)a1 + 29) + (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 4) + 4 * v20) * a1[16])),
          (unsigned int)a1[16]);
        ++v20;
      }
      while ( v20 < (unsigned int)*a1 );
    }
  }
  v21 = (void *)*((_QWORD *)a1 + 29);
  if ( v21 )
  {
    free(v21);
    *((_QWORD *)a1 + 29) = 0;
  }
  v22 = (void *)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 29) = v18;
  if ( v22 )
  {
    free(v22);
    *((_QWORD *)a1 + 4) = 0;
  }
  a1[5] = 0;
  a1[6] = 0;
}

