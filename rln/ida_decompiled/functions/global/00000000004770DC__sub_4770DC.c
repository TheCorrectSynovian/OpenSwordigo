/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004770DC
 * Mangled: sub_4770DC
 * Demangled: sub_4770DC
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F51C0  Caver::ComponentFactory::sharedManager(void)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6570  Caver::ComponentFactory::NewComponentWithClassName(std::string const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 68
 *   insn=0x00000000004770EC string=0x00000000004770F0 "U"
 *   insn=0x00000000004770FC string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477108 string=0x000000000047710C "`"
 *   insn=0x0000000000477108 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477124 string=0x0000000000477128 "@"
 *   insn=0x000000000047712C string=0x0000000000477130 "S"
 *   insn=0x0000000000477130 string=0x0000000000477134 "`"
 *   insn=0x0000000000477144 string=0x00000000001FDFE0 "0'"
 *   insn=0x000000000047714C string=0x0000000000477150 "h\n@"
 *   insn=0x0000000000477150 string=0x0000000000477154 ""
 *   insn=0x0000000000477154 string=0x0000000000477158 "h\n"
 *   insn=0x0000000000477160 string=0x0000000000477164 ""
 *   insn=0x0000000000477164 string=0x00000000001F6190 "0'"
 *   insn=0x0000000000477168 string=0x000000000047716C "`"
 *   insn=0x000000000047716C string=0x0000000000477170 "@"
 *   insn=0x0000000000477170 string=0x0000000000477174 ""
 *   insn=0x0000000000477174 string=0x0000000000477178 ""
 *   insn=0x000000000047717C string=0x0000000000477180 ""
 *   insn=0x0000000000477180 string=0x0000000000477184 ""
 *   insn=0x00000000004771A4 string=0x00000000004771C0 "D"
 *   insn=0x00000000004771C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004771C8 string=0x00000000004771CC "("
 *   insn=0x00000000004771CC string=0x00000000004771D0 "\t\t@"
 *   insn=0x00000000004771D0 string=0x00000000004771D4 ")"
 *   insn=0x00000000004771D4 string=0x00000000004771D8 "\t\t"
 *   insn=0x00000000004771DC string=0x00000000004771E0 "\t"
 *   insn=0x00000000004771E0 string=0x00000000004771E4 ")"
 *   insn=0x00000000004771E8 string=0x00000000004771EC " "
 *   insn=0x00000000004771F4 string=0x00000000004771F8 "U\"
 *   insn=0x000000000047720C string=0x0000000000477210 "U"
 *   insn=0x0000000000477218 string=0x000000000047721C "q"
 *   insn=0x0000000000477224 string=0x0000000000477228 "Z"
 *   insn=0x0000000000477228 string=0x000000000047722C "`"
 *   insn=0x0000000000477248 string=0x000000000047724C "S"
 *   insn=0x0000000000477250 string=0x0000000000477254 ""
 *   insn=0x000000000047725C string=0x00000000001F51C0 "P'"
 *   insn=0x0000000000477264 string=0x00000000001F6570 "0'"
 *   insn=0x0000000000477270 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000477274 string=0x0000000000477278 "i"
 *   insn=0x0000000000477278 string=0x000000000047727C ")"
 *   insn=0x0000000000477284 string=0x0000000000477288 "a"
 *   insn=0x0000000000477288 string=0x00000000004772B4 "i"
 *   insn=0x00000000004772B4 string=0x00000000004772B8 ")=G"
 *   insn=0x00000000004772B8 string=0x00000000004772BC "!"
 *   insn=0x00000000004772C0 string=0x00000000004772C4 "\t"
 *   insn=0x00000000004772C0 string=0x00000000004772D8 "\t"
 *   insn=0x00000000004772C4 string=0x00000000004772C8 "*"
 *   insn=0x00000000004772C8 string=0x00000000004772CC "\n"
 *   insn=0x00000000004772D4 string=0x00000000004772E4 "?"
 *   insn=0x00000000004772D8 string=0x00000000004772DC "*"
 *   insn=0x00000000004772DC string=0x00000000004772E0 "\n"
 *   insn=0x00000000004772E4 string=0x00000000004772E8 ","
 *   insn=0x00000000004772EC string=0x00000000004772F0 "-"
 *   insn=0x00000000004772FC string=0x0000000000477300 "j"
 *   insn=0x0000000000477300 string=0x0000000000477304 "J"
 *   insn=0x0000000000477308 string=0x000000000047730C "(a"
 *   insn=0x0000000000477314 string=0x0000000000477318 "j"
 *   insn=0x0000000000477318 string=0x000000000047731C "J=G"
 *   insn=0x000000000047731C string=0x0000000000477320 ")!"
 *   insn=0x0000000000477324 string=0x0000000000477328 "*"
 *   insn=0x0000000000477324 string=0x0000000000477354 "*"
 *   insn=0x0000000000477328 string=0x000000000047732C "K"
 *   insn=0x000000000047732C string=0x0000000000477330 "+"
 *   insn=0x0000000000477334 string=0x0000000000477338 "_"
 *   insn=0x000000000047734C string=0x0000000000477350 "])"
 *   insn=0x0000000000477354 string=0x0000000000477358 "K"
 *   insn=0x0000000000477358 string=0x000000000047735C "+"
 *   insn=0x000000000047735C string=0x0000000000477360 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4770DC(void *a1)
{
  Caver::ProgramState *v1; // x20
  __int64 *v2; // x0
  __int64 v3; // x19
  __int64 *v4; // x0
  __int64 v5; // x20
  Caver::SceneObject *v6; // x0
  int v7; // w8

  _ReadStatusReg(TPIDR_EL0);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v4 )
  {
    v5 = *v4;
    if ( !v3 )
      return 0;
  }
  else
  {
    v5 = 0;
    if ( !v3 )
      return 0;
  }
  v6 = *(Caver::SceneObject **)(v3 + 48);
  if ( v6 )
    Caver::SceneObject::RemoveChildObject(v6, (Caver::SceneObject *)v3, 0);
  if ( v5 )
  {
    ++*(_DWORD *)(v3 + 8);
    Caver::SceneObject::AddChildObject();
    v7 = *(_DWORD *)(v3 + 8) - 1;
    *(_DWORD *)(v3 + 8) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return 0;
}

