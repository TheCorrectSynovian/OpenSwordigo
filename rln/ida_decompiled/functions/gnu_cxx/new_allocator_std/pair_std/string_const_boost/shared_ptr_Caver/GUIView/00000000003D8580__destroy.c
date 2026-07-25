/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8580
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>*)
 *
 * Callers: 1
 *   0x00000000001F70B0  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x00000000003D8590 string=0x00000000003D8594 "U"
 *   insn=0x00000000003D85A0 string=0x00000000003D85A4 "t\n@"
 *   insn=0x00000000003D85A4 string=0x00000000003D85A8 "4"
 *   insn=0x00000000003D85A8 string=0x00000000003D85EC "h"
 *   insn=0x00000000003D85AC string=0x00000000003D85B0 ""
 *   insn=0x00000000003D85BC string=0x00000000003D85C0 "\t@"
 *   insn=0x00000000003D85CC string=0x00000000003D85D0 ""
 *   insn=0x00000000003D85DC string=0x00000000003D85E0 "@"
 *   insn=0x00000000003D85EC string=0x00000000003D85F0 "i"
 *   insn=0x00000000003D85F0 string=0x00000000003D85F4 ")"
 *   insn=0x00000000003D85FC string=0x00000000003D8600 "A"
 *   insn=0x00000000003D8600 string=0x00000000003D8628 "i"
 *   insn=0x00000000003D8628 string=0x00000000003D862C ")=G"
 *   insn=0x00000000003D862C string=0x00000000003D8630 "!"
 *   insn=0x00000000003D8634 string=0x00000000003D8638 "\t"
 *   insn=0x00000000003D8634 string=0x00000000003D864C "\t"
 *   insn=0x00000000003D8638 string=0x00000000003D863C "*"
 *   insn=0x00000000003D863C string=0x00000000003D8640 "\n"
 *   insn=0x00000000003D8648 string=0x00000000003D8658 "?"
 *   insn=0x00000000003D864C string=0x00000000003D8650 "*"
 *   insn=0x00000000003D8650 string=0x00000000003D8654 "\n"
 *   insn=0x00000000003D8658 string=0x00000000003D865C "L"
 *   insn=0x00000000003D8660 string=0x00000000003D8664 "PG"
 *   insn=0x00000000003D866C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D8670 string=0x00000000003D8674 "j"
 *   insn=0x00000000003D8674 string=0x00000000003D8678 "J"
 *   insn=0x00000000003D867C string=0x00000000003D8680 "(a"
 *   insn=0x00000000003D8688 string=0x00000000003D868C "j"
 *   insn=0x00000000003D868C string=0x00000000003D8690 "J=G"
 *   insn=0x00000000003D8690 string=0x00000000003D8694 ")!"
 *   insn=0x00000000003D8698 string=0x00000000003D869C "*"
 *   insn=0x00000000003D8698 string=0x00000000003D86C8 "*"
 *   insn=0x00000000003D869C string=0x00000000003D86A0 "K"
 *   insn=0x00000000003D86A0 string=0x00000000003D86A4 "+"
 *   insn=0x00000000003D86A8 string=0x00000000003D86AC "_"
 *   insn=0x00000000003D86B8 string=0x00000000003D86BC ":G"
 *   insn=0x00000000003D86C8 string=0x00000000003D86CC "K"
 *   insn=0x00000000003D86CC string=0x00000000003D86D0 "+"
 *   insn=0x00000000003D86D0 string=0x00000000003D86D4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy(
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

