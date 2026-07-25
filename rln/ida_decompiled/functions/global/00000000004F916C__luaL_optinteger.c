/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F916C
 * Mangled: _Z15luaL_optintegerP9lua_Stateil
 * Demangled: luaL_optinteger(lua_State *,int,long)
 *
 * Callers: 1
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *
 * Callees: 2
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004F9188 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F91A8 string=0x00000000001F54B0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_optinteger(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (int)lua_type() < 1 )
    return a3;
  else
    return luaL_checkinteger();
}

