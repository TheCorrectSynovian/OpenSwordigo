/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3BE0
 * Mangled: ._Z9lua_errorP9lua_State
 * Demangled: lua_error(lua_State *)
 *
 * Callers: 4
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *   0x00000000004FA650  sub_4FA650
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FB850  sub_4FB850
 *
 * Callees: 1
 *   0x00000000004E9D44  lua_error(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3BE8 string=0x00000000001F3BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn lua_error()
{
  _Z9lua_errorP9lua_State();
}

