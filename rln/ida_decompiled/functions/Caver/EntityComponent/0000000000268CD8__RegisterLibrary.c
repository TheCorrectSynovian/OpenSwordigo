/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268CD8
 * Mangled: _ZN5Caver15EntityComponent15RegisterLibraryEv
 * Demangled: Caver::EntityComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000200BE0  Caver::EntityComponent::RegisterLibrary(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x0000000000268CE4 string=0x0000000000268CE8 "S"
 *   insn=0x0000000000268CE8 string=0x0000000000268CEC "h"
 *   insn=0x0000000000268CF0 string=0x0000000000268CF4 ""
 *   insn=0x0000000000268CFC string=0x000000000058548F "Entity"
 *   insn=0x0000000000268D1C string=0x0000000000268D20 "8;"
 *   insn=0x0000000000268D20 string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000268D28 string=0x0000000000268D2C ")"
 *   insn=0x0000000000268D34 string=0x0000000000268D38 "!"
 *   insn=0x0000000000268D38 string=0x0000000000268D3C "h"
 *   insn=0x0000000000268D48 string=0x0000000000268DA0 "L5"
 *   insn=0x0000000000268D5C string=0x0000000000268D60 ")=G"
 *   insn=0x0000000000268D60 string=0x0000000000268D64 "!"
 *   insn=0x0000000000268D68 string=0x0000000000268D6C "\t"
 *   insn=0x0000000000268D68 string=0x0000000000268D80 "\t"
 *   insn=0x0000000000268D6C string=0x0000000000268D70 "*"
 *   insn=0x0000000000268D70 string=0x0000000000268D74 "\n"
 *   insn=0x0000000000268D7C string=0x0000000000268D8C "?"
 *   insn=0x0000000000268D80 string=0x0000000000268D84 "*"
 *   insn=0x0000000000268D84 string=0x0000000000268D88 "\n"
 *   insn=0x0000000000268D8C string=0x0000000000268D90 "l"
 *   insn=0x0000000000268DA0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000268DA8 string=0x0000000000268DAC "J"
 *   insn=0x0000000000268DB0 string=0x0000000000268DB4 "(a"
 *   insn=0x0000000000268DC0 string=0x0000000000268DC4 "J=G"
 *   insn=0x0000000000268DC4 string=0x0000000000268DC8 ")!"
 *   insn=0x0000000000268DCC string=0x0000000000268DD0 "*"
 *   insn=0x0000000000268DCC string=0x0000000000268DFC "*"
 *   insn=0x0000000000268DD0 string=0x0000000000268DD4 "K"
 *   insn=0x0000000000268DD4 string=0x0000000000268DD8 "+"
 *   insn=0x0000000000268DDC string=0x0000000000268DE0 "_"
 *   insn=0x0000000000268DEC string=0x0000000000268DF0 "m"
 *   insn=0x0000000000268DFC string=0x0000000000268E00 "K"
 *   insn=0x0000000000268E00 string=0x0000000000268E04 "+"
 *   insn=0x0000000000268E04 string=0x0000000000268E08 "_"
 *   insn=0x0000000000268E30 string=0x0000000000268E34 "h"
 *   insn=0x0000000000268E34 string=0x0000000000268E38 ""
 *   insn=0x0000000000268E44 string=0x0000000000268E48 "@"
 *   insn=0x0000000000268E5C string=0x0000000000268E60 ""
 *   insn=0x0000000000268E60 string=0x0000000000268E64 "Q@"
 *   insn=0x0000000000268E74 string=0x0000000000268E78 "\n"
 *   insn=0x0000000000268E78 string=0x0000000000268E7C "I"
 *   insn=0x0000000000268E88 string=0x0000000000268E8C "a"
 *   insn=0x0000000000268E90 string=0x0000000000268E94 "h"
 *   insn=0x0000000000268E94 string=0x0000000000268E98 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityComponent::RegisterLibrary(Caver::EntityComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+58h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Entity");
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

