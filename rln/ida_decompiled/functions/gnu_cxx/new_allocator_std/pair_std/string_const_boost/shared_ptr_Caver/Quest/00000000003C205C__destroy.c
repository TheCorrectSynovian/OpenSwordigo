/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C205C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver5QuestEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Quest>>*)
 *
 * Callers: 1
 *   0x00000000001F6970  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Quest>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000003C206C string=0x00000000003C2070 "U"
 *   insn=0x00000000003C207C string=0x00000000003C2080 "t\n@"
 *   insn=0x00000000003C2080 string=0x00000000003C2084 "4"
 *   insn=0x00000000003C2084 string=0x00000000003C20C8 "h"
 *   insn=0x00000000003C2088 string=0x00000000003C208C ""
 *   insn=0x00000000003C2098 string=0x00000000003C209C "\t@"
 *   insn=0x00000000003C20A8 string=0x00000000003C20AC ""
 *   insn=0x00000000003C20B8 string=0x00000000003C20BC "@"
 *   insn=0x00000000003C20C8 string=0x00000000003C20CC "\t"
 *   insn=0x00000000003C20CC string=0x00000000003C20D0 ")"
 *   insn=0x00000000003C20D8 string=0x00000000003C20DC "A"
 *   insn=0x00000000003C20DC string=0x00000000003C2104 "\t"
 *   insn=0x00000000003C20EC string=0x00000000003C2148 "b"
 *   insn=0x00000000003C2104 string=0x00000000003C2108 ")=G"
 *   insn=0x00000000003C2108 string=0x00000000003C210C "!"
 *   insn=0x00000000003C2110 string=0x00000000003C2114 "\t"
 *   insn=0x00000000003C2110 string=0x00000000003C2128 "\t"
 *   insn=0x00000000003C2114 string=0x00000000003C2118 "*"
 *   insn=0x00000000003C2118 string=0x00000000003C211C "\n"
 *   insn=0x00000000003C2124 string=0x00000000003C2134 "?"
 *   insn=0x00000000003C2128 string=0x00000000003C212C "*"
 *   insn=0x00000000003C212C string=0x00000000003C2130 "\n"
 *   insn=0x00000000003C2134 string=0x00000000003C2138 "L"
 *   insn=0x00000000003C2148 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C214C string=0x00000000003C2150 "\n"
 *   insn=0x00000000003C2150 string=0x00000000003C2154 "J"
 *   insn=0x00000000003C2158 string=0x00000000003C215C "(a"
 *   insn=0x00000000003C2164 string=0x00000000003C2168 "\n"
 *   insn=0x00000000003C2168 string=0x00000000003C216C "J=G"
 *   insn=0x00000000003C216C string=0x00000000003C2170 ")!"
 *   insn=0x00000000003C2174 string=0x00000000003C2178 "*"
 *   insn=0x00000000003C2174 string=0x00000000003C21A4 "*"
 *   insn=0x00000000003C2178 string=0x00000000003C217C "K"
 *   insn=0x00000000003C217C string=0x00000000003C2180 "+"
 *   insn=0x00000000003C2184 string=0x00000000003C2188 "_"
 *   insn=0x00000000003C21A4 string=0x00000000003C21A8 "K"
 *   insn=0x00000000003C21A8 string=0x00000000003C21AC "+"
 *   insn=0x00000000003C21AC string=0x00000000003C21B0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v3 = (_QWORD *)a2[2];
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = (__int64 *)(*a2 - 24LL);
  if ( v6 != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(*a2 - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v6);
  }
}

