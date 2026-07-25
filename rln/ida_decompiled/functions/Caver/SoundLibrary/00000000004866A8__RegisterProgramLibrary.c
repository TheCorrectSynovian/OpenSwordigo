/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004866A8
 * Mangled: _ZN5Caver12SoundLibrary22RegisterProgramLibraryEPNS_12ProgramStateE
 * Demangled: Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000001FEDC0  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FDEE0  Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&,float)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000002031F0  Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 131
 *   insn=0x00000000004866B8 string=0x00000000004866BC "U"
 *   insn=0x00000000004866D0 string=0x0000000000596880 "soundLibrary"
 *   insn=0x00000000004866DC string=0x00000000004866E0 "6"
 *   insn=0x00000000004866E0 string=0x00000000004866E4 "`"
 *   insn=0x0000000000486708 string=0x000000000048670C "!"
 *   insn=0x000000000048670C string=0x000000000058A59C "SoundLibrary"
 *   insn=0x0000000000486718 string=0x000000000048671C "'"
 *   insn=0x000000000048671C string=0x0000000000486720 "b"
 *   insn=0x0000000000486730 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000048673C string=0x0000000000486740 "a"
 *   insn=0x0000000000486768 string=0x000000000048676C ")=G"
 *   insn=0x000000000048676C string=0x0000000000486770 "!"
 *   insn=0x0000000000486774 string=0x0000000000486778 "\t"
 *   insn=0x0000000000486774 string=0x00000000004867B0 "\t"
 *   insn=0x0000000000486778 string=0x000000000048677C "*"
 *   insn=0x000000000048677C string=0x0000000000486780 "\n"
 *   insn=0x0000000000486784 string=0x0000000000486788 ""
 *   insn=0x0000000000486788 string=0x00000000004867BC "?"
 *   insn=0x000000000048678C string=0x0000000000486790 ")=G"
 *   insn=0x0000000000486790 string=0x0000000000486794 "!"
 *   insn=0x0000000000486798 string=0x000000000048679C "\t"
 *   insn=0x0000000000486798 string=0x00000000004867D0 "\t"
 *   insn=0x000000000048679C string=0x00000000004867A0 "*"
 *   insn=0x00000000004867A0 string=0x00000000004867A4 "\n"
 *   insn=0x00000000004867AC string=0x00000000004867DC "?"
 *   insn=0x00000000004867B0 string=0x00000000004867B4 "*"
 *   insn=0x00000000004867B4 string=0x00000000004867B8 "\n"
 *   insn=0x00000000004867BC string=0x00000000004867C0 "l"
 *   insn=0x00000000004867D0 string=0x00000000004867D4 "*"
 *   insn=0x00000000004867D4 string=0x00000000004867D8 "\n"
 *   insn=0x00000000004867DC string=0x00000000004867E0 ","
 *   insn=0x00000000004867F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004867F8 string=0x00000000004867FC "(a"
 *   insn=0x0000000000486808 string=0x000000000048680C "J=G"
 *   insn=0x000000000048680C string=0x0000000000486810 ")!"
 *   insn=0x0000000000486814 string=0x0000000000486818 "*"
 *   insn=0x0000000000486814 string=0x0000000000486888 "*"
 *   insn=0x0000000000486818 string=0x000000000048681C "K"
 *   insn=0x000000000048681C string=0x0000000000486820 "+"
 *   insn=0x0000000000486828 string=0x000000000048686C "_"
 *   insn=0x0000000000486834 string=0x0000000000486838 "J"
 *   insn=0x000000000048683C string=0x0000000000486840 "(a"
 *   insn=0x000000000048684C string=0x0000000000486850 "J=G"
 *   insn=0x0000000000486850 string=0x0000000000486854 ")!"
 *   insn=0x0000000000486858 string=0x000000000048685C "*"
 *   insn=0x000000000048685C string=0x0000000000486860 "K"
 *   insn=0x0000000000486860 string=0x0000000000486864 "+"
 *   insn=0x0000000000486888 string=0x000000000048688C "K"
 *   insn=0x000000000048688C string=0x0000000000486890 "+"
 *   insn=0x0000000000486890 string=0x0000000000486894 "_"
 *   insn=0x00000000004868B4 string=0x00000000004868B8 "U"
 *   insn=0x00000000004868C4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004868DC string=0x00000000004868E0 "`"
 *   insn=0x00000000004868E4 string=0x00000000004868E8 "&"
 *   insn=0x0000000000486910 string=0x0000000000486914 ""
 *   insn=0x0000000000486918 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000048692C string=0x00000000001FDFA0 "0'"
 *   insn=0x000000000048693C string=0x0000000000486940 "h"
 *   insn=0x0000000000486940 string=0x00000000001FDEE0 "0'"
 *   insn=0x0000000000486948 string=0x000000000048694C "@"
 *   insn=0x000000000048694C string=0x0000000000486950 ""
 *   insn=0x0000000000486950 string=0x0000000000486954 ""
 *   insn=0x0000000000486958 string=0x000000000048695C ""
 *   insn=0x000000000048695C string=0x0000000000486960 ""
 *   insn=0x000000000048696C string=0x0000000000486970 "@"
 *   insn=0x0000000000486970 string=0x0000000000486974 ""
 *   insn=0x0000000000486974 string=0x0000000000486978 ""
 *   insn=0x000000000048697C string=0x0000000000486980 ""
 *   insn=0x0000000000486980 string=0x0000000000486984 ""
 *   insn=0x00000000004869A4 string=0x00000000004869A8 "!"
 *   insn=0x00000000004869A8 string=0x0000000000486A4C "!"
 *   insn=0x00000000004869C4 string=0x00000000004869C8 ")=G"
 *   insn=0x00000000004869C8 string=0x00000000004869CC "!"
 *   insn=0x00000000004869D0 string=0x00000000004869D4 "\t"
 *   insn=0x00000000004869D0 string=0x0000000000486A0C "\t"
 *   insn=0x00000000004869D4 string=0x00000000004869D8 "*"
 *   insn=0x00000000004869D8 string=0x00000000004869DC "\n"
 *   insn=0x00000000004869E0 string=0x00000000004869E4 ""
 *   insn=0x00000000004869E4 string=0x0000000000486A18 "?"
 *   insn=0x00000000004869E8 string=0x00000000004869EC ")=G"
 *   insn=0x00000000004869EC string=0x00000000004869F0 "!"
 *   insn=0x00000000004869F4 string=0x00000000004869F8 "\t"
 *   insn=0x00000000004869F4 string=0x0000000000486A2C "\t"
 *   insn=0x00000000004869F8 string=0x00000000004869FC "*"
 *   insn=0x00000000004869FC string=0x0000000000486A00 "\n"
 *   insn=0x0000000000486A08 string=0x0000000000486A38 "?"
 *   insn=0x0000000000486A0C string=0x0000000000486A10 "*"
 *   insn=0x0000000000486A10 string=0x0000000000486A14 "\n"
 *   insn=0x0000000000486A18 string=0x0000000000486A1C "l"
 *   insn=0x0000000000486A20 string=0x0000000000486A24 "`"
 *   insn=0x0000000000486A2C string=0x0000000000486A30 "*"
 *   insn=0x0000000000486A30 string=0x0000000000486A34 "\n"
 *   insn=0x0000000000486A40 string=0x0000000000486A44 "X"
 *   insn=0x0000000000486A58 string=0x0000000000486A5C "J"
 *   insn=0x0000000000486A60 string=0x0000000000486A64 "(a"
 *   insn=0x0000000000486A68 string=0x0000000000486A6C "`"
 *   insn=0x0000000000486A70 string=0x0000000000486A74 "J=G"
 *   insn=0x0000000000486A74 string=0x0000000000486A78 ")!"
 *   insn=0x0000000000486A78 string=0x0000000000486A7C "J"
 *   insn=0x0000000000486A7C string=0x0000000000486A80 "*"
 *   insn=0x0000000000486A7C string=0x0000000000486AA4 "*"
 *   insn=0x0000000000486A80 string=0x0000000000486A84 "K"
 *   insn=0x0000000000486A84 string=0x0000000000486A88 "+"
 *   insn=0x0000000000486A8C string=0x0000000000486A90 "_"
 *   insn=0x0000000000486A90 string=0x0000000000486A94 ","
 *   insn=0x0000000000486A9C string=0x0000000000486AA0 "%"
 *   insn=0x0000000000486AA4 string=0x0000000000486AA8 "K"
 *   insn=0x0000000000486AA8 string=0x0000000000486AAC "+"
 *   insn=0x0000000000486AAC string=0x0000000000486AB0 "_"
 *   insn=0x0000000000486AB0 string=0x0000000000486AB4 "-"
 *   insn=0x0000000000486AB4 string=0x0000000000486AB8 " "
 *   insn=0x0000000000486AC8 string=0x0000000000486ACC "\t\t@"
 *   insn=0x0000000000486ACC string=0x0000000000486AD0 ")"
 *   insn=0x0000000000486AD0 string=0x0000000000486AD4 "\t\t"
 *   insn=0x0000000000486AD8 string=0x0000000000486ADC "\t"
 *   insn=0x0000000000486ADC string=0x0000000000486AE0 ")"
 *   insn=0x0000000000486AE4 string=0x0000000000486AE8 " "
 *   insn=0x0000000000486B08 string=0x0000000000486B0C ")=G"
 *   insn=0x0000000000486B0C string=0x0000000000486B10 "!"
 *   insn=0x0000000000486B10 string=0x0000000000486B14 "i"
 *   insn=0x0000000000486B14 string=0x0000000000486B18 "\t"
 *   insn=0x0000000000486B14 string=0x0000000000486B40 "\t"
 *   insn=0x0000000000486B18 string=0x0000000000486B1C "*"
 *   insn=0x0000000000486B1C string=0x0000000000486B20 "\n"
 *   insn=0x0000000000486B24 string=0x0000000000486B28 "?"
 *   insn=0x0000000000486B28 string=0x0000000000486B2C "l"
 *   insn=0x0000000000486B38 string=0x0000000000486B3C "b"
 *   insn=0x0000000000486B40 string=0x0000000000486B44 "*"
 *   insn=0x0000000000486B44 string=0x0000000000486B48 "\n"
 *   insn=0x0000000000486B48 string=0x0000000000486B4C "?"
 *   insn=0x0000000000486B4C string=0x0000000000486B50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundLibrary::RegisterProgramLibrary(Caver::SoundLibrary *this, Caver::ProgramState *a2)
{
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+60h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v8, "soundLibrary");
  Caver::ProgramTable::SetPointerForKey();
  v2 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v8, "SoundLibrary");
  Caver::ProgramState::RegisterLibrary();
  v3 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v3);
  }
}

