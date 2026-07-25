/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E68F4
 * Mangled: _Z10lua_gettopP9lua_State
 * Demangled: lua_gettop(lua_State *)
 *
 * Callers: 1
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004E68F4 string=0x00000000004E68F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_gettop(__int64 a1)
{
  return (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 24)) >> 4;
}

