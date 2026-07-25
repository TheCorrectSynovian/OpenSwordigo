/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035FF9C
 * Mangled: sub_35FF9C
 * Demangled: sub_35FF9C
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71F0  Caver::StateProperties::AddFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x000000000035FFB0 string=0x000000000035FFB4 "V"
 *   insn=0x000000000035FFBC string=0x000000000035FFC0 "m"
 *   insn=0x000000000035FFC0 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000035FFC8 string=0x000000000058F176 "gameController"
 *   insn=0x000000000035FFD8 string=0x000000000035FFDC "`"
 *   insn=0x000000000035FFE0 string=0x000000000035FFE4 "g"
 *   insn=0x000000000035FFEC string=0x000000000035FFF0 "7"
 *   insn=0x000000000035FFFC string=0x0000000000360000 "A"
 *   insn=0x0000000000360000 string=0x00000000003600A8 ")"
 *   insn=0x0000000000360018 string=0x000000000036001C "\t@"
 *   insn=0x0000000000360024 string=0x0000000000360028 ""
 *   insn=0x0000000000360038 string=0x000000000036003C "@"
 *   insn=0x000000000036004C string=0x0000000000360050 "<"
 *   insn=0x0000000000360058 string=0x000000000036005C "A]"
 *   insn=0x000000000036005C string=0x00000000001F7560 "0'"
 *   insn=0x0000000000360064 string=0x0000000000360068 "b\"
 *   insn=0x0000000000360068 string=0x00000000001F71F0 "0'"
 *   insn=0x0000000000360078 string=0x00000000003600CC ")"
 *   insn=0x0000000000360088 string=0x0000000000360138 "fX"
 *   insn=0x00000000003600A8 string=0x00000000003600AC ")=G"
 *   insn=0x00000000003600AC string=0x00000000003600B0 "!"
 *   insn=0x00000000003600B4 string=0x00000000003600B8 "\t"
 *   insn=0x00000000003600B4 string=0x00000000003600F0 "\t"
 *   insn=0x00000000003600B8 string=0x00000000003600BC "*"
 *   insn=0x00000000003600BC string=0x00000000003600C0 "\n"
 *   insn=0x00000000003600C4 string=0x00000000003600C8 ""
 *   insn=0x00000000003600C8 string=0x00000000003600FC "?"
 *   insn=0x00000000003600CC string=0x00000000003600D0 ")=G"
 *   insn=0x00000000003600D0 string=0x00000000003600D4 "!"
 *   insn=0x00000000003600D4 string=0x00000000003600D8 "\t"
 *   insn=0x00000000003600D8 string=0x00000000003600DC "\t"
 *   insn=0x00000000003600D8 string=0x0000000000360118 "\t"
 *   insn=0x00000000003600DC string=0x00000000003600E0 "*"
 *   insn=0x00000000003600E0 string=0x00000000003600E4 "\n"
 *   insn=0x00000000003600EC string=0x0000000000360124 "?"
 *   insn=0x00000000003600F0 string=0x00000000003600F4 "*"
 *   insn=0x00000000003600F4 string=0x00000000003600F8 "\n"
 *   insn=0x00000000003600FC string=0x0000000000360100 ","
 *   insn=0x0000000000360118 string=0x000000000036011C "*"
 *   insn=0x000000000036011C string=0x0000000000360120 "\n"
 *   insn=0x0000000000360138 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036013C string=0x0000000000360140 "*"
 *   insn=0x0000000000360140 string=0x0000000000360144 "J"
 *   insn=0x0000000000360148 string=0x000000000036014C "(a"
 *   insn=0x0000000000360154 string=0x0000000000360158 "*"
 *   insn=0x0000000000360158 string=0x000000000036015C "J=G"
 *   insn=0x000000000036015C string=0x0000000000360160 ")!"
 *   insn=0x0000000000360160 string=0x0000000000360164 "j"
 *   insn=0x0000000000360164 string=0x0000000000360168 "*"
 *   insn=0x0000000000360164 string=0x00000000003601D0 "*"
 *   insn=0x0000000000360168 string=0x000000000036016C "K"
 *   insn=0x000000000036016C string=0x0000000000360170 "+"
 *   insn=0x0000000000360178 string=0x00000000003601B4 "_"
 *   insn=0x0000000000360184 string=0x0000000000360188 "(a"
 *   insn=0x0000000000360190 string=0x0000000000360194 "*"
 *   insn=0x0000000000360194 string=0x0000000000360198 "J=G"
 *   insn=0x0000000000360198 string=0x000000000036019C ")!"
 *   insn=0x00000000003601A0 string=0x00000000003601A4 "*"
 *   insn=0x00000000003601A4 string=0x00000000003601A8 "K"
 *   insn=0x00000000003601A8 string=0x00000000003601AC "+"
 *   insn=0x00000000003601C0 string=0x00000000003601C4 "x("
 *   insn=0x00000000003601D0 string=0x00000000003601D4 "K"
 *   insn=0x00000000003601D4 string=0x00000000003601D8 "+"
 *   insn=0x00000000003601D8 string=0x00000000003601DC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_35FF9C(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x20
  void *v3; // x0
  Caver::GameState *v4; // x20
  _QWORD *v5; // x21
  __int64 v6; // t2
  __int64 v7; // x8
  void *v8; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  __int64 v14; // t2
  __int64 v15[3]; // [xsp+8h] [xbp-48h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)v15, "gameController");
  v2 = Caver::ProgramTable::PointerForKey();
  v3 = (void *)(v15[0] - 24);
  if ( (__int64 *)(v15[0] - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v10 = (unsigned int *)(v15[0] - 8);
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
  if ( v11 > 0 )
  {
LABEL_2:
    v6 = v2 + 168;
    v4 = *(Caver::GameState **)(v2 + 168);
    v5 = *(_QWORD **)(v6 + 8);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    operator delete(v3);
    v14 = v2 + 168;
    v4 = *(Caver::GameState **)(v2 + 168);
    v5 = *(_QWORD **)(v14 + 8);
    if ( !v5 )
      goto LABEL_6;
  }
  if ( !v5[1] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v7 = v5[2] - 1LL;
    v5[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
  }
LABEL_6:
  Caver::ProgramState::StringAtStackIndex(v15, v1, 1);
  Caver::GameState::CurrentLevelState(v4);
  Caver::StateProperties::AddFlag();
  v8 = (void *)(v15[0] - 24);
  if ( (__int64 *)(v15[0] - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v15[0] - 8);
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
  return 0;
}

