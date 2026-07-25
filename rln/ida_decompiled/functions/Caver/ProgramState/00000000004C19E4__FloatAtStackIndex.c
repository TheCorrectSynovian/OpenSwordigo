/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C19E4
 * Mangled: _ZN5Caver12ProgramState17FloatAtStackIndexEi
 * Demangled: Caver::ProgramState::FloatAtStackIndex(int)
 *
 * Callers: 1
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *
 * Callees: 1
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C19F0 string=0x00000000001F5030 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::ProgramState::FloatAtStackIndex(Caver::ProgramState *this)
{
  double v1; // d0

  lua_tonumber();
  return v1;
}

