/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002029F0
 * Mangled: ._Z10lua_concatP9lua_Statei
 * Demangled: lua_concat(lua_State *,int)
 *
 * Callers: 7
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *   0x00000000004F9594  luaL_gsub(lua_State *,char const*,char const*,char const*)
 *   0x00000000004F9850  luaL_pushresult(luaL_Buffer *)
 *   0x00000000004F98C0  luaL_prepbuffer(luaL_Buffer *)
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FB850  sub_4FB850
 *
 * Callees: 1
 *   0x00000000004E9E70  lua_concat(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002029F8 string=0x00000000002029FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_concat()
{
  return _Z10lua_concatP9lua_Statei();
}

