/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055857C
 * Mangled: sub_55857C
 * Demangled: sub_55857C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000201430  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000054D8E0  sub_54D8E0
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x00000000005586A4  sub_5586A4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 20
 *   insn=0x0000000000558588 string=0x000000000055858C "s"
 *   insn=0x0000000000558594 string=0x0000000000558598 "h"
 *   insn=0x00000000005585A4 string=0x00000000005585A8 "a"
 *   insn=0x00000000005585D8 string=0x000000000053BE10 "@"
 *   insn=0x00000000005585F4 string=0x00000000005585F8 "s"
 *   insn=0x00000000005585FC string=0x0000000000558600 " `"
 *   insn=0x0000000000558608 string=0x0000000000558638 "b"
 *   insn=0x0000000000558638 string=0x000000000055863C "B<G"
 *   insn=0x000000000055863C string=0x0000000000558640 "b"
 *   insn=0x0000000000558640 string=0x0000000000558644 "! "
 *   insn=0x0000000000558640 string=0x000000000055866C """
 *   insn=0x0000000000558644 string=0x0000000000558648 """
 *   insn=0x0000000000558648 string=0x000000000055864C "C"
 *   insn=0x000000000055864C string=0x0000000000558650 "#"
 *   insn=0x0000000000558654 string=0x0000000000558658 "_"
 *   insn=0x0000000000558660 string=0x0000000000558664 "PG"
 *   insn=0x000000000055866C string=0x0000000000558670 "C"
 *   insn=0x0000000000558670 string=0x0000000000558674 "#"
 *   insn=0x0000000000558680 string=0x0000000000558684 "s"
 *   insn=0x000000000055868C string=0x0000000000558690 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55857C(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  _QWORD *v8; // x0
  _QWORD *v9; // x23
  void *v10; // x0
  unsigned int *v12; // x1
  int v13; // w2
  _QWORD v14[2]; // [xsp+50h] [xbp+50h] BYREF

  v14[0] = &byte_6FD2F8;
  if ( a6 )
    v8 = sub_5577B8(a1, a2, a3, a4, a5, a7, a8, (__int64)v14);
  else
    v8 = sub_5569EC(a1, a2, a3, a4, a5, a7, a8, (__int64)v14);
  v9 = v8;
  v14[1] = sub_53BE10();
  std::__convert_to_v<long double>();
  v10 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v12 = (unsigned int *)(v14[0] - 8LL);
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = *(_DWORD *)(v14[0] + 0xFFFFFFFFFFFFFFF8LL);
      *(_DWORD *)(v14[0] + 0xFFFFFFFFFFFFFFF8LL) = v13 - 1;
    }
    if ( v13 <= 0 )
      operator delete(v10);
  }
  return v9;
}

