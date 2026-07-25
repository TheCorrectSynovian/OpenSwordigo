/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9D44
 * Mangled: _Z9lua_errorP9lua_State
 * Demangled: lua_error(lua_State *)
 *
 * Callers: 1
 *   0x00000000001F3BE0  lua_error(lua_State *)
 *
 * Callees: 1
 *   0x00000000004EB6DC  sub_4EB6DC
 *
 * Referenced strings: 1
 *   insn=0x00000000004E9D48 string=0x00000000004E9D4C "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn lua_error()
{
  sub_4EB6DC();
}

