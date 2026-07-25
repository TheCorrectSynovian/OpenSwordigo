/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA330
 * Mangled: ._Z9lua_xmoveP9lua_StateS0_i
 * Demangled: lua_xmove(lua_State *,lua_State *,int)
 *
 * Callers: 2
 *   0x00000000004FB408  sub_4FB408
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004E67F4  lua_xmove(lua_State *,lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA338 string=0x00000000001FA33C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_xmove()
{
  return _Z9lua_xmoveP9lua_StateS0_i();
}

