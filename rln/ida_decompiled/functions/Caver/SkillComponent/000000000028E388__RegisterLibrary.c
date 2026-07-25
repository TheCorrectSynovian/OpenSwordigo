/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E388
 * Mangled: _ZN5Caver14SkillComponent15RegisterLibraryEv
 * Demangled: Caver::SkillComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FB4F0  Caver::SkillComponent::RegisterLibrary(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x000000000028E394 string=0x000000000028E398 "S"
 *   insn=0x000000000028E398 string=0x000000000028E39C "h"
 *   insn=0x000000000028E3A0 string=0x000000000028E3A4 ""
 *   insn=0x000000000028E3AC string=0x000000000058AC24 "Skill"
 *   insn=0x000000000028E3D0 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000028E3D8 string=0x000000000028E3DC ")"
 *   insn=0x000000000028E3E4 string=0x000000000028E3E8 "!"
 *   insn=0x000000000028E3E8 string=0x000000000028E3EC "h"
 *   insn=0x000000000028E40C string=0x000000000028E410 ")=G"
 *   insn=0x000000000028E410 string=0x000000000028E414 "!"
 *   insn=0x000000000028E418 string=0x000000000028E41C "\t"
 *   insn=0x000000000028E418 string=0x000000000028E430 "\t"
 *   insn=0x000000000028E41C string=0x000000000028E420 "*"
 *   insn=0x000000000028E420 string=0x000000000028E424 "\n"
 *   insn=0x000000000028E42C string=0x000000000028E43C "?"
 *   insn=0x000000000028E430 string=0x000000000028E434 "*"
 *   insn=0x000000000028E434 string=0x000000000028E438 "\n"
 *   insn=0x000000000028E43C string=0x000000000028E440 "l"
 *   insn=0x000000000028E450 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028E458 string=0x000000000028E45C "J"
 *   insn=0x000000000028E460 string=0x000000000028E464 "(a"
 *   insn=0x000000000028E470 string=0x000000000028E474 "J=G"
 *   insn=0x000000000028E474 string=0x000000000028E478 ")!"
 *   insn=0x000000000028E47C string=0x000000000028E480 "*"
 *   insn=0x000000000028E47C string=0x000000000028E4AC "*"
 *   insn=0x000000000028E480 string=0x000000000028E484 "K"
 *   insn=0x000000000028E484 string=0x000000000028E488 "+"
 *   insn=0x000000000028E48C string=0x000000000028E490 "_"
 *   insn=0x000000000028E4A4 string=0x000000000028E4A8 ""
 *   insn=0x000000000028E4AC string=0x000000000028E4B0 "K"
 *   insn=0x000000000028E4B0 string=0x000000000028E4B4 "+"
 *   insn=0x000000000028E4B4 string=0x000000000028E4B8 "_"
 *   insn=0x000000000028E4C4 string=0x000000000028E4C8 ")"
 *   insn=0x000000000028E4D0 string=0x000000000028E4D4 "*\t@"
 *   insn=0x000000000028E4D4 string=0x000000000028E4D8 "J"
 *   insn=0x000000000028E4D8 string=0x000000000028E4DC "*\t"
 *   insn=0x000000000028E4E0 string=0x000000000028E4E4 "\tU"
 *   insn=0x000000000028E4E8 string=0x000000000028E4EC "@"
 *   insn=0x000000000028E4EC string=0x000000000028E4F0 ""
 *   insn=0x000000000028E4F0 string=0x000000000028E4F4 ""
 *   insn=0x000000000028E4F4 string=0x000000000028E4F8 "@"
 *   insn=0x000000000028E4F8 string=0x000000000028E500 ""
 *   insn=0x000000000028E504 string=0x000000000028E508 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::RegisterLibrary(Caver::SkillComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Skill");
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

