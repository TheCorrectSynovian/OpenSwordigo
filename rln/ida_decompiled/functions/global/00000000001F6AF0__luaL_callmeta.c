/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6AF0
 * Mangled: ._Z13luaL_callmetaP9lua_StateiPKc
 * Demangled: luaL_callmeta(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000004FAF74  sub_4FAF74
 *
 * Callees: 1
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6AF8 string=0x00000000001F6AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_callmeta()
{
  return _Z13luaL_callmetaP9lua_StateiPKc();
}

