/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB52C
 * Mangled: sub_4FB52C
 * Demangled: sub_4FB52C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED10  lua_pushthread(lua_State *)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004FB53C string=0x00000000004FB540 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB52C()
{
  if ( (unsigned int)lua_pushthread() )
    lua_pushnil();
  return 1;
}

