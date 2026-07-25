/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F91C0
 * Mangled: _Z17luaL_getmetafieldP9lua_StateiPKc
 * Demangled: luaL_getmetafield(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000001FEFB0  luaL_getmetafield(lua_State *,int,char const*)
 *
 * Callees: 6
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *   0x0000000000203DC0  lua_remove(lua_State *,int)
 *
 * Referenced strings: 6
 *   insn=0x00000000004F91D0 string=0x00000000004F91D4 "G"
 *   insn=0x00000000004F91D4 string=0x00000000001F92F0 "0'"
 *   insn=0x00000000004F91E0 string=0x00000000004F91E4 "[%"
 *   insn=0x00000000004F91EC string=0x00000000004F91F0 "("
 *   insn=0x00000000004F91F0 string=0x00000000001F5E90 "P'"
 *   insn=0x00000000004F91FC string=0x00000000001FB5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_getmetafield(int a1, __int64 a2, char *a3)
{
  __int64 result; // x0

  result = lua_getmetatable();
  if ( (_DWORD)result )
  {
    lua_pushstring(a1, a3);
    lua_rawget();
    if ( (unsigned int)lua_type() )
    {
      lua_remove();
      return 1;
    }
    else
    {
      lua_settop();
      return 0;
    }
  }
  return result;
}

