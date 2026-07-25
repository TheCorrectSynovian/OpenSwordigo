/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E688C
 * Mangled: _Z11lua_atpanicP9lua_StatePFiS0_E
 * Demangled: lua_atpanic(lua_State *,int (*)(lua_State *))
 *
 * Callers: 1
 *   0x0000000000201570  lua_atpanic(lua_State *,int (*)(lua_State *))
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_atpanic(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 32);
  result = *(_QWORD *)(v2 + 152);
  *(_QWORD *)(v2 + 152) = a2;
  return result;
}

