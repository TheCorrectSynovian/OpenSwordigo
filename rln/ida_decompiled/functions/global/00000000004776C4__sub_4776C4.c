/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004776C4
 * Mangled: sub_4776C4
 * Demangled: sub_4776C4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004776CC string=0x00000000004776D0 "D"
 *   insn=0x00000000004776D0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004776D8 string=0x00000000004776DC "-"
 *   insn=0x00000000004776DC string=0x00000000001FC790 "0'"
 *   insn=0x00000000004776E4 string=0x00000000004776E8 ""
 *   insn=0x00000000004776E8 string=0x00000000004776EC "H"
 *   insn=0x00000000004776F8 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4776C4(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0
  float v3; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = 0.0;
  if ( v2 && *(_QWORD *)v2 )
    v3 = *(float *)(*(_QWORD *)v2 + 120LL);
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

