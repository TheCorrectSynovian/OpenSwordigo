/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048049C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>*)
 *
 * Callers: 1
 *   0x00000000001F8720  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x00000000004804AC string=0x00000000004804B0 "U"
 *   insn=0x00000000004804BC string=0x00000000004804C0 "t\n@"
 *   insn=0x00000000004804C0 string=0x00000000004804C4 "4"
 *   insn=0x00000000004804C4 string=0x0000000000480508 "h"
 *   insn=0x00000000004804C8 string=0x00000000004804CC ""
 *   insn=0x00000000004804D8 string=0x00000000004804DC "\t@"
 *   insn=0x00000000004804E8 string=0x00000000004804EC ""
 *   insn=0x00000000004804F8 string=0x00000000004804FC "@"
 *   insn=0x0000000000480508 string=0x000000000048050C ")"
 *   insn=0x000000000048050C string=0x0000000000480510 ")"
 *   insn=0x0000000000480518 string=0x000000000048051C "A"
 *   insn=0x000000000048051C string=0x0000000000480544 ")"
 *   insn=0x000000000048052C string=0x0000000000480588 "R"
 *   insn=0x0000000000480544 string=0x0000000000480548 ")=G"
 *   insn=0x0000000000480548 string=0x000000000048054C "!"
 *   insn=0x0000000000480550 string=0x0000000000480554 "\t"
 *   insn=0x0000000000480550 string=0x0000000000480568 "\t"
 *   insn=0x0000000000480554 string=0x0000000000480558 "*"
 *   insn=0x0000000000480558 string=0x000000000048055C "\n"
 *   insn=0x0000000000480564 string=0x0000000000480574 "?"
 *   insn=0x0000000000480568 string=0x000000000048056C "*"
 *   insn=0x000000000048056C string=0x0000000000480570 "\n"
 *   insn=0x0000000000480574 string=0x0000000000480578 "L"
 *   insn=0x0000000000480588 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048058C string=0x0000000000480590 "*"
 *   insn=0x0000000000480590 string=0x0000000000480594 "J"
 *   insn=0x0000000000480598 string=0x000000000048059C "(a"
 *   insn=0x00000000004805A4 string=0x00000000004805A8 "*"
 *   insn=0x00000000004805A8 string=0x00000000004805AC "J=G"
 *   insn=0x00000000004805AC string=0x00000000004805B0 ")!"
 *   insn=0x00000000004805B4 string=0x00000000004805B8 "*"
 *   insn=0x00000000004805B4 string=0x00000000004805E4 "*"
 *   insn=0x00000000004805B8 string=0x00000000004805BC "K"
 *   insn=0x00000000004805BC string=0x00000000004805C0 "+"
 *   insn=0x00000000004805C4 string=0x00000000004805C8 "_"
 *   insn=0x00000000004805D4 string=0x00000000004805D8 "s"
 *   insn=0x00000000004805E4 string=0x00000000004805E8 "K"
 *   insn=0x00000000004805E8 string=0x00000000004805EC "+"
 *   insn=0x00000000004805EC string=0x00000000004805F0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy(
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

