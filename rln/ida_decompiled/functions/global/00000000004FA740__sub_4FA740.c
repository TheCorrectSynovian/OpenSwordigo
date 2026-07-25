/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA740
 * Mangled: sub_4FA740
 * Demangled: sub_4FA740
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FE3B0  lua_gc(lua_State *,int,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004FA760 string=0x00000000004FA764 "C"
 *   insn=0x00000000004FA764 string=0x00000000001F7C70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA740()
{
  lua_gc();
  lua_pushinteger();
  return 1;
}

