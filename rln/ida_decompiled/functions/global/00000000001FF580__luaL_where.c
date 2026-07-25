/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF580
 * Mangled: ._Z10luaL_whereP9lua_Statei
 * Demangled: luaL_where(lua_State *,int)
 *
 * Callers: 2
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FB850  sub_4FB850
 *
 * Callees: 1
 *   0x00000000004F8B0C  luaL_where(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF588 string=0x00000000001FF58C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_where()
{
  return _Z10luaL_whereP9lua_Statei();
}

