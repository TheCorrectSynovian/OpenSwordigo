/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9420
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver10LevelStateEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>*)
 *
 * Callers: 1
 *   0x00000000001F5C10  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000003B9430 string=0x00000000003B9434 "U"
 *   insn=0x00000000003B9440 string=0x00000000003B9444 "t\n@"
 *   insn=0x00000000003B9444 string=0x00000000003B9448 "4"
 *   insn=0x00000000003B9448 string=0x00000000003B948C "h"
 *   insn=0x00000000003B944C string=0x00000000003B9450 ""
 *   insn=0x00000000003B945C string=0x00000000003B9460 "\t@"
 *   insn=0x00000000003B946C string=0x00000000003B9470 ""
 *   insn=0x00000000003B947C string=0x00000000003B9480 "@"
 *   insn=0x00000000003B948C string=0x00000000003B9490 "i"
 *   insn=0x00000000003B9490 string=0x00000000003B9494 ")"
 *   insn=0x00000000003B949C string=0x00000000003B94A0 "A"
 *   insn=0x00000000003B94A0 string=0x00000000003B94C8 "I"
 *   insn=0x00000000003B94B0 string=0x00000000003B950C "q"
 *   insn=0x00000000003B94C8 string=0x00000000003B94CC ")=G"
 *   insn=0x00000000003B94CC string=0x00000000003B94D0 "!"
 *   insn=0x00000000003B94D4 string=0x00000000003B94D8 "\t"
 *   insn=0x00000000003B94D4 string=0x00000000003B94EC "\t"
 *   insn=0x00000000003B94D8 string=0x00000000003B94DC "*"
 *   insn=0x00000000003B94DC string=0x00000000003B94E0 "\n"
 *   insn=0x00000000003B94E8 string=0x00000000003B94F8 "?"
 *   insn=0x00000000003B94EC string=0x00000000003B94F0 "*"
 *   insn=0x00000000003B94F0 string=0x00000000003B94F4 "\n"
 *   insn=0x00000000003B94F8 string=0x00000000003B94FC "L"
 *   insn=0x00000000003B950C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B9510 string=0x00000000003B9514 "j"
 *   insn=0x00000000003B9514 string=0x00000000003B9518 "J"
 *   insn=0x00000000003B951C string=0x00000000003B9520 "(a"
 *   insn=0x00000000003B9528 string=0x00000000003B952C "J"
 *   insn=0x00000000003B952C string=0x00000000003B9530 "J=G"
 *   insn=0x00000000003B9530 string=0x00000000003B9534 ")!"
 *   insn=0x00000000003B9538 string=0x00000000003B953C "*"
 *   insn=0x00000000003B9538 string=0x00000000003B9568 "*"
 *   insn=0x00000000003B953C string=0x00000000003B9540 "K"
 *   insn=0x00000000003B9540 string=0x00000000003B9544 "+"
 *   insn=0x00000000003B9548 string=0x00000000003B954C "_"
 *   insn=0x00000000003B9568 string=0x00000000003B956C "K"
 *   insn=0x00000000003B956C string=0x00000000003B9570 "+"
 *   insn=0x00000000003B9570 string=0x00000000003B9574 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy(
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

