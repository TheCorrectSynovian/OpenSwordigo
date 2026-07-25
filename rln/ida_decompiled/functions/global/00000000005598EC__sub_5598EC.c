/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005598EC
 * Mangled: sub_5598EC
 * Demangled: sub_5598EC
 *
 * Callers: 1
 *   0x0000000000559690  sub_559690
 *
 * Callees: 9
 *   0x0000000000201430  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x0000000000567088  sub_567088
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x00000000005598F4 string=0x00000000005598F8 "|"
 *   insn=0x0000000000559910 string=0x0000000000559914 "a"
 *   insn=0x0000000000559994 string=0x000000000053BE10 "@"
 *   insn=0x00000000005599B8 string=0x00000000005599BC " "
 *   insn=0x00000000005599DC string=0x00000000005599E0 " "
 *   insn=0x00000000005599E0 string=0x0000000000559A44 " "
 *   insn=0x00000000005599E4 string=0x00000000005599E8 "t"
 *   insn=0x00000000005599EC string=0x00000000005599F0 "ub"
 *   insn=0x00000000005599F8 string=0x0000000000559A68 "@"
 *   insn=0x0000000000559A28 string=0x0000000000559A2C "b"
 *   insn=0x0000000000559A3C string=0x0000000000559A40 "!"
 *   insn=0x0000000000559A44 string=0x0000000000559A48 "t"
 *   insn=0x0000000000559A50 string=0x0000000000559A54 " "
 *   insn=0x0000000000559A54 string=0x0000000000559A58 "ub"
 *   insn=0x0000000000559A70 string=0x0000000000559A74 "s""
 *   insn=0x0000000000559A70 string=0x0000000000559AE8 "`"
 *   insn=0x0000000000559A74 string=0x0000000000559A78 "`"
 *   insn=0x0000000000559A7C string=0x0000000000559A80 "a"
 *   insn=0x0000000000559A94 string=0x0000000000559A98 "CB"
 *   insn=0x0000000000559AC0 string=0x0000000000559AC4 "8"
 *   insn=0x0000000000559ACC string=0x0000000000559AD0 "5"
 *   insn=0x0000000000559AEC string=0x0000000000559AF0 "a"
 *   insn=0x0000000000559AFC string=0x0000000000559B00 "!$@"
 *   insn=0x0000000000559B00 string=0x0000000000559B04 " "
 *   insn=0x0000000000559B10 string=0x0000000000559B14 "!$@"
 *   insn=0x0000000000559B14 string=0x0000000000559B18 " "
 *   insn=0x0000000000559B30 string=0x0000000000559B34 "`"
 *   insn=0x0000000000559B38 string=0x0000000000559B3C "i"
 *   insn=0x0000000000559B40 string=0x0000000000559B44 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5598EC(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  _QWORD *v14; // x22
  _QWORD *v15; // x26
  int v16; // w1
  int v17; // w21
  int v18; // w21
  int v19; // w0
  __int64 v20; // x19
  void *v21; // x21
  _DWORD *v23; // x0
  unsigned int *v24; // x19
  int v25; // w0
  int *v26; // x0
  int v27; // w0
  __int64 v28[2]; // [xsp+80h] [xbp+80h] BYREF

  v28[0] = (__int64)&byte_6FD2F8;
  sub_567088(v28, 32);
  v14 = sub_558854(a1, a2, a3, a4, a5, a6, a7, v28);
  v15 = v14;
  v17 = v16;
  v28[1] = sub_53BE10();
  std::__convert_to_v<long double>();
  if ( !v14 )
    goto LABEL_21;
  if ( v17 == -1 )
  {
    v26 = (int *)v14[2];
    if ( (unsigned __int64)v26 >= v14[3] )
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 72LL))(v14);
    else
      v27 = *v26;
    if ( v27 != -1 )
    {
      v18 = 0;
      if ( !a4 )
        goto LABEL_6;
      goto LABEL_4;
    }
LABEL_21:
    v15 = 0;
    v18 = 1;
    if ( !a4 )
      goto LABEL_10;
    v19 = a5;
    if ( (_DWORD)a5 != -1 )
      goto LABEL_5;
    goto LABEL_8;
  }
  v18 = 0;
  if ( !a4 )
    goto LABEL_6;
LABEL_4:
  v19 = a5;
  if ( (_DWORD)a5 != -1 )
    goto LABEL_5;
LABEL_8:
  v23 = (_DWORD *)a4[2];
  if ( (unsigned __int64)v23 < a4[3] )
  {
    if ( (*v23 == -1) == v18 )
      goto LABEL_10;
LABEL_6:
    v20 = v28[0];
    v21 = (void *)(v28[0] - 24);
    if ( (__int64 *)(v28[0] - 24) == &qword_6FD2E0 )
      return v15;
    goto LABEL_11;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4);
LABEL_5:
  if ( (v19 == -1) != v18 )
    goto LABEL_6;
LABEL_10:
  v20 = v28[0];
  *a7 |= 2u;
  v21 = (void *)(v20 - 24);
  if ( (__int64 *)(v20 - 24) == &qword_6FD2E0 )
    return v15;
LABEL_11:
  if ( &pthread_create )
  {
    v24 = (unsigned int *)(v20 - 8);
    do
      v25 = __ldaxr(v24);
    while ( __stlxr(v25 - 1, v24) );
  }
  else
  {
    v25 = *(_DWORD *)(v20 + 0xFFFFFFFFFFFFFFF8LL);
    *(_DWORD *)(v20 + 0xFFFFFFFFFFFFFFF8LL) = v25 - 1;
  }
  if ( v25 <= 0 )
    operator delete(v21);
  return v15;
}

