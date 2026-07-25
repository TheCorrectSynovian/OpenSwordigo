/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE340
 * Mangled: .ferror
 * Demangled: .ferror
 *
 * Callers: 1
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *
 * Callees: 1
 *   0x00000000006FEA58  ferror
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE348 string=0x00000000001FE34C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int ferror(FILE *stream)
{
  return ferror(stream);
}

