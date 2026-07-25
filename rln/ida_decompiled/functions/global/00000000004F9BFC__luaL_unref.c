/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9BFC
 * Mangled: _Z10luaL_unrefP9lua_Stateii
 * Demangled: luaL_unref(lua_State *,int,int)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6640  lua_rawgeti(lua_State *,int,int)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x0000000000202730  lua_rawseti(lua_State *,int,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004F9C1C string=0x00000000004F9C20 "h"
 *   insn=0x00000000004F9C20 string=0x00000000004F9C24 "}"
 *   insn=0x00000000004F9C34 string=0x00000000004F9C38 "h"
 *   insn=0x00000000004F9C34 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004F9C48 string=0x00000000004F9C4C "}"
 *   insn=0x00000000004F9C4C string=0x00000000001F6640 "0'"
 *   insn=0x00000000004F9C68 string=0x00000000001F7C70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_unref(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  if ( (a3 & 0x80000000) == 0 )
  {
    if ( (unsigned int)(a2 + 9999) >> 4 <= 0x270 )
      lua_gettop();
    lua_rawgeti();
    lua_rawseti();
    lua_pushinteger();
    return lua_rawseti();
  }
  return result;
}

