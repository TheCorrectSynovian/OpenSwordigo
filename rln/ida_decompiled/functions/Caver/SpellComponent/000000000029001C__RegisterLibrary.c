/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029001C
 * Mangled: _ZN5Caver14SpellComponent15RegisterLibraryEv
 * Demangled: Caver::SpellComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001F7FB0  Caver::SpellComponent::RegisterLibrary(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x0000000000290028 string=0x000000000029002C "S"
 *   insn=0x000000000029002C string=0x0000000000290030 "h"
 *   insn=0x0000000000290034 string=0x0000000000290038 ""
 *   insn=0x0000000000290040 string=0x0000000000585776 "Spell"
 *   insn=0x0000000000290060 string=0x0000000000290064 "g"
 *   insn=0x0000000000290064 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000029006C string=0x0000000000290070 ")"
 *   insn=0x0000000000290078 string=0x000000000029007C "!"
 *   insn=0x000000000029007C string=0x0000000000290080 "h"
 *   insn=0x000000000029008C string=0x00000000002900E4 "{"
 *   insn=0x00000000002900A0 string=0x00000000002900A4 ")=G"
 *   insn=0x00000000002900A4 string=0x00000000002900A8 "!"
 *   insn=0x00000000002900AC string=0x00000000002900B0 "\t"
 *   insn=0x00000000002900AC string=0x00000000002900C4 "\t"
 *   insn=0x00000000002900B0 string=0x00000000002900B4 "*"
 *   insn=0x00000000002900B4 string=0x00000000002900B8 "\n"
 *   insn=0x00000000002900C0 string=0x00000000002900D0 "?"
 *   insn=0x00000000002900C4 string=0x00000000002900C8 "*"
 *   insn=0x00000000002900C8 string=0x00000000002900CC "\n"
 *   insn=0x00000000002900D0 string=0x00000000002900D4 "l"
 *   insn=0x00000000002900E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002900EC string=0x00000000002900F0 "J"
 *   insn=0x00000000002900F4 string=0x00000000002900F8 "(a"
 *   insn=0x0000000000290104 string=0x0000000000290108 "J=G"
 *   insn=0x0000000000290108 string=0x000000000029010C ")!"
 *   insn=0x0000000000290110 string=0x0000000000290114 "*"
 *   insn=0x0000000000290110 string=0x0000000000290140 "*"
 *   insn=0x0000000000290114 string=0x0000000000290118 "K"
 *   insn=0x0000000000290118 string=0x000000000029011C "+"
 *   insn=0x0000000000290120 string=0x0000000000290124 "_"
 *   insn=0x0000000000290140 string=0x0000000000290144 "K"
 *   insn=0x0000000000290144 string=0x0000000000290148 "+"
 *   insn=0x0000000000290148 string=0x000000000029014C "_"
 *   insn=0x0000000000290158 string=0x000000000029015C ")"
 *   insn=0x0000000000290164 string=0x0000000000290168 "*\t@"
 *   insn=0x0000000000290168 string=0x000000000029016C "J"
 *   insn=0x000000000029016C string=0x0000000000290170 "*\t"
 *   insn=0x0000000000290174 string=0x0000000000290178 "\t9"
 *   insn=0x000000000029017C string=0x0000000000290180 "@"
 *   insn=0x0000000000290180 string=0x0000000000290184 ""
 *   insn=0x0000000000290184 string=0x0000000000290188 ""
 *   insn=0x0000000000290188 string=0x000000000029018C "@"
 *   insn=0x000000000029018C string=0x0000000000290194 ""
 *   insn=0x0000000000290198 string=0x000000000029019C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpellComponent::RegisterLibrary(Caver::SpellComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Spell");
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

