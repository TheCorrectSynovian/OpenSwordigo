/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEFB0
 * Mangled: ._Z17luaL_getmetafieldP9lua_StateiPKc
 * Demangled: luaL_getmetafield(lua_State *,int,char const*)
 *
 * Callers: 2
 *   0x00000000004FA7CC  sub_4FA7CC
 *   0x00000000004FADB0  sub_4FADB0
 *
 * Callees: 1
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEFB8 string=0x00000000001FEFBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_getmetafield()
{
  return _Z17luaL_getmetafieldP9lua_StateiPKc();
}

