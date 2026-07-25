/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9A78
 * Mangled: sub_4E9A78
 * Demangled: sub_4E9A78
 *
 * Callers: 1
 *   0x00000000004E98F8  lua_pcall(lua_State *,int,int,int)
 *
 * Callees: 1
 *   0x00000000004EC63C  sub_4EC63C
 *
 * Referenced strings: 1
 *   insn=0x00000000004E9A78 string=0x00000000004E9A7C ""@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4E9A78(__int64 a1, __int64 a2)
{
  return sub_4EC63C(a1, *(_QWORD *)a2, *(unsigned int *)(a2 + 8));
}

