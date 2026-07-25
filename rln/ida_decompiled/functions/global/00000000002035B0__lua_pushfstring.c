/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002035B0
 * Mangled: ._Z15lua_pushfstringP9lua_StatePKcz
 * Demangled: lua_pushfstring(lua_State *,char const*,...)
 *
 * Callers: 12
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *   0x00000000004F8AAC  luaL_typerror(lua_State *,int,char const*)
 *   0x00000000004F8B0C  luaL_where(lua_State *,int)
 *   0x00000000004F8BB4  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *   0x00000000004F8CF0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F8F00  luaL_checktype(lua_State *,int,int)
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004E8734  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000002035B8 string=0x00000000002035BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushfstring()
{
  return _Z15lua_pushfstringP9lua_StatePKcz();
}

