/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476FBC
 * Mangled: sub_476FBC
 * Demangled: sub_476FBC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *
 * Referenced strings: 6
 *   insn=0x0000000000476FC8 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476FD4 string=0x0000000000476FD8 " "
 *   insn=0x0000000000476FD4 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476FD8 string=0x0000000000476FDC ""
 *   insn=0x0000000000476FE0 string=0x0000000000476FE4 "\t"
 *   insn=0x0000000000476FE8 string=0x0000000000476FEC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476FBC(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x8
  bool v4; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v4 = v2 && (v3 = *v2) != 0 && *(_QWORD *)(v3 + 32) && *(_BYTE *)(v3 + 232) == 0;
  Caver::ProgramState::PushBool(v1, v4);
  return 1;
}

