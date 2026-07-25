/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5120
 * Mangled: ._Z13luaL_checkanyP9lua_Statei
 * Demangled: luaL_checkany(lua_State *,int)
 *
 * Callers: 10
 *   0x00000000004FA518  sub_4FA518
 *   0x00000000004FA7CC  sub_4FA7CC
 *   0x00000000004FA9BC  sub_4FA9BC
 *   0x00000000004FAB3C  sub_4FAB3C
 *   0x00000000004FAB8C  sub_4FAB8C
 *   0x00000000004FABDC  sub_4FABDC
 *   0x00000000004FAE4C  sub_4FAE4C
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB094  sub_4FB094
 *   0x00000000004FB1D4  sub_4FB1D4
 *
 * Callees: 1
 *   0x00000000004F8F94  luaL_checkany(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5128 string=0x00000000001F512C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checkany()
{
  return _Z13luaL_checkanyP9lua_Statei();
}

