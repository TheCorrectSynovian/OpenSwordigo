/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000537734
 * Mangled: sub_537734
 * Demangled: sub_537734
 *
 * Callers: 1
 *   0x00000000005374EC  sub_5374EC
 *
 * Callees: 9
 *   0x0000000000201430  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *   0x000000000052B45C  sub_52B45C
 *   0x0000000000536618  sub_536618
 *   0x000000000053797C  sub_53797C
 *   0x000000000053BE10  sub_53BE10
 *   0x0000000000567088  sub_567088
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 20
 *   insn=0x000000000053773C string=0x0000000000537740 "|"
 *   insn=0x0000000000537754 string=0x0000000000537758 "a"
 *   insn=0x0000000000537788 string=0x000000000053778C "?"
 *   insn=0x00000000005377DC string=0x000000000053BE10 "@"
 *   insn=0x000000000053780C string=0x0000000000537810 "?"
 *   insn=0x0000000000537824 string=0x0000000000537828 "s"
 *   insn=0x0000000000537838 string=0x00000000005378B8 "`"
 *   insn=0x000000000053786C string=0x0000000000537870 ""
 *   insn=0x000000000053787C string=0x0000000000537880 "?"
 *   insn=0x0000000000537894 string=0x0000000000537898 "s"
 *   insn=0x00000000005378B0 string=0x00000000005378B4 "@"
 *   insn=0x00000000005378BC string=0x00000000005378C0 " "
 *   insn=0x00000000005378F0 string=0x00000000005378F4 "4"
 *   insn=0x0000000000537904 string=0x0000000000537908 "!$@"
 *   insn=0x0000000000537908 string=0x000000000053790C " "
 *   insn=0x0000000000537910 string=0x0000000000537914 " "
 *   insn=0x0000000000537914 string=0x0000000000537918 " "
 *   insn=0x0000000000537928 string=0x000000000053792C "!$@"
 *   insn=0x000000000053792C string=0x0000000000537930 " "
 *   insn=0x0000000000537964 string=0x0000000000537968 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_537734(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, _DWORD *a7)
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
  std::__convert_to_v<long double>();
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

