/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C223C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver4ItemEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Item>>*)
 *
 * Callers: 1
 *   0x00000000001FA680  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Item>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 40
 *   insn=0x00000000003C224C string=0x00000000003C2250 "U"
 *   insn=0x00000000003C225C string=0x00000000003C2260 "t\n@"
 *   insn=0x00000000003C2260 string=0x00000000003C2264 "4"
 *   insn=0x00000000003C2264 string=0x00000000003C22A8 "h"
 *   insn=0x00000000003C2268 string=0x00000000003C226C ""
 *   insn=0x00000000003C2278 string=0x00000000003C227C "\t@"
 *   insn=0x00000000003C2288 string=0x00000000003C228C ""
 *   insn=0x00000000003C2298 string=0x00000000003C229C "@"
 *   insn=0x00000000003C22A8 string=0x00000000003C22AC "\t"
 *   insn=0x00000000003C22AC string=0x00000000003C22B0 ")"
 *   insn=0x00000000003C22B8 string=0x00000000003C22BC "A"
 *   insn=0x00000000003C22BC string=0x00000000003C22E4 "\t"
 *   insn=0x00000000003C22E4 string=0x00000000003C22E8 ")=G"
 *   insn=0x00000000003C22E8 string=0x00000000003C22EC "!"
 *   insn=0x00000000003C22F0 string=0x00000000003C22F4 "\t"
 *   insn=0x00000000003C22F0 string=0x00000000003C2308 "\t"
 *   insn=0x00000000003C22F4 string=0x00000000003C22F8 "*"
 *   insn=0x00000000003C22F8 string=0x00000000003C22FC "\n"
 *   insn=0x00000000003C2304 string=0x00000000003C2314 "?"
 *   insn=0x00000000003C2308 string=0x00000000003C230C "*"
 *   insn=0x00000000003C230C string=0x00000000003C2310 "\n"
 *   insn=0x00000000003C2314 string=0x00000000003C2318 "L"
 *   insn=0x00000000003C231C string=0x00000000003C2320 "!"
 *   insn=0x00000000003C2328 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C232C string=0x00000000003C2330 "\n"
 *   insn=0x00000000003C2330 string=0x00000000003C2334 "J"
 *   insn=0x00000000003C2338 string=0x00000000003C233C "(a"
 *   insn=0x00000000003C2344 string=0x00000000003C2348 "\n"
 *   insn=0x00000000003C2348 string=0x00000000003C234C "J=G"
 *   insn=0x00000000003C234C string=0x00000000003C2350 ")!"
 *   insn=0x00000000003C2354 string=0x00000000003C2358 "*"
 *   insn=0x00000000003C2354 string=0x00000000003C2384 "*"
 *   insn=0x00000000003C2358 string=0x00000000003C235C "K"
 *   insn=0x00000000003C235C string=0x00000000003C2360 "+"
 *   insn=0x00000000003C2364 string=0x00000000003C2368 "_"
 *   insn=0x00000000003C2374 string=0x00000000003C2378 ""
 *   insn=0x00000000003C237C string=0x00000000003C2380 "Q"
 *   insn=0x00000000003C2384 string=0x00000000003C2388 "K"
 *   insn=0x00000000003C2388 string=0x00000000003C238C "+"
 *   insn=0x00000000003C238C string=0x00000000003C2390 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>::destroy(
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

