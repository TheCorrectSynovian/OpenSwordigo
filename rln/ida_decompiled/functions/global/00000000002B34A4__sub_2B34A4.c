/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B34A4
 * Mangled: sub_2B34A4
 * Demangled: sub_2B34A4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200AD0  Caver::DoorControllerComponent::Open(void)
 *   0x00000000002B3814  Caver::DoorControllerComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002B34AC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002B34B4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002B34C4 string=0x00000000002B34C8 "!,D"
 *   insn=0x00000000002B34C8 string=0x00000000002B34CC "E4"
 *   insn=0x00000000002B34CC string=0x00000000002B34D0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2B34A4(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  Caver::DoorControllerComponent *v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (Caver::DoorControllerComponent *)Caver::SceneObject::ComponentWithInterface(
                                               v3,
                                               (__int64)Caver::DoorControllerComponent::Interface);
      if ( v4 )
        Caver::DoorControllerComponent::Open(v4);
    }
  }
  return 0;
}

