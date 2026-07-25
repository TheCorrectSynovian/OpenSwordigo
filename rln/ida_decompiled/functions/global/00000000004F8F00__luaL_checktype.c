/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8F00
 * Mangled: _Z14luaL_checktypeP9lua_Stateii
 * Demangled: luaL_checktype(lua_State *,int,int)
 *
 * Callers: 1
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *
 * Callees: 4
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 5
 *   insn=0x00000000004F8F1C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8F3C string=0x00000000004F8F40 "$"
 *   insn=0x00000000004F8F60 string=0x000000000059A5B1 "%s expected, got %s"
 *   insn=0x00000000004F8F64 string=0x00000000004F8F68 "!"
 *   insn=0x00000000004F8F90 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_checktype(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0

  result = lua_type();
  if ( (_DWORD)result != a3 )
  {
    lua_typename();
    lua_type();
    lua_typename();
    lua_pushfstring();
    luaL_argerror();
  }
  return result;
}

