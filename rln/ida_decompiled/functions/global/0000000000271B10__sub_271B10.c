/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271B10
 * Mangled: sub_271B10
 * Demangled: sub_271B10
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x0000000000271B18 string=0x0000000000271B1C "1&"
 *   insn=0x0000000000271B1C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271B28 string=0x0000000000271B2C " "
 *   insn=0x0000000000271B28 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000271B38 string=0x0000000000271B3C "!XE"
 *   insn=0x0000000000271B40 string=0x0000000000271B44 "`"
 *   insn=0x0000000000271B54 string=0x0000000000271B58 "b"
 *   insn=0x0000000000271B58 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_271B10(void *a1)
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
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ManaComponent::Interface)) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 112);
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushInt(v1, v5);
  return 1;
}

