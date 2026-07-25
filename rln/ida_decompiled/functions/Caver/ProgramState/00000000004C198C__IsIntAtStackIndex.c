/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C198C
 * Mangled: _ZN5Caver12ProgramState17IsIntAtStackIndexEi
 * Demangled: Caver::ProgramState::IsIntAtStackIndex(int)
 *
 * Callers: 1
 *   0x0000000000201A90  Caver::ProgramState::IsIntAtStackIndex(int)
 *
 * Callees: 1
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C1994 string=0x00000000004C1998 "6"
 *   insn=0x00000000004C1998 string=0x00000000001FAE70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProgramState::IsIntAtStackIndex(Caver::ProgramState *this)
{
  return (unsigned int)lua_isnumber() != 0;
}

