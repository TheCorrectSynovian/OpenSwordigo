/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7AA0
 * Mangled: ._Z12lua_isstringP9lua_Statei
 * Demangled: lua_isstring(lua_State *,int)
 *
 * Callers: 4
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FB850  sub_4FB850
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E71A0  lua_isstring(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7AA4 string=0x00000000004E71A0 "?"
 *   insn=0x00000000001F7AA8 string=0x00000000001F7AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_isstring()
{
  return _Z12lua_isstringP9lua_Statei();
}

