/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F5ED4
 * Mangled: sub_4F5ED4
 * Demangled: sub_4F5ED4
 *
 * Callers: 1
 *   0x00000000004E9C10  lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004F5ED4 string=0x000000000059A368 "Q"
 *   insn=0x00000000004F5ED8 string=0x00000000004F5EDC "h"
 *   insn=0x00000000004F5EDC string=0x00000000004F5EE4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall sub_4F5ED4(__int64 a1)
{
  double result; // d0

  *(_QWORD *)&result = 0x8040804010051LL;
  *(_DWORD *)a1 = 1635077147;
  *(_QWORD *)(a1 + 4) = 0x8040804010051LL;
  return result;
}

