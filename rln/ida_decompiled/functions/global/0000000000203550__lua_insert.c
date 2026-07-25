/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203550
 * Mangled: ._Z10lua_insertP9lua_Statei
 * Demangled: lua_insert(lua_State *,int)
 *
 * Callers: 10
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004FA824  sub_4FA824
 *   0x00000000004FA880  sub_4FA880
 *   0x00000000004FA914  sub_4FA914
 *   0x00000000004FA9BC  sub_4FA9BC
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FB1D4  sub_4FB1D4
 *   0x00000000004FB484  sub_4FB484
 *   0x00000000004FB850  sub_4FB850
 *
 * Callees: 1
 *   0x00000000004E6AB0  lua_insert(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203554 string=0x00000000004E6AB0 "?"
 *   insn=0x0000000000203558 string=0x000000000020355C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_insert()
{
  return _Z10lua_insertP9lua_Statei();
}

