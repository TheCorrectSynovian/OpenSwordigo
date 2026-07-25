/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F62C0
 * Mangled: ._Z17luaL_checklstringP9lua_StateiPm
 * Demangled: luaL_checklstring(lua_State *,int,ulong *)
 *
 * Callers: 15
 *   0x00000000004F8BB4  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *   0x00000000004F8C78  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000004FA914  sub_4FA914
 *   0x00000000004FAE4C  sub_4FAE4C
 *   0x00000000004FB9A8  sub_4FB9A8
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC1E8  sub_4FC1E8
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC674  sub_4FC674
 *   0x00000000004FC6D4  sub_4FC6D4
 *   0x00000000004FC7A8  sub_4FC7A8
 *   0x00000000004FC85C  sub_4FC85C
 *   0x00000000004FC928  sub_4FC928
 *   0x00000000004FCA10  sub_4FCA10
 *   0x00000000004FCAF8  sub_4FCAF8
 *
 * Callees: 1
 *   0x00000000004F8CF0  luaL_checklstring(lua_State *,int,ulong *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F62C8 string=0x00000000001F62CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checklstring()
{
  return _Z17luaL_checklstringP9lua_StateiPm();
}

