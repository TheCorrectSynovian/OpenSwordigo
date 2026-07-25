/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9B1C
 * Mangled: _Z8luaL_refP9lua_Statei
 * Demangled: luaL_ref(lua_State *,int)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5A00  lua_objlen(lua_State *,int)
 *   0x00000000001F6640  lua_rawgeti(lua_State *,int,int)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FB1C0  lua_tointeger(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000202730  lua_rawseti(lua_State *,int,int)
 *
 * Referenced strings: 12
 *   insn=0x00000000004F9B30 string=0x00000000004F9B34 "h"
 *   insn=0x00000000004F9B34 string=0x00000000004F9B38 "}"
 *   insn=0x00000000004F9B4C string=0x00000000004F9B50 "h"
 *   insn=0x00000000004F9B4C string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004F9B60 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F9B74 string=0x00000000001F6640 "0'"
 *   insn=0x00000000004F9B80 string=0x00000000001FB1C0 "0'"
 *   insn=0x00000000004F9B8C string=0x00000000004F9B90 "`"
 *   insn=0x00000000004F9BB4 string=0x00000000004F9BB8 ""
 *   insn=0x00000000004F9BC0 string=0x00000000004F9BC4 "S"
 *   insn=0x00000000004F9BC8 string=0x00000000004F9BCC ""
 *   insn=0x00000000004F9BD0 string=0x00000000001F5A00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_ref(__int64 a1, int a2)
{
  unsigned int v2; // w21

  if ( (unsigned int)(a2 + 9999) >> 4 <= 0x270 )
    lua_gettop();
  if ( (unsigned int)lua_type() )
  {
    lua_rawgeti();
    v2 = lua_tointeger();
    lua_settop();
    if ( v2 )
    {
      lua_rawgeti();
      lua_rawseti();
    }
    else
    {
      v2 = lua_objlen() + 1;
    }
    lua_rawseti();
  }
  else
  {
    lua_settop();
    return (unsigned int)-1;
  }
  return v2;
}

