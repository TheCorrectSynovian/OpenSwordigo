/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A00
 * Mangled: ._Z10lua_objlenP9lua_Statei
 * Demangled: lua_objlen(lua_State *,int)
 *
 * Callers: 4
 *   0x00000000004F98C0  luaL_prepbuffer(luaL_Buffer *)
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004FB0E0  sub_4FB0E0
 *
 * Callees: 1
 *   0x00000000004E7F18  lua_objlen(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A08 string=0x00000000001F5A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_objlen()
{
  return _Z10lua_objlenP9lua_Statei();
}

