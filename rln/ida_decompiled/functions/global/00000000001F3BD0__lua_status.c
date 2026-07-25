/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3BD0
 * Mangled: ._Z10lua_statusP9lua_State
 * Demangled: lua_status(lua_State *)
 *
 * Callers: 2
 *   0x00000000004FB55C  sub_4FB55C
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004E9C50  lua_status(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3BD8 string=0x00000000001F3BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_status()
{
  return _Z10lua_statusP9lua_State();
}

