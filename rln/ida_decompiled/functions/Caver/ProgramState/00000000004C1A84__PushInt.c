/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A84
 * Mangled: _ZN5Caver12ProgramState7PushIntEi
 * Demangled: Caver::ProgramState::PushInt(int)
 *
 * Callers: 1
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *
 * Callees: 1
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *
 * Referenced strings: 3
 *   insn=0x00000000004C1A84 string=0x00000000004C1A88 "!|@"
 *   insn=0x00000000004C1A88 string=0x00000000004C1A8C "y"
 *   insn=0x00000000004C1A8C string=0x00000000001F7C70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::PushInt(Caver::ProgramState *this)
{
  return lua_pushinteger();
}

