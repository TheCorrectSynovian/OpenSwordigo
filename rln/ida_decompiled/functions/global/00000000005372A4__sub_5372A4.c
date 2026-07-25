/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005372A4
 * Mangled: sub_5372A4
 * Demangled: sub_5372A4
 *
 * Callers: 1
 *   0x0000000000536618  sub_536618
 *
 * Callees: 9
 *   0x0000000000201460  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *   0x000000000052B45C  sub_52B45C
 *   0x0000000000536618  sub_536618
 *   0x00000000005374EC  sub_5374EC
 *   0x000000000053BE10  sub_53BE10
 *   0x0000000000567088  sub_567088
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 21
 *   insn=0x00000000005372AC string=0x00000000005372B0 "|"
 *   insn=0x00000000005372C4 string=0x00000000005372C8 "a"
 *   insn=0x00000000005372F8 string=0x00000000005372FC "c"
 *   insn=0x000000000053734C string=0x000000000053BE10 "@"
 *   insn=0x0000000000537364 string=0x0000000000537368 ">("
 *   insn=0x000000000053737C string=0x0000000000537380 "?"
 *   insn=0x0000000000537394 string=0x0000000000537398 "s"
 *   insn=0x00000000005373A8 string=0x0000000000537428 "`"
 *   insn=0x00000000005373DC string=0x00000000005373E0 ""
 *   insn=0x00000000005373EC string=0x00000000005373F0 "?"
 *   insn=0x0000000000537404 string=0x0000000000537408 "s"
 *   insn=0x0000000000537420 string=0x0000000000537424 "@"
 *   insn=0x000000000053742C string=0x0000000000537430 " "
 *   insn=0x0000000000537460 string=0x0000000000537464 "4"
 *   insn=0x0000000000537474 string=0x0000000000537478 "!$@"
 *   insn=0x0000000000537478 string=0x000000000053747C " "
 *   insn=0x0000000000537480 string=0x0000000000537484 " "
 *   insn=0x0000000000537484 string=0x0000000000537488 " "
 *   insn=0x0000000000537498 string=0x000000000053749C "!$@"
 *   insn=0x000000000053749C string=0x00000000005374A0 " "
 *   insn=0x00000000005374D4 string=0x00000000005374D8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5372A4(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  _QWORD *v14; // x21
  _QWORD *v15; // x26
  int v16; // w1
  int v17; // w20
  int v18; // w20
  int v19; // w0
  __int64 v20; // x20
  void *v21; // x21
  unsigned int *v23; // x20
  int v24; // w0
  bool v25; // zf
  __int64 v26[2]; // [xsp+80h] [xbp+80h] BYREF

  v26[0] = (__int64)&byte_6FD2F8;
  sub_567088(v26, 32);
  v14 = sub_536618(a1, a2, a3, a4, a5, a6, a7, v26);
  v15 = v14;
  v17 = v16;
  v26[1] = sub_53BE10();
  std::__convert_to_v<float>();
  if ( v14 && (v17 != -1 || v14[2] < v14[3] || (*(unsigned int (__fastcall **)(_QWORD *))(*v14 + 72LL))(v14) != -1) )
  {
    v18 = 0;
    if ( !a4 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v15 = 0;
  v18 = 1;
  if ( a4 )
  {
LABEL_4:
    v19 = 0;
    if ( (_DWORD)a5 != -1
      || a4[2] >= a4[3] && (v25 = (*(unsigned int (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4) == -1, v19 = 1, v25) )
    {
      if ( v18 == v19 )
        goto LABEL_12;
    }
    else if ( !v18 )
    {
      goto LABEL_12;
    }
LABEL_6:
    v20 = v26[0];
    v21 = (void *)(v26[0] - 24);
    if ( (__int64 *)(v26[0] - 24) == &qword_6FD2E0 )
      return v15;
    goto LABEL_13;
  }
LABEL_12:
  v20 = v26[0];
  *a7 |= 2u;
  v21 = (void *)(v20 - 24);
  if ( (__int64 *)(v20 - 24) == &qword_6FD2E0 )
    return v15;
LABEL_13:
  if ( &pthread_create )
  {
    v23 = (unsigned int *)(v20 - 8);
    do
      v24 = __ldaxr(v23);
    while ( __stlxr(v24 - 1, v23) );
  }
  else
  {
    v24 = *(_DWORD *)(v20 + 0xFFFFFFFFFFFFFFF8LL);
    *(_DWORD *)(v20 + 0xFFFFFFFFFFFFFFF8LL) = v24 - 1;
  }
  if ( v24 <= 0 )
    operator delete(v21);
  return v15;
}

