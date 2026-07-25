/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477764
 * Mangled: sub_477764
 * Demangled: sub_477764
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 5
 *   insn=0x0000000000477770 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000047777C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477784 string=0x0000000000477788 ""
 *   insn=0x0000000000477790 string=0x0000000000477794 "h"
 *   insn=0x00000000004777A4 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_477764(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0
  float v3; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = 0.0;
  if ( v2 && *(_QWORD *)v2 )
    v3 = *(float *)(*(_QWORD *)v2 + 128LL) * 57.296;
  Caver::ProgramState::PushFloat(v1, v3);
  return 1;
}

