/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002004E0
 * Mangled: ._Z15luaL_checkstackP9lua_StateiPKc
 * Demangled: luaL_checkstack(lua_State *,int,char const*)
 *
 * Callers: 5
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FB9A8  sub_4FB9A8
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FCAF8  sub_4FCAF8
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 1
 *   0x00000000004F8EBC  luaL_checkstack(lua_State *,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000002004E8 string=0x00000000002004EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checkstack()
{
  return _Z15luaL_checkstackP9lua_StateiPKc();
}

