/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043369C
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver8GUILabelEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>*)
 *
 * Callers: 1
 *   0x0000000000203250  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x00000000004336AC string=0x00000000004336B0 "U"
 *   insn=0x00000000004336BC string=0x00000000004336C0 "t\n@"
 *   insn=0x00000000004336C0 string=0x00000000004336C4 "4"
 *   insn=0x00000000004336C4 string=0x0000000000433708 "h"
 *   insn=0x00000000004336C8 string=0x00000000004336CC ""
 *   insn=0x00000000004336D8 string=0x00000000004336DC "\t@"
 *   insn=0x00000000004336E8 string=0x00000000004336EC ""
 *   insn=0x00000000004336F8 string=0x00000000004336FC "@"
 *   insn=0x000000000043370C string=0x0000000000433710 ")"
 *   insn=0x0000000000433718 string=0x000000000043371C "A"
 *   insn=0x0000000000433744 string=0x0000000000433748 ")=G"
 *   insn=0x0000000000433748 string=0x000000000043374C "!"
 *   insn=0x0000000000433750 string=0x0000000000433754 "\t"
 *   insn=0x0000000000433750 string=0x0000000000433768 "\t"
 *   insn=0x0000000000433754 string=0x0000000000433758 "*"
 *   insn=0x0000000000433758 string=0x000000000043375C "\n"
 *   insn=0x0000000000433764 string=0x0000000000433774 "?"
 *   insn=0x0000000000433768 string=0x000000000043376C "*"
 *   insn=0x000000000043376C string=0x0000000000433770 "\n"
 *   insn=0x0000000000433774 string=0x0000000000433778 "L"
 *   insn=0x000000000043377C string=0x0000000000433780 "\t"
 *   insn=0x0000000000433788 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000433790 string=0x0000000000433794 "J"
 *   insn=0x0000000000433798 string=0x000000000043379C "(a"
 *   insn=0x00000000004337A8 string=0x00000000004337AC "J=G"
 *   insn=0x00000000004337AC string=0x00000000004337B0 ")!"
 *   insn=0x00000000004337B4 string=0x00000000004337B8 "*"
 *   insn=0x00000000004337B4 string=0x00000000004337E4 "*"
 *   insn=0x00000000004337B8 string=0x00000000004337BC "K"
 *   insn=0x00000000004337BC string=0x00000000004337C0 "+"
 *   insn=0x00000000004337C4 string=0x00000000004337C8 "_"
 *   insn=0x00000000004337DC string=0x00000000004337E0 "98"
 *   insn=0x00000000004337E4 string=0x00000000004337E8 "K"
 *   insn=0x00000000004337E8 string=0x00000000004337EC "+"
 *   insn=0x00000000004337EC string=0x00000000004337F0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy(
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

