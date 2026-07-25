/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A20
 * Mangled: _ZN5Caver12ProgramState16BoolAtStackIndexEi
 * Demangled: Caver::ProgramState::BoolAtStackIndex(int)
 *
 * Callers: 1
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *
 * Callees: 2
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *
 * Referenced strings: 3
 *   insn=0x00000000004C1A38 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004C1A48 string=0x00000000004C1A4C "q"
 *   insn=0x00000000004C1A4C string=0x00000000001F4010 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProgramState::BoolAtStackIndex(Caver::ProgramState *this)
{
  return (unsigned int)lua_type() == 1 && (unsigned int)lua_toboolean() != 0;
}

