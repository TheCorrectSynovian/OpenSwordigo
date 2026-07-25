/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D348
 * Mangled: sub_26D348
 * Demangled: sub_26D348
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000026D354 string=0x000000000026D358 ""8"
 *   insn=0x000000000026D358 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D360 string=0x000000000026D364 "="
 *   insn=0x000000000026D364 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D378 string=0x000000000026D37C "!"
 *   insn=0x000000000026D380 string=0x000000000026D384 "@"
 *   insn=0x000000000026D384 string=0x000000000026D388 ""
 *   insn=0x000000000026D394 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D348(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  float v3; // s8
  Caver::SceneObject *v4; // x0
  __int64 v5; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = 0.0;
  if ( v2 )
  {
    v4 = *v2;
    if ( v4 )
    {
      v5 = Caver::SceneObject::ComponentWithInterface(v4, (__int64)Caver::EntityControllerComponent::Interface);
      if ( v5 )
        v3 = *(float *)(v5 + 224);
    }
  }
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

