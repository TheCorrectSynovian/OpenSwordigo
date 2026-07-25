/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000536300
 * Mangled: sub_536300
 * Demangled: sub_536300
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000201430  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *   0x000000000052B45C  sub_52B45C
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536428  sub_536428
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x000000000053630C string=0x0000000000536310 "s"
 *   insn=0x0000000000536318 string=0x000000000053631C "h"
 *   insn=0x0000000000536328 string=0x000000000053632C "a"
 *   insn=0x000000000053633C string=0x0000000000536340 ","
 *   insn=0x000000000053635C string=0x000000000053BE10 "@"
 *   insn=0x0000000000536374 string=0x0000000000536378 ".,"
 *   insn=0x0000000000536378 string=0x000000000053637C "s"
 *   insn=0x0000000000536380 string=0x0000000000536384 " `"
 *   insn=0x000000000053638C string=0x00000000005363BC "b"
 *   insn=0x00000000005363B0 string=0x00000000005363B4 "r"
 *   insn=0x00000000005363BC string=0x00000000005363C0 "B<G"
 *   insn=0x00000000005363C0 string=0x00000000005363C4 "b"
 *   insn=0x00000000005363C4 string=0x00000000005363C8 "! "
 *   insn=0x00000000005363C4 string=0x00000000005363F0 """
 *   insn=0x00000000005363C8 string=0x00000000005363CC """
 *   insn=0x00000000005363CC string=0x00000000005363D0 "C"
 *   insn=0x00000000005363D0 string=0x00000000005363D4 "#"
 *   insn=0x00000000005363D8 string=0x00000000005363DC "_"
 *   insn=0x00000000005363F0 string=0x00000000005363F4 "C"
 *   insn=0x00000000005363F4 string=0x00000000005363F8 "#"
 *   insn=0x0000000000536404 string=0x0000000000536408 "s"
 *   insn=0x0000000000536410 string=0x0000000000536414 "`"
 *   insn=0x0000000000536420 string=0x0000000000536424 "(-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_536300(
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
    v8 = sub_5347F0(a1, a2, a3, a4, a5, a7, a8, (__int64)v14);
  else
    v8 = sub_53557C(a1, a2, a3, a4, a5, a7, a8, (__int64)v14);
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

