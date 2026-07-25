/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476844
 * Mangled: _ZN5Caver14SceneObjectLib15PushSceneObjectEPNS_12ProgramStateEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Callers: 1
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Callees: 12
 *   0x00000000001F5610  Caver::ProgramState::Pop(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8F00  lua_rawset(lua_State *,int)
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x00000000001FE9A0  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *   0x0000000000200A30  lua_getfenv(lua_State *,int)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 42
 *   insn=0x0000000000476854 string=0x0000000000476858 "U"
 *   insn=0x000000000047686C string=0x0000000000476870 "h\n@"
 *   insn=0x0000000000476870 string=0x0000000000476874 ""
 *   insn=0x0000000000476874 string=0x0000000000476878 "h\n"
 *   insn=0x000000000047687C string=0x000000000058BB2C "SceneObject"
 *   insn=0x0000000000476898 string=0x000000000047689C "A "
 *   insn=0x00000000004768A4 string=0x00000000004768A8 "i"
 *   insn=0x00000000004768A8 string=0x00000000004768AC ")"
 *   insn=0x00000000004768B4 string=0x00000000004768B8 "A"
 *   insn=0x00000000004768B8 string=0x00000000004768E0 "i"
 *   insn=0x00000000004768C8 string=0x0000000000476924 "k"
 *   insn=0x00000000004768E0 string=0x00000000004768E4 ")=G"
 *   insn=0x00000000004768E4 string=0x00000000004768E8 "!"
 *   insn=0x00000000004768EC string=0x00000000004768F0 "\t"
 *   insn=0x00000000004768EC string=0x0000000000476904 "\t"
 *   insn=0x00000000004768F0 string=0x00000000004768F4 "*"
 *   insn=0x00000000004768F4 string=0x00000000004768F8 "\n"
 *   insn=0x0000000000476900 string=0x0000000000476910 "?"
 *   insn=0x0000000000476904 string=0x0000000000476908 "*"
 *   insn=0x0000000000476908 string=0x000000000047690C "\n"
 *   insn=0x0000000000476910 string=0x0000000000476914 "L"
 *   insn=0x0000000000476924 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000476928 string=0x000000000047692C "j"
 *   insn=0x000000000047692C string=0x0000000000476930 "J"
 *   insn=0x0000000000476934 string=0x0000000000476938 "(a"
 *   insn=0x0000000000476940 string=0x0000000000476944 "j"
 *   insn=0x0000000000476944 string=0x0000000000476948 "J=G"
 *   insn=0x0000000000476948 string=0x000000000047694C ")!"
 *   insn=0x0000000000476950 string=0x0000000000476954 "*"
 *   insn=0x0000000000476950 string=0x0000000000476980 "*"
 *   insn=0x0000000000476954 string=0x0000000000476958 "K"
 *   insn=0x0000000000476958 string=0x000000000047695C "+"
 *   insn=0x0000000000476960 string=0x0000000000476964 "_"
 *   insn=0x0000000000476980 string=0x0000000000476984 "K"
 *   insn=0x0000000000476984 string=0x0000000000476988 "+"
 *   insn=0x0000000000476988 string=0x000000000047698C "_"
 *   insn=0x00000000004769AC string=0x00000000004769B0 "t("
 *   insn=0x00000000004769CC string=0x00000000004769D0 "x/"
 *   insn=0x00000000004769D8 string=0x00000000004769DC "I\t"
 *   insn=0x00000000004769DC string=0x00000000001F8F00 "0'"
 *   insn=0x00000000004769EC string=0x00000000004769F0 ""
 *   insn=0x00000000004769F0 string=0x00000000001F5610 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectLib::PushSceneObject(
        Caver::SceneObjectLib *this,
        Caver::ProgramState *a2,
        Caver::SceneObject *a3)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+28h] [xbp-38h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  sub_566BB8((int)v7, "SceneObject");
  *(_QWORD *)Caver::ProgramState::NewUserData() = a2;
  v4 = (void *)(v7[0] - 24LL);
  if ( (__int64 *)(v7[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v7[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v4);
  }
}

