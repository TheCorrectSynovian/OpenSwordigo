/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4000
 * Mangled: .ungetc
 * Demangled: .ungetc
 *
 * Callers: 3
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x000000000053DE24  sub_53DE24
 *   0x000000000053DE4C  sub_53DE4C
 *
 * Callees: 1
 *   0x00000000006FE5D8  ungetc
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4008 string=0x00000000001F400C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int ungetc(int c, FILE *stream)
{
  return ungetc(c, stream);
}

