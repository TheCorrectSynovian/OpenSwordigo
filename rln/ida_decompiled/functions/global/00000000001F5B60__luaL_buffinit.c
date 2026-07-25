/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B60
 * Mangled: ._Z13luaL_buffinitP9lua_StateP11luaL_Buffer
 * Demangled: luaL_buffinit(lua_State *,luaL_Buffer *)
 *
 * Callers: 8
 *   0x00000000004FBAE8  sub_4FBAE8
 *   0x00000000004FBBE4  sub_4FBBE4
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC6D4  sub_4FC6D4
 *   0x00000000004FC7A8  sub_4FC7A8
 *   0x00000000004FC85C  sub_4FC85C
 *   0x00000000004FCA10  sub_4FCA10
 *
 * Callees: 1
 *   0x00000000004F976C  luaL_buffinit(lua_State *,luaL_Buffer *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5B64 string=0x00000000004F976C "(`"
 *   insn=0x00000000001F5B68 string=0x00000000001F5B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_buffinit()
{
  return _Z13luaL_buffinitP9lua_StateP11luaL_Buffer();
}

