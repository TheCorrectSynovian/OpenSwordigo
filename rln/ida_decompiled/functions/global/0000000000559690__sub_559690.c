/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000559690
 * Mangled: sub_559690
 * Demangled: sub_559690
 *
 * Callers: 1
 *   0x0000000000559434  sub_559434
 *
 * Callees: 9
 *   0x00000000001FF650  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000558854  sub_558854
 *   0x00000000005598EC  sub_5598EC
 *   0x0000000000567088  sub_567088
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x0000000000559698 string=0x000000000055969C "|"
 *   insn=0x00000000005596B4 string=0x00000000005596B8 "a"
 *   insn=0x00000000005596E4 string=0x00000000005596E8 "h6"
 *   insn=0x0000000000559708 string=0x000000000055970C "R"
 *   insn=0x0000000000559738 string=0x000000000053BE10 "@"
 *   insn=0x000000000055975C string=0x0000000000559760 " "
 *   insn=0x0000000000559780 string=0x0000000000559784 " "
 *   insn=0x0000000000559784 string=0x00000000005597E8 " "
 *   insn=0x0000000000559788 string=0x000000000055978C "t"
 *   insn=0x0000000000559790 string=0x0000000000559794 "ub"
 *   insn=0x000000000055979C string=0x000000000055980C "@"
 *   insn=0x00000000005597CC string=0x00000000005597D0 "b"
 *   insn=0x00000000005597E0 string=0x00000000005597E4 "!"
 *   insn=0x00000000005597E8 string=0x00000000005597EC "t"
 *   insn=0x00000000005597F4 string=0x00000000005597F8 " "
 *   insn=0x00000000005597F8 string=0x00000000005597FC "ub"
 *   insn=0x0000000000559814 string=0x0000000000559818 "s""
 *   insn=0x0000000000559814 string=0x000000000055988C "`"
 *   insn=0x0000000000559818 string=0x000000000055981C "`"
 *   insn=0x0000000000559820 string=0x0000000000559824 "a"
 *   insn=0x0000000000559864 string=0x0000000000559868 "8"
 *   insn=0x0000000000559870 string=0x0000000000559874 "5"
 *   insn=0x0000000000559890 string=0x0000000000559894 "a"
 *   insn=0x00000000005598A0 string=0x00000000005598A4 "!$@"
 *   insn=0x00000000005598A4 string=0x00000000005598A8 " "
 *   insn=0x00000000005598B4 string=0x00000000005598B8 "!$@"
 *   insn=0x00000000005598B8 string=0x00000000005598BC " "
 *   insn=0x00000000005598D4 string=0x00000000005598D8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_559690(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, _DWORD *a7)
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
  std::__convert_to_v<double>();
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

