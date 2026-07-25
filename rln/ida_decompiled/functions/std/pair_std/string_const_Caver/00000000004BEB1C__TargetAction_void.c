/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BEB1C
 * Mangled: _ZNSt4pairIKSsN5Caver12TargetActionIFvRS0_bS3_EEEED2Ev
 * Demangled: std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
 *
 * Callers: 1
 *   0x00000000001FB620  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x00000000004BEB28 string=0x00000000004BEB2C "T"
 *   insn=0x00000000004BEB38 string=0x00000000004BEB3C "h"
 *   insn=0x00000000004BEB3C string=0x00000000004BEB40 "H"
 *   insn=0x00000000004BEB40 string=0x00000000004BEB44 ""
 *   insn=0x00000000004BEB40 string=0x00000000004BEB68 "`\n@"
 *   insn=0x00000000004BEB44 string=0x00000000004BEB48 ""
 *   insn=0x00000000004BEB48 string=0x00000000004BEB4C ""
 *   insn=0x00000000004BEB50 string=0x00000000004BEB54 "`"
 *   insn=0x00000000004BEB6C string=0x00000000004BEB70 "@"
 *   insn=0x00000000004BEB6C string=0x00000000004BEB8C "h"
 *   insn=0x00000000004BEB70 string=0x00000000004BEB74 ""
 *   insn=0x00000000004BEB74 string=0x00000000004BEB78 ""
 *   insn=0x00000000004BEB7C string=0x00000000004BEB80 ""
 *   insn=0x00000000004BEB80 string=0x00000000004BEB84 "@"
 *   insn=0x00000000004BEB8C string=0x00000000004BEB90 ")"
 *   insn=0x00000000004BEB90 string=0x00000000004BEB94 ")"
 *   insn=0x00000000004BEB9C string=0x00000000004BEBA0 "!"
 *   insn=0x00000000004BEBA0 string=0x00000000004BEBC4 ")"
 *   insn=0x00000000004BEBC4 string=0x00000000004BEBC8 ")=G"
 *   insn=0x00000000004BEBC8 string=0x00000000004BEBCC "!"
 *   insn=0x00000000004BEBD0 string=0x00000000004BEBD4 "\t"
 *   insn=0x00000000004BEBD0 string=0x00000000004BEBE8 "\t"
 *   insn=0x00000000004BEBD4 string=0x00000000004BEBD8 "*"
 *   insn=0x00000000004BEBD8 string=0x00000000004BEBDC "\n"
 *   insn=0x00000000004BEBE4 string=0x00000000004BEBF4 "?"
 *   insn=0x00000000004BEBE8 string=0x00000000004BEBEC "*"
 *   insn=0x00000000004BEBEC string=0x00000000004BEBF0 "\n"
 *   insn=0x00000000004BEBF4 string=0x00000000004BEBF8 "l"
 *   insn=0x00000000004BEC08 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BEC14 string=0x00000000004BEC18 "\t\t@"
 *   insn=0x00000000004BEC14 string=0x00000000004BEC44 "h"
 *   insn=0x00000000004BEC18 string=0x00000000004BEC1C ")"
 *   insn=0x00000000004BEC1C string=0x00000000004BEC20 "\t\t"
 *   insn=0x00000000004BEC24 string=0x00000000004BEC28 "\t"
 *   insn=0x00000000004BEC28 string=0x00000000004BEC2C ")@"
 *   insn=0x00000000004BEC30 string=0x00000000004BEC34 " "
 *   insn=0x00000000004BEC44 string=0x00000000004BEC48 ")"
 *   insn=0x00000000004BEC48 string=0x00000000004BEC4C ")"
 *   insn=0x00000000004BEC58 string=0x00000000004BEC5C ")"
 *   insn=0x00000000004BEC5C string=0x00000000004BEC60 ")=G"
 *   insn=0x00000000004BEC60 string=0x00000000004BEC64 "!"
 *   insn=0x00000000004BEC64 string=0x00000000004BEC68 "i"
 *   insn=0x00000000004BEC68 string=0x00000000004BEC6C "\t"
 *   insn=0x00000000004BEC68 string=0x00000000004BEC94 "\t"
 *   insn=0x00000000004BEC6C string=0x00000000004BEC70 "*"
 *   insn=0x00000000004BEC70 string=0x00000000004BEC74 "\n"
 *   insn=0x00000000004BEC78 string=0x00000000004BEC7C "?"
 *   insn=0x00000000004BEC7C string=0x00000000004BEC80 "l"
 *   insn=0x00000000004BEC8C string=0x00000000004BEC90 ""
 *   insn=0x00000000004BEC94 string=0x00000000004BEC98 "*"
 *   insn=0x00000000004BEC98 string=0x00000000004BEC9C "\n"
 *   insn=0x00000000004BEC9C string=0x00000000004BECA0 "?"
 *   insn=0x00000000004BECA0 string=0x00000000004BECA4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair(
        _QWORD *a1)
{
  __int64 v2; // x8
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // x8
  _QWORD *v4; // x0
  __int64 v5; // x8
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = a1[3];
  if ( v2 )
  {
    if ( (v2 & 1) == 0 )
    {
      v3 = *(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(v2 & 0xFFFFFFFFFFFFFFFELL);
      if ( v3 )
        v3(a1 + 4, a1 + 4, 2);
    }
    a1[3] = 0;
  }
  v4 = (_QWORD *)a1[2];
  if ( v4 )
  {
    v5 = v4[2] - 1LL;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  }
  v6 = (__int64 *)(*a1 - 24LL);
  if ( v6 != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(*a1 - 8LL);
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

