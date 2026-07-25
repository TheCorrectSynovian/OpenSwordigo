/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002025F0
 * Mangled: .freopen
 * Demangled: .freopen
 *
 * Callers: 1
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *
 * Callees: 1
 *   0x00000000006FEC30  freopen
 *
 * Referenced strings: 1
 *   insn=0x00000000002025F8 string=0x00000000002025FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
FILE *freopen(const char *filename, const char *modes, FILE *stream)
{
  return freopen(filename, modes, stream);
}

