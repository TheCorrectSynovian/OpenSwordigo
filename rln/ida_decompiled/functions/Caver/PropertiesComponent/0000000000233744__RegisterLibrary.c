/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233744
 * Mangled: _ZN5Caver19PropertiesComponent15RegisterLibraryEv
 * Demangled: Caver::PropertiesComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001F6180  Caver::PropertiesComponent::RegisterLibrary(void)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FC590  Caver::PropertiesComponent::Load(void)
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 61
 *   insn=0x0000000000233750 string=0x0000000000233754 "S"
 *   insn=0x0000000000233754 string=0x0000000000233758 "h"
 *   insn=0x000000000023375C string=0x0000000000233760 ""
 *   insn=0x0000000000233768 string=0x000000000058B182 "Properties"
 *   insn=0x000000000023377C string=0x0000000000233780 "B$"
 *   insn=0x000000000023378C string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000233794 string=0x0000000000233798 ")"
 *   insn=0x00000000002337A0 string=0x00000000002337A4 "!"
 *   insn=0x00000000002337A4 string=0x00000000002337A8 "h"
 *   insn=0x00000000002337C8 string=0x00000000002337CC ")=G"
 *   insn=0x00000000002337CC string=0x00000000002337D0 "!"
 *   insn=0x00000000002337D4 string=0x00000000002337D8 "\t"
 *   insn=0x00000000002337D4 string=0x00000000002337EC "\t"
 *   insn=0x00000000002337D8 string=0x00000000002337DC "*"
 *   insn=0x00000000002337DC string=0x00000000002337E0 "\n"
 *   insn=0x00000000002337E8 string=0x00000000002337F8 "?"
 *   insn=0x00000000002337EC string=0x00000000002337F0 "*"
 *   insn=0x00000000002337F0 string=0x00000000002337F4 "\n"
 *   insn=0x00000000002337F8 string=0x00000000002337FC "l"
 *   insn=0x000000000023380C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000233814 string=0x0000000000233818 "J"
 *   insn=0x000000000023381C string=0x0000000000233820 "(a"
 *   insn=0x000000000023382C string=0x0000000000233830 "J=G"
 *   insn=0x0000000000233830 string=0x0000000000233834 ")!"
 *   insn=0x0000000000233838 string=0x000000000023383C "*"
 *   insn=0x0000000000233838 string=0x0000000000233868 "*"
 *   insn=0x000000000023383C string=0x0000000000233840 "K"
 *   insn=0x0000000000233840 string=0x0000000000233844 "+"
 *   insn=0x0000000000233848 string=0x000000000023384C "_"
 *   insn=0x0000000000233868 string=0x000000000023386C "K"
 *   insn=0x000000000023386C string=0x0000000000233870 "+"
 *   insn=0x0000000000233870 string=0x0000000000233874 "_"
 *   insn=0x0000000000233890 string=0x0000000000233894 "T"
 *   insn=0x00000000002338A0 string=0x00000000002338A4 "h"
 *   insn=0x00000000002338A4 string=0x00000000002338A8 "("
 *   insn=0x00000000002338A8 string=0x00000000002338CC "hJ@"
 *   insn=0x00000000002338B8 string=0x0000000000233954 "_\n"
 *   insn=0x00000000002338D0 string=0x00000000002338D4 "i"
 *   insn=0x00000000002338D8 string=0x00000000002338DC "a"
 *   insn=0x00000000002338E4 string=0x00000000002338E8 "V-"
 *   insn=0x00000000002338F0 string=0x00000000002338F4 "a"
 *   insn=0x000000000023390C string=0x0000000000233910 "h"
 *   insn=0x0000000000233910 string=0x0000000000233914 ""
 *   insn=0x0000000000233914 string=0x0000000000233918 "h"
 *   insn=0x000000000023391C string=0x0000000000233920 "h"
 *   insn=0x0000000000233924 string=0x0000000000233928 "\t@"
 *   insn=0x000000000023392C string=0x0000000000233930 "h\n@"
 *   insn=0x0000000000233930 string=0x0000000000233934 ""
 *   insn=0x0000000000233934 string=0x0000000000233938 "h\n"
 *   insn=0x000000000023393C string=0x0000000000233940 "h"
 *   insn=0x0000000000233944 string=0x0000000000233948 "@"
 *   insn=0x000000000023395C string=0x0000000000233960 "4"
 *   insn=0x0000000000233964 string=0x0000000000233968 ""
 *   insn=0x0000000000233974 string=0x0000000000233978 "\t@"
 *   insn=0x0000000000233984 string=0x0000000000233988 ""
 *   insn=0x0000000000233994 string=0x0000000000233998 "@"
 *   insn=0x00000000002339A8 string=0x00000000002339AC "hj"
 *   insn=0x00000000002339CC string=0x00000000002339D0 "h"
 *   insn=0x00000000002339D8 string=0x00000000001FC590 "0'"
 *   insn=0x00000000002339E0 string=0x00000000002339E4 "O+"
 *   insn=0x00000000002339F4 string=0x00000000002339F8 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PropertiesComponent::RegisterLibrary(Caver::PropertiesComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+78h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Properties");
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

