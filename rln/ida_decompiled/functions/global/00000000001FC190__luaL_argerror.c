/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC190
 * Mangled: ._Z13luaL_argerrorP9lua_StateiPKc
 * Demangled: luaL_argerror(lua_State *,int,char const*)
 *
 * Callers: 19
 *   0x00000000004F8AAC  luaL_typerror(lua_State *,int,char const*)
 *   0x00000000004F8BB4  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *   0x00000000004F8CF0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F8F00  luaL_checktype(lua_State *,int,int)
 *   0x00000000004F8F94  luaL_checkany(lua_State *,int)
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FAC38  sub_4FAC38
 *   0x00000000004FADB0  sub_4FADB0
 *   0x00000000004FAE4C  sub_4FAE4C
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FB408  sub_4FB408
 *   0x00000000004FB484  sub_4FB484
 *   0x00000000004FB55C  sub_4FB55C
 *   0x00000000004FBAE8  sub_4FBAE8
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004F888C  luaL_argerror(lua_State *,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC198 string=0x00000000001FC19C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn luaL_argerror()
{
  _Z13luaL_argerrorP9lua_StateiPKc();
}

