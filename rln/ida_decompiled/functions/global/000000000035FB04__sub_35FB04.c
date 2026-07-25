/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035FB04
 * Mangled: sub_35FB04
 * Demangled: sub_35FB04
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F71F0  Caver::StateProperties::AddFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 113
 *   insn=0x000000000035FB18 string=0x000000000035FB1C "V"
 *   insn=0x000000000035FB24 string=0x000000000035FB28 ".n"
 *   insn=0x000000000035FB28 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000035FB30 string=0x000000000058F176 "gameController"
 *   insn=0x000000000035FB40 string=0x000000000035FB44 "`"
 *   insn=0x000000000035FB54 string=0x000000000035FB58 "7"
 *   insn=0x000000000035FB68 string=0x000000000035FC04 ")"
 *   insn=0x000000000035FB80 string=0x000000000035FB84 "\t@"
 *   insn=0x000000000035FB8C string=0x000000000035FB90 ""
 *   insn=0x000000000035FBA0 string=0x000000000035FBA4 "@"
 *   insn=0x000000000035FBB4 string=0x000000000035FBB8 "b"
 *   insn=0x000000000035FBC4 string=0x00000000001F71F0 "0'"
 *   insn=0x000000000035FBD4 string=0x000000000035FC28 ")"
 *   insn=0x000000000035FC04 string=0x000000000035FC08 ")=G"
 *   insn=0x000000000035FC08 string=0x000000000035FC0C "!"
 *   insn=0x000000000035FC10 string=0x000000000035FC14 "\t"
 *   insn=0x000000000035FC10 string=0x000000000035FC4C "\t"
 *   insn=0x000000000035FC14 string=0x000000000035FC18 "*"
 *   insn=0x000000000035FC18 string=0x000000000035FC1C "\n"
 *   insn=0x000000000035FC20 string=0x000000000035FC24 ""
 *   insn=0x000000000035FC24 string=0x000000000035FC58 "?"
 *   insn=0x000000000035FC28 string=0x000000000035FC2C ")=G"
 *   insn=0x000000000035FC2C string=0x000000000035FC30 "!"
 *   insn=0x000000000035FC30 string=0x000000000035FC34 "\t"
 *   insn=0x000000000035FC34 string=0x000000000035FC38 "\t"
 *   insn=0x000000000035FC34 string=0x000000000035FC74 "\t"
 *   insn=0x000000000035FC38 string=0x000000000035FC3C "*"
 *   insn=0x000000000035FC3C string=0x000000000035FC40 "\n"
 *   insn=0x000000000035FC48 string=0x000000000035FC80 "?"
 *   insn=0x000000000035FC4C string=0x000000000035FC50 "*"
 *   insn=0x000000000035FC50 string=0x000000000035FC54 "\n"
 *   insn=0x000000000035FC68 string=0x000000000035FC6C "U"
 *   insn=0x000000000035FC74 string=0x000000000035FC78 "*"
 *   insn=0x000000000035FC78 string=0x000000000035FC7C "\n"
 *   insn=0x000000000035FC94 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035FC9C string=0x000000000035FCA0 "(a"
 *   insn=0x000000000035FCA8 string=0x000000000035FCAC "*"
 *   insn=0x000000000035FCAC string=0x000000000035FCB0 "J=G"
 *   insn=0x000000000035FCB0 string=0x000000000035FCB4 ")!"
 *   insn=0x000000000035FCB8 string=0x000000000035FCBC "*"
 *   insn=0x000000000035FCB8 string=0x000000000035FD28 "*"
 *   insn=0x000000000035FCBC string=0x000000000035FCC0 "K"
 *   insn=0x000000000035FCC0 string=0x000000000035FCC4 "+"
 *   insn=0x000000000035FCCC string=0x000000000035FD0C "_"
 *   insn=0x000000000035FCD0 string=0x000000000035FCD4 "*"
 *   insn=0x000000000035FCD4 string=0x000000000035FCD8 "J"
 *   insn=0x000000000035FCDC string=0x000000000035FCE0 "(a"
 *   insn=0x000000000035FCE8 string=0x000000000035FCEC "*"
 *   insn=0x000000000035FCEC string=0x000000000035FCF0 "J=G"
 *   insn=0x000000000035FCF0 string=0x000000000035FCF4 ")!"
 *   insn=0x000000000035FCF8 string=0x000000000035FCFC "*"
 *   insn=0x000000000035FCFC string=0x000000000035FD00 "K"
 *   insn=0x000000000035FD00 string=0x000000000035FD04 "+"
 *   insn=0x000000000035FD28 string=0x000000000035FD2C "K"
 *   insn=0x000000000035FD2C string=0x000000000035FD30 "+"
 *   insn=0x000000000035FD30 string=0x000000000035FD34 "_"
 *   insn=0x000000000035FD58 string=0x000000000035FD5C "V"
 *   insn=0x000000000035FD80 string=0x000000000035FD84 "`"
 *   insn=0x000000000035FD94 string=0x000000000035FD98 "7"
 *   insn=0x000000000035FDA8 string=0x000000000035FE5C ")"
 *   insn=0x000000000035FDC0 string=0x000000000035FDC4 "\t@"
 *   insn=0x000000000035FDCC string=0x000000000035FDD0 ""
 *   insn=0x000000000035FDE0 string=0x000000000035FDE4 "@"
 *   insn=0x000000000035FE04 string=0x00000000001F7560 "0'"
 *   insn=0x000000000035FE10 string=0x00000000001F7180 "0'"
 *   insn=0x000000000035FE18 string=0x000000000035FE1C "}"
 *   insn=0x000000000035FE2C string=0x000000000035FE80 ")"
 *   insn=0x000000000035FE5C string=0x000000000035FE60 ")=G"
 *   insn=0x000000000035FE60 string=0x000000000035FE64 "!"
 *   insn=0x000000000035FE68 string=0x000000000035FE6C "\t"
 *   insn=0x000000000035FE68 string=0x000000000035FEA4 "\t"
 *   insn=0x000000000035FE6C string=0x000000000035FE70 "*"
 *   insn=0x000000000035FE70 string=0x000000000035FE74 "\n"
 *   insn=0x000000000035FE78 string=0x000000000035FE7C ""
 *   insn=0x000000000035FE7C string=0x000000000035FEB0 "?"
 *   insn=0x000000000035FE80 string=0x000000000035FE84 ")=G"
 *   insn=0x000000000035FE84 string=0x000000000035FE88 "!"
 *   insn=0x000000000035FE88 string=0x000000000035FE8C "\t"
 *   insn=0x000000000035FE8C string=0x000000000035FE90 "\t"
 *   insn=0x000000000035FE8C string=0x000000000035FECC "\t"
 *   insn=0x000000000035FE90 string=0x000000000035FE94 "*"
 *   insn=0x000000000035FE94 string=0x000000000035FE98 "\n"
 *   insn=0x000000000035FEA0 string=0x000000000035FED8 "?"
 *   insn=0x000000000035FEA4 string=0x000000000035FEA8 "*"
 *   insn=0x000000000035FEA8 string=0x000000000035FEAC "\n"
 *   insn=0x000000000035FEB8 string=0x000000000035FEBC ":)"
 *   insn=0x000000000035FECC string=0x000000000035FED0 "*"
 *   insn=0x000000000035FED0 string=0x000000000035FED4 "\n"
 *   insn=0x000000000035FEE0 string=0x000000000035FEE4 "0)"
 *   insn=0x000000000035FEF0 string=0x000000000035FEF4 "*"
 *   insn=0x000000000035FEF4 string=0x000000000035FEF8 "J"
 *   insn=0x000000000035FEFC string=0x000000000035FF00 "(a"
 *   insn=0x000000000035FF08 string=0x000000000035FF0C "*"
 *   insn=0x000000000035FF0C string=0x000000000035FF10 "J=G"
 *   insn=0x000000000035FF10 string=0x000000000035FF14 ")!"
 *   insn=0x000000000035FF14 string=0x000000000035FF18 "j"
 *   insn=0x000000000035FF18 string=0x000000000035FF1C "*"
 *   insn=0x000000000035FF18 string=0x000000000035FF84 "*"
 *   insn=0x000000000035FF1C string=0x000000000035FF20 "K"
 *   insn=0x000000000035FF20 string=0x000000000035FF24 "+"
 *   insn=0x000000000035FF2C string=0x000000000035FF68 "_"
 *   insn=0x000000000035FF38 string=0x000000000035FF3C "(a"
 *   insn=0x000000000035FF44 string=0x000000000035FF48 "*"
 *   insn=0x000000000035FF48 string=0x000000000035FF4C "J=G"
 *   insn=0x000000000035FF4C string=0x000000000035FF50 ")!"
 *   insn=0x000000000035FF54 string=0x000000000035FF58 "*"
 *   insn=0x000000000035FF58 string=0x000000000035FF5C "K"
 *   insn=0x000000000035FF5C string=0x000000000035FF60 "+"
 *   insn=0x000000000035FF74 string=0x000000000035FF78 ")"
 *   insn=0x000000000035FF7C string=0x000000000035FF80 "Q"
 *   insn=0x000000000035FF84 string=0x000000000035FF88 "K"
 *   insn=0x000000000035FF88 string=0x000000000035FF8C "+"
 *   insn=0x000000000035FF8C string=0x000000000035FF90 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_35FB04(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x20
  void *v3; // x0
  _QWORD *v4; // x21
  __int64 v5; // x8
  void *v6; // x0
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  __int64 v12[3]; // [xsp+60h] [xbp-48h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)v12, "gameController");
  v2 = Caver::ProgramTable::PointerForKey();
  v3 = (void *)(v12[0] - 24);
  if ( (__int64 *)(v12[0] - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v8 = (unsigned int *)(v12[0] - 8);
  if ( &pthread_create )
  {
    do
      v9 = __ldaxr(v8);
    while ( __stlxr(v9 - 1, v8) );
  }
  else
  {
    v9 = (*v8)--;
  }
  if ( v9 > 0 )
  {
LABEL_2:
    v4 = *(_QWORD **)(v2 + 176);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    operator delete(v3);
    v4 = *(_QWORD **)(v2 + 176);
    if ( !v4 )
      goto LABEL_6;
  }
  if ( !v4[1] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    v5 = v4[2] - 1LL;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  }
LABEL_6:
  Caver::ProgramState::StringAtStackIndex(v12, v1, 1);
  Caver::StateProperties::AddFlag();
  v6 = (void *)(v12[0] - 24);
  if ( (__int64 *)(v12[0] - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v12[0] - 8);
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
      operator delete(v6);
  }
  return 0;
}

