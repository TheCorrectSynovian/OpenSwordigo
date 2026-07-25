/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8748
 * Mangled: sub_4F8748
 * Demangled: sub_4F8748
 *
 * Callers: 1
 *   0x00000000004E9B8C  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004F8748 string=0x00000000004F874C "?"
 *   insn=0x00000000004F874C string=0x00000000004F8750 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F8748(__int64 result, _QWORD *a2, __int64 a3, __int64 a4)
{
  a2[3] = a4;
  a2[4] = result;
  a2[1] = 0;
  a2[2] = a3;
  *a2 = 0;
  return result;
}

