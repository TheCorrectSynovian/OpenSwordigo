/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7AC0
 * Mangled: ._Z10lua_gettopP9lua_State
 * Demangled: lua_gettop(lua_State *)
 *
 * Callers: 17
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004F9BFC  luaL_unref(lua_State *,int,int)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x00000000004FA518  sub_4FA518
 *   0x00000000004FA650  sub_4FA650
 *   0x00000000004FA9BC  sub_4FA9BC
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FAC38  sub_4FAC38
 *   0x00000000004FB1D4  sub_4FB1D4
 *   0x00000000004FB484  sub_4FB484
 *   0x00000000004FB55C  sub_4FB55C
 *   0x00000000004FB68C  sub_4FB68C
 *   0x00000000004FB6B4  sub_4FB6B4
 *   0x00000000004FB850  sub_4FB850
 *   0x00000000004FBAE8  sub_4FBAE8
 *   0x00000000004FBC90  sub_4FBC90
 *
 * Callees: 1
 *   0x00000000004E68F4  lua_gettop(lua_State *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7AC4 string=0x00000000004E68F4 "$A"
 *   insn=0x00000000001F7AC8 string=0x00000000001F7ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_gettop()
{
  return _Z10lua_gettopP9lua_State();
}

