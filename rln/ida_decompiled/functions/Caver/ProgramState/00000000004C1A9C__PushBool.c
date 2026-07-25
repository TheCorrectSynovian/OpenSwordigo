/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A9C
 * Mangled: _ZN5Caver12ProgramState8PushBoolEb
 * Demangled: Caver::ProgramState::PushBool(bool)
 *
 * Callers: 1
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *
 * Callees: 1
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1A9C string=0x00000000004C1AA0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::PushBool(Caver::ProgramState *this)
{
  return lua_pushboolean();
}

