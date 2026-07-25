/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047736C
 * Mangled: sub_47736C
 * Demangled: sub_47736C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Referenced strings: 5
 *   insn=0x0000000000477378 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477384 string=0x0000000000477388 "@"
 *   insn=0x0000000000477384 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477390 string=0x0000000000477394 ""
 *   insn=0x0000000000477394 string=0x0000000000477398 "\t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_47736C(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x0
  Caver::ProgramState *v4; // x0
  Caver::SceneObject *v5; // x2

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (Caver::ProgramState *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      Caver::SceneObjectLib::PushSceneObject(v1, v4, v5);
    }
  }
}

