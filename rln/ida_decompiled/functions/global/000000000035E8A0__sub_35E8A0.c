/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035E8A0
 * Mangled: sub_35E8A0
 * Demangled: sub_35E8A0
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F84A0  Caver::GameState::StateForQuestWithName(std::string const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x000000000035E8B4 string=0x000000000035E8B8 "V"
 *   insn=0x000000000035E8C4 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000035E8CC string=0x000000000058F176 "gameController"
 *   insn=0x000000000035E8DC string=0x000000000035E8E0 "`"
 *   insn=0x000000000035E8E4 string=0x000000000035E8E8 "&"
 *   insn=0x000000000035E8F0 string=0x000000000035E8F4 "7"
 *   insn=0x000000000035E904 string=0x000000000035E9C0 ")"
 *   insn=0x000000000035E91C string=0x000000000035E920 "\t@"
 *   insn=0x000000000035E928 string=0x000000000035E92C ""
 *   insn=0x000000000035E93C string=0x000000000035E940 "@"
 *   insn=0x000000000035E960 string=0x00000000001F84A0 "0'"
 *   insn=0x000000000035E964 string=0x000000000035E968 " @9"
 *   insn=0x000000000035E97C string=0x000000000035E980 "4"
 *   insn=0x000000000035E990 string=0x000000000035E9E4 ")"
 *   insn=0x000000000035E9A0 string=0x000000000035EA50 " ^"
 *   insn=0x000000000035E9C0 string=0x000000000035E9C4 ")=G"
 *   insn=0x000000000035E9C4 string=0x000000000035E9C8 "!"
 *   insn=0x000000000035E9CC string=0x000000000035E9D0 "\t"
 *   insn=0x000000000035E9CC string=0x000000000035EA08 "\t"
 *   insn=0x000000000035E9D0 string=0x000000000035E9D4 "*"
 *   insn=0x000000000035E9D4 string=0x000000000035E9D8 "\n"
 *   insn=0x000000000035E9DC string=0x000000000035E9E0 ""
 *   insn=0x000000000035E9E0 string=0x000000000035EA14 "?"
 *   insn=0x000000000035E9E4 string=0x000000000035E9E8 ")=G"
 *   insn=0x000000000035E9E8 string=0x000000000035E9EC "!"
 *   insn=0x000000000035E9EC string=0x000000000035E9F0 "\t"
 *   insn=0x000000000035E9F0 string=0x000000000035E9F4 "\t"
 *   insn=0x000000000035E9F0 string=0x000000000035EA30 "\t"
 *   insn=0x000000000035E9F4 string=0x000000000035E9F8 "*"
 *   insn=0x000000000035E9F8 string=0x000000000035E9FC "\n"
 *   insn=0x000000000035EA04 string=0x000000000035EA3C "?"
 *   insn=0x000000000035EA08 string=0x000000000035EA0C "*"
 *   insn=0x000000000035EA0C string=0x000000000035EA10 "\n"
 *   insn=0x000000000035EA1C string=0x000000000035EA20 "a."
 *   insn=0x000000000035EA24 string=0x000000000035EA28 "U"
 *   insn=0x000000000035EA30 string=0x000000000035EA34 "*"
 *   insn=0x000000000035EA34 string=0x000000000035EA38 "\n"
 *   insn=0x000000000035EA44 string=0x000000000035EA48 "W."
 *   insn=0x000000000035EA50 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035EA54 string=0x000000000035EA58 "*"
 *   insn=0x000000000035EA58 string=0x000000000035EA5C "J"
 *   insn=0x000000000035EA60 string=0x000000000035EA64 "(a"
 *   insn=0x000000000035EA6C string=0x000000000035EA70 "*"
 *   insn=0x000000000035EA70 string=0x000000000035EA74 "J=G"
 *   insn=0x000000000035EA74 string=0x000000000035EA78 ")!"
 *   insn=0x000000000035EA78 string=0x000000000035EA7C "j"
 *   insn=0x000000000035EA7C string=0x000000000035EA80 "*"
 *   insn=0x000000000035EA7C string=0x000000000035EAE8 "*"
 *   insn=0x000000000035EA80 string=0x000000000035EA84 "K"
 *   insn=0x000000000035EA84 string=0x000000000035EA88 "+"
 *   insn=0x000000000035EA90 string=0x000000000035EACC "_"
 *   insn=0x000000000035EA9C string=0x000000000035EAA0 "(a"
 *   insn=0x000000000035EAA8 string=0x000000000035EAAC "*"
 *   insn=0x000000000035EAAC string=0x000000000035EAB0 "J=G"
 *   insn=0x000000000035EAB0 string=0x000000000035EAB4 ")!"
 *   insn=0x000000000035EAB8 string=0x000000000035EABC "*"
 *   insn=0x000000000035EABC string=0x000000000035EAC0 "K"
 *   insn=0x000000000035EAC0 string=0x000000000035EAC4 "+"
 *   insn=0x000000000035EAD8 string=0x000000000035EADC "2."
 *   insn=0x000000000035EAE0 string=0x000000000035EAE4 "x"
 *   insn=0x000000000035EAE8 string=0x000000000035EAEC "K"
 *   insn=0x000000000035EAEC string=0x000000000035EAF0 "+"
 *   insn=0x000000000035EAF0 string=0x000000000035EAF4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_35E8A0(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x20
  void *v3; // x0
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x0
  bool v7; // w1
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
  if ( (__int64 *)(v14[0] - 24) == &qword_6FD2E0 )
    goto LABEL_2;
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
  if ( v11 > 0 )
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
  Caver::ProgramState::StringAtStackIndex(v14, v1, 1);
  v6 = Caver::GameState::StateForQuestWithName();
  if ( v6 )
    v7 = *(_BYTE *)(v6 + 8) != 0;
  else
    v7 = 0;
  Caver::ProgramState::PushBool(v1, v7);
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

