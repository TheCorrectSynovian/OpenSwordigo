/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521C18
 * Mangled: sub_521C18
 * Demangled: sub_521C18
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000521A9C  sub_521A9C
 *   0x00000000005220F0  sub_5220F0
 *   0x0000000000522158  sub_522158
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x0000000000521C38 string=0x0000000000521C3C " "
 *   insn=0x0000000000521C40 string=0x0000000000521C44 "l"
 *   insn=0x0000000000521C44 string=0x0000000000521C48 "t"
 *   insn=0x0000000000521C50 string=0x0000000000521C54 "6"
 *   insn=0x0000000000521C68 string=0x0000000000521C6C "!"
 *   insn=0x0000000000521C80 string=0x0000000000521C84 "`f@"
 *   insn=0x0000000000521C8C string=0x0000000000521C90 "@"
 *   insn=0x0000000000521C94 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000521C9C string=0x0000000000521CA0 "."
 *   insn=0x0000000000521CA4 string=0x0000000000521CA8 "v"
 *   insn=0x0000000000521CAC string=0x0000000000521CB0 "M"
 *   insn=0x0000000000521CC8 string=0x0000000000521CCC """
 *   insn=0x0000000000521CDC string=0x0000000000521CE0 "`\n"
 *   insn=0x0000000000521CEC string=0x0000000000521CF0 "tf"
 *   insn=0x0000000000521CF0 string=0x0000000000521CF4 "e"
 *   insn=0x0000000000521CF4 string=0x0000000000521CF8 "c"
 *   insn=0x0000000000521CF8 string=0x0000000000521CFC "b"
 *   insn=0x0000000000521CFC string=0x0000000000521D00 "an"
 *   insn=0x0000000000521D00 string=0x0000000000521D04 " "
 *   insn=0x0000000000521D0C string=0x0000000000521E2C "'"
 *   insn=0x0000000000521D14 string=0x0000000000521D18 "B(@"
 *   insn=0x0000000000521D18 string=0x0000000000521D1C "@"
 *   insn=0x0000000000521D24 string=0x0000000000521D28 " "
 *   insn=0x0000000000521D2C string=0x0000000000521D30 "`"
 *   insn=0x0000000000521D30 string=0x0000000000521D34 " "
 *   insn=0x0000000000521D34 string=0x0000000000521D38 "`z@"
 *   insn=0x0000000000521D44 string=0x0000000000521D48 "B(@"
 *   insn=0x0000000000521D48 string=0x0000000000521D4C "@"
 *   insn=0x0000000000521D4C string=0x0000000000521D50 " "
 *   insn=0x0000000000521D50 string=0x0000000000521D54 "`"
 *   insn=0x0000000000521D60 string=0x0000000000521D64 "w"
 *   insn=0x0000000000521D64 string=0x0000000000521D68 "vB"
 *   insn=0x0000000000521D6C string=0x000000000053B7DC "!"
 *   insn=0x0000000000521D88 string=0x0000000000521D8C "D"
 *   insn=0x0000000000521D90 string=0x0000000000521D94 "A"
 *   insn=0x0000000000521D9C string=0x0000000000521DA0 "bv@"
 *   insn=0x0000000000521DA0 string=0x0000000000521DA4 "`"
 *   insn=0x0000000000521DA4 string=0x0000000000521DA8 "a"@"
 *   insn=0x0000000000521DAC string=0x0000000000521DB0 "?"
 *   insn=0x0000000000521DAC string=0x0000000000521E20 "!"
 *   insn=0x0000000000521DD4 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000521DE4 string=0x0000000000521DE8 "!"
 *   insn=0x0000000000521DE4 string=0x0000000000521E00 "w"
 *   insn=0x0000000000521DF0 string=0x0000000000521DF4 "_"
 *   insn=0x0000000000521DF8 string=0x0000000000521DFC "a"
 *   insn=0x0000000000521E20 string=0x0000000000521E24 "a""
 *   insn=0x0000000000521E30 string=0x0000000000521E38 "("
 *   insn=0x0000000000521E30 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521C18(__int64 a1, __int64 a2)
{
  int v4; // w0
  _QWORD *v5; // x20
  void *v6; // x23
  __int64 v7; // x22
  unsigned int *v8; // x0
  unsigned int v9; // w1
  void *v10; // x0
  int v11; // w5
  __int64 *v12; // x0
  _QWORD *v13; // x1
  __int64 *v14; // x4
  __int64 v15; // x2
  __int64 v16; // x3
  int v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w0
  __int64 v21; // x0
  int v22; // w23
  int v23; // w0
  __int64 v24; // x2
  int v25; // w1
  _QWORD *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x1
  char v30; // [xsp+48h] [xbp+48h] BYREF

  if ( a1 == a2 )
    return a1;
  v4 = *(_DWORD *)(a2 + 192);
  if ( v4 > 8 )
  {
    v27 = (_QWORD *)operator new[](16LL * v4);
    v5 = v27;
    v28 = *(int *)(a2 + 192);
    v29 = 0;
    if ( *(_DWORD *)(a2 + 192) )
    {
      do
      {
        ++v29;
        *v27 = 0;
        v27[1] = 0;
        v27 += 2;
      }
      while ( v28 != v29 );
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
  if ( v6 != v10 )
  {
    if ( v10 )
      operator delete[](v10);
    *(_QWORD *)(a1 + 200) = 0;
  }
  sub_522158(a1);
  v11 = *(_DWORD *)(a2 + 192);
  *(_QWORD *)(a1 + 40) = v7;
  if ( v11 > 0 )
  {
    v12 = *(__int64 **)(a2 + 200);
    v13 = v5;
    v14 = &v12[2 * (unsigned int)(v11 - 1) + 2];
    do
    {
      v15 = *v12;
      v16 = v12[1];
      v12 += 2;
      *v13 = v15;
      v13[1] = v16;
      v13 += 2;
    }
    while ( v12 != v14 );
  }
  v17 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v18 = *(_QWORD *)(a2 + 216);
  v19 = *(_QWORD *)(a2 + 8);
  v20 = *(unsigned __int8 *)(a2 + 228);
  *(_QWORD *)(a1 + 200) = v5;
  *(_DWORD *)(a1 + 192) = v11;
  *(_DWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 216) = v18;
  if ( v20 )
  {
    v22 = *(_DWORD *)(a2 + 224);
  }
  else
  {
    v21 = *(_QWORD *)(a2 + 240);
    if ( !v21 )
      goto LABEL_30;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL))(v21, 32);
    *(_DWORD *)(a2 + 224) = v22;
    *(_BYTE *)(a2 + 228) = 1;
  }
  if ( !*(_BYTE *)(a1 + 228) )
  {
    v21 = *(_QWORD *)(a1 + 240);
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL))(v21, 32);
      *(_BYTE *)(a1 + 228) = 1;
      goto LABEL_21;
    }
LABEL_30:
    sub_5652C8(v21);
  }
LABEL_21:
  *(_DWORD *)(a1 + 224) = v22;
  sub_53B7DC(&v30, a2 + 208);
  sub_53C028(a1 + 208, &v30);
  sub_53C0C8(&v30);
  sub_521A9C((_QWORD *)a1, a1 + 208);
  sub_5220F0(a1, 2);
  v23 = *(_DWORD *)(a2 + 28);
  v24 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 28) = v23;
  v25 = *(_DWORD *)(a1 + 32);
  if ( !v24 )
  {
    v25 |= 1u;
    *(_DWORD *)(a1 + 32) = v25;
  }
  if ( (v25 & v23) != 0 )
    sub_565AD8("basic_ios::clear");
  return a1;
}

