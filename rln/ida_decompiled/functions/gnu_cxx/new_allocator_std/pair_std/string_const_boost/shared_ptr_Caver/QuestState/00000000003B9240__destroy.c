/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9240
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>*)
 *
 * Callers: 1
 *   0x0000000000200910  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 40
 *   insn=0x00000000003B9250 string=0x00000000003B9254 "U"
 *   insn=0x00000000003B9260 string=0x00000000003B9264 "t\n@"
 *   insn=0x00000000003B9264 string=0x00000000003B9268 "4"
 *   insn=0x00000000003B9268 string=0x00000000003B92AC "h"
 *   insn=0x00000000003B926C string=0x00000000003B9270 ""
 *   insn=0x00000000003B927C string=0x00000000003B9280 "\t@"
 *   insn=0x00000000003B928C string=0x00000000003B9290 ""
 *   insn=0x00000000003B929C string=0x00000000003B92A0 "@"
 *   insn=0x00000000003B92AC string=0x00000000003B92B0 "i"
 *   insn=0x00000000003B92B0 string=0x00000000003B92B4 ")"
 *   insn=0x00000000003B92BC string=0x00000000003B92C0 "A"
 *   insn=0x00000000003B92C0 string=0x00000000003B92E8 "I"
 *   insn=0x00000000003B92E8 string=0x00000000003B92EC ")=G"
 *   insn=0x00000000003B92EC string=0x00000000003B92F0 "!"
 *   insn=0x00000000003B92F4 string=0x00000000003B92F8 "\t"
 *   insn=0x00000000003B92F4 string=0x00000000003B930C "\t"
 *   insn=0x00000000003B92F8 string=0x00000000003B92FC "*"
 *   insn=0x00000000003B92FC string=0x00000000003B9300 "\n"
 *   insn=0x00000000003B9308 string=0x00000000003B9318 "?"
 *   insn=0x00000000003B930C string=0x00000000003B9310 "*"
 *   insn=0x00000000003B9310 string=0x00000000003B9314 "\n"
 *   insn=0x00000000003B9318 string=0x00000000003B931C "L"
 *   insn=0x00000000003B9320 string=0x00000000003B9324 " "
 *   insn=0x00000000003B932C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B9330 string=0x00000000003B9334 "j"
 *   insn=0x00000000003B9334 string=0x00000000003B9338 "J"
 *   insn=0x00000000003B933C string=0x00000000003B9340 "(a"
 *   insn=0x00000000003B9348 string=0x00000000003B934C "J"
 *   insn=0x00000000003B934C string=0x00000000003B9350 "J=G"
 *   insn=0x00000000003B9350 string=0x00000000003B9354 ")!"
 *   insn=0x00000000003B9358 string=0x00000000003B935C "*"
 *   insn=0x00000000003B9358 string=0x00000000003B9388 "*"
 *   insn=0x00000000003B935C string=0x00000000003B9360 "K"
 *   insn=0x00000000003B9360 string=0x00000000003B9364 "+"
 *   insn=0x00000000003B9368 string=0x00000000003B936C "_"
 *   insn=0x00000000003B9378 string=0x00000000003B937C "\n"
 *   insn=0x00000000003B9380 string=0x00000000003B9384 "P!"
 *   insn=0x00000000003B9388 string=0x00000000003B938C "K"
 *   insn=0x00000000003B938C string=0x00000000003B9390 "+"
 *   insn=0x00000000003B9390 string=0x00000000003B9394 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy(
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

