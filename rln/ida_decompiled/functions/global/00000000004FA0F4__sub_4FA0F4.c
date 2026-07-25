/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA0F4
 * Mangled: sub_4FA0F4
 * Demangled: sub_4FA0F4
 *
 * Callers: 1
 *   0x00000000004FA084  luaL_newstate(void)
 *
 * Callees: 2
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001FDF10  .fprintf
 *
 * Referenced strings: 7
 *   insn=0x00000000004FA104 string=0x00000000004FA108 "H"
 *   insn=0x00000000004FA104 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FA108 string=0x00000000004FA10C "iF"
 *   insn=0x00000000004FA110 string=0x000000000059A650 "PANIC: unprotected error in call to Lua API (%s)\n"
 *   insn=0x00000000004FA114 string=0x00000000004FA118 "!@"
 *   insn=0x00000000004FA11C string=0x00000000004FA120 "|"
 *   insn=0x00000000004FA120 string=0x00000000001FDF10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA0F4()
{
  const char *v0; // x0

  v0 = (const char *)lua_tolstring();
  fprintf((FILE *)((char *)&_sF + 304), "PANIC: unprotected error in call to Lua API (%s)\n", v0);
  return 0;
}

