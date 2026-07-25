/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8410
 * Mangled: ._Z12lua_rawequalP9lua_Stateii
 * Demangled: lua_rawequal(lua_State *,int,int)
 *
 * Callers: 2
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004FAB3C  sub_4FAB3C
 *
 * Callees: 1
 *   0x00000000004E737C  lua_rawequal(lua_State *,int,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8414 string=0x00000000004E737C "?"
 *   insn=0x00000000001F8418 string=0x00000000001F841C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_rawequal()
{
  return _Z12lua_rawequalP9lua_Stateii();
}

