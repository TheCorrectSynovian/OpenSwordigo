/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8908
 * Mangled: _Z21lua_pushlightuserdataP9lua_StatePv
 * Demangled: lua_pushlightuserdata(lua_State *,void *)
 *
 * Callers: 1
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004E8910 string=0x00000000004E8914 "\t\t"
 *   insn=0x00000000004E8914 string=0x00000000004E8918 "@"
 *   insn=0x00000000004E8918 string=0x00000000004E891C "A"
 *   insn=0x00000000004E891C string=0x00000000004E8920 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushlightuserdata(__int64 result, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(result + 16);
  *(_QWORD *)v2 = a2;
  *(_DWORD *)(v2 + 8) = 2;
  *(_QWORD *)(result + 16) += 16LL;
  return result;
}

