/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000262EE4
 * Mangled: _ZN5Caver24CollectableItemComponent15RegisterLibraryEv
 * Demangled: Caver::CollectableItemComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FB270  Caver::CollectableItemComponent::RegisterLibrary(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x0000000000262EF0 string=0x0000000000262EF4 "S"
 *   insn=0x0000000000262EF4 string=0x0000000000262EF8 "h"
 *   insn=0x0000000000262EFC string=0x0000000000262F00 ""
 *   insn=0x0000000000262F08 string=0x0000000000585732 "CollectableItem"
 *   insn=0x0000000000262F14 string=0x0000000000262F18 "("
 *   insn=0x0000000000262F2C string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000262F30 string=0x0000000000262F34 "\t$"
 *   insn=0x0000000000262F34 string=0x0000000000262F38 ")"
 *   insn=0x0000000000262F40 string=0x0000000000262F44 "!"
 *   insn=0x0000000000262F44 string=0x0000000000262F48 "h"
 *   insn=0x0000000000262F44 string=0x0000000000262F68 "\t$"
 *   insn=0x0000000000262F68 string=0x0000000000262F6C ")=G"
 *   insn=0x0000000000262F6C string=0x0000000000262F70 "!"
 *   insn=0x0000000000262F74 string=0x0000000000262F78 "\t"
 *   insn=0x0000000000262F74 string=0x0000000000262F8C "\t"
 *   insn=0x0000000000262F78 string=0x0000000000262F7C "*"
 *   insn=0x0000000000262F7C string=0x0000000000262F80 "\n"
 *   insn=0x0000000000262F88 string=0x0000000000262F98 "?"
 *   insn=0x0000000000262F8C string=0x0000000000262F90 "*"
 *   insn=0x0000000000262F90 string=0x0000000000262F94 "\n"
 *   insn=0x0000000000262F98 string=0x0000000000262F9C "l"
 *   insn=0x0000000000262FAC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000262FB0 string=0x0000000000262FB4 "\n$"
 *   insn=0x0000000000262FB4 string=0x0000000000262FB8 "J"
 *   insn=0x0000000000262FBC string=0x0000000000262FC0 "(a"
 *   insn=0x0000000000262FC8 string=0x0000000000262FCC "\n$"
 *   insn=0x0000000000262FCC string=0x0000000000262FD0 "J=G"
 *   insn=0x0000000000262FD0 string=0x0000000000262FD4 ")!"
 *   insn=0x0000000000262FD8 string=0x0000000000262FDC "*"
 *   insn=0x0000000000262FD8 string=0x0000000000263008 "*"
 *   insn=0x0000000000262FDC string=0x0000000000262FE0 "K"
 *   insn=0x0000000000262FE0 string=0x0000000000262FE4 "+"
 *   insn=0x0000000000262FE8 string=0x0000000000262FEC "_"
 *   insn=0x0000000000263000 string=0x0000000000263004 "0z"
 *   insn=0x0000000000263008 string=0x000000000026300C "K"
 *   insn=0x000000000026300C string=0x0000000000263010 "+"
 *   insn=0x0000000000263010 string=0x0000000000263014 "_"
 *   insn=0x0000000000263030 string=0x0000000000263034 "h"
 *   insn=0x0000000000263034 string=0x0000000000263038 ""
 *   insn=0x000000000026303C string=0x0000000000263040 ""
 *   insn=0x0000000000263040 string=0x0000000000263044 ""
 *   insn=0x0000000000263050 string=0x0000000000263054 "CQ"
 *   insn=0x0000000000263054 string=0x00000000001F7560 "0'"
 *   insn=0x0000000000263064 string=0x0000000000263068 "FP"
 *   insn=0x0000000000263068 string=0x00000000001F7180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollectableItemComponent::RegisterLibrary(Caver::CollectableItemComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+28h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "CollectableItem");
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

