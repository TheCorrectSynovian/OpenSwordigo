/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A40
 * Mangled: ._Z15lua_iscfunctionP9lua_Statei
 * Demangled: lua_iscfunction(lua_State *,int)
 *
 * Callers: 3
 *   0x00000000004FA778  sub_4FA778
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FB408  sub_4FB408
 *
 * Callees: 1
 *   0x00000000004E6F78  lua_iscfunction(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3A44 string=0x00000000004E6F78 "?"
 *   insn=0x00000000001F3A48 string=0x00000000001F3A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_iscfunction()
{
  return _Z15lua_iscfunctionP9lua_Statei();
}

