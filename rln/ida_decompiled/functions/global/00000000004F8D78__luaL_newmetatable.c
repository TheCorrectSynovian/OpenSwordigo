/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8D78
 * Mangled: _Z17luaL_newmetatableP9lua_StatePKc
 * Demangled: luaL_newmetatable(lua_State *,char const*)
 *
 * Callers: 1
 *   0x0000000000203440  luaL_newmetatable(lua_State *,char const*)
 *
 * Callees: 6
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *   0x00000000001FA550  lua_setfield(lua_State *,int,char const*)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004F8D90 string=0x00000000004F8D94 "S"
 *   insn=0x00000000004F8D94 string=0x00000000001F9EE0 "0'"
 *   insn=0x00000000004F8DA0 string=0x00000000004F8DA4 "`"
 *   insn=0x00000000004F8DA0 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8DD0 string=0x00000000004F8DD4 "c"
 *   insn=0x00000000004F8DD4 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004F8DE4 string=0x00000000001FA550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_newmetatable(int a1, char *a2)
{
  lua_getfield(a1, -10000, a2);
  if ( (unsigned int)lua_type() )
    return 0;
  lua_settop();
  lua_createtable();
  lua_pushvalue();
  lua_setfield(a1, -10000, a2);
  return 1;
}

