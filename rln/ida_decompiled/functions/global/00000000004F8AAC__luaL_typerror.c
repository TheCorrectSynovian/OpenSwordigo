/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8AAC
 * Mangled: _Z13luaL_typerrorP9lua_StateiPKc
 * Demangled: luaL_typerror(lua_State *,int,char const*)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 5
 *   insn=0x00000000004F8AC8 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8AD0 string=0x00000000004F8AD4 "? "
 *   insn=0x00000000004F8AD8 string=0x000000000059A5B1 "%s expected, got %s"
 *   insn=0x00000000004F8ADC string=0x00000000004F8AE0 "!"
 *   insn=0x00000000004F8B08 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn luaL_typerror()
{
  lua_type();
  lua_typename();
  lua_pushfstring();
  luaL_argerror();
}

