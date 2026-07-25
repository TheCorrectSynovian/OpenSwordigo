/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4318
 * Mangled: _ZN5Caver27ElevatorControllerComponent15RegisterLibraryEv
 * Demangled: Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001F9220  Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 59
 *   insn=0x00000000002B4324 string=0x00000000002B4328 "S"
 *   insn=0x00000000002B4328 string=0x00000000002B432C "h"
 *   insn=0x00000000002B4330 string=0x00000000002B4334 ""
 *   insn=0x00000000002B433C string=0x00000000005854A5 "ElevatorController"
 *   insn=0x00000000002B4348 string=0x00000000002B434C ""
 *   insn=0x00000000002B4360 string=0x00000000001F7A00 "0'"
 *   insn=0x00000000002B4368 string=0x00000000002B436C ")"
 *   insn=0x00000000002B4374 string=0x00000000002B4378 "!"
 *   insn=0x00000000002B4378 string=0x00000000002B437C "h"
 *   insn=0x00000000002B439C string=0x00000000002B43A0 ")=G"
 *   insn=0x00000000002B43A0 string=0x00000000002B43A4 "!"
 *   insn=0x00000000002B43A8 string=0x00000000002B43AC "\t"
 *   insn=0x00000000002B43A8 string=0x00000000002B43C0 "\t"
 *   insn=0x00000000002B43AC string=0x00000000002B43B0 "*"
 *   insn=0x00000000002B43B0 string=0x00000000002B43B4 "\n"
 *   insn=0x00000000002B43BC string=0x00000000002B43CC "?"
 *   insn=0x00000000002B43C0 string=0x00000000002B43C4 "*"
 *   insn=0x00000000002B43C4 string=0x00000000002B43C8 "\n"
 *   insn=0x00000000002B43CC string=0x00000000002B43D0 "l"
 *   insn=0x00000000002B43E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B43E8 string=0x00000000002B43EC "J"
 *   insn=0x00000000002B43F0 string=0x00000000002B43F4 "(a"
 *   insn=0x00000000002B4400 string=0x00000000002B4404 "J=G"
 *   insn=0x00000000002B4404 string=0x00000000002B4408 ")!"
 *   insn=0x00000000002B440C string=0x00000000002B4410 "*"
 *   insn=0x00000000002B440C string=0x00000000002B443C "*"
 *   insn=0x00000000002B4410 string=0x00000000002B4414 "K"
 *   insn=0x00000000002B4414 string=0x00000000002B4418 "+"
 *   insn=0x00000000002B441C string=0x00000000002B4420 "_"
 *   insn=0x00000000002B4434 string=0x00000000002B4438 "#5"
 *   insn=0x00000000002B443C string=0x00000000002B4440 "K"
 *   insn=0x00000000002B4440 string=0x00000000002B4444 "+"
 *   insn=0x00000000002B4444 string=0x00000000002B4448 "_"
 *   insn=0x00000000002B4468 string=0x00000000002B446C "T"
 *   insn=0x00000000002B4478 string=0x00000000002B447C "i"
 *   insn=0x00000000002B4480 string=0x00000000002B4484 "h"
 *   insn=0x00000000002B4488 string=0x00000000002B448C "u"
 *   insn=0x00000000002B4488 string=0x00000000002B449C "u"
 *   insn=0x00000000002B448C string=0x00000000002B4490 "`"
 *   insn=0x00000000002B4494 string=0x00000000002B4498 "\n"
 *   insn=0x00000000002B4498 string=0x00000000002B44C0 "b"
 *   insn=0x00000000002B449C string=0x00000000002B44A0 "h"
 *   insn=0x00000000002B44A8 string=0x00000000002B44AC "i"
 *   insn=0x00000000002B44AC string=0x00000000002B44B0 "\nMG"
 *   insn=0x00000000002B44B0 string=0x00000000002B44B4 " "
 *   insn=0x00000000002B44B4 string=0x00000000002B44B8 "A"
 *   insn=0x00000000002B44B8 string=0x00000000002B44BC "j"
 *   insn=0x00000000002B44C4 string=0x00000000002B44C8 " (#"
 *   insn=0x00000000002B44C8 string=0x00000000002B44CC "b"
 *   insn=0x00000000002B44D4 string=0x00000000002B44D8 "h"
 *   insn=0x00000000002B44DC string=0x00000000002B44E0 "%8""
 *   insn=0x00000000002B44E0 string=0x00000000002B44E4 "f8 "
 *   insn=0x00000000002B44F4 string=0x00000000002B44F8 "D"
 *   insn=0x00000000002B44F8 string=0x00000000002B44FC "A8!"
 *   insn=0x00000000002B4508 string=0x00000000002B450C "A"
 *   insn=0x00000000002B450C string=0x00000000002B4510 "`"
 *   insn=0x00000000002B450C string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002B4514 string=0x00000000002B4518 " "
 *   insn=0x00000000002B452C string=0x00000000002B4544 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ElevatorControllerComponent::RegisterLibrary(Caver::ElevatorControllerComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+48h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "ElevatorController");
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

