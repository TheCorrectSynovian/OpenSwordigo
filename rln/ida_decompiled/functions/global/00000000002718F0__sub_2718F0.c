/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002718F0
 * Mangled: sub_2718F0
 * Demangled: sub_2718F0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002718FC string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271908 string=0x000000000027190C " "
 *   insn=0x0000000000271908 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000271918 string=0x000000000027191C "!(B"
 *   insn=0x000000000027191C string=0x0000000000271920 "0;"
 *   insn=0x000000000027191C string=0x000000000021C13C "@&"
 *   insn=0x0000000000271920 string=0x0000000000271924 "`"
 *   insn=0x0000000000271938 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2718F0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  int v5; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::HealthComponent::Interface)) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 124);
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushInt(v1, v5);
  return 1;
}

