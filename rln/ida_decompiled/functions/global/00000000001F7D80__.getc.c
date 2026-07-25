/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D80
 * Mangled: .getc
 * Demangled: .getc
 *
 * Callers: 3
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x000000000053DDFC  sub_53DDFC
 *   0x000000000053DE24  sub_53DE24
 *
 * Callees: 1
 *   0x00000000006FE7C0  getc
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D88 string=0x00000000001F7D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int getc(FILE *stream)
{
  return getc(stream);
}

