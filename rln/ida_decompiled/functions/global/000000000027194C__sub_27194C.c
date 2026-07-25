/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027194C
 * Mangled: sub_27194C
 * Demangled: sub_27194C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000027195C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271968 string=0x00000000001FC790 "0'"
 *   insn=0x000000000027197C string=0x0000000000271980 "!(B"
 *   insn=0x0000000000271980 string=0x000000000021C13C "@&"
 *   insn=0x000000000027199C string=0x00000000002719A0 "A"
 *   insn=0x00000000002719A0 string=0x00000000002719A4 ""
 *   insn=0x00000000002719B0 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27194C(void *a1)
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
      v5 = Caver::SceneObject::ComponentWithInterface(v4, (__int64)Caver::HealthComponent::Interface);
      if ( v5 )
        v3 = (float)((float)*(int *)(v5 + 128) * 100.0) / (float)*(int *)(v5 + 124);
    }
  }
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

