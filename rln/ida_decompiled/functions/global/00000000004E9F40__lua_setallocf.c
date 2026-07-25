/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9F40
 * Mangled: _Z13lua_setallocfP9lua_StatePFPvS1_S1_mmES1_
 * Demangled: lua_setallocf(lua_State *,void * (*)(void *,void *,ulong,ulong),void *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_setallocf(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)(result + 32);
  *(_QWORD *)(v3 + 16) = a2;
  *(_QWORD *)(v3 + 24) = a3;
  return result;
}

