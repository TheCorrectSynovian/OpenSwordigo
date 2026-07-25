/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A6C
 * Mangled: _ZN5Caver12ProgramState10PushStringERKSs
 * Demangled: Caver::ProgramState::PushString(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *
 * Callees: 1
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C1A70 string=0x00000000004C1A74 """
 *   insn=0x00000000004C1A78 string=0x00000000001FD1B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramState::PushString()
{
  return lua_pushlstring();
}

