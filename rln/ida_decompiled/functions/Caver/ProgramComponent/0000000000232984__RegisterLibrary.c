/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232984
 * Mangled: _ZN5Caver16ProgramComponent15RegisterLibraryEv
 * Demangled: Caver::ProgramComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001F5BE0  Caver::ProgramComponent::RegisterLibrary(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000002009F0  Caver::ProgramComponent::Execute(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x0000000000232990 string=0x0000000000232994 "S"
 *   insn=0x0000000000232994 string=0x0000000000232998 "h"
 *   insn=0x000000000023299C string=0x00000000002329A0 ""
 *   insn=0x00000000002329A8 string=0x000000000058A53F "Program"
 *   insn=0x00000000002329BC string=0x00000000002329C0 "B$"
 *   insn=0x00000000002329C8 string=0x00000000002329CC ""
 *   insn=0x00000000002329CC string=0x00000000001F7A00 "0'"
 *   insn=0x00000000002329D4 string=0x00000000002329D8 ")"
 *   insn=0x00000000002329E0 string=0x00000000002329E4 "!"
 *   insn=0x00000000002329E4 string=0x00000000002329E8 "h"
 *   insn=0x00000000002329F4 string=0x0000000000232A4C "!"
 *   insn=0x0000000000232A08 string=0x0000000000232A0C ")=G"
 *   insn=0x0000000000232A0C string=0x0000000000232A10 "!"
 *   insn=0x0000000000232A14 string=0x0000000000232A18 "\t"
 *   insn=0x0000000000232A14 string=0x0000000000232A2C "\t"
 *   insn=0x0000000000232A18 string=0x0000000000232A1C "*"
 *   insn=0x0000000000232A1C string=0x0000000000232A20 "\n"
 *   insn=0x0000000000232A28 string=0x0000000000232A38 "?"
 *   insn=0x0000000000232A2C string=0x0000000000232A30 "*"
 *   insn=0x0000000000232A30 string=0x0000000000232A34 "\n"
 *   insn=0x0000000000232A38 string=0x0000000000232A3C "l"
 *   insn=0x0000000000232A40 string=0x0000000000232A44 "X"
 *   insn=0x0000000000232A4C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000232A54 string=0x0000000000232A58 "J"
 *   insn=0x0000000000232A5C string=0x0000000000232A60 "(a"
 *   insn=0x0000000000232A6C string=0x0000000000232A70 "J=G"
 *   insn=0x0000000000232A70 string=0x0000000000232A74 ")!"
 *   insn=0x0000000000232A78 string=0x0000000000232A7C "*"
 *   insn=0x0000000000232A78 string=0x0000000000232AA8 "*"
 *   insn=0x0000000000232A7C string=0x0000000000232A80 "K"
 *   insn=0x0000000000232A80 string=0x0000000000232A84 "+"
 *   insn=0x0000000000232A88 string=0x0000000000232A8C "_"
 *   insn=0x0000000000232A98 string=0x0000000000232A9C "B"
 *   insn=0x0000000000232AA8 string=0x0000000000232AAC "K"
 *   insn=0x0000000000232AAC string=0x0000000000232AB0 "+"
 *   insn=0x0000000000232AB0 string=0x0000000000232AB4 "_"
 *   insn=0x0000000000232AC0 string=0x0000000000232AC4 "t@"
 *   insn=0x0000000000232AC8 string=0x0000000000232ACC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramComponent::RegisterLibrary(Caver::ProgramComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Program");
  Caver::ProgramState::RegisterLibrary();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v1);
  }
}

