/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005586A4
 * Mangled: sub_5586A4
 * Demangled: sub_5586A4
 *
 * Callers: 1
 *   0x000000000055857C  sub_55857C
 *
 * Callees: 10
 *   0x000000000054D8E0  sub_54D8E0
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056C84C  sub_56C84C
 *   0x000000000056E994  sub_56E994
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x00000000005586B0 string=0x00000000005586B4 "s"
 *   insn=0x00000000005586E0 string=0x00000000005586E4 "`"
 *   insn=0x000000000055870C string=0x0000000000558710 "*"
 *   insn=0x0000000000558724 string=0x0000000000558728 "T"
 *   insn=0x0000000000558730 string=0x0000000000558734 "s"
 *   insn=0x0000000000558734 string=0x0000000000558738 "@`"
 *   insn=0x000000000055873C string=0x0000000000558740 "A"
 *   insn=0x0000000000558740 string=0x00000000005587E8 "a"
 *   insn=0x0000000000558774 string=0x0000000000558778 "T"
 *   insn=0x00000000005587A0 string=0x00000000005587A4 "`"
 *   insn=0x00000000005587AC string=0x00000000005587B0 "'P"
 *   insn=0x00000000005587D4 string=0x00000000005587D8 "s"
 *   insn=0x00000000005587D8 string=0x00000000005587DC "@`"
 *   insn=0x00000000005587E8 string=0x00000000005587EC "!<G"
 *   insn=0x00000000005587EC string=0x00000000005587F0 "a"
 *   insn=0x00000000005587F0 string=0x00000000005587F4 "B "
 *   insn=0x00000000005587F0 string=0x000000000055881C "A"
 *   insn=0x00000000005587F4 string=0x00000000005587F8 "A"
 *   insn=0x00000000005587F8 string=0x00000000005587FC "#"
 *   insn=0x00000000005587FC string=0x0000000000558800 "C"
 *   insn=0x0000000000558804 string=0x0000000000558808 "?"
 *   insn=0x000000000055881C string=0x0000000000558820 "#"
 *   insn=0x0000000000558820 string=0x0000000000558824 "C"
 *   insn=0x0000000000558830 string=0x0000000000558834 "s"
 *   insn=0x000000000055883C string=0x0000000000558840 "`"
 *   insn=0x0000000000558844 string=0x0000000000558848 "&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5586A4(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        _DWORD *a8,
        _QWORD *a9)
{
  int v12; // w24
  void *v13; // x22
  _QWORD *v14; // x0
  char *v15; // x2
  _QWORD *v16; // x23
  __int64 v17; // x20
  char *v18; // x0
  _QWORD *v20; // x0
  char *v21; // x24
  char *v22; // x20
  unsigned int *v23; // x2
  int v24; // w1
  char *v29; // [xsp+78h] [xbp+78h] BYREF

  v12 = a6;
  v13 = sub_54F6AC(a7 + 208);
  v29 = &byte_6FD2F8;
  if ( v12 )
  {
    v14 = sub_5577B8(a1, a2, a3, a4, a5, a7, a8, (__int64)&v29);
    v15 = v29;
    v16 = v14;
    v17 = *((_QWORD *)v29 - 3);
    if ( !v17 )
      goto LABEL_3;
  }
  else
  {
    v20 = sub_5569EC(a1, a2, a3, a4, a5, a7, a8, (__int64)&v29);
    v15 = v29;
    v16 = v20;
    v17 = *((_QWORD *)v29 - 3);
    if ( !v17 )
    {
LABEL_3:
      v18 = v15 - 24;
      if ( v15 - 24 == (char *)&qword_6FD2E0 )
        return v16;
      goto LABEL_9;
    }
  }
  sub_56E994(a9, v17, 0);
  v21 = v29;
  v22 = &v29[v17];
  if ( (*(_DWORD *)(*a9 - 8LL) & 0x80000000) == 0 )
    sub_56C84C(a9);
  (*(void (__fastcall **)(void *, char *, char *))(*(_QWORD *)v13 + 88LL))(v13, v21, v22);
  v15 = v29;
  v18 = v29 - 24;
  if ( v29 - 24 != (char *)&qword_6FD2E0 )
  {
LABEL_9:
    if ( &pthread_create )
    {
      v23 = (unsigned int *)(v15 - 8);
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = *((_DWORD *)v15 - 2);
      *((_DWORD *)v15 - 2) = v24 - 1;
    }
    if ( v24 <= 0 )
      operator delete(v18);
  }
  return v16;
}

