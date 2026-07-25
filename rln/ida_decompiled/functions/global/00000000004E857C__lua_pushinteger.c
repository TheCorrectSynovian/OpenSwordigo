/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E857C
 * Mangled: _Z15lua_pushintegerP9lua_Statel
 * Demangled: lua_pushinteger(lua_State *,long)
 *
 * Callers: 1
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004E857C string=0x00000000004E8580 " "
 *   insn=0x00000000004E8588 string=0x00000000004E858C "\t\t"
 *   insn=0x00000000004E858C string=0x00000000004E8590 "@"
 *   insn=0x00000000004E8590 string=0x00000000004E8594 "A"
 *   insn=0x00000000004E8594 string=0x00000000004E8598 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall lua_pushinteger(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  double result; // d0

  v2 = *(_QWORD *)(a1 + 16);
  result = (double)a2;
  *(double *)v2 = (double)a2;
  *(_DWORD *)(v2 + 8) = 3;
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

