/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6640
 * Mangled: ._Z11lua_rawgetiP9lua_Stateii
 * Demangled: lua_rawgeti(lua_State *,int,int)
 *
 * Callers: 4
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004F9BFC  luaL_unref(lua_State *,int,int)
 *   0x00000000004FA304  sub_4FA304
 *   0x00000000004FB0E0  sub_4FB0E0
 *
 * Callees: 1
 *   0x00000000004E8CA0  lua_rawgeti(lua_State *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6648 string=0x00000000001F664C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_rawgeti()
{
  return _Z11lua_rawgetiP9lua_Stateii();
}

