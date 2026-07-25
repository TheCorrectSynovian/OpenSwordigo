/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005374EC
 * Mangled: sub_5374EC
 * Demangled: sub_5374EC
 *
 * Callers: 1
 *   0x00000000005372A4  sub_5372A4
 *
 * Callees: 9
 *   0x00000000001FF650  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *   0x000000000052B45C  sub_52B45C
 *   0x0000000000536618  sub_536618
 *   0x0000000000537734  sub_537734
 *   0x000000000053BE10  sub_53BE10
 *   0x0000000000567088  sub_567088
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x00000000005374F4 string=0x00000000005374F8 "|"
 *   insn=0x000000000053750C string=0x0000000000537510 "a"
 *   insn=0x0000000000537564 string=0x0000000000537568 ","
 *   insn=0x0000000000537594 string=0x000000000053BE10 "@"
 *   insn=0x00000000005375AC string=0x00000000005375B0 "( "
 *   insn=0x00000000005375C4 string=0x00000000005375C8 "?"
 *   insn=0x00000000005375DC string=0x00000000005375E0 "s"
 *   insn=0x00000000005375F0 string=0x0000000000537670 "`"
 *   insn=0x0000000000537624 string=0x0000000000537628 ""
 *   insn=0x0000000000537634 string=0x0000000000537638 "?"
 *   insn=0x000000000053764C string=0x0000000000537650 "s"
 *   insn=0x0000000000537668 string=0x000000000053766C "@"
 *   insn=0x0000000000537674 string=0x0000000000537678 " "
 *   insn=0x000000000053769C string=0x00000000005376A0 "A"
 *   insn=0x00000000005376A8 string=0x00000000005376AC "4"
 *   insn=0x00000000005376BC string=0x00000000005376C0 "!$@"
 *   insn=0x00000000005376C0 string=0x00000000005376C4 " "
 *   insn=0x00000000005376C8 string=0x00000000005376CC " "
 *   insn=0x00000000005376CC string=0x00000000005376D0 " "
 *   insn=0x00000000005376E0 string=0x00000000005376E4 "!$@"
 *   insn=0x00000000005376E4 string=0x00000000005376E8 " "
 *   insn=0x000000000053771C string=0x0000000000537720 "`"
 *   insn=0x0000000000537724 string=0x0000000000537728 "M"
 *   insn=0x000000000053772C string=0x0000000000537730 "e("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5374EC(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, _DWORD *a7)
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
  std::__convert_to_v<double>();
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

