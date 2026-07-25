/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037F1B4
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver11AchievementEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>*)
 *
 * Callers: 1
 *   0x00000000001F5570  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 40
 *   insn=0x000000000037F1C4 string=0x000000000037F1C8 "U"
 *   insn=0x000000000037F1D4 string=0x000000000037F1D8 "t\n@"
 *   insn=0x000000000037F1D8 string=0x000000000037F1DC "4"
 *   insn=0x000000000037F1DC string=0x000000000037F220 "h"
 *   insn=0x000000000037F1E0 string=0x000000000037F1E4 ""
 *   insn=0x000000000037F1F0 string=0x000000000037F1F4 "\t@"
 *   insn=0x000000000037F200 string=0x000000000037F204 ""
 *   insn=0x000000000037F210 string=0x000000000037F214 "@"
 *   insn=0x000000000037F220 string=0x000000000037F224 ")"
 *   insn=0x000000000037F224 string=0x000000000037F228 ")"
 *   insn=0x000000000037F230 string=0x000000000037F234 "A"
 *   insn=0x000000000037F234 string=0x000000000037F25C ")"
 *   insn=0x000000000037F25C string=0x000000000037F260 ")=G"
 *   insn=0x000000000037F260 string=0x000000000037F264 "!"
 *   insn=0x000000000037F268 string=0x000000000037F26C "\t"
 *   insn=0x000000000037F268 string=0x000000000037F280 "\t"
 *   insn=0x000000000037F26C string=0x000000000037F270 "*"
 *   insn=0x000000000037F270 string=0x000000000037F274 "\n"
 *   insn=0x000000000037F27C string=0x000000000037F28C "?"
 *   insn=0x000000000037F280 string=0x000000000037F284 "*"
 *   insn=0x000000000037F284 string=0x000000000037F288 "\n"
 *   insn=0x000000000037F28C string=0x000000000037F290 "L"
 *   insn=0x000000000037F294 string=0x000000000037F298 "C"
 *   insn=0x000000000037F2A0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037F2A4 string=0x000000000037F2A8 "*"
 *   insn=0x000000000037F2A8 string=0x000000000037F2AC "J"
 *   insn=0x000000000037F2B0 string=0x000000000037F2B4 "(a"
 *   insn=0x000000000037F2BC string=0x000000000037F2C0 "*"
 *   insn=0x000000000037F2C0 string=0x000000000037F2C4 "J=G"
 *   insn=0x000000000037F2C4 string=0x000000000037F2C8 ")!"
 *   insn=0x000000000037F2CC string=0x000000000037F2D0 "*"
 *   insn=0x000000000037F2CC string=0x000000000037F2FC "*"
 *   insn=0x000000000037F2D0 string=0x000000000037F2D4 "K"
 *   insn=0x000000000037F2D4 string=0x000000000037F2D8 "+"
 *   insn=0x000000000037F2DC string=0x000000000037F2E0 "_"
 *   insn=0x000000000037F2EC string=0x000000000037F2F0 "-"
 *   insn=0x000000000037F2F4 string=0x000000000037F2F8 "s\t"
 *   insn=0x000000000037F2FC string=0x000000000037F300 "K"
 *   insn=0x000000000037F300 string=0x000000000037F304 "+"
 *   insn=0x000000000037F304 string=0x000000000037F308 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>::destroy(
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

