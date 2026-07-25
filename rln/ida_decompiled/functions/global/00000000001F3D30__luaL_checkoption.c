/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D30
 * Mangled: ._Z16luaL_checkoptionP9lua_StateiPKcPKS2_
 * Demangled: luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *
 * Callers: 1
 *   0x00000000004FA584  sub_4FA584
 *
 * Callees: 1
 *   0x00000000004F8BB4  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D38 string=0x00000000001F3D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checkoption()
{
  return _Z16luaL_checkoptionP9lua_StateiPKcPKS2_();
}

