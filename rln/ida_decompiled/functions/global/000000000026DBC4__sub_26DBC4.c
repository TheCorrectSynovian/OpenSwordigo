/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026DBC4
 * Mangled: sub_26DBC4
 * Demangled: sub_26DBC4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000026DBD0 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026DBDC string=0x00000000001FC790 "0'"
 *   insn=0x000000000026DBEC string=0x000000000026DBF0 "!"
 *   insn=0x000000000026DBF0 string=0x000000000026DBF4 "{J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_26DBC4(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  Caver::SceneObject *v5; // x2
  Caver::ProgramState *v6; // x1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
      if ( v4 )
      {
        v6 = *(Caver::ProgramState **)(v4 + 240);
        if ( v6 )
          Caver::SceneObjectLib::PushSceneObject(v1, v6, v5);
      }
    }
  }
}

