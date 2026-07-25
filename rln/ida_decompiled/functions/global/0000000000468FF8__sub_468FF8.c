/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000468FF8
 * Mangled: sub_468FF8
 * Demangled: sub_468FF8
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x0000000000200500  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::find(std::string const&)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x0000000000469008 string=0x000000000046900C "U"
 *   insn=0x0000000000469018 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000469020 string=0x00000000005834B5 "scene"
 *   insn=0x0000000000469030 string=0x0000000000469034 "`"
 *   insn=0x0000000000469038 string=0x000000000046903C "Q^"
 *   insn=0x0000000000469064 string=0x0000000000469068 "6f"
 *   insn=0x0000000000469070 string=0x0000000000469074 "#]"
 *   insn=0x000000000046907C string=0x0000000000469080 "`"
 *   insn=0x0000000000469084 string=0x0000000000469088 "4"
 *   insn=0x000000000046908C string=0x0000000000469090 ""
 *   insn=0x00000000004690A4 string=0x00000000004690A8 ""
 *   insn=0x00000000004690B4 string=0x00000000004690B8 ""
 *   insn=0x00000000004690E8 string=0x00000000004690EC "!"
 *   insn=0x00000000004690EC string=0x0000000000469190 "P4"
 *   insn=0x0000000000469108 string=0x000000000046910C ")=G"
 *   insn=0x000000000046910C string=0x0000000000469110 "!"
 *   insn=0x0000000000469114 string=0x0000000000469118 "\t"
 *   insn=0x0000000000469114 string=0x0000000000469150 "\t"
 *   insn=0x0000000000469118 string=0x000000000046911C "*"
 *   insn=0x000000000046911C string=0x0000000000469120 "\n"
 *   insn=0x0000000000469124 string=0x0000000000469128 ""
 *   insn=0x0000000000469128 string=0x000000000046915C "?"
 *   insn=0x000000000046912C string=0x0000000000469130 ")=G"
 *   insn=0x0000000000469130 string=0x0000000000469134 "!"
 *   insn=0x0000000000469138 string=0x000000000046913C "\t"
 *   insn=0x0000000000469138 string=0x0000000000469170 "\t"
 *   insn=0x000000000046913C string=0x0000000000469140 "*"
 *   insn=0x0000000000469140 string=0x0000000000469144 "\n"
 *   insn=0x000000000046914C string=0x000000000046917C "?"
 *   insn=0x0000000000469150 string=0x0000000000469154 "*"
 *   insn=0x0000000000469154 string=0x0000000000469158 "\n"
 *   insn=0x0000000000469170 string=0x0000000000469174 "*"
 *   insn=0x0000000000469174 string=0x0000000000469178 "\n"
 *   insn=0x0000000000469190 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000469198 string=0x000000000046919C ""
 *   insn=0x00000000004691A0 string=0x00000000004691A4 "a"
 *   insn=0x00000000004691A8 string=0x00000000004691AC ""
 *   insn=0x00000000004691C4 string=0x00000000004691C8 "J"
 *   insn=0x00000000004691CC string=0x00000000004691D0 "(a"
 *   insn=0x00000000004691DC string=0x00000000004691E0 "J=G"
 *   insn=0x00000000004691E0 string=0x00000000004691E4 ")!"
 *   insn=0x00000000004691E4 string=0x00000000004691E8 "J"
 *   insn=0x00000000004691E8 string=0x00000000004691EC "*"
 *   insn=0x00000000004691E8 string=0x0000000000469210 "*"
 *   insn=0x00000000004691EC string=0x00000000004691F0 "K"
 *   insn=0x00000000004691F0 string=0x00000000004691F4 "+"
 *   insn=0x00000000004691F8 string=0x00000000004691FC "_"
 *   insn=0x000000000046920C string=0x000000000046926C "N"
 *   insn=0x0000000000469210 string=0x0000000000469214 "K"
 *   insn=0x0000000000469214 string=0x0000000000469218 "+"
 *   insn=0x0000000000469218 string=0x000000000046921C "_"
 *   insn=0x000000000046921C string=0x0000000000469220 "-"
 *   insn=0x0000000000469240 string=0x0000000000469244 ")=G"
 *   insn=0x0000000000469244 string=0x0000000000469248 "!"
 *   insn=0x0000000000469248 string=0x000000000046924C "i"
 *   insn=0x000000000046924C string=0x0000000000469250 "\t"
 *   insn=0x000000000046924C string=0x0000000000469278 "\t"
 *   insn=0x0000000000469250 string=0x0000000000469254 "*"
 *   insn=0x0000000000469254 string=0x0000000000469258 "\n"
 *   insn=0x000000000046925C string=0x0000000000469260 "?"
 *   insn=0x0000000000469260 string=0x0000000000469264 "l"
 *   insn=0x0000000000469278 string=0x000000000046927C "*"
 *   insn=0x000000000046927C string=0x0000000000469280 "\n"
 *   insn=0x0000000000469280 string=0x0000000000469284 "?"
 *   insn=0x0000000000469284 string=0x0000000000469288 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_468FF8(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x20
  void *v3; // x0
  __int64 v4; // x0
  Caver::SceneObject *v5; // x2
  Caver::ProgramState *v6; // x20
  int v7; // w8
  unsigned int v8; // w19
  void *v9; // x0
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15[3]; // [xsp+8h] [xbp-38h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)v15, "scene");
  v2 = Caver::ProgramTable::PointerForKey();
  v3 = (void *)(v15[0] - 24);
  if ( (__int64 *)(v15[0] - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15[0] - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v3);
  }
  Caver::ProgramState::StringAtStackIndex(v15, v1, 1);
  v4 = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::find();
  if ( v2 + 184 == v4 || (v6 = *(Caver::ProgramState **)(v4 + 40)) == 0 )
  {
    v8 = 0;
  }
  else
  {
    ++*((_DWORD *)v6 + 2);
    Caver::SceneObjectLib::PushSceneObject(v1, v6, v5);
    v7 = *((_DWORD *)v6 + 2) - 1;
    *((_DWORD *)v6 + 2) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(Caver::ProgramState *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = 1;
  }
  v9 = (void *)(v15[0] - 24);
  if ( (__int64 *)(v15[0] - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v15[0] - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v9);
  }
  return v8;
}

