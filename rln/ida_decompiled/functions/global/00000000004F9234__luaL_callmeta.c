/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9234
 * Mangled: _Z13luaL_callmetaP9lua_StateiPKc
 * Demangled: luaL_callmeta(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000001F6AF0  luaL_callmeta(lua_State *,int,char const*)
 *
 * Callees: 9
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *   0x0000000000203DC0  lua_remove(lua_State *,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004F924C string=0x00000000004F9250 "}"
 *   insn=0x00000000004F9268 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004F927C string=0x00000000004F9280 "@"
 *   insn=0x00000000004F927C string=0x00000000001F92F0 "0'"
 *   insn=0x00000000004F9288 string=0x00000000004F928C "1%"
 *   insn=0x00000000004F9298 string=0x00000000001F5E90 "P'"
 *   insn=0x00000000004F92A4 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F92BC string=0x00000000004F92C0 "("
 *   insn=0x00000000004F92C0 string=0x00000000001FCF60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_callmeta(int a1, int a2, char *a3)
{
  unsigned int v5; // w20

  if ( (unsigned int)(a2 + 9999) >> 4 <= 0x270 )
    lua_gettop();
  if ( !(unsigned int)lua_getmetatable() )
    return 0;
  lua_pushstring(a1, a3);
  lua_rawget();
  if ( !(unsigned int)lua_type() )
  {
    lua_settop();
    return 0;
  }
  lua_remove();
  lua_pushvalue();
  v5 = 1;
  lua_call();
  return v5;
}

