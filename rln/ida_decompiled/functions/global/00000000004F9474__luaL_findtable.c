/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9474
 * Mangled: _Z14luaL_findtableP9lua_StateiPKci
 * Demangled: luaL_findtable(lua_State *,int,char const*,int)
 *
 * Callers: 1
 *   0x00000000001FA390  luaL_findtable(lua_State *,int,char const*,int)
 *
 * Callees: 10
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x00000000001FA030  .strchr
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203230  .strlen
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *   0x0000000000203DC0  lua_remove(lua_State *,int)
 *
 * Referenced strings: 13
 *   insn=0x00000000004F9494 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004F94A0 string=0x00000000001FA030 "0'"
 *   insn=0x00000000004F94AC string=0x00000000004F94B0 "`'"
 *   insn=0x00000000004F94C4 string=0x00000000004F94C8 ":"
 *   insn=0x00000000004F94C8 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F94D0 string=0x00000000004F94D4 "o"
 *   insn=0x00000000004F94D4 string=0x00000000001F5E90 "P'"
 *   insn=0x00000000004F94DC string=0x00000000004F94E0 "0"
 *   insn=0x00000000004F94E0 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F94EC string=0x00000000004F94F0 ","
 *   insn=0x00000000004F951C string=0x00000000004F9520 "8)"
 *   insn=0x00000000004F952C string=0x00000000004F9530 " "
 *   insn=0x00000000004F9550 string=0x00000000004F9554 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall luaL_findtable(__int64 a1, __int64 a2, const char *a3)
{
  char *v4; // x22

  lua_pushvalue();
  do
  {
    v4 = strchr(a3, 46);
    if ( !v4 )
      v4 = (char *)&a3[strlen(a3)];
    lua_pushlstring();
    lua_rawget();
    if ( (unsigned int)lua_type() )
    {
      if ( (unsigned int)lua_type() != 5 )
      {
        lua_settop();
        return a3;
      }
    }
    else
    {
      lua_settop();
      lua_createtable();
      lua_pushlstring();
      lua_pushvalue();
      lua_settable();
    }
    lua_remove();
    a3 = v4 + 1;
  }
  while ( *v4 == 46 );
  return 0;
}

