/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477018
 * Mangled: sub_477018
 * Demangled: sub_477018
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 5
 *   insn=0x0000000000477020 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477028 string=0x00000000001FC790 "0'"
 *   insn=0x000000000047702C string=0x0000000000477030 ""
 *   insn=0x0000000000477030 string=0x0000000000477034 "h"
 *   insn=0x0000000000477038 string=0x000000000047703C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_477018(void *a1)
{
  Caver::ProgramState *v1; // x0
  __int64 v2; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && *(_QWORD *)v2 )
    *(_BYTE *)(*(_QWORD *)v2 + 232LL) = 1;
  return 0;
}

