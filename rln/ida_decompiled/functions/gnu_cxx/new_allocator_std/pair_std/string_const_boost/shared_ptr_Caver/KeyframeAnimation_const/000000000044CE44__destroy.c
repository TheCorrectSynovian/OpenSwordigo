/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044CE44
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEEEE7destroyEPS9_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>*)
 *
 * Callers: 1
 *   0x00000000001FC8D0  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x000000000044CE54 string=0x000000000044CE58 "U"
 *   insn=0x000000000044CE64 string=0x000000000044CE68 "t\n@"
 *   insn=0x000000000044CE68 string=0x000000000044CE6C "4"
 *   insn=0x000000000044CE6C string=0x000000000044CEB0 "h"
 *   insn=0x000000000044CE70 string=0x000000000044CE74 ""
 *   insn=0x000000000044CE80 string=0x000000000044CE84 "\t@"
 *   insn=0x000000000044CE90 string=0x000000000044CE94 ""
 *   insn=0x000000000044CEA0 string=0x000000000044CEA4 "@"
 *   insn=0x000000000044CEB4 string=0x000000000044CEB8 ")"
 *   insn=0x000000000044CEC0 string=0x000000000044CEC4 "A"
 *   insn=0x000000000044CEEC string=0x000000000044CEF0 ")=G"
 *   insn=0x000000000044CEF0 string=0x000000000044CEF4 "!"
 *   insn=0x000000000044CEF8 string=0x000000000044CEFC "\t"
 *   insn=0x000000000044CEF8 string=0x000000000044CF10 "\t"
 *   insn=0x000000000044CEFC string=0x000000000044CF00 "*"
 *   insn=0x000000000044CF00 string=0x000000000044CF04 "\n"
 *   insn=0x000000000044CF0C string=0x000000000044CF1C "?"
 *   insn=0x000000000044CF10 string=0x000000000044CF14 "*"
 *   insn=0x000000000044CF14 string=0x000000000044CF18 "\n"
 *   insn=0x000000000044CF1C string=0x000000000044CF20 "L"
 *   insn=0x000000000044CF30 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044CF38 string=0x000000000044CF3C "J"
 *   insn=0x000000000044CF40 string=0x000000000044CF44 "(a"
 *   insn=0x000000000044CF50 string=0x000000000044CF54 "J=G"
 *   insn=0x000000000044CF54 string=0x000000000044CF58 ")!"
 *   insn=0x000000000044CF5C string=0x000000000044CF60 "*"
 *   insn=0x000000000044CF5C string=0x000000000044CF8C "*"
 *   insn=0x000000000044CF60 string=0x000000000044CF64 "K"
 *   insn=0x000000000044CF64 string=0x000000000044CF68 "+"
 *   insn=0x000000000044CF6C string=0x000000000044CF70 "_"
 *   insn=0x000000000044CF7C string=0x000000000044CF80 "\tu"
 *   insn=0x000000000044CF84 string=0x000000000044CF88 "O"
 *   insn=0x000000000044CF8C string=0x000000000044CF90 "K"
 *   insn=0x000000000044CF90 string=0x000000000044CF94 "+"
 *   insn=0x000000000044CF94 string=0x000000000044CF98 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>::destroy(
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

