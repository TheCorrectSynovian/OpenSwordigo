/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004769F4
 * Mangled: _ZN5Caver14SceneObjectLib15RegisterLibraryEPNS_12ProgramStateE
 * Demangled: Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x0000000000203050  Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FE800  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x0000000000476A00 string=0x0000000000476A04 "T"
 *   insn=0x0000000000476A14 string=0x000000000058BB2C "SceneObject"
 *   insn=0x0000000000476A20 string=0x0000000000476A24 "e"
 *   insn=0x0000000000476A2C string=0x0000000000476A30 "B ?"
 *   insn=0x0000000000476A30 string=0x0000000000476A34 "c"
 *   insn=0x0000000000476A3C string=0x0000000000476A40 "p"
 *   insn=0x0000000000476A44 string=0x0000000000476A48 "i"
 *   insn=0x0000000000476A48 string=0x0000000000476A4C ")"
 *   insn=0x0000000000476A54 string=0x0000000000476A58 "!"
 *   insn=0x0000000000476A58 string=0x0000000000476A7C "i"
 *   insn=0x0000000000476A7C string=0x0000000000476A80 ")=G"
 *   insn=0x0000000000476A80 string=0x0000000000476A84 "!"
 *   insn=0x0000000000476A88 string=0x0000000000476A8C "\t"
 *   insn=0x0000000000476A88 string=0x0000000000476AA0 "\t"
 *   insn=0x0000000000476A8C string=0x0000000000476A90 "*"
 *   insn=0x0000000000476A90 string=0x0000000000476A94 "\n"
 *   insn=0x0000000000476A9C string=0x0000000000476AAC "?"
 *   insn=0x0000000000476AA0 string=0x0000000000476AA4 "*"
 *   insn=0x0000000000476AA4 string=0x0000000000476AA8 "\n"
 *   insn=0x0000000000476AAC string=0x0000000000476AB0 "l"
 *   insn=0x0000000000476AB4 string=0x0000000000476AB8 ";"
 *   insn=0x0000000000476AC0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000476AC4 string=0x0000000000476AC8 "j"
 *   insn=0x0000000000476AC8 string=0x0000000000476ACC "J"
 *   insn=0x0000000000476AD0 string=0x0000000000476AD4 "(a"
 *   insn=0x0000000000476ADC string=0x0000000000476AE0 "j"
 *   insn=0x0000000000476AE0 string=0x0000000000476AE4 "J=G"
 *   insn=0x0000000000476AE4 string=0x0000000000476AE8 ")!"
 *   insn=0x0000000000476AEC string=0x0000000000476AF0 "*"
 *   insn=0x0000000000476AEC string=0x0000000000476B1C "*"
 *   insn=0x0000000000476AF0 string=0x0000000000476AF4 "K"
 *   insn=0x0000000000476AF4 string=0x0000000000476AF8 "+"
 *   insn=0x0000000000476AFC string=0x0000000000476B00 "_"
 *   insn=0x0000000000476B0C string=0x0000000000476B10 "%"
 *   insn=0x0000000000476B14 string=0x0000000000476B18 "k+"
 *   insn=0x0000000000476B1C string=0x0000000000476B20 "K"
 *   insn=0x0000000000476B20 string=0x0000000000476B24 "+"
 *   insn=0x0000000000476B24 string=0x0000000000476B28 "_"
 *   insn=0x0000000000476B3C string=0x0000000000476B40 "("
 *   insn=0x0000000000476B40 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476B48 string=0x0000000000476B4C "@"
 *   insn=0x0000000000476B48 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476B54 string=0x0000000000476B58 "@"
 *   insn=0x0000000000476B58 string=0x0000000000476B5C ""
 *   insn=0x0000000000476B5C string=0x0000000000476B60 ""
 *   insn=0x0000000000476B64 string=0x0000000000476B68 ""
 *   insn=0x0000000000476B68 string=0x0000000000476B6C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectLib::RegisterLibrary(Caver::SceneObjectLib *this, Caver::ProgramState *a2)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+18h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "SceneObject");
  Caver::ProgramState::RegisterClass();
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

