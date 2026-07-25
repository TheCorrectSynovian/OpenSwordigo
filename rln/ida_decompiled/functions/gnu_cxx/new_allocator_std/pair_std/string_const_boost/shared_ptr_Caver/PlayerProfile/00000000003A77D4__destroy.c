/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A77D4
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>*)
 *
 * Callers: 1
 *   0x00000000001FC080  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x00000000003A77E4 string=0x00000000003A77E8 "U"
 *   insn=0x00000000003A77F4 string=0x00000000003A77F8 "t\n@"
 *   insn=0x00000000003A77F8 string=0x00000000003A77FC "4"
 *   insn=0x00000000003A77FC string=0x00000000003A7840 "h"
 *   insn=0x00000000003A7800 string=0x00000000003A7804 ""
 *   insn=0x00000000003A7810 string=0x00000000003A7814 "\t@"
 *   insn=0x00000000003A7820 string=0x00000000003A7824 ""
 *   insn=0x00000000003A7830 string=0x00000000003A7834 "@"
 *   insn=0x00000000003A7844 string=0x00000000003A7848 ")"
 *   insn=0x00000000003A7850 string=0x00000000003A7854 "A"
 *   insn=0x00000000003A787C string=0x00000000003A7880 ")=G"
 *   insn=0x00000000003A7880 string=0x00000000003A7884 "!"
 *   insn=0x00000000003A7888 string=0x00000000003A788C "\t"
 *   insn=0x00000000003A7888 string=0x00000000003A78A0 "\t"
 *   insn=0x00000000003A788C string=0x00000000003A7890 "*"
 *   insn=0x00000000003A7890 string=0x00000000003A7894 "\n"
 *   insn=0x00000000003A789C string=0x00000000003A78AC "?"
 *   insn=0x00000000003A78A0 string=0x00000000003A78A4 "*"
 *   insn=0x00000000003A78A4 string=0x00000000003A78A8 "\n"
 *   insn=0x00000000003A78AC string=0x00000000003A78B0 "L"
 *   insn=0x00000000003A78C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A78C8 string=0x00000000003A78CC "J"
 *   insn=0x00000000003A78D0 string=0x00000000003A78D4 "(a"
 *   insn=0x00000000003A78E0 string=0x00000000003A78E4 "J=G"
 *   insn=0x00000000003A78E4 string=0x00000000003A78E8 ")!"
 *   insn=0x00000000003A78EC string=0x00000000003A78F0 "*"
 *   insn=0x00000000003A78EC string=0x00000000003A791C "*"
 *   insn=0x00000000003A78F0 string=0x00000000003A78F4 "K"
 *   insn=0x00000000003A78F4 string=0x00000000003A78F8 "+"
 *   insn=0x00000000003A78FC string=0x00000000003A7900 "_"
 *   insn=0x00000000003A791C string=0x00000000003A7920 "K"
 *   insn=0x00000000003A7920 string=0x00000000003A7924 "+"
 *   insn=0x00000000003A7924 string=0x00000000003A7928 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(
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

