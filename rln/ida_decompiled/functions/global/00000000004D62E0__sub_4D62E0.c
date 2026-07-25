/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D62E0
 * Mangled: sub_4D62E0
 * Demangled: sub_4D62E0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 6
 *   insn=0x00000000004D62E8 string=0x00000000004D62EC "="
 *   insn=0x00000000004D62EC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D62F4 string=0x00000000004D62F8 ":"
 *   insn=0x00000000004D62F8 string=0x00000000004D62FC "]"
 *   insn=0x00000000004D62F8 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D6304 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D62E0(void *a1)
{
  Caver::ProgramState *v1; // x19
  float v2; // s0
  float v3; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::FloatAtStackIndex(v1, 1);
  v3 = sinf(v2);
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

