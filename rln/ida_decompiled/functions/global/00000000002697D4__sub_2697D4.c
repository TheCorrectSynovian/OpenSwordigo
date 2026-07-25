/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002697D4
 * Mangled: sub_2697D4
 * Demangled: sub_2697D4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 9
 *   insn=0x00000000002697E0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002697EC string=0x00000000002697F0 "`"
 *   insn=0x00000000002697EC string=0x00000000001FC790 "0'"
 *   insn=0x00000000002697F4 string=0x00000000002697F8 " "
 *   insn=0x00000000002697FC string=0x0000000000269800 "!0F"
 *   insn=0x0000000000269800 string=0x0000000000269804 "w["
 *   insn=0x0000000000269800 string=0x000000000026168C " $"
 *   insn=0x0000000000269820 string=0x0000000000269824 "  "
 *   insn=0x0000000000269828 string=0x000000000026982C "@B9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2697D4(void *a1)
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
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityComponent::Interface)) != 0
    && *(float *)(v4 + 128) < 0.1
    && *(float *)(v4 + 140) > 0.0
    && *(_BYTE *)(v4 + 144) == 0;
  Caver::ProgramState::PushBool(v1, v5);
  return 1;
}

