/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F99A0
 * Mangled: ._Z15luaL_optintegerP9lua_Stateil
 * Demangled: luaL_optinteger(lua_State *,int,long)
 *
 * Callers: 9
 *   0x00000000004FA584  sub_4FA584
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FAE4C  sub_4FAE4C
 *   0x00000000004FB0E0  sub_4FB0E0
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FB9A8  sub_4FB9A8
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC928  sub_4FC928
 *   0x00000000004FCAF8  sub_4FCAF8
 *
 * Callees: 1
 *   0x00000000004F916C  luaL_optinteger(lua_State *,int,long)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F99A8 string=0x00000000001F99AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_optinteger()
{
  return _Z15luaL_optintegerP9lua_Stateil();
}

