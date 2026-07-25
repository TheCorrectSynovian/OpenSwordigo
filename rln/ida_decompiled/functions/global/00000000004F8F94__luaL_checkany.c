/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8F94
 * Mangled: _Z13luaL_checkanyP9lua_Statei
 * Demangled: luaL_checkany(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *
 * Referenced strings: 5
 *   insn=0x00000000004F8FA4 string=0x00000000004F8FA8 "~\t"
 *   insn=0x00000000004F8FA8 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8FC4 string=0x000000000059A5F8 "value expected"
 *   insn=0x00000000004F8FD4 string=0x00000000004F8FD8 "n"
 *   insn=0x00000000004F8FD8 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_checkany()
{
  __int64 result; // x0

  result = lua_type();
  if ( (_DWORD)result == -1 )
    luaL_argerror();
  return result;
}

