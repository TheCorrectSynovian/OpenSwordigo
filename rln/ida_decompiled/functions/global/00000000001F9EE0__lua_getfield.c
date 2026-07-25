/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9EE0
 * Mangled: ._Z12lua_getfieldP9lua_StateiPKc
 * Demangled: lua_getfield(lua_State *,int,char const*)
 *
 * Callers: 6
 *   0x00000000004C1ACC  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *
 * Callees: 1
 *   0x00000000004E8A34  lua_getfield(lua_State *,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9EE8 string=0x00000000001F9EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall lua_getfield(int a1, int a2, char *a3)
{
  return _Z12lua_getfieldP9lua_StateiPKc(a1, a2, a3);
}

