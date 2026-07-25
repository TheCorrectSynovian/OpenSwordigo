/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201DB0
 * Mangled: ._Z12lua_setlevelP9lua_StateS0_
 * Demangled: lua_setlevel(lua_State *,lua_State *)
 *
 * Callers: 1
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004E6880  lua_setlevel(lua_State *,lua_State *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201DB4 string=0x00000000004E6880 ""
 *   insn=0x0000000000201DB8 string=0x0000000000201DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_setlevel()
{
  return _Z12lua_setlevelP9lua_StateS0_();
}

