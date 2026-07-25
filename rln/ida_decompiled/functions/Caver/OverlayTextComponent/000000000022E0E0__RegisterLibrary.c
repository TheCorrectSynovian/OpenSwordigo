/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E0E0
 * Mangled: _ZN5Caver20OverlayTextComponent15RegisterLibraryEv
 * Demangled: Caver::OverlayTextComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001F7EA0  Caver::OverlayTextComponent::RegisterLibrary(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x000000000022E0EC string=0x000000000022E0F0 "S"
 *   insn=0x000000000022E0F0 string=0x000000000022E0F4 "h"
 *   insn=0x000000000022E0F8 string=0x000000000022E0FC ""
 *   insn=0x000000000022E104 string=0x00000000005843FF "OverlayText"
 *   insn=0x000000000022E118 string=0x000000000022E11C "b$"
 *   insn=0x000000000022E124 string=0x000000000022E128 "6&"
 *   insn=0x000000000022E128 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000022E130 string=0x000000000022E134 ")"
 *   insn=0x000000000022E13C string=0x000000000022E140 "!"
 *   insn=0x000000000022E140 string=0x000000000022E144 "h"
 *   insn=0x000000000022E150 string=0x000000000022E1A8 "J "
 *   insn=0x000000000022E164 string=0x000000000022E168 ")=G"
 *   insn=0x000000000022E168 string=0x000000000022E16C "!"
 *   insn=0x000000000022E170 string=0x000000000022E174 "\t"
 *   insn=0x000000000022E170 string=0x000000000022E188 "\t"
 *   insn=0x000000000022E174 string=0x000000000022E178 "*"
 *   insn=0x000000000022E178 string=0x000000000022E17C "\n"
 *   insn=0x000000000022E184 string=0x000000000022E194 "?"
 *   insn=0x000000000022E188 string=0x000000000022E18C "*"
 *   insn=0x000000000022E18C string=0x000000000022E190 "\n"
 *   insn=0x000000000022E194 string=0x000000000022E198 "l"
 *   insn=0x000000000022E1A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022E1B0 string=0x000000000022E1B4 "J"
 *   insn=0x000000000022E1B8 string=0x000000000022E1BC "(a"
 *   insn=0x000000000022E1C8 string=0x000000000022E1CC "J=G"
 *   insn=0x000000000022E1CC string=0x000000000022E1D0 ")!"
 *   insn=0x000000000022E1D4 string=0x000000000022E1D8 "*"
 *   insn=0x000000000022E1D4 string=0x000000000022E204 "*"
 *   insn=0x000000000022E1D8 string=0x000000000022E1DC "K"
 *   insn=0x000000000022E1DC string=0x000000000022E1E0 "+"
 *   insn=0x000000000022E1E4 string=0x000000000022E1E8 "_"
 *   insn=0x000000000022E1F4 string=0x000000000022E1F8 "k"
 *   insn=0x000000000022E204 string=0x000000000022E208 "K"
 *   insn=0x000000000022E208 string=0x000000000022E20C "+"
 *   insn=0x000000000022E20C string=0x000000000022E210 "_"
 *   insn=0x000000000022E224 string=0x000000000022E228 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::RegisterLibrary(Caver::OverlayTextComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "OverlayText");
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

