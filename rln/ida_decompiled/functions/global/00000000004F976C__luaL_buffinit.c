/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F976C
 * Mangled: _Z13luaL_buffinitP9lua_StateP11luaL_Buffer
 * Demangled: luaL_buffinit(lua_State *,luaL_Buffer *)
 *
 * Callers: 1
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004F976C string=0x00000000004F9770 " "
 *   insn=0x00000000004F9770 string=0x00000000004F9774 "("
 *   insn=0x00000000004F9774 string=0x00000000004F9778 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_buffinit(__int64 result, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = result;
  *(_QWORD *)a2 = a2 + 24;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}

