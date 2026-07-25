/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F4C8
 * Mangled: _ZN5Caver22PhysicsObjectComponent15RegisterLibraryEv
 * Demangled: Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *
 * Callers: 2
 *   0x00000000001F8610  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *   0x000000000027F440  Caver::PhysicsObjectComponent::Prepare(void)
 *
 * Callees: 8
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FBEE0  Caver::PhysicsObjectState::Update(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 78
 *   insn=0x000000000027F4D4 string=0x000000000027F4D8 "S"
 *   insn=0x000000000027F4D8 string=0x000000000027F4DC "h"
 *   insn=0x000000000027F4E0 string=0x000000000027F4E4 ""
 *   insn=0x000000000027F4E8 string=0x000000000027F4EC "!"
 *   insn=0x000000000027F4EC string=0x0000000000585519 "PhysicsObject"
 *   insn=0x000000000027F50C string=0x000000000027F510 "<"
 *   insn=0x000000000027F510 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000027F514 string=0x000000000027F518 ")#"
 *   insn=0x000000000027F518 string=0x000000000027F51C ")"
 *   insn=0x000000000027F524 string=0x000000000027F528 "!"
 *   insn=0x000000000027F528 string=0x000000000027F52C "h"
 *   insn=0x000000000027F528 string=0x000000000027F54C ")#"
 *   insn=0x000000000027F538 string=0x000000000027F590 "P"
 *   insn=0x000000000027F54C string=0x000000000027F550 ")=G"
 *   insn=0x000000000027F550 string=0x000000000027F554 "!"
 *   insn=0x000000000027F558 string=0x000000000027F55C "\t"
 *   insn=0x000000000027F558 string=0x000000000027F570 "\t"
 *   insn=0x000000000027F55C string=0x000000000027F560 "*"
 *   insn=0x000000000027F560 string=0x000000000027F564 "\n"
 *   insn=0x000000000027F56C string=0x000000000027F57C "?"
 *   insn=0x000000000027F570 string=0x000000000027F574 "*"
 *   insn=0x000000000027F574 string=0x000000000027F578 "\n"
 *   insn=0x000000000027F57C string=0x000000000027F580 "l"
 *   insn=0x000000000027F590 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027F594 string=0x000000000027F598 "*#"
 *   insn=0x000000000027F598 string=0x000000000027F59C "J"
 *   insn=0x000000000027F5A0 string=0x000000000027F5A4 "(a"
 *   insn=0x000000000027F5AC string=0x000000000027F5B0 "*#"
 *   insn=0x000000000027F5B0 string=0x000000000027F5B4 "J=G"
 *   insn=0x000000000027F5B4 string=0x000000000027F5B8 ")!"
 *   insn=0x000000000027F5BC string=0x000000000027F5C0 "*"
 *   insn=0x000000000027F5BC string=0x000000000027F5EC "*"
 *   insn=0x000000000027F5C0 string=0x000000000027F5C4 "K"
 *   insn=0x000000000027F5C4 string=0x000000000027F5C8 "+"
 *   insn=0x000000000027F5CC string=0x000000000027F5D0 "_"
 *   insn=0x000000000027F5DC string=0x000000000027F5E0 "q"
 *   insn=0x000000000027F5EC string=0x000000000027F5F0 "K"
 *   insn=0x000000000027F5F0 string=0x000000000027F5F4 "+"
 *   insn=0x000000000027F5F4 string=0x000000000027F5F8 "_"
 *   insn=0x000000000027F618 string=0x000000000027F61C "h"
 *   insn=0x000000000027F61C string=0x000000000027F620 ""
 *   insn=0x000000000027F620 string=0x000000000027F624 "\t"
 *   insn=0x000000000027F628 string=0x000000000027F62C "!A"
 *   insn=0x000000000027F630 string=0x000000000027F634 "("
 *   insn=0x000000000027F630 string=0x00000000001F59D0 "P'"
 *   insn=0x000000000027F634 string=0x0000000000583734 "o"
 *   insn=0x000000000027F640 string=0x000000000027F654 "h"
 *   insn=0x000000000027F644 string=0x000000000027F648 "h"
 *   insn=0x000000000027F64C string=0x000000000027F650 "\t"
 *   insn=0x000000000027F654 string=0x000000000027F658 "`"
 *   insn=0x000000000027F658 string=0x000000000027F65C ""
 *   insn=0x000000000027F65C string=0x000000000027F660 "("
 *   insn=0x000000000027F65C string=0x000000000027F6BC ")"
 *   insn=0x000000000027F66C string=0x000000000027F670 "a"
 *   insn=0x000000000027F66C string=0x000000000027F6A8 "h"
 *   insn=0x000000000027F670 string=0x000000000027F674 "(  "
 *   insn=0x000000000027F678 string=0x000000000027F67C "hBB9H"
 *   insn=0x000000000027F67C string=0x000000000027F680 "H"
 *   insn=0x000000000027F680 string=0x000000000027F684 "h"
 *   insn=0x000000000027F688 string=0x000000000027F68C "H"
 *   insn=0x000000000027F690 string=0x000000000027F694 "!!"
 *   insn=0x000000000027F694 string=0x000000000027F698 "B""
 *   insn=0x000000000027F698 string=0x000000000027F69C "!(""
 *   insn=0x000000000027F69C string=0x000000000027F6A0 "  #"
 *   insn=0x000000000027F6A4 string=0x000000000027F6B4 "hRD9"
 *   insn=0x000000000027F6AC string=0x000000000027F6B0 "\t"
 *   insn=0x000000000027F6B4 string=0x000000000027F6B8 ""
 *   insn=0x000000000027F6BC string=0x000000000027F6C0 "!5D"
 *   insn=0x000000000027F6C0 string=0x000000000027F6C4 "`"
 *   insn=0x000000000027F6C4 string=0x000000000027F6C8 "h"
 *   insn=0x000000000027F6D0 string=0x000000000027F6D4 "`"
 *   insn=0x000000000027F6D0 string=0x000000000027F6E8 "hB"
 *   insn=0x000000000027F6D4 string=0x000000000027F6D8 "  "
 *   insn=0x000000000027F6D8 string=0x000000000027F6DC "m"
 *   insn=0x000000000027F6DC string=0x000000000027F6E0 "h2"
 *   insn=0x000000000027F6E4 string=0x000000000027F6EC ""
 *   insn=0x000000000027F6F0 string=0x000000000027F6F4 "h"
 *   insn=0x000000000027F704 string=0x00000000001FBEE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsObjectComponent::RegisterLibrary(Caver::PhysicsObjectComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+28h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "PhysicsObject");
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

