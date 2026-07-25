/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035CF2C
 * Mangled: sub_35CF2C
 * Demangled: sub_35CF2C
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F80F0  Caver::CharacterState::ItemCount(std::string const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x000000000035CF40 string=0x000000000035CF44 "V"
 *   insn=0x000000000035CF4C string=0x000000000035CF50 "$y"
 *   insn=0x000000000035CF50 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000035CF58 string=0x000000000058F176 "gameController"
 *   insn=0x000000000035CF68 string=0x000000000035CF6C "`"
 *   insn=0x000000000035CF7C string=0x000000000035CF80 "W"
 *   insn=0x000000000035CF90 string=0x000000000035D068 ")"
 *   insn=0x000000000035CF9C string=0x000000000035CFA0 "h"
 *   insn=0x000000000035CFA4 string=0x000000000035CFA8 ""
 *   insn=0x000000000035CFB8 string=0x000000000035CFBC ")"
 *   insn=0x000000000035CFC8 string=0x000000000035CFCC "Il"
 *   insn=0x000000000035CFCC string=0x00000000001F80F0 "0'"
 *   insn=0x000000000035CFD0 string=0x000000000035CFD4 "t"
 *   insn=0x000000000035CFD8 string=0x000000000035CFDC ""
 *   insn=0x000000000035CFE8 string=0x000000000035CFEC "\t@"
 *   insn=0x000000000035CFF8 string=0x000000000035CFFC ""
 *   insn=0x000000000035D008 string=0x000000000035D00C "@"
 *   insn=0x000000000035D024 string=0x000000000035D028 "._"
 *   insn=0x000000000035D028 string=0x00000000001F4CE0 "P'"
 *   insn=0x000000000035D038 string=0x000000000035D08C ")"
 *   insn=0x000000000035D044 string=0x000000000035D048 "A"
 *   insn=0x000000000035D048 string=0x000000000035D0F0 "xd"
 *   insn=0x000000000035D068 string=0x000000000035D06C ")=G"
 *   insn=0x000000000035D06C string=0x000000000035D070 "!"
 *   insn=0x000000000035D074 string=0x000000000035D078 "\t"
 *   insn=0x000000000035D074 string=0x000000000035D0B0 "\t"
 *   insn=0x000000000035D078 string=0x000000000035D07C "*"
 *   insn=0x000000000035D07C string=0x000000000035D080 "\n"
 *   insn=0x000000000035D084 string=0x000000000035D088 ""
 *   insn=0x000000000035D088 string=0x000000000035D0BC "?"
 *   insn=0x000000000035D08C string=0x000000000035D090 ")=G"
 *   insn=0x000000000035D090 string=0x000000000035D094 "!"
 *   insn=0x000000000035D098 string=0x000000000035D09C "\t"
 *   insn=0x000000000035D098 string=0x000000000035D0D0 "\t"
 *   insn=0x000000000035D09C string=0x000000000035D0A0 "*"
 *   insn=0x000000000035D0A0 string=0x000000000035D0A4 "\n"
 *   insn=0x000000000035D0AC string=0x000000000035D0DC "?"
 *   insn=0x000000000035D0B0 string=0x000000000035D0B4 "*"
 *   insn=0x000000000035D0B4 string=0x000000000035D0B8 "\n"
 *   insn=0x000000000035D0D0 string=0x000000000035D0D4 "*"
 *   insn=0x000000000035D0D4 string=0x000000000035D0D8 "\n"
 *   insn=0x000000000035D0F0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035D0FC string=0x000000000035D100 ""
 *   insn=0x000000000035D104 string=0x000000000035D108 "a"
 *   insn=0x000000000035D10C string=0x000000000035D110 "\t@"
 *   insn=0x000000000035D11C string=0x000000000035D120 ""
 *   insn=0x000000000035D124 string=0x000000000035D128 "a"
 *   insn=0x000000000035D12C string=0x000000000035D130 "@"
 *   insn=0x000000000035D144 string=0x000000000035D148 "J"
 *   insn=0x000000000035D148 string=0x000000000035D14C "J"
 *   insn=0x000000000035D150 string=0x000000000035D154 "(a"
 *   insn=0x000000000035D15C string=0x000000000035D160 "*"
 *   insn=0x000000000035D160 string=0x000000000035D164 "J=G"
 *   insn=0x000000000035D164 string=0x000000000035D168 ")!"
 *   insn=0x000000000035D168 string=0x000000000035D16C "J"
 *   insn=0x000000000035D16C string=0x000000000035D170 "*"
 *   insn=0x000000000035D16C string=0x000000000035D194 "*"
 *   insn=0x000000000035D170 string=0x000000000035D174 "K"
 *   insn=0x000000000035D174 string=0x000000000035D178 "+"
 *   insn=0x000000000035D17C string=0x000000000035D180 "_"
 *   insn=0x000000000035D190 string=0x000000000035D1F0 "m4"
 *   insn=0x000000000035D194 string=0x000000000035D198 "K"
 *   insn=0x000000000035D198 string=0x000000000035D19C "+"
 *   insn=0x000000000035D19C string=0x000000000035D1A0 "_"
 *   insn=0x000000000035D1A0 string=0x000000000035D1A4 "-"
 *   insn=0x000000000035D1C0 string=0x000000000035D1C4 ")"
 *   insn=0x000000000035D1C4 string=0x000000000035D1C8 ")=G"
 *   insn=0x000000000035D1C8 string=0x000000000035D1CC "!"
 *   insn=0x000000000035D1CC string=0x000000000035D1D0 "i"
 *   insn=0x000000000035D1D0 string=0x000000000035D1D4 "\t"
 *   insn=0x000000000035D1D0 string=0x000000000035D1FC "\t"
 *   insn=0x000000000035D1D4 string=0x000000000035D1D8 "*"
 *   insn=0x000000000035D1D8 string=0x000000000035D1DC "\n"
 *   insn=0x000000000035D1E0 string=0x000000000035D1E4 "?"
 *   insn=0x000000000035D1E4 string=0x000000000035D1E8 "l"
 *   insn=0x000000000035D1FC string=0x000000000035D200 "*"
 *   insn=0x000000000035D200 string=0x000000000035D204 "\n"
 *   insn=0x000000000035D204 string=0x000000000035D208 "?"
 *   insn=0x000000000035D208 string=0x000000000035D20C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_35CF2C(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x21
  void *v3; // x0
  _QWORD *v4; // x20
  int v5; // w21
  __int64 v6; // x8
  __int64 v7; // x8
  void *v8; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  __int64 v14[3]; // [xsp+8h] [xbp-48h] BYREF

  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)v14, "gameController");
  v2 = Caver::ProgramTable::PointerForKey();
  v3 = (void *)(v14[0] - 24);
  if ( (__int64 *)(v14[0] - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v14[0] - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v3);
  }
  Caver::ProgramState::StringAtStackIndex(v14, v1, 1);
  if ( *(_QWORD *)(v14[0] - 24) )
  {
    v4 = *(_QWORD **)(v2 + 176);
    if ( v4 )
      ++v4[1];
    v5 = Caver::CharacterState::ItemCount();
    if ( v4 )
    {
      v6 = v4[1] - 1LL;
      v4[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v7 = v4[2] - 1LL;
        v4[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushInt(v1, v5);
  v8 = (void *)(v14[0] - 24);
  if ( (__int64 *)(v14[0] - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v14[0] - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v8);
  }
  return 1;
}

