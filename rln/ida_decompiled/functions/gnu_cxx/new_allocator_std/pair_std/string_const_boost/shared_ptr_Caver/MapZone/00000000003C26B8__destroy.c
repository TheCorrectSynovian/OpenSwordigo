/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C26B8
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>*)
 *
 * Callers: 1
 *   0x00000000001F6340  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000003C26C8 string=0x00000000003C26CC "U"
 *   insn=0x00000000003C26D8 string=0x00000000003C26DC "t\n@"
 *   insn=0x00000000003C26DC string=0x00000000003C26E0 "4"
 *   insn=0x00000000003C26E0 string=0x00000000003C2724 "h"
 *   insn=0x00000000003C26E4 string=0x00000000003C26E8 ""
 *   insn=0x00000000003C26F4 string=0x00000000003C26F8 "\t@"
 *   insn=0x00000000003C2704 string=0x00000000003C2708 ""
 *   insn=0x00000000003C2714 string=0x00000000003C2718 "@"
 *   insn=0x00000000003C2724 string=0x00000000003C2728 "\t"
 *   insn=0x00000000003C2728 string=0x00000000003C272C ")"
 *   insn=0x00000000003C2734 string=0x00000000003C2738 "A"
 *   insn=0x00000000003C2738 string=0x00000000003C2760 "\t"
 *   insn=0x00000000003C2760 string=0x00000000003C2764 ")=G"
 *   insn=0x00000000003C2764 string=0x00000000003C2768 "!"
 *   insn=0x00000000003C276C string=0x00000000003C2770 "\t"
 *   insn=0x00000000003C276C string=0x00000000003C2784 "\t"
 *   insn=0x00000000003C2770 string=0x00000000003C2774 "*"
 *   insn=0x00000000003C2774 string=0x00000000003C2778 "\n"
 *   insn=0x00000000003C2780 string=0x00000000003C2790 "?"
 *   insn=0x00000000003C2784 string=0x00000000003C2788 "*"
 *   insn=0x00000000003C2788 string=0x00000000003C278C "\n"
 *   insn=0x00000000003C2790 string=0x00000000003C2794 "L"
 *   insn=0x00000000003C27A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C27A8 string=0x00000000003C27AC "\n"
 *   insn=0x00000000003C27AC string=0x00000000003C27B0 "J"
 *   insn=0x00000000003C27B4 string=0x00000000003C27B8 "(a"
 *   insn=0x00000000003C27C0 string=0x00000000003C27C4 "\n"
 *   insn=0x00000000003C27C4 string=0x00000000003C27C8 "J=G"
 *   insn=0x00000000003C27C8 string=0x00000000003C27CC ")!"
 *   insn=0x00000000003C27D0 string=0x00000000003C27D4 "*"
 *   insn=0x00000000003C27D0 string=0x00000000003C2800 "*"
 *   insn=0x00000000003C27D4 string=0x00000000003C27D8 "K"
 *   insn=0x00000000003C27D8 string=0x00000000003C27DC "+"
 *   insn=0x00000000003C27E0 string=0x00000000003C27E4 "_"
 *   insn=0x00000000003C27F8 string=0x00000000003C27FC "2"
 *   insn=0x00000000003C2800 string=0x00000000003C2804 "K"
 *   insn=0x00000000003C2804 string=0x00000000003C2808 "+"
 *   insn=0x00000000003C2808 string=0x00000000003C280C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy(
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

