/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047770C
 * Mangled: sub_47770C
 * Demangled: sub_47770C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 7
 *   insn=0x0000000000477714 string=0x0000000000477718 "2"
 *   insn=0x0000000000477718 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477720 string=0x0000000000477724 ""
 *   insn=0x0000000000477724 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477734 string=0x0000000000477738 "*"
 *   insn=0x0000000000477738 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000047774C string=0x0000000000477750 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_47770C(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x20
  int v4; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
    if ( v3 )
      *(_DWORD *)(v3 + 120) = v4;
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}

