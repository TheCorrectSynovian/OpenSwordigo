/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC1DC
 * Mangled: sub_4FC1DC
 * Demangled: sub_4FC1DC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *
 * Referenced strings: 2
 *   insn=0x00000000004FC1DC string=0x000000000059AEB7 "'string.gfind' was renamed to 'string.gmatch'"
 *   insn=0x00000000004FC1E4 string=0x00000000001FADF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_4FC1DC()
{
  luaL_error();
}

