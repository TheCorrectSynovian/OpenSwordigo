/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF230
 * Mangled: ._Z16luaL_checknumberP9lua_Statei
 * Demangled: luaL_checknumber(lua_State *,int)
 *
 * Callers: 2
 *   0x00000000004F9080  luaL_optnumber(lua_State *,int,double)
 *   0x00000000004FBC90  sub_4FBC90
 *
 * Callees: 1
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF238 string=0x00000000001FF23C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checknumber()
{
  return _Z16luaL_checknumberP9lua_Statei();
}

