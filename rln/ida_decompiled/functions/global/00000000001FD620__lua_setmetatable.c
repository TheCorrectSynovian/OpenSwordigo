/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD620
 * Mangled: ._Z16lua_setmetatableP9lua_Statei
 * Demangled: lua_setmetatable(lua_State *,int)
 *
 * Callers: 5
 *   0x00000000004C1ACC  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FADB0  sub_4FADB0
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *
 * Callees: 1
 *   0x00000000004E959C  lua_setmetatable(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD628 string=0x00000000001FD62C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_setmetatable()
{
  return _Z16lua_setmetatableP9lua_Statei();
}

