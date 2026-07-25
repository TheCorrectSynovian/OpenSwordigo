/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000290364
 * Mangled: sub_290364
 * Demangled: sub_290364
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFCD0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000290370 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000029037C string=0x0000000000290380 " "
 *   insn=0x000000000029037C string=0x00000000001FC790 "0'"
 *   insn=0x000000000029038C string=0x0000000000290390 "!4D"
 *   insn=0x0000000000290390 string=0x00000000002821FC " #"
 *   insn=0x0000000000290394 string=0x0000000000290398 "`"
 *   insn=0x00000000002903A0 string=0x00000000002903A4 "h\n@"
 *   insn=0x00000000002903A4 string=0x00000000002903A8 ""
 *   insn=0x00000000002903A8 string=0x00000000002903AC "h\n"
 *   insn=0x00000000002903B8 string=0x00000000002903BC "3"
 *   insn=0x00000000002903BC string=0x00000000002903C0 "h\n@"
 *   insn=0x00000000002903C0 string=0x00000000002903C4 ""
 *   insn=0x00000000002903C4 string=0x00000000002903C8 "h\n"
 *   insn=0x00000000002903CC string=0x00000000002903D0 "h"
 *   insn=0x00000000002903D4 string=0x00000000002903D8 ""
 *   insn=0x00000000002903F0 string=0x00000000002903F4 "3"
 *   insn=0x00000000002903F4 string=0x00000000002903F8 "h\n@"
 *   insn=0x00000000002903F8 string=0x00000000002903FC ""
 *   insn=0x00000000002903FC string=0x0000000000290400 "h\n"
 *   insn=0x0000000000290404 string=0x0000000000290408 "h"
 *   insn=0x0000000000290408 string=0x000000000029040C ""
 *   insn=0x0000000000290418 string=0x000000000029041C "*"
 *   insn=0x0000000000290430 string=0x0000000000290434 "T"
 *   insn=0x000000000029044C string=0x0000000000290450 " "
 *   insn=0x000000000029045C string=0x0000000000290460 "!4D"
 *   insn=0x0000000000290460 string=0x0000000000290464 "_"
 *   insn=0x0000000000290468 string=0x000000000029046C "H"
 *   insn=0x0000000000290474 string=0x0000000000290478 "\t@"
 *   insn=0x0000000000290478 string=0x000000000029047C ")"
 *   insn=0x000000000029047C string=0x0000000000290480 "\t"
 *   insn=0x0000000000290490 string=0x0000000000290494 "!"
 *   insn=0x00000000002904A4 string=0x00000000002904A8 "@"
 *   insn=0x00000000002904A8 string=0x00000000002904AC ""
 *   insn=0x00000000002904AC string=0x00000000002904B0 ""
 *   insn=0x00000000002904B4 string=0x00000000002904B8 ""
 *   insn=0x00000000002904B8 string=0x00000000002904BC ""
 *   insn=0x00000000002904E0 string=0x00000000002904F4 "w"
 *   insn=0x00000000002904F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_290364(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  Caver::SceneObject *v5; // x2
  Caver::ProgramState *v6; // x19
  int v7; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::SpellComponent::Interface);
      if ( v4 )
      {
        v6 = *(Caver::ProgramState **)(v4 + 112);
        if ( v6 )
          ++*((_DWORD *)v6 + 2);
        Caver::SceneObjectLib::PushSceneObject(v1, v6, v5);
        if ( v6 )
        {
          v7 = *((_DWORD *)v6 + 2) - 1;
          *((_DWORD *)v6 + 2) = v7;
          if ( !v7 )
            (*(void (__fastcall **)(Caver::ProgramState *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
    }
  }
}

