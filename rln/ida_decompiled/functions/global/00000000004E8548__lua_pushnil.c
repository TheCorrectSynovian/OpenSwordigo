/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8548
 * Mangled: _Z11lua_pushnilP9lua_State
 * Demangled: lua_pushnil(lua_State *)
 *
 * Callers: 1
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004E854C string=0x00000000004E8550 "A"
 *   insn=0x00000000004E8550 string=0x00000000004E8554 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushnil(__int64 result)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(result + 16);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(result + 16) = v1 + 16;
  return result;
}

