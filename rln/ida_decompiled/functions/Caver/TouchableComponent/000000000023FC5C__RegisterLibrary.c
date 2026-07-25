/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023FC5C
 * Mangled: _ZN5Caver18TouchableComponent15RegisterLibraryEv
 * Demangled: Caver::TouchableComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FDFC0  Caver::TouchableComponent::RegisterLibrary(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FF770  Caver::TouchableComponent::Trigger(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x000000000023FC68 string=0x000000000023FC6C "S"
 *   insn=0x000000000023FC6C string=0x000000000023FC70 "h"
 *   insn=0x000000000023FC74 string=0x000000000023FC78 ""
 *   insn=0x000000000023FC7C string=0x000000000023FC80 "!"
 *   insn=0x000000000023FC80 string=0x0000000000584AB5 "Touchable"
 *   insn=0x000000000023FCA0 string=0x000000000023FCA4 "W"
 *   insn=0x000000000023FCA4 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000023FCA8 string=0x000000000023FCAC ")%"
 *   insn=0x000000000023FCAC string=0x000000000023FCB0 ")"
 *   insn=0x000000000023FCB8 string=0x000000000023FCBC "!"
 *   insn=0x000000000023FCBC string=0x000000000023FCC0 "h"
 *   insn=0x000000000023FCBC string=0x000000000023FCE0 ")%"
 *   insn=0x000000000023FCCC string=0x000000000023FD24 "k"
 *   insn=0x000000000023FCE0 string=0x000000000023FCE4 ")=G"
 *   insn=0x000000000023FCE4 string=0x000000000023FCE8 "!"
 *   insn=0x000000000023FCEC string=0x000000000023FCF0 "\t"
 *   insn=0x000000000023FCEC string=0x000000000023FD04 "\t"
 *   insn=0x000000000023FCF0 string=0x000000000023FCF4 "*"
 *   insn=0x000000000023FCF4 string=0x000000000023FCF8 "\n"
 *   insn=0x000000000023FD00 string=0x000000000023FD10 "?"
 *   insn=0x000000000023FD04 string=0x000000000023FD08 "*"
 *   insn=0x000000000023FD08 string=0x000000000023FD0C "\n"
 *   insn=0x000000000023FD10 string=0x000000000023FD14 "l"
 *   insn=0x000000000023FD24 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023FD28 string=0x000000000023FD2C "*%"
 *   insn=0x000000000023FD2C string=0x000000000023FD30 "J"
 *   insn=0x000000000023FD34 string=0x000000000023FD38 "(a"
 *   insn=0x000000000023FD40 string=0x000000000023FD44 "*%"
 *   insn=0x000000000023FD44 string=0x000000000023FD48 "J=G"
 *   insn=0x000000000023FD48 string=0x000000000023FD4C ")!"
 *   insn=0x000000000023FD50 string=0x000000000023FD54 "*"
 *   insn=0x000000000023FD50 string=0x000000000023FD80 "*"
 *   insn=0x000000000023FD54 string=0x000000000023FD58 "K"
 *   insn=0x000000000023FD58 string=0x000000000023FD5C "+"
 *   insn=0x000000000023FD60 string=0x000000000023FD64 "_"
 *   insn=0x000000000023FD80 string=0x000000000023FD84 "K"
 *   insn=0x000000000023FD84 string=0x000000000023FD88 "+"
 *   insn=0x000000000023FD88 string=0x000000000023FD8C "_"
 *   insn=0x000000000023FD98 string=0x000000000023FD9C "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::RegisterLibrary(Caver::TouchableComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Touchable");
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

