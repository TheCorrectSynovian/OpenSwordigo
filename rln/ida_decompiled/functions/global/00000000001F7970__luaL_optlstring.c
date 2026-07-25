/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7970
 * Mangled: ._Z15luaL_optlstringP9lua_StateiPKcPm
 * Demangled: luaL_optlstring(lua_State *,int,char const*,ulong *)
 *
 * Callers: 5
 *   0x00000000004FA518  sub_4FA518
 *   0x00000000004FA650  sub_4FA650
 *   0x00000000004FA824  sub_4FA824
 *   0x00000000004FA880  sub_4FA880
 *   0x00000000004FA914  sub_4FA914
 *
 * Callees: 1
 *   0x00000000004F8C78  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7978 string=0x00000000001F797C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_optlstring()
{
  return _Z15luaL_optlstringP9lua_StateiPKcPm();
}

