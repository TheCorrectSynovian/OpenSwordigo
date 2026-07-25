/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1AB8
 * Mangled: _ZN5Caver12ProgramState8SetTableEi
 * Demangled: Caver::ProgramState::SetTable(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1AB8 string=0x00000000004C1ABC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::SetTable(Caver::ProgramState *this)
{
  return lua_settable();
}

