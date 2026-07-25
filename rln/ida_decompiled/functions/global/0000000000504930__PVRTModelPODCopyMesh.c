/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000504930
 * Mangled: _Z20PVRTModelPODCopyMeshRK8SPODMeshRS_
 * Demangled: PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *
 * Callers: 1
 *   0x00000000001F48E0  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *
 * Callees: 5
 *   0x00000000001F6770  .calloc
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000002011F0  PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 98
 *   insn=0x0000000000504958 string=0x000000000050495C "h"
 *   insn=0x0000000000504960 string=0x0000000000504964 "aB"
 *   insn=0x0000000000504974 string=0x0000000000504978 "h"
 *   insn=0x000000000050497C string=0x0000000000504980 "b"
 *   insn=0x0000000000504984 string=0x0000000000504988 "a"
 *   insn=0x0000000000504990 string=0x0000000000504994 "h:@"
 *   insn=0x0000000000504994 string=0x0000000000504998 ""
 *   insn=0x00000000005049A4 string=0x00000000005049AC "("
 *   insn=0x00000000005049B0 string=0x00000000005049B8 "i>@"
 *   insn=0x00000000005049B8 string=0x00000000005049BC "b"
 *   insn=0x00000000005049C8 string=0x00000000005049CC "aB"
 *   insn=0x00000000005049D0 string=0x00000000005049D4 ""
 *   insn=0x00000000005049D4 string=0x00000000005049D8 "hR@"
 *   insn=0x00000000005049D8 string=0x00000000005049DC ""
 *   insn=0x00000000005049E8 string=0x00000000005049F0 "("
 *   insn=0x00000000005049F4 string=0x00000000005049FC "iV@"
 *   insn=0x00000000005049FC string=0x0000000000504A00 "b"
 *   insn=0x0000000000504A0C string=0x0000000000504A10 "a"
 *   insn=0x0000000000504A18 string=0x0000000000504A1C "hj@"
 *   insn=0x0000000000504A1C string=0x0000000000504A20 ""
 *   insn=0x0000000000504A2C string=0x0000000000504A34 "("
 *   insn=0x0000000000504A38 string=0x0000000000504A40 "in@"
 *   insn=0x0000000000504A40 string=0x0000000000504A44 "b"
 *   insn=0x0000000000504A50 string=0x0000000000504A54 "a"
 *   insn=0x0000000000504A5C string=0x0000000000504A60 "h"
 *   insn=0x0000000000504A60 string=0x0000000000504A64 ""
 *   insn=0x0000000000504A70 string=0x0000000000504A78 "("
 *   insn=0x0000000000504A7C string=0x0000000000504A84 "i"
 *   insn=0x0000000000504A84 string=0x0000000000504A88 "b"
 *   insn=0x0000000000504A94 string=0x0000000000504A98 "a"
 *   insn=0x0000000000504AA0 string=0x0000000000504AA4 "h"
 *   insn=0x0000000000504AA4 string=0x0000000000504AA8 ""
 *   insn=0x0000000000504AB4 string=0x0000000000504ABC "("
 *   insn=0x0000000000504AC0 string=0x0000000000504AC8 "i"
 *   insn=0x0000000000504AC8 string=0x0000000000504ACC "b"
 *   insn=0x0000000000504AD8 string=0x0000000000504ADC "a"
 *   insn=0x0000000000504AE4 string=0x0000000000504AE8 "h"
 *   insn=0x0000000000504AE8 string=0x0000000000504AEC ""
 *   insn=0x0000000000504AF8 string=0x0000000000504B00 "("
 *   insn=0x0000000000504B04 string=0x0000000000504B0C "i"
 *   insn=0x0000000000504B0C string=0x0000000000504B10 "b"
 *   insn=0x0000000000504B1C string=0x0000000000504B20 "aB"
 *   insn=0x0000000000504B28 string=0x0000000000504B2C "h"
 *   insn=0x0000000000504B2C string=0x0000000000504B30 ""
 *   insn=0x0000000000504B3C string=0x0000000000504B44 "("
 *   insn=0x0000000000504B48 string=0x0000000000504B50 "i"
 *   insn=0x0000000000504B60 string=0x0000000000504B64 "("
 *   insn=0x0000000000504B70 string=0x0000000000504B74 "`N"
 *   insn=0x0000000000504B70 string=0x00000000001F6770 "0'"
 *   insn=0x0000000000504B78 string=0x0000000000504B7C "y\n"
 *   insn=0x0000000000504B88 string=0x0000000000504B8C "9"
 *   insn=0x0000000000504B90 string=0x0000000000504B94 "b"
 *   insn=0x0000000000504B9C string=0x0000000000504BA0 ""
 *   insn=0x0000000000504BAC string=0x0000000000504BB0 "`N@"
 *   insn=0x0000000000504BB0 string=0x0000000000504BB4 "hw"
 *   insn=0x0000000000504BB4 string=0x0000000000504BB8 ""
 *   insn=0x0000000000504BBC string=0x0000000000504BC0 "h"
 *   insn=0x0000000000504BC0 string=0x0000000000504BC4 "("
 *   insn=0x0000000000504BC8 string=0x0000000000504BD0 "\t"
 *   insn=0x0000000000504BD0 string=0x0000000000504BD4 "j\n@"
 *   insn=0x0000000000504BD4 string=0x0000000000504BD8 ")"
 *   insn=0x0000000000504BE8 string=0x0000000000504BEC "#"
 *   insn=0x0000000000504BF0 string=0x0000000000504BF4 "h"
 *   insn=0x0000000000504BFC string=0x0000000000504C18 "`v@"
 *   insn=0x0000000000504C08 string=0x0000000000504C0C "`v"
 *   insn=0x0000000000504C0C string=0x0000000000504C10 "`"
 *   insn=0x0000000000504C2C string=0x0000000000504C30 "h"
 *   insn=0x0000000000504C34 string=0x0000000000504C38 ""
 *   insn=0x0000000000504C38 string=0x0000000000504C58 "`"
 *   insn=0x0000000000504C44 string=0x0000000000504C48 "`"
 *   insn=0x0000000000504C64 string=0x0000000000504C68 "h2"
 *   insn=0x0000000000504C6C string=0x0000000000504C70 ""
 *   insn=0x0000000000504C70 string=0x0000000000504C74 "`z@"
 *   insn=0x0000000000504C74 string=0x0000000000504C78 "@"
 *   insn=0x0000000000504C78 string=0x0000000000504C80 "`~@"
 *   insn=0x0000000000504C7C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000504C84 string=0x0000000000504C88 "@"
 *   insn=0x0000000000504C88 string=0x0000000000504C90 "`"
 *   insn=0x0000000000504C94 string=0x0000000000504C98 "@"
 *   insn=0x0000000000504CA8 string=0x0000000000504CAC "h\n"
 *   insn=0x0000000000504CB0 string=0x0000000000504CB4 "v"
 *   insn=0x0000000000504CC4 string=0x0000000000504CC8 "\n}@"
 *   insn=0x0000000000504CC8 string=0x0000000000504CCC "I}"
 *   insn=0x0000000000504CD8 string=0x0000000000504CDC "%"
 *   insn=0x0000000000504CDC string=0x0000000000504CE0 "`z"
 *   insn=0x0000000000504CDC string=0x00000000001F8570 "0'"
 *   insn=0x0000000000504CF0 string=0x0000000000504CF4 "h"
 *   insn=0x0000000000504D0C string=0x0000000000504D10 "`~"
 *   insn=0x0000000000504D20 string=0x0000000000504D24 "h"
 *   insn=0x0000000000504D38 string=0x0000000000504D3C ""
 *   insn=0x0000000000504D3C string=0x0000000000504D40 "`"
 *   insn=0x0000000000504D54 string=0x0000000000504D58 "h"
 *   insn=0x0000000000504D60 string=0x0000000000504D64 " "
 *   insn=0x0000000000504D64 string=0x0000000000504D68 "h"
 *   insn=0x0000000000504D68 string=0x0000000000504D6C "i"
 *   insn=0x0000000000504D7C string=0x0000000000504D80 " "
 *   insn=0x0000000000504D84 string=0x0000000000504D88 "hR"
 *   insn=0x0000000000504D90 string=0x0000000000504D94 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTModelPODCopyMesh(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // x22
  unsigned int v5; // w8
  unsigned int v6; // w8
  __int64 v7; // x8
  __int64 v8; // x21
  unsigned int v9; // w8
  __int64 v10; // x8
  __int64 v11; // x21
  unsigned int v12; // w8
  __int64 v13; // x8
  __int64 v14; // x21
  unsigned int v15; // w8
  __int64 v16; // x8
  __int64 v17; // x21
  unsigned int v18; // w8
  __int64 v19; // x8
  __int64 v20; // x21
  unsigned int v21; // w8
  __int64 v22; // x8
  __int64 v23; // x21
  unsigned int v24; // w8
  __int64 v25; // x8
  __int64 v26; // x25
  __int64 v27; // x21
  char *v28; // x0
  __int64 v29; // x23
  unsigned __int64 v30; // x24
  unsigned int v31; // w8
  __int64 v32; // x8
  __int64 v33; // x9
  size_t v34; // x21
  void *v35; // x0
  const void *v36; // x1
  __int64 v37; // x8
  size_t v38; // x21
  void *v39; // x0
  void *v40; // x0
  void *v41; // x0
  void *v42; // x0
  unsigned int v43; // w8
  unsigned __int64 v44; // x22
  int v45; // w8
  size_t v46; // x21
  unsigned __int64 v47; // x0
  void *v48; // x0
  unsigned __int64 v49; // x0
  void *v50; // x0
  unsigned __int64 v51; // x0
  void *v52; // x0
  long double result; // q0

  v4 = *((_QWORD *)a1 + 29);
  *a2 = *a1;
  v5 = a1[1];
  a2[1] = v5;
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 4), (CPODData *)(a2 + 4), 3 * v5, 0);
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 14), (CPODData *)(a2 + 14), *a2, v4 != 0);
  v6 = a2[14] - 1;
  if ( v6 > 0xD )
    v7 = 0;
  else
    v7 = qword_59B8A0[v6];
  v8 = v7 * a2[15];
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 20), (CPODData *)(a2 + 20), *a2, v4 != 0);
  v9 = a2[20] - 1;
  if ( v9 > 0xD )
    v10 = 0;
  else
    v10 = qword_59B8A0[v9];
  v11 = v8 + v10 * a2[21];
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 26), (CPODData *)(a2 + 26), *a2, v4 != 0);
  v12 = a2[26] - 1;
  if ( v12 > 0xD )
    v13 = 0;
  else
    v13 = qword_59B8A0[v12];
  v14 = v11 + v13 * a2[27];
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 32), (CPODData *)(a2 + 32), *a2, v4 != 0);
  v15 = a2[32] - 1;
  if ( v15 > 0xD )
    v16 = 0;
  else
    v16 = qword_59B8A0[v15];
  v17 = v14 + v16 * a2[33];
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 40), (CPODData *)(a2 + 40), *a2, v4 != 0);
  v18 = a2[40] - 1;
  if ( v18 > 0xD )
    v19 = 0;
  else
    v19 = qword_59B8A0[v18];
  v20 = v17 + v19 * a2[41];
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 46), (CPODData *)(a2 + 46), *a2, v4 != 0);
  v21 = a2[46] - 1;
  if ( v21 > 0xD )
    v22 = 0;
  else
    v22 = qword_59B8A0[v21];
  v23 = v20 + v22 * a2[47];
  PVRTModelPODCopyCPODData((const CPODData *)(a1 + 52), (CPODData *)(a2 + 52), *a2, v4 != 0);
  v24 = a2[52] - 1;
  if ( v24 > 0xD )
    v25 = 0;
  else
    v25 = qword_59B8A0[v24];
  v26 = a1[2];
  v27 = v23 + v25 * a2[53];
  if ( (_DWORD)v26 )
  {
    v28 = (char *)calloc(24 * v26, 0x18u);
    *((_QWORD *)a2 + 19) = v28;
    if ( v28 )
    {
      a2[2] = v26;
      v29 = 0;
      v30 = 0;
      do
      {
        PVRTModelPODCopyCPODData((const CPODData *)(*((_QWORD *)a1 + 19) + v29), (CPODData *)&v28[v29], *a2, v4 != 0);
        v28 = (char *)*((_QWORD *)a2 + 19);
        v31 = *(_DWORD *)&v28[v29] - 1;
        if ( v31 > 0xD )
          v32 = 0;
        else
          v32 = qword_59B8A0[v31];
        v33 = *(unsigned int *)&v28[v29 + 4];
        ++v30;
        v29 += 24;
        v27 += v32 * v33;
      }
      while ( v30 < a2[2] );
    }
  }
  if ( v4 )
  {
    v34 = v27 * *a2;
    if ( v34 )
    {
      v35 = calloc(v34, 1u);
      *((_QWORD *)a2 + 29) = v35;
      if ( !v35 )
        goto LABEL_35;
    }
    else
    {
      v35 = (void *)*((_QWORD *)a2 + 29);
    }
    memcpy(v35, *((const void **)a1 + 29), v34);
  }
LABEL_35:
  v36 = (const void *)*((_QWORD *)a1 + 5);
  if ( !v36 )
    goto LABEL_41;
  v37 = a2[1];
  v38 = 4 * v37;
  if ( (_DWORD)v37 )
  {
    v39 = calloc(4 * v37, 4u);
    *((_QWORD *)a2 + 5) = v39;
    if ( !v39 )
      goto LABEL_41;
    v36 = (const void *)*((_QWORD *)a1 + 5);
  }
  else
  {
    v39 = (void *)*((_QWORD *)a2 + 5);
  }
  memcpy(v39, v36, v38);
  a2[12] = a1[12];
LABEL_41:
  if ( a1[67] )
  {
    v40 = (void *)*((_QWORD *)a2 + 30);
    if ( v40 )
      operator delete(v40);
    v41 = (void *)*((_QWORD *)a2 + 31);
    *((_QWORD *)a2 + 30) = 0;
    if ( v41 )
      operator delete(v41);
    v42 = (void *)*((_QWORD *)a2 + 32);
    *((_QWORD *)a2 + 31) = 0;
    if ( v42 )
      operator delete(v42);
    *((_QWORD *)a2 + 32) = 0;
    a2[67] = 0;
    v43 = a1[66];
    a2[66] = v43;
    v44 = (int)a1[67];
    a2[67] = v44;
    if ( *((_QWORD *)a1 + 30) )
    {
      v45 = v44 * v43;
      v46 = 4LL * v45;
      if ( is_mul_ok(v45, 4u) )
        v47 = 4LL * v45;
      else
        v47 = -1;
      v48 = (void *)operator new[](v47);
      *((_QWORD *)a2 + 30) = v48;
      memcpy(v48, *((const void **)a1 + 30), v46);
    }
    if ( *((_QWORD *)a1 + 31) )
    {
      if ( is_mul_ok(v44, 4u) )
        v49 = 4 * v44;
      else
        v49 = -1;
      v50 = (void *)operator new[](v49);
      *((_QWORD *)a2 + 31) = v50;
      memcpy(v50, *((const void **)a1 + 31), 4 * v44);
    }
    if ( *((_QWORD *)a1 + 32) )
    {
      if ( is_mul_ok(v44, 4u) )
        v51 = 4 * v44;
      else
        v51 = -1;
      v52 = (void *)operator new[](v51);
      *((_QWORD *)a2 + 32) = v52;
      memcpy(v52, *((const void **)a1 + 32), 4 * v44);
    }
  }
  *(_OWORD *)(a2 + 81) = *(_OWORD *)(a1 + 81);
  *(_OWORD *)(a2 + 77) = *(_OWORD *)(a1 + 77);
  *(_OWORD *)(a2 + 73) = *(_OWORD *)(a1 + 73);
  result = *(long double *)(a1 + 69);
  *(long double *)(a2 + 69) = result;
  a2[68] = a1[68];
  return result;
}

