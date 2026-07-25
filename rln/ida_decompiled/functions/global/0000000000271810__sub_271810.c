/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271810
 * Mangled: sub_271810
 * Demangled: sub_271810
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
 * Referenced strings: 9
 *   insn=0x000000000027181C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271828 string=0x000000000027182C " "
 *   insn=0x0000000000271828 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000271838 string=0x000000000027183C "!(B"
 *   insn=0x000000000027183C string=0x0000000000271840 "h;"
 *   insn=0x000000000027183C string=0x000000000021C13C "@&"
 *   insn=0x0000000000271840 string=0x0000000000271844 "`"
 *   insn=0x0000000000271854 string=0x0000000000271858 """
 *   insn=0x0000000000271858 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_271810(void *a1)
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
    v5 = *(_DWORD *)(v4 + 128);
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushInt(v1, v5);
  return 1;
}

