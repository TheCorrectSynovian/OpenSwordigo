/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477968
 * Mangled: sub_477968
 * Demangled: sub_477968
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 5
 *   insn=0x0000000000477974 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477980 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477988 string=0x000000000047798C ""
 *   insn=0x000000000047798C string=0x0000000000477990 "H"
 *   insn=0x000000000047799C string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_477968(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0
  float v3; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = 1.0;
  if ( v2 && *(_QWORD *)v2 )
    v3 = *(float *)(*(_QWORD *)v2 + 136LL);
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

