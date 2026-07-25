/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D5E0
 * Mangled: sub_26D5E0
 * Demangled: sub_26D5E0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000026D5E8 string=0x000000000026D5EC "}7"
 *   insn=0x000000000026D5EC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D5F4 string=0x000000000026D5F8 "f<"
 *   insn=0x000000000026D5F8 string=0x000000000026D5FC "`"
 *   insn=0x000000000026D5F8 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D600 string=0x000000000026D604 " "
 *   insn=0x000000000026D608 string=0x000000000026D60C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_26D5E0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
      if ( v4 )
        Caver::ProgramState::PushBool(v1, *(_BYTE *)(v4 + 288));
    }
  }
}

