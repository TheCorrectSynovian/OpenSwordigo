/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9850
 * Mangled: _Z15luaL_pushresultP11luaL_Buffer
 * Demangled: luaL_pushresult(luaL_Buffer *)
 *
 * Callers: 1
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *
 * Callees: 2
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *
 * Referenced strings: 10
 *   insn=0x00000000004F986C string=0x00000000004F9870 "@"
 *   insn=0x00000000004F9870 string=0x00000000004F9898 "a"
 *   insn=0x00000000004F987C string=0x00000000004F9880 "L"
 *   insn=0x00000000004F9880 string=0x00000000004F9884 "t"
 *   insn=0x00000000004F9880 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F9884 string=0x00000000004F9888 "h"
 *   insn=0x00000000004F988C string=0x00000000004F9890 "a"
 *   insn=0x00000000004F9898 string=0x00000000004F989C "u""
 *   insn=0x00000000004F98A0 string=0x00000000004F98A4 "S$"
 *   insn=0x00000000004F98A8 string=0x00000000004F98AC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_pushresult(_QWORD *a1)
{
  _QWORD *v2; // x20
  _DWORD *v3; // x19
  __int64 result; // x0

  v2 = a1 + 3;
  if ( (_QWORD *)*a1 == a1 + 3 )
  {
    v3 = a1 + 1;
  }
  else
  {
    lua_pushlstring();
    *a1 = v2;
    v3 = a1 + 1;
    ++*v3;
  }
  result = lua_concat();
  *v3 = 1;
  return result;
}

