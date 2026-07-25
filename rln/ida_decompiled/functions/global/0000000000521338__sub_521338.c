/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521338
 * Mangled: sub_521338
 * Demangled: sub_521338
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005211BC  sub_5211BC
 *   0x00000000005220F0  sub_5220F0
 *   0x0000000000522158  sub_522158
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x0000000000521358 string=0x000000000052135C " "
 *   insn=0x0000000000521364 string=0x0000000000521368 "t"
 *   insn=0x0000000000521370 string=0x0000000000521374 "6"
 *   insn=0x0000000000521388 string=0x000000000052138C "!"
 *   insn=0x000000000052139C string=0x00000000005213A0 "T"
 *   insn=0x00000000005213A0 string=0x00000000005213A4 "`f@"
 *   insn=0x00000000005213AC string=0x00000000005213B0 "@"
 *   insn=0x00000000005213B4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000005213BC string=0x00000000005213C0 "f"
 *   insn=0x00000000005213C4 string=0x00000000005213C8 "v"
 *   insn=0x00000000005213CC string=0x00000000005213D0 "M"
 *   insn=0x00000000005213E8 string=0x00000000005213EC """
 *   insn=0x00000000005213FC string=0x0000000000521400 "`\n"
 *   insn=0x000000000052140C string=0x0000000000521410 "tf"
 *   insn=0x0000000000521410 string=0x0000000000521414 "e"
 *   insn=0x0000000000521414 string=0x0000000000521418 "c"
 *   insn=0x0000000000521418 string=0x000000000052141C "b"
 *   insn=0x000000000052141C string=0x0000000000521420 "an"
 *   insn=0x000000000052142C string=0x0000000000521580 "R"
 *   insn=0x0000000000521438 string=0x000000000052143C " "
 *   insn=0x0000000000521444 string=0x0000000000521448 "`"
 *   insn=0x000000000052144C string=0x0000000000521450 "tz@"
 *   insn=0x0000000000521450 string=0x0000000000521454 "t\t"
 *   insn=0x000000000052145C string=0x0000000000521460 " "
 *   insn=0x0000000000521460 string=0x0000000000521464 "`"
 *   insn=0x0000000000521470 string=0x0000000000521474 "w"
 *   insn=0x0000000000521474 string=0x0000000000521478 "vB"
 *   insn=0x000000000052147C string=0x000000000053B7DC "!"
 *   insn=0x0000000000521498 string=0x000000000052149C "H"
 *   insn=0x00000000005214A0 string=0x00000000005214A4 "A"
 *   insn=0x00000000005214AC string=0x00000000005214B0 "bv@"
 *   insn=0x00000000005214B0 string=0x00000000005214B4 "`"
 *   insn=0x00000000005214B4 string=0x00000000005214B8 "a"@"
 *   insn=0x00000000005214BC string=0x00000000005214C0 "?"
 *   insn=0x00000000005214BC string=0x0000000000521574 "!"
 *   insn=0x00000000005214E0 string=0x00000000005214E4 "#\"
 *   insn=0x00000000005214E4 string=0x00000000001F8570 "0'"
 *   insn=0x00000000005214F4 string=0x00000000005214F8 "!"
 *   insn=0x00000000005214F4 string=0x0000000000521510 "w"
 *   insn=0x0000000000521500 string=0x0000000000521504 "_"
 *   insn=0x0000000000521508 string=0x000000000052150C "a"
 *   insn=0x0000000000521530 string=0x0000000000521534 "["
 *   insn=0x0000000000521540 string=0x0000000000521544 "B"
 *   insn=0x0000000000521544 string=0x0000000000521548 "@"
 *   insn=0x0000000000521554 string=0x0000000000521558 "R"
 *   insn=0x0000000000521564 string=0x0000000000521568 "B"
 *   insn=0x0000000000521568 string=0x000000000052156C "@"
 *   insn=0x0000000000521574 string=0x0000000000521578 "a""
 *   insn=0x0000000000521584 string=0x000000000052158C "S"
 *   insn=0x0000000000521584 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521338(__int64 a1, __int64 a2)
{
  int v4; // w0
  _QWORD *v5; // x20
  void *v6; // x23
  __int64 v7; // x22
  unsigned int *v8; // x0
  unsigned int v9; // w1
  void *v10; // x0
  __int64 v11; // x4
  __int64 v12; // x6
  __int64 v13; // x7
  __int64 v14; // x5
  __int64 *v15; // x0
  _QWORD *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x3
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x0
  _BYTE *v23; // x20
  char v24; // w23
  _BYTE *v25; // x20
  int v26; // w0
  __int64 v27; // x2
  int v28; // w1
  _QWORD *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x1
  char v33; // [xsp+0h] [xbp+0h]
  char v34; // [xsp+48h] [xbp+48h] BYREF

  if ( a1 == a2 )
    return a1;
  v4 = *(_DWORD *)(a2 + 192);
  if ( v4 > 8 )
  {
    v30 = (_QWORD *)operator new[](16LL * v4);
    v5 = v30;
    v31 = *(int *)(a2 + 192);
    v32 = 0;
    if ( *(_DWORD *)(a2 + 192) )
    {
      do
      {
        ++v32;
        *v30 = 0;
        v30[1] = 0;
        v30 += 2;
      }
      while ( v31 != v32 );
    }
    v6 = (void *)(a1 + 64);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 64);
    v6 = (void *)(a1 + 64);
  }
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    if ( &pthread_create )
    {
      v8 = (unsigned int *)(v7 + 20);
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 + 1, v8) );
    }
    else
    {
      ++*(_DWORD *)(v7 + 20);
    }
  }
  sub_5220F0(a1, 0);
  v10 = *(void **)(a1 + 200);
  if ( v10 != v6 )
  {
    if ( v10 )
      operator delete[](v10);
    *(_QWORD *)(a1 + 200) = 0;
  }
  sub_522158(a1);
  v14 = *(unsigned int *)(a2 + 192);
  *(_QWORD *)(a1 + 40) = v7;
  if ( (int)v14 > 0 )
  {
    v15 = *(__int64 **)(a2 + 200);
    v16 = v5;
    v11 = (__int64)&v15[2 * (unsigned int)(v14 - 1) + 2];
    do
    {
      v17 = *v15;
      v18 = v15[1];
      v15 += 2;
      *v16 = v17;
      v16[1] = v18;
      v16 += 2;
    }
    while ( v15 != (__int64 *)v11 );
  }
  v19 = *(unsigned int *)(a2 + 24);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v20 = *(_QWORD *)(a2 + 216);
  v21 = *(_QWORD *)(a2 + 8);
  v22 = *(unsigned __int8 *)(a2 + 225);
  *(_QWORD *)(a1 + 200) = v5;
  *(_DWORD *)(a1 + 192) = v14;
  *(_DWORD *)(a1 + 24) = v19;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 216) = v20;
  if ( (_DWORD)v22 )
  {
    v24 = *(_BYTE *)(a2 + 224);
  }
  else
  {
    v23 = *(_BYTE **)(a2 + 240);
    if ( !v23 )
      goto LABEL_35;
    if ( v23[56] )
    {
      v24 = v23[89];
    }
    else
    {
      sub_51FEA0(*(_BYTE **)(a2 + 240), v20, v21, v19, v11, v14, v12, v13, v33);
      v24 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v23 + 48LL))(v23, 32);
    }
    *(_BYTE *)(a2 + 224) = v24;
    *(_BYTE *)(a2 + 225) = 1;
  }
  v22 = *(unsigned __int8 *)(a1 + 225);
  if ( !*(_BYTE *)(a1 + 225) )
  {
    v25 = *(_BYTE **)(a1 + 240);
    if ( v25 )
    {
      if ( !v25[56] )
      {
        sub_51FEA0(*(_BYTE **)(a1 + 240), v20, v21, v19, v11, v14, v12, v13, v33);
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v25 + 48LL))(v25, 32);
      }
      *(_BYTE *)(a1 + 225) = 1;
      goto LABEL_25;
    }
LABEL_35:
    sub_5652C8(v22);
  }
LABEL_25:
  *(_BYTE *)(a1 + 224) = v24;
  sub_53B7DC(&v34, a2 + 208);
  sub_53C028(a1 + 208, &v34);
  sub_53C0C8(&v34);
  sub_5211BC((_QWORD *)a1, a1 + 208);
  sub_5220F0(a1, 2);
  v26 = *(_DWORD *)(a2 + 28);
  v27 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 28) = v26;
  v28 = *(_DWORD *)(a1 + 32);
  if ( !v27 )
  {
    v28 |= 1u;
    *(_DWORD *)(a1 + 32) = v28;
  }
  if ( (v28 & v26) != 0 )
    sub_565AD8("basic_ios::clear");
  return a1;
}

