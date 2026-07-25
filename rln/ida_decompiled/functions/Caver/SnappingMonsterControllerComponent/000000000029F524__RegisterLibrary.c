/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F524
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent15RegisterLibraryEv
 * Demangled: Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FA4E0  Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FBC90  Caver::SoundEffectComponent::PlayWithDelay(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x000000000029F530 string=0x000000000029F534 "S"
 *   insn=0x000000000029F534 string=0x000000000029F538 "h"
 *   insn=0x000000000029F53C string=0x000000000029F540 ""
 *   insn=0x000000000029F544 string=0x000000000029F548 "!"
 *   insn=0x000000000029F548 string=0x0000000000585599 "SnappingMonsterController"
 *   insn=0x000000000029F568 string=0x000000000029F56C "%a"
 *   insn=0x000000000029F56C string=0x00000000001F7A00 "0'"
 *   insn=0x000000000029F570 string=0x000000000029F574 ")""
 *   insn=0x000000000029F574 string=0x000000000029F578 ")"
 *   insn=0x000000000029F580 string=0x000000000029F584 "!"
 *   insn=0x000000000029F584 string=0x000000000029F588 "h"
 *   insn=0x000000000029F584 string=0x000000000029F5A8 ")""
 *   insn=0x000000000029F594 string=0x000000000029F5EC "9["
 *   insn=0x000000000029F5A8 string=0x000000000029F5AC ")=G"
 *   insn=0x000000000029F5AC string=0x000000000029F5B0 "!"
 *   insn=0x000000000029F5B4 string=0x000000000029F5B8 "\t"
 *   insn=0x000000000029F5B4 string=0x000000000029F5CC "\t"
 *   insn=0x000000000029F5B8 string=0x000000000029F5BC "*"
 *   insn=0x000000000029F5BC string=0x000000000029F5C0 "\n"
 *   insn=0x000000000029F5C8 string=0x000000000029F5D8 "?"
 *   insn=0x000000000029F5CC string=0x000000000029F5D0 "*"
 *   insn=0x000000000029F5D0 string=0x000000000029F5D4 "\n"
 *   insn=0x000000000029F5D8 string=0x000000000029F5DC "l"
 *   insn=0x000000000029F5E0 string=0x000000000029F5E4 "p+"
 *   insn=0x000000000029F5EC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029F5F0 string=0x000000000029F5F4 "*""
 *   insn=0x000000000029F5F4 string=0x000000000029F5F8 "J"
 *   insn=0x000000000029F5FC string=0x000000000029F600 "(a"
 *   insn=0x000000000029F608 string=0x000000000029F60C "*""
 *   insn=0x000000000029F60C string=0x000000000029F610 "J=G"
 *   insn=0x000000000029F610 string=0x000000000029F614 ")!"
 *   insn=0x000000000029F618 string=0x000000000029F61C "*"
 *   insn=0x000000000029F618 string=0x000000000029F648 "*"
 *   insn=0x000000000029F61C string=0x000000000029F620 "K"
 *   insn=0x000000000029F620 string=0x000000000029F624 "+"
 *   insn=0x000000000029F628 string=0x000000000029F62C "_"
 *   insn=0x000000000029F638 string=0x000000000029F63C "Z+"
 *   insn=0x000000000029F648 string=0x000000000029F64C "K"
 *   insn=0x000000000029F64C string=0x000000000029F650 "+"
 *   insn=0x000000000029F650 string=0x000000000029F654 "_"
 *   insn=0x000000000029F678 string=0x000000000029F67C "`~@"
 *   insn=0x000000000029F680 string=0x000000000029F684 "`"
 *   insn=0x000000000029F680 string=0x000000000029F698 ""
 *   insn=0x000000000029F68C string=0x000000000029F690 "`~@"
 *   insn=0x000000000029F68C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029F690 string=0x000000000029F694 " "
 *   insn=0x000000000029F698 string=0x000000000029F69C ""
 *   insn=0x000000000029F6A4 string=0x000000000029F6A8 "`"
 *   insn=0x000000000029F6AC string=0x000000000029F6B0 "`"
 *   insn=0x000000000029F6AC string=0x000000000029F6C4 ""
 *   insn=0x000000000029F6B4 string=0x000000000029F6B8 "\na"
 *   insn=0x000000000029F6B8 string=0x000000000029F6BC "`"
 *   insn=0x000000000029F6C4 string=0x000000000029F6C8 ""
 *   insn=0x000000000029F6CC string=0x000000000029F6D0 "@"
 *   insn=0x000000000029F6D0 string=0x000000000029F6D4 "`~@"
 *   insn=0x000000000029F6D8 string=0x000000000029F6DC "`"
 *   insn=0x000000000029F6D8 string=0x000000000029F6EC ""
 *   insn=0x000000000029F6E4 string=0x000000000029F6E8 "`~@"
 *   insn=0x000000000029F6EC string=0x000000000029F6F0 ""
 *   insn=0x000000000029F6F8 string=0x000000000029F6FC "`"
 *   insn=0x000000000029F700 string=0x000000000029F704 "`"
 *   insn=0x000000000029F700 string=0x000000000029F714 ""
 *   insn=0x000000000029F70C string=0x000000000029F710 "`"
 *   insn=0x000000000029F714 string=0x000000000029F718 ""
 *   insn=0x000000000029F720 string=0x000000000029F724 "`"
 *   insn=0x000000000029F728 string=0x000000000029F72C "`"
 *   insn=0x000000000029F728 string=0x000000000029F73C ""
 *   insn=0x000000000029F734 string=0x000000000029F738 "`"
 *   insn=0x000000000029F73C string=0x000000000029F740 ""
 *   insn=0x000000000029F748 string=0x000000000029F74C ""
 *   insn=0x000000000029F74C string=0x000000000029F750 "i"
 *   insn=0x000000000029F750 string=0x000000000029F754 "h""
 *   insn=0x000000000029F758 string=0x000000000029F75C "`"
 *   insn=0x000000000029F758 string=0x000000000029F770 "tN@"
 *   insn=0x000000000029F764 string=0x000000000029F768 "h"
 *   insn=0x000000000029F768 string=0x000000000029F76C "h"
 *   insn=0x000000000029F774 string=0x000000000029F808 "`""
 *   insn=0x000000000029F778 string=0x000000000029F77C "("
 *   insn=0x000000000029F77C string=0x000000000029F780 ""
 *   insn=0x000000000029F784 string=0x000000000029F788 "t"
 *   insn=0x000000000029F790 string=0x000000000029F794 "u"
 *   insn=0x000000000029F790 string=0x000000000029F7C0 "`~@"
 *   insn=0x000000000029F7A0 string=0x000000000029F7A4 "t"
 *   insn=0x000000000029F7B8 string=0x000000000029F7BC "h"
 *   insn=0x000000000029F7C0 string=0x000000000029F7C4 ""
 *   insn=0x000000000029F7C8 string=0x000000000029F7CC "`"
 *   insn=0x000000000029F7C8 string=0x000000000029F7DC ""
 *   insn=0x000000000029F7D4 string=0x000000000029F7D8 "`~@"
 *   insn=0x000000000029F7DC string=0x000000000029F7E0 ""
 *   insn=0x000000000029F800 string=0x000000000029F804 "#q"
 *   insn=0x000000000029F804 string=0x00000000001FBC90 "0'"
 *   insn=0x000000000029F810 string=0x000000000029F814 "tN@"
 *   insn=0x000000000029F818 string=0x000000000029F81C "("
 *   insn=0x000000000029F82C string=0x000000000029F830 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SnappingMonsterControllerComponent::RegisterLibrary(
        Caver::SnappingMonsterControllerComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+38h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "SnappingMonsterController");
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

