/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203830
 * Mangled: ._Z8lua_nextP9lua_Statei
 * Demangled: lua_next(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000004FA3C8  sub_4FA3C8
 *
 * Callees: 1
 *   0x00000000004E9D5C  lua_next(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203838 string=0x000000000020383C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_next()
{
  return _Z8lua_nextP9lua_Statei();
}

