/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F54B0
 * Mangled: ._Z17luaL_checkintegerP9lua_Statei
 * Demangled: luaL_checkinteger(lua_State *,int)
 *
 * Callers: 8
 *   0x00000000004F916C  luaL_optinteger(lua_State *,int,long)
 *   0x00000000004FA304  sub_4FA304
 *   0x00000000004FAC38  sub_4FAC38
 *   0x00000000004FB0E0  sub_4FB0E0
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FBAE8  sub_4FBAE8
 *   0x00000000004FC7A8  sub_4FC7A8
 *   0x00000000004FC928  sub_4FC928
 *
 * Callees: 1
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F54B8 string=0x00000000001F54BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checkinteger()
{
  return _Z17luaL_checkintegerP9lua_Statei();
}

