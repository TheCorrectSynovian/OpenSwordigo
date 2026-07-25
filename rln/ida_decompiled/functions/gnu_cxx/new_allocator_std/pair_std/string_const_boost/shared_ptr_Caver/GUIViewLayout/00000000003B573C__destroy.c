/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B573C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>*)
 *
 * Callers: 1
 *   0x00000000001F3C00  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x00000000003B574C string=0x00000000003B5750 "U"
 *   insn=0x00000000003B575C string=0x00000000003B5760 "t\n@"
 *   insn=0x00000000003B5760 string=0x00000000003B5764 "4"
 *   insn=0x00000000003B5764 string=0x00000000003B57A8 "h"
 *   insn=0x00000000003B5768 string=0x00000000003B576C ""
 *   insn=0x00000000003B5778 string=0x00000000003B577C "\t@"
 *   insn=0x00000000003B5788 string=0x00000000003B578C ""
 *   insn=0x00000000003B5798 string=0x00000000003B579C "@"
 *   insn=0x00000000003B57AC string=0x00000000003B57B0 ")"
 *   insn=0x00000000003B57B8 string=0x00000000003B57BC "A"
 *   insn=0x00000000003B57BC string=0x00000000003B57E4 "i"
 *   insn=0x00000000003B57E4 string=0x00000000003B57E8 ")=G"
 *   insn=0x00000000003B57E8 string=0x00000000003B57EC "!"
 *   insn=0x00000000003B57F0 string=0x00000000003B57F4 "\t"
 *   insn=0x00000000003B57F0 string=0x00000000003B5808 "\t"
 *   insn=0x00000000003B57F4 string=0x00000000003B57F8 "*"
 *   insn=0x00000000003B57F8 string=0x00000000003B57FC "\n"
 *   insn=0x00000000003B5804 string=0x00000000003B5814 "?"
 *   insn=0x00000000003B5808 string=0x00000000003B580C "*"
 *   insn=0x00000000003B580C string=0x00000000003B5810 "\n"
 *   insn=0x00000000003B5814 string=0x00000000003B5818 "L"
 *   insn=0x00000000003B5828 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B5830 string=0x00000000003B5834 "J"
 *   insn=0x00000000003B5838 string=0x00000000003B583C "(a"
 *   insn=0x00000000003B5844 string=0x00000000003B5848 "j"
 *   insn=0x00000000003B5848 string=0x00000000003B584C "J=G"
 *   insn=0x00000000003B584C string=0x00000000003B5850 ")!"
 *   insn=0x00000000003B5854 string=0x00000000003B5858 "*"
 *   insn=0x00000000003B5854 string=0x00000000003B5884 "*"
 *   insn=0x00000000003B5858 string=0x00000000003B585C "K"
 *   insn=0x00000000003B585C string=0x00000000003B5860 "+"
 *   insn=0x00000000003B5864 string=0x00000000003B5868 "_"
 *   insn=0x00000000003B5884 string=0x00000000003B5888 "K"
 *   insn=0x00000000003B5888 string=0x00000000003B588C "+"
 *   insn=0x00000000003B588C string=0x00000000003B5890 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy(
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

