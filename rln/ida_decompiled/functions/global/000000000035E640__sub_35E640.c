/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035E640
 * Mangled: sub_35E640
 * Demangled: sub_35E640
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
 * Referenced strings: 59
 *   insn=0x000000000035E654 string=0x000000000035E658 "V"
 *   insn=0x000000000035E660 string=0x000000000035E664 "_s"
 *   insn=0x000000000035E664 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000035E66C string=0x000000000058F176 "gameController"
 *   insn=0x000000000035E678 string=0x000000000035E67C "O!"
 *   insn=0x000000000035E67C string=0x000000000035E680 "`"
 *   insn=0x000000000035E690 string=0x000000000035E694 "7"
 *   insn=0x000000000035E6A4 string=0x000000000035E760 ")"
 *   insn=0x000000000035E6BC string=0x000000000035E6C0 "\t@"
 *   insn=0x000000000035E6C8 string=0x000000000035E6CC ""
 *   insn=0x000000000035E6DC string=0x000000000035E6E0 "@"
 *   insn=0x000000000035E6FC string=0x000000000035E700 "hg"
 *   insn=0x000000000035E700 string=0x00000000001F84A0 "0'"
 *   insn=0x000000000035E704 string=0x000000000035E708 " @9"
 *   insn=0x000000000035E730 string=0x000000000035E784 ")"
 *   insn=0x000000000035E760 string=0x000000000035E764 ")=G"
 *   insn=0x000000000035E764 string=0x000000000035E768 "!"
 *   insn=0x000000000035E76C string=0x000000000035E770 "\t"
 *   insn=0x000000000035E76C string=0x000000000035E7A8 "\t"
 *   insn=0x000000000035E770 string=0x000000000035E774 "*"
 *   insn=0x000000000035E774 string=0x000000000035E778 "\n"
 *   insn=0x000000000035E77C string=0x000000000035E780 ""
 *   insn=0x000000000035E780 string=0x000000000035E7B4 "?"
 *   insn=0x000000000035E784 string=0x000000000035E788 ")=G"
 *   insn=0x000000000035E788 string=0x000000000035E78C "!"
 *   insn=0x000000000035E78C string=0x000000000035E790 "\t"
 *   insn=0x000000000035E790 string=0x000000000035E794 "\t"
 *   insn=0x000000000035E790 string=0x000000000035E7D0 "\t"
 *   insn=0x000000000035E794 string=0x000000000035E798 "*"
 *   insn=0x000000000035E798 string=0x000000000035E79C "\n"
 *   insn=0x000000000035E7A4 string=0x000000000035E7DC "?"
 *   insn=0x000000000035E7A8 string=0x000000000035E7AC "*"
 *   insn=0x000000000035E7AC string=0x000000000035E7B0 "\n"
 *   insn=0x000000000035E7C4 string=0x000000000035E7C8 "U"
 *   insn=0x000000000035E7D0 string=0x000000000035E7D4 "*"
 *   insn=0x000000000035E7D4 string=0x000000000035E7D8 "\n"
 *   insn=0x000000000035E7F0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035E7F4 string=0x000000000035E7F8 "*"
 *   insn=0x000000000035E7F8 string=0x000000000035E7FC "J"
 *   insn=0x000000000035E800 string=0x000000000035E804 "(a"
 *   insn=0x000000000035E80C string=0x000000000035E810 "*"
 *   insn=0x000000000035E810 string=0x000000000035E814 "J=G"
 *   insn=0x000000000035E814 string=0x000000000035E818 ")!"
 *   insn=0x000000000035E818 string=0x000000000035E81C "j"
 *   insn=0x000000000035E81C string=0x000000000035E820 "*"
 *   insn=0x000000000035E81C string=0x000000000035E888 "*"
 *   insn=0x000000000035E820 string=0x000000000035E824 "K"
 *   insn=0x000000000035E824 string=0x000000000035E828 "+"
 *   insn=0x000000000035E830 string=0x000000000035E86C "_"
 *   insn=0x000000000035E83C string=0x000000000035E840 "(a"
 *   insn=0x000000000035E848 string=0x000000000035E84C "*"
 *   insn=0x000000000035E84C string=0x000000000035E850 "J=G"
 *   insn=0x000000000035E850 string=0x000000000035E854 ")!"
 *   insn=0x000000000035E858 string=0x000000000035E85C "*"
 *   insn=0x000000000035E85C string=0x000000000035E860 "K"
 *   insn=0x000000000035E860 string=0x000000000035E864 "+"
 *   insn=0x000000000035E888 string=0x000000000035E88C "K"
 *   insn=0x000000000035E88C string=0x000000000035E890 "+"
 *   insn=0x000000000035E890 string=0x000000000035E894 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_35E640(void *a1)
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
    v7 = *(_BYTE *)(v6 + 8) == 0;
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

