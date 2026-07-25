/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5CB4
 * Mangled: sub_4D5CB4
 * Demangled: sub_4D5CB4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000004D5CC0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5CCC string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D5CDC string=0x00000000004D5CE0 "0"
 *   insn=0x00000000004D5CE0 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5CB4(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  Caver::ProgramState::PushFloat(v1, *(float *)(v2 + 4) + *(float *)(v2 + 12));
  return 1;
}

