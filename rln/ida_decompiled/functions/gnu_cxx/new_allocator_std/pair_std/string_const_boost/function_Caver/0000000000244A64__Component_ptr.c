/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000244A64
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEEE7destroyEPSA_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy(std::pair<std::string const,boost::function<Caver::Component * ()(void)>>*)
 *
 * Callers: 1
 *   0x0000000000203D00  __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy(std::pair<std::string const,boost::function<Caver::Component * ()(void)>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 40
 *   insn=0x0000000000244A70 string=0x0000000000244A74 "T"
 *   insn=0x0000000000244A80 string=0x0000000000244A84 "h"
 *   insn=0x0000000000244A84 string=0x0000000000244A88 "H"
 *   insn=0x0000000000244A88 string=0x0000000000244A8C ""
 *   insn=0x0000000000244A88 string=0x0000000000244AB0 "h"
 *   insn=0x0000000000244A8C string=0x0000000000244A90 ""
 *   insn=0x0000000000244A90 string=0x0000000000244A94 ""
 *   insn=0x0000000000244A98 string=0x0000000000244A9C "`B"
 *   insn=0x0000000000244AB0 string=0x0000000000244AB4 "\t%"
 *   insn=0x0000000000244AB4 string=0x0000000000244AB8 ")"
 *   insn=0x0000000000244AC0 string=0x0000000000244AC4 "!"
 *   insn=0x0000000000244AC4 string=0x0000000000244AE8 "\t%"
 *   insn=0x0000000000244AE8 string=0x0000000000244AEC ")=G"
 *   insn=0x0000000000244AEC string=0x0000000000244AF0 "!"
 *   insn=0x0000000000244AF4 string=0x0000000000244AF8 "\t"
 *   insn=0x0000000000244AF4 string=0x0000000000244B0C "\t"
 *   insn=0x0000000000244AF8 string=0x0000000000244AFC "*"
 *   insn=0x0000000000244AFC string=0x0000000000244B00 "\n"
 *   insn=0x0000000000244B08 string=0x0000000000244B18 "?"
 *   insn=0x0000000000244B0C string=0x0000000000244B10 "*"
 *   insn=0x0000000000244B10 string=0x0000000000244B14 "\n"
 *   insn=0x0000000000244B18 string=0x0000000000244B1C "l"
 *   insn=0x0000000000244B20 string=0x0000000000244B24 " "
 *   insn=0x0000000000244B2C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000244B30 string=0x0000000000244B34 "\n%"
 *   insn=0x0000000000244B34 string=0x0000000000244B38 "J"
 *   insn=0x0000000000244B3C string=0x0000000000244B40 "(a"
 *   insn=0x0000000000244B48 string=0x0000000000244B4C "\n%"
 *   insn=0x0000000000244B4C string=0x0000000000244B50 "J=G"
 *   insn=0x0000000000244B50 string=0x0000000000244B54 ")!"
 *   insn=0x0000000000244B58 string=0x0000000000244B5C "*"
 *   insn=0x0000000000244B58 string=0x0000000000244B88 "*"
 *   insn=0x0000000000244B5C string=0x0000000000244B60 "K"
 *   insn=0x0000000000244B60 string=0x0000000000244B64 "+"
 *   insn=0x0000000000244B68 string=0x0000000000244B6C "_"
 *   insn=0x0000000000244B78 string=0x0000000000244B7C "\n"
 *   insn=0x0000000000244B80 string=0x0000000000244B84 "P"
 *   insn=0x0000000000244B88 string=0x0000000000244B8C "K"
 *   insn=0x0000000000244B8C string=0x0000000000244B90 "+"
 *   insn=0x0000000000244B90 string=0x0000000000244B94 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // x8
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // x8
  __int64 *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9

  _ReadStatusReg(TPIDR_EL0);
  v3 = a2[1];
  if ( v3 )
  {
    if ( (v3 & 1) == 0 )
    {
      v4 = *(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(v3 & 0xFFFFFFFFFFFFFFFELL);
      if ( v4 )
        v4(a2 + 2, a2 + 2, 2);
    }
    a2[1] = 0;
  }
  v5 = (__int64 *)(*a2 - 24LL);
  if ( v5 != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(*a2 - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v5);
  }
}

