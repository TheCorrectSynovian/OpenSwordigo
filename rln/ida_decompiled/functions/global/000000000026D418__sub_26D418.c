/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D418
 * Mangled: sub_26D418
 * Demangled: sub_26D418
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
 *   insn=0x000000000026D428 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D434 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D448 string=0x000000000026D44C "!"
 *   insn=0x000000000026D44C string=0x000000000026D450 "dL"
 *   insn=0x000000000026D450 string=0x000000000026D454 "@"
 *   insn=0x000000000026D454 string=0x000000000026D458 ""
 *   insn=0x000000000026D460 string=0x000000000026D464 "O<"
 *   insn=0x000000000026D464 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D418(void *a1)
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
        v3 = *(float *)(v5 + 228);
    }
  }
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

