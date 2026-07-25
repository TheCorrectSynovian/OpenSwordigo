/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002005F0
 * Mangled: ._Z9lua_yieldP9lua_Statei
 * Demangled: lua_yield(lua_State *,int)
 *
 * Callers: 2
 *   0x00000000004C1DD8  sub_4C1DD8
 *   0x00000000004FB68C  sub_4FB68C
 *
 * Callees: 1
 *   0x00000000004EC964  lua_yield(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002005F8 string=0x00000000002005FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_yield()
{
  return _Z9lua_yieldP9lua_Statei();
}

