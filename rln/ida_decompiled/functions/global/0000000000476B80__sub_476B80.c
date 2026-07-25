/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476B80
 * Mangled: sub_476B80
 * Demangled: sub_476B80
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *
 * Referenced strings: 5
 *   insn=0x0000000000476B8C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476B98 string=0x0000000000476B9C "`"
 *   insn=0x0000000000476B98 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476BB4 string=0x0000000000476BB8 "`"
 *   insn=0x0000000000476BB8 string=0x0000000000476BBC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476B80(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x20
  __int64 *v4; // x0
  __int64 v5; // x8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0;
  Caver::ProgramState::PushBool(v1, v3 == v5);
  return 1;
}

