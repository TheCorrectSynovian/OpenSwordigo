/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000504048
 * Mangled: _ZN13CPVRTModelPOD14CopyFromMemoryERK9SPODScene
 * Demangled: CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F4050  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *   0x00000000001F48E0  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *   0x00000000001F6770  .calloc
 *   0x00000000001F72D0  CPVRTModelPOD::Destroy(void)
 *   0x00000000001F79F0  CPVRTModelPOD::InitImpl(void)
 *   0x00000000001F7BD0  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 87
 *   insn=0x0000000000504068 string=0x00000000001F72D0 "0'"
 *   insn=0x000000000050406C string=0x0000000000504070 "h>"
 *   insn=0x0000000000504074 string=0x0000000000504078 "h"
 *   insn=0x000000000050407C string=0x0000000000504080 "h"
 *   insn=0x0000000000504084 string=0x0000000000504088 "h"
 *   insn=0x000000000050408C string=0x0000000000504090 "h"
 *   insn=0x0000000000504094 string=0x0000000000504098 "h\n"
 *   insn=0x000000000050409C string=0x00000000005040A0 "h"
 *   insn=0x00000000005040B8 string=0x00000000001F6770 "0'"
 *   insn=0x00000000005040BC string=0x00000000005040C0 "h*"
 *   insn=0x00000000005040C0 string=0x00000000005040C4 ""
 *   insn=0x00000000005040C4 string=0x00000000005040C8 "uJ"
 *   insn=0x00000000005040D0 string=0x00000000005040D4 "iN"
 *   insn=0x00000000005040E0 string=0x00000000005040E4 "hJ@"
 *   insn=0x00000000005040E0 string=0x00000000001F4050 "P'"
 *   insn=0x00000000005040F8 string=0x00000000005040FC "i*@"
 *   insn=0x0000000000504104 string=0x0000000000504108 "!"
 *   insn=0x000000000050410C string=0x0000000000504110 "hJ@"
 *   insn=0x0000000000504124 string=0x0000000000504128 "u"
 *   insn=0x0000000000504128 string=0x000000000050412C "+"
 *   insn=0x000000000050413C string=0x0000000000504140 "h""
 *   insn=0x0000000000504144 string=0x0000000000504148 "u:"
 *   insn=0x0000000000504154 string=0x0000000000504158 "h:@"
 *   insn=0x0000000000504154 string=0x00000000001F48E0 "P'"
 *   insn=0x000000000050416C string=0x0000000000504170 "i"@"
 *   insn=0x0000000000504174 string=0x0000000000504178 "!"
 *   insn=0x000000000050417C string=0x0000000000504180 "h:@"
 *   insn=0x0000000000504194 string=0x0000000000504198 "6"
 *   insn=0x00000000005041A4 string=0x00000000005041A8 "r"
 *   insn=0x00000000005041AC string=0x00000000005041B0 "u"
 *   insn=0x00000000005041B0 string=0x00000000005041B4 "U"
 *   insn=0x00000000005041BC string=0x00000000005041C0 "v"
 *   insn=0x00000000005041DC string=0x00000000005041E0 ")"
 *   insn=0x00000000005041E0 string=0x00000000005041E4 " "
 *   insn=0x00000000005041E4 string=0x00000000005041E8 "_\t"
 *   insn=0x00000000005041E8 string=0x00000000005041EC "@"
 *   insn=0x00000000005041EC string=0x00000000005041F0 "!\t@"
 *   insn=0x00000000005041F4 string=0x0000000000504230 "h"
 *   insn=0x00000000005041F8 string=0x00000000005041FC "H"
 *   insn=0x0000000000504204 string=0x0000000000504208 "Z"
 *   insn=0x0000000000504214 string=0x0000000000504218 "("
 *   insn=0x0000000000504228 string=0x000000000050422C "M"
 *   insn=0x0000000000504238 string=0x00000000005041C8 "u"
 *   insn=0x000000000050423C string=0x0000000000504240 "U"
 *   insn=0x000000000050424C string=0x0000000000504250 "H"
 *   insn=0x0000000000504250 string=0x0000000000504254 "`"
 *   insn=0x0000000000504258 string=0x000000000050425C "u*"
 *   insn=0x0000000000504264 string=0x0000000000504268 "\t"
 *   insn=0x0000000000504268 string=0x000000000050426C "\t"
 *   insn=0x000000000050427C string=0x0000000000504280 "C"
 *   insn=0x0000000000504284 string=0x0000000000504288 "\t"
 *   insn=0x000000000050428C string=0x0000000000504290 "k"
 *   insn=0x0000000000504290 string=0x0000000000504294 ""
 *   insn=0x0000000000504294 string=0x0000000000504298 "J"
 *   insn=0x0000000000504298 string=0x000000000050429C "L"
 *   insn=0x000000000050429C string=0x00000000005042A0 "k"
 *   insn=0x00000000005042A0 string=0x00000000005042A4 ")"
 *   insn=0x00000000005042A4 string=0x00000000005042A8 "l"
 *   insn=0x00000000005042A8 string=0x00000000005042AC "@"
 *   insn=0x00000000005042AC string=0x00000000005042B0 "`"
 *   insn=0x00000000005042B0 string=0x00000000005042B4 "@"
 *   insn=0x00000000005042B4 string=0x00000000005042B8 "`"
 *   insn=0x00000000005042B8 string=0x00000000005042BC "j*@"
 *   insn=0x00000000005042C0 string=0x00000000005042C4 "C"
 *   insn=0x00000000005042C8 string=0x00000000005042CC "X"
 *   insn=0x00000000005042D4 string=0x00000000005042D8 "&"
 *   insn=0x00000000005042D8 string=0x00000000005042DC "`2"
 *   insn=0x00000000005042E4 string=0x00000000005042E8 "xZ"
 *   insn=0x00000000005042EC string=0x00000000005042F0 "5{w"
 *   insn=0x00000000005042F4 string=0x00000000005042F8 "z2@"
 *   insn=0x0000000000504308 string=0x0000000000504328 "V{w"
 *   insn=0x0000000000504314 string=0x0000000000504318 "V{7"
 *   insn=0x0000000000504318 string=0x000000000050431C "v"
 *   insn=0x000000000050431C string=0x0000000000504320 "5{w"
 *   insn=0x000000000050433C string=0x0000000000504340 ""
 *   insn=0x0000000000504340 string=0x0000000000504344 "xZ@"
 *   insn=0x0000000000504354 string=0x0000000000504358 "u"
 *   insn=0x0000000000504358 string=0x000000000050435C ""
 *   insn=0x000000000050436C string=0x0000000000504370 "h:"
 *   insn=0x0000000000504374 string=0x0000000000504378 "uj"
 *   insn=0x0000000000504384 string=0x0000000000504388 "hj@"
 *   insn=0x0000000000504384 string=0x00000000001F7BD0 "0'"
 *   insn=0x000000000050439C string=0x00000000005043A0 "i:@"
 *   insn=0x00000000005043A4 string=0x00000000005043A8 "!"
 *   insn=0x00000000005043A8 string=0x00000000005043AC "\t"
 *   insn=0x00000000005043AC string=0x00000000005043B0 "hj@"
 *   insn=0x00000000005043C8 string=0x00000000001F79F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall CPVRTModelPOD::CopyFromMemory(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  void *v5; // x0
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x21
  void *v9; // x0
  unsigned __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x22
  char *v13; // x21
  __int64 v14; // x23
  unsigned __int64 v15; // x24
  __int64 v16; // x25
  char *v17; // x10
  __int64 v18; // x8
  __int128 v19; // q0
  const void *v20; // x1
  size_t v21; // x22
  void *v22; // x0
  __int64 v23; // x21
  _QWORD *v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x10
  __int64 v29; // x11
  __int64 v30; // x24
  void *v31; // x0
  unsigned __int64 v32; // x23
  __int64 v33; // x25
  const char *v34; // x21
  __int64 v35; // x26
  size_t v36; // x0
  void *v37; // x22
  size_t v38; // x0
  __int64 v39; // x21
  void *v40; // x8
  unsigned __int64 v41; // x21
  __int64 v42; // x22

  CPVRTModelPOD::Destroy((CPVRTModelPOD *)a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  v4 = *(unsigned int *)(a2 + 72);
  if ( (_DWORD)v4 )
  {
    v5 = calloc(96 * v4, 0x60u);
    *(_QWORD *)(a1 + 80) = v5;
    if ( v5 )
    {
      *(_DWORD *)(a1 + 72) = v4;
      *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
      PVRTModelPODCopyNode();
      if ( *(_DWORD *)(a1 + 72) >= 2u )
      {
        v6 = 1;
        v7 = 96;
        do
        {
          PVRTModelPODCopyNode();
          ++v6;
          v7 += 96;
        }
        while ( v6 < *(unsigned int *)(a1 + 72) );
      }
    }
  }
  v8 = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)v8 )
  {
    v9 = calloc(344 * v8, 0x158u);
    *(_QWORD *)(a1 + 64) = v9;
    if ( v9 )
    {
      *(_DWORD *)(a1 + 56) = v8;
      PVRTModelPODCopyMesh();
      if ( *(_DWORD *)(a1 + 56) >= 2u )
      {
        v10 = 1;
        v11 = 344;
        do
        {
          PVRTModelPODCopyMesh();
          ++v10;
          v11 += 344;
        }
        while ( v10 < *(unsigned int *)(a1 + 56) );
      }
    }
  }
  v12 = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)v12 )
  {
    v13 = (char *)calloc(24 * v12, 0x18u);
    *(_QWORD *)(a1 + 32) = v13;
    if ( v13 )
    {
      v14 = 0;
      v15 = 1;
      *(_DWORD *)(a1 + 24) = v12;
      while ( 1 )
      {
        v16 = *(_QWORD *)(a2 + 32);
        v17 = &v13[v14];
        v18 = *(int *)(a2 + 120);
        v19 = *(_OWORD *)(v16 + v14);
        *((_QWORD *)v17 + 2) = 0;
        *(_OWORD *)v17 = v19;
        v20 = *(const void **)(v16 + v14 + 16);
        if ( !v20 )
          goto LABEL_21;
        v21 = 4 * v18;
        if ( (_DWORD)v18 )
        {
          v22 = calloc(4 * v18, 4u);
          *(_QWORD *)&v13[v14 + 16] = v22;
          if ( !v22 )
            goto LABEL_21;
          v20 = *(const void **)(v16 + v14 + 16);
        }
        else
        {
          v22 = 0;
        }
        memcpy(v22, v20, v21);
LABEL_21:
        if ( v15 >= *(unsigned int *)(a1 + 24) )
          break;
        v13 = *(char **)(a1 + 32);
        v14 += 24;
        ++v15;
      }
    }
  }
  v23 = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)v23 )
  {
    v24 = calloc(40 * v23, 0x28u);
    *(_QWORD *)(a1 + 48) = v24;
    if ( v24 )
    {
      *(_DWORD *)(a1 + 40) = v23;
      v25 = *(_QWORD *)(a2 + 48);
      v24[4] = *(_QWORD *)(v25 + 32);
      *((_OWORD *)v24 + 1) = *(_OWORD *)(v25 + 16);
      *(_OWORD *)v24 = *(_OWORD *)v25;
      if ( (unsigned int)v23 >= 2 )
      {
        v26 = 1;
        v27 = 40;
        do
        {
          ++v26;
          v28 = *(_QWORD *)(a2 + 48) + v27;
          v29 = *(_QWORD *)(a1 + 48) + v27;
          v27 += 40;
          *(_QWORD *)(v29 + 32) = *(_QWORD *)(v28 + 32);
          *(_OWORD *)(v29 + 16) = *(_OWORD *)(v28 + 16);
          *(_OWORD *)v29 = *(_OWORD *)v28;
        }
        while ( v26 < *(unsigned int *)(a1 + 40) );
      }
    }
  }
  v30 = *(unsigned int *)(a2 + 88);
  if ( (_DWORD)v30 )
  {
    v31 = calloc(8 * v30, 8u);
    *(_QWORD *)(a1 + 96) = v31;
    if ( v31 )
    {
      v32 = 0;
      *(_DWORD *)(a1 + 88) = v30;
      do
      {
        v33 = *(_QWORD *)(a2 + 96);
        v34 = *(const char **)(v33 + 8 * v32);
        if ( v34 )
        {
          v35 = *(_QWORD *)(a1 + 96);
          v36 = strlen(*(const char **)(v33 + 8 * v32)) + 1;
          if ( !v36 )
          {
            v37 = *(void **)(v35 + 8 * v32);
            goto LABEL_35;
          }
          v37 = calloc(v36, 1u);
          *(_QWORD *)(v35 + 8 * v32) = v37;
          if ( v37 )
          {
            v34 = *(const char **)(v33 + 8 * v32);
LABEL_35:
            v38 = strlen(v34);
            memcpy(v37, v34, v38 + 1);
            LODWORD(v30) = *(_DWORD *)(a1 + 88);
          }
        }
        ++v32;
      }
      while ( v32 < (unsigned int)v30 );
    }
  }
  v39 = *(unsigned int *)(a2 + 104);
  if ( (_DWORD)v39 )
  {
    v40 = calloc(176 * v39, 0xB0u);
    *(_QWORD *)(a1 + 112) = v40;
    if ( v40 )
    {
      *(_DWORD *)(a1 + 104) = v39;
      PVRTModelPODCopyMaterial(*(void **)(a2 + 112), v40);
      if ( *(_DWORD *)(a1 + 104) >= 2u )
      {
        v41 = 1;
        v42 = 176;
        do
        {
          PVRTModelPODCopyMaterial((void *)(*(_QWORD *)(a2 + 112) + v42), (void *)(*(_QWORD *)(a1 + 112) + v42));
          ++v41;
          v42 += 176;
        }
        while ( v41 < *(unsigned int *)(a1 + 104) );
      }
    }
  }
  return (unsigned int)CPVRTModelPOD::InitImpl((CPVRTModelPOD *)a1) != 0;
}

