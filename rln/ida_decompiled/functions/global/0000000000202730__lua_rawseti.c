/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202730
 * Mangled: ._Z11lua_rawsetiP9lua_Stateii
 * Demangled: lua_rawseti(lua_State *,int,int)
 *
 * Callers: 2
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004F9BFC  luaL_unref(lua_State *,int,int)
 *
 * Callees: 1
 *   0x00000000004E944C  lua_rawseti(lua_State *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202738 string=0x000000000020273C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_rawseti()
{
  return _Z11lua_rawsetiP9lua_Stateii();
}

