/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F32C
 * Mangled: sub_28F32C
 * Demangled: sub_28F32C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4090  Caver::SkillComponent::FinishCasting(void)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000028F8F8  Caver::SkillComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000028F330 string=0x000000000028F334 "+"
 *   insn=0x000000000028F334 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000028F33C string=0x00000000001FC790 "0'"
 *   insn=0x000000000028F34C string=0x000000000028F350 "!pG"
 *   insn=0x000000000028F354 string=0x000000000028F358 "@"
 *   insn=0x000000000028F358 string=0x000000000028F35C "M"
 *   insn=0x000000000028F35C string=0x00000000001F4090 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_28F32C(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  Caver::SkillComponent *v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (Caver::SkillComponent *)Caver::SceneObject::ComponentWithInterface(
                                      v3,
                                      (__int64)Caver::SkillComponent::Interface);
      if ( v4 )
        Caver::SkillComponent::FinishCasting(v4);
    }
  }
  return 0;
}

