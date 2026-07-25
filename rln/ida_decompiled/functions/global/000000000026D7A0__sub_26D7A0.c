/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D7A0
 * Mangled: sub_26D7A0
 * Demangled: sub_26D7A0
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
 *   insn=0x000000000026D7A8 string=0x000000000026D7AC "7"
 *   insn=0x000000000026D7AC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D7B8 string=0x000000000026D7BC "`"
 *   insn=0x000000000026D7B8 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D7C0 string=0x000000000026D7C4 " "
 *   insn=0x000000000026D7C8 string=0x000000000026D7CC "!"
 *   insn=0x000000000026D7D4 string=0x000000000026D7D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D7A0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  bool v5; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5 = v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface)) != 0
    && *(_DWORD *)(v4 + 192) != 0;
  Caver::ProgramState::PushBool(v1, v5);
  return 1;
}

