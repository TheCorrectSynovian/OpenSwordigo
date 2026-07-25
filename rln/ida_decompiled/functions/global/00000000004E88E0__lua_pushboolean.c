/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E88E0
 * Mangled: _Z15lua_pushbooleanP9lua_Statei
 * Demangled: lua_pushboolean(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004E88E0 string=0x00000000004E88E4 "?"
 *   insn=0x00000000004E88EC string=0x00000000004E88F0 "\n"
 *   insn=0x00000000004E88F0 string=0x00000000004E88F4 "\t\t"
 *   insn=0x00000000004E88F4 string=0x00000000004E88F8 "@"
 *   insn=0x00000000004E88F8 string=0x00000000004E88FC "A"
 *   insn=0x00000000004E88FC string=0x00000000004E8900 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushboolean(__int64 result, int a2)
{
  _DWORD *v2; // x8

  v2 = *(_DWORD **)(result + 16);
  *v2 = a2 != 0;
  v2[2] = 1;
  *(_QWORD *)(result + 16) += 16LL;
  return result;
}

