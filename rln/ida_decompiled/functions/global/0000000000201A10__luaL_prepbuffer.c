/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A10
 * Mangled: ._Z15luaL_prepbufferP11luaL_Buffer
 * Demangled: luaL_prepbuffer(luaL_Buffer *)
 *
 * Callers: 9
 *   0x00000000004F9594  luaL_gsub(lua_State *,char const*,char const*,char const*)
 *   0x00000000004F9780  luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *   0x00000000004F97E4  luaL_addstring(luaL_Buffer *,char const*)
 *   0x00000000004FBAE8  sub_4FBAE8
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC6D4  sub_4FC6D4
 *   0x00000000004FC85C  sub_4FC85C
 *   0x00000000004FCA10  sub_4FCA10
 *
 * Callees: 1
 *   0x00000000004F98C0  luaL_prepbuffer(luaL_Buffer *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A18 string=0x0000000000201A1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_prepbuffer()
{
  return _Z15luaL_prepbufferP11luaL_Buffer();
}

