/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D62A8
 * Mangled: sub_4D62A8
 * Demangled: sub_4D62A8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000004D62B0 string=0x00000000004D62B4 "K"
 *   insn=0x00000000004D62B4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D62BC string=0x00000000004D62C0 "H"
 *   insn=0x00000000004D62C0 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D62CC string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D62A8(void *a1)
{
  Caver::ProgramState *v1; // x19
  float v2; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::FloatAtStackIndex(v1, 1);
  Caver::ProgramState::PushFloat(v1, fabsf(v2));
  return 1;
}

