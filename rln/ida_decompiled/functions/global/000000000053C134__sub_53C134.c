/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C134
 * Mangled: sub_53C134
 * Demangled: sub_53C134
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203230  .strlen
 *   0x000000000053BE88  sub_53BE88
 *   0x000000000053C340  sub_53C340
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x000000000053C14C string=0x000000000053C150 "!@"
 *   insn=0x000000000053C158 string=0x000000000053C15C " "
 *   insn=0x000000000053C15C string=0x000000000053C160 "?"
 *   insn=0x000000000053C168 string=0x000000000053C16C "a\n"
 *   insn=0x000000000053C178 string=0x000000000053C17C "b\n@"
 *   insn=0x000000000053C178 string=0x00000000001F8570 "0'"
 *   insn=0x000000000053C17C string=0x000000000053C180 "`"
 *   insn=0x000000000053C18C string=0x000000000053C190 "D"
 *   insn=0x000000000053C190 string=0x000000000053C194 ""
 *   insn=0x000000000053C19C string=0x000000000053C1A0 "B"
 *   insn=0x000000000053C1A8 string=0x000000000053C1AC "b\n@"
 *   insn=0x000000000053C1AC string=0x000000000053C1B0 "!"
 *   insn=0x000000000053C1B0 string=0x000000000053C1B4 "_"
 *   insn=0x000000000053C1B4 string=0x000000000053C1B8 "\t"
 *   insn=0x000000000053C1B8 string=0x000000000053C1BC "`"
 *   insn=0x000000000053C1C0 string=0x000000000053C1C4 "cxa"
 *   insn=0x000000000053C1C8 string=0x000000000053C1CC "`"
 *   insn=0x000000000053C1E0 string=0x000000000053C1E4 "!"
 *   insn=0x000000000053C1E4 string=0x000000000053C1E8 "_"
 *   insn=0x000000000053C1E8 string=0x000000000053C1EC "c"
 *   insn=0x000000000053C1F0 string=0x000000000053C1F4 "H"
 *   insn=0x000000000053C1F8 string=0x000000000053C1FC "A"
 *   insn=0x000000000053C1FC string=0x000000000053C200 "_"
 *   insn=0x000000000053C200 string=0x000000000053C204 "!"
 *   insn=0x000000000053C20C string=0x000000000053C210 "b\n@"
 *   insn=0x000000000053C210 string=0x000000000053C214 "`"
 *   insn=0x000000000053C21C string=0x000000000053C220 "D"
 *   insn=0x000000000053C220 string=0x000000000053C224 ""
 *   insn=0x000000000053C22C string=0x000000000053C230 "B"
 *   insn=0x000000000053C238 string=0x000000000053C23C "b\n@"
 *   insn=0x000000000053C23C string=0x000000000053C240 "!"
 *   insn=0x000000000053C240 string=0x000000000053C244 "_"
 *   insn=0x000000000053C244 string=0x000000000053C248 "\t"
 *   insn=0x000000000053C248 string=0x000000000053C24C "`"
 *   insn=0x000000000053C250 string=0x000000000053C254 "cxa"
 *   insn=0x000000000053C258 string=0x000000000053C25C "`"
 *   insn=0x000000000053C270 string=0x000000000053C274 "!"
 *   insn=0x000000000053C274 string=0x000000000053C278 "_"
 *   insn=0x000000000053C278 string=0x000000000053C27C "c"
 *   insn=0x000000000053C280 string=0x000000000053C284 "H"
 *   insn=0x000000000053C28C string=0x000000000053C290 "`"
 *   insn=0x000000000053C298 string=0x000000000053C29C "`"
 *   insn=0x000000000053C2A0 string=0x000000000053C2A4 "`"
 *   insn=0x000000000053C2A8 string=0x000000000053C2AC "`"
 *   insn=0x000000000053C2B0 string=0x000000000053C2B4 "`"
 *   insn=0x000000000053C2B8 string=0x000000000053C2BC "`"
 *   insn=0x000000000053C2D8 string=0x000000000053C2DC "w"
 *   insn=0x000000000053C2E8 string=0x000000000053C2EC "`"
 *   insn=0x000000000053C2F4 string=0x000000000053C2F8 "!ht"
 *   insn=0x000000000053C320 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000053C334 string=0x00000000001FD590 "0'"
 *   insn=0x000000000053C338 string=0x000000000053C33C "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall sub_53C134(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x0
  __int64 v7; // x0
  unsigned __int64 v8; // x2
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x1
  unsigned int *v11; // x0
  unsigned int v12; // w2
  __int64 v13; // x0
  __int64 v14; // x0
  unsigned __int64 v15; // x2
  unsigned __int64 v16; // x1
  unsigned int *v17; // x0
  unsigned int v18; // w2
  __int64 v19; // x0
  _QWORD *v20; // x0
  __int64 v21; // x20
  const char *result; // x0
  unsigned __int64 v23; // x22
  __int64 v24; // x23
  void *v25; // x0
  const void *v26; // x1

  v5 = a2[2];
  *(_DWORD *)a1 = a3;
  v6 = 8 * v5;
  *(_QWORD *)(a1 + 8) = 0;
  if ( v5 > 0xFE0000000000000LL )
    v6 = -1;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v7 = operator new[](v6);
  v8 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v7;
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    while ( 1 )
    {
      *(_QWORD *)(v7 + 8 * v10) = *(_QWORD *)(a2[1] + 8 * v10);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10);
      if ( !v13 )
        goto LABEL_8;
      if ( &pthread_create )
        break;
      ++v10;
      ++*(_DWORD *)(v13 + 8);
      if ( v8 <= v10 )
      {
LABEL_13:
        v9 = 8 * v8;
        if ( v8 > 0xFE0000000000000LL )
          v9 = -1;
        goto LABEL_15;
      }
LABEL_9:
      v7 = *(_QWORD *)(a1 + 8);
    }
    v11 = (unsigned int *)(v13 + 8);
    do
      v12 = __ldaxr(v11);
    while ( __stlxr(v12 + 1, v11) );
    v8 = *(_QWORD *)(a1 + 16);
LABEL_8:
    if ( v8 <= ++v10 )
      goto LABEL_13;
    goto LABEL_9;
  }
LABEL_15:
  v14 = operator new[](v9);
  v15 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = v14;
  if ( v15 )
  {
    v16 = 0;
    while ( 1 )
    {
      *(_QWORD *)(v14 + 8 * v16) = *(_QWORD *)(a2[3] + 8 * v16);
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v16);
      if ( !v19 )
        goto LABEL_20;
      if ( &pthread_create )
        break;
      ++v16;
      ++*(_DWORD *)(v19 + 8);
      if ( v15 <= v16 )
        goto LABEL_25;
LABEL_21:
      v14 = *(_QWORD *)(a1 + 24);
    }
    v17 = (unsigned int *)(v19 + 8);
    do
      v18 = __ldaxr(v17);
    while ( __stlxr(v18 + 1, v17) );
    v15 = *(_QWORD *)(a1 + 16);
LABEL_20:
    if ( v15 <= ++v16 )
      goto LABEL_25;
    goto LABEL_21;
  }
LABEL_25:
  v20 = (_QWORD *)operator new[](0x30u);
  *(_QWORD *)(a1 + 32) = v20;
  v21 = 0;
  *v20 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = 0;
  do
  {
    result = *(const char **)(a2[4] + v21);
    if ( !result )
      break;
    v23 = strlen(result) + 1;
    v24 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v24 + v21) = operator new[](v23);
    v25 = *(void **)(*(_QWORD *)(a1 + 32) + v21);
    v26 = *(const void **)(a2[4] + v21);
    v21 += 8;
    result = (const char *)memcpy(v25, v26, v23);
  }
  while ( v21 != 48 );
  return result;
}

