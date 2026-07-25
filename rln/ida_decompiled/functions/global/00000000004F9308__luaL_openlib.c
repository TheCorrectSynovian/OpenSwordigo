/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9308
 * Mangled: _Z12luaL_openlibP9lua_StatePKcPK8luaL_Regi
 * Demangled: luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *
 * Callers: 1
 *   0x00000000001FED80  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *
 * Callees: 10
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *   0x00000000001FA390  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000001FA550  lua_setfield(lua_State *,int,char const*)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002034A0  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *   0x0000000000203DC0  lua_remove(lua_State *,int)
 *
 * Referenced strings: 17
 *   insn=0x00000000004F933C string=0x00000000004F9340 "\t"
 *   insn=0x00000000004F9354 string=0x000000000059A607 "_LOADED"
 *   insn=0x00000000004F9364 string=0x00000000004F9368 "\n"
 *   insn=0x00000000004F9368 string=0x00000000001FA390 "0'"
 *   insn=0x00000000004F9378 string=0x00000000001F9EE0 "0'"
 *   insn=0x00000000004F9384 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F9394 string=0x00000000004F9398 "^"
 *   insn=0x00000000004F9398 string=0x00000000004F939C "!"
 *   insn=0x00000000004F93B4 string=0x000000000059A60F "name conflict for module '%s'"
 *   insn=0x00000000004F93C4 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004F93D0 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004F93DC string=0x00000000004F93E0 "\"
 *   insn=0x00000000004F93E0 string=0x00000000001FA550 "0'"
 *   insn=0x00000000004F93E8 string=0x00000000004F93EC "u*"
 *   insn=0x00000000004F93F4 string=0x00000000004F93F8 "V("
 *   insn=0x00000000004F9448 string=0x00000000004F944C "A"
 *   insn=0x00000000004F946C string=0x00000000004F9470 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_openlib(int a1, char *a2, _QWORD *a3, int a4)
{
  char **v5; // x21
  int v8; // w23
  __int64 *v9; // x8
  __int64 v10; // t1
  int v11; // w24
  char *v12; // t1

  v5 = (char **)a3;
  if ( a2 )
  {
    if ( *a3 )
    {
      v8 = 0;
      v9 = a3 + 2;
      do
      {
        v10 = *v9;
        v9 += 2;
        ++v8;
      }
      while ( v10 );
    }
    luaL_findtable();
    lua_getfield(a1, -1, a2);
    if ( (unsigned int)lua_type() != 5 )
    {
      lua_settop();
      if ( luaL_findtable() )
        luaL_error();
      lua_pushvalue();
      lua_setfield(a1, -3, a2);
    }
    lua_remove();
    lua_insert();
  }
  if ( *v5 )
  {
    do
    {
      if ( a4 >= 1 )
      {
        v11 = a4;
        do
        {
          lua_pushvalue();
          --v11;
        }
        while ( v11 );
      }
      lua_pushcclosure();
      lua_setfield(a1, -2 - a4, *v5);
      v12 = v5[2];
      v5 += 2;
    }
    while ( v12 );
  }
  return lua_settop();
}

