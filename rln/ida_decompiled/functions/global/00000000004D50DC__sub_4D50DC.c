/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D50DC
 * Mangled: sub_4D50DC
 * Demangled: sub_4D50DC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000004D50E8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D50F4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D50FC string=0x00000000004D5100 "("
 *   insn=0x00000000004D5100 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D50DC(void *a1)
{
  Caver::ProgramState *v1; // x19
  float *v2; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  Caver::ProgramState::PushFloat(v1, *v2);
  return 1;
}

