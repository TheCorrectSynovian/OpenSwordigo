/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6880
 * Mangled: _Z12lua_setlevelP9lua_StateS0_
 * Demangled: lua_setlevel(lua_State *,lua_State *)
 *
 * Callers: 1
 *   0x0000000000201DB0  lua_setlevel(lua_State *,lua_State *)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004E6880 string=0x00000000004E6884 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_setlevel(__int64 result, __int64 a2)
{
  *(_WORD *)(a2 + 96) = *(_WORD *)(result + 96);
  return result;
}

