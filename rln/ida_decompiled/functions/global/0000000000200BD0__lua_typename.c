/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200BD0
 * Mangled: ._Z12lua_typenameP9lua_Statei
 * Demangled: lua_typename(lua_State *,int)
 *
 * Callers: 9
 *   0x00000000004F8AAC  luaL_typerror(lua_State *,int,char const*)
 *   0x00000000004F8CF0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F8F00  luaL_checktype(lua_State *,int,int)
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB094  sub_4FB094
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E6F54  lua_typename(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200BD4 string=0x00000000004E6F54 "?"
 *   insn=0x0000000000200BD8 string=0x0000000000200BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_typename()
{
  return _Z12lua_typenameP9lua_Statei();
}

