/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA420
 * Mangled: sub_4FA420
 * Demangled: sub_4FA420
 *
 * Callers: 1
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *
 * Callees: 12
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001F5CA0  lua_newuserdata(lua_State *,ulong)
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x00000000001F8F00  lua_rawset(lua_State *,int)
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD620  lua_setmetatable(lua_State *,int)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *
 * Referenced strings: 19
 *   insn=0x00000000004FA430 string=0x00000000004FA434 "7"
 *   insn=0x00000000004FA440 string=0x00000000001F5CA0 "P'"
 *   insn=0x00000000004FA44C string=0x00000000001F4010 "P'"
 *   insn=0x00000000004FA458 string=0x00000000004FA45C "Q"
 *   insn=0x00000000004FA45C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FA470 string=0x00000000004FA474 "c%"
 *   insn=0x00000000004FA480 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FA48C string=0x00000000004FA490 "A"
 *   insn=0x00000000004FA498 string=0x00000000001F8F00 "0'"
 *   insn=0x00000000004FA4A8 string=0x00000000001F92F0 "0'"
 *   insn=0x00000000004FA4AC string=0x00000000004FA4B0 "A"
 *   insn=0x00000000004FA4B4 string=0x00000000004FA4B8 "v"
 *   insn=0x00000000004FA4B8 string=0x00000000001F5E90 "P'"
 *   insn=0x00000000004FA4DC string=0x000000000059A94B "boolean or proxy expected"
 *   insn=0x00000000004FA4E8 string=0x00000000004FA4EC ")"
 *   insn=0x00000000004FA4EC string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FA4F4 string=0x00000000004FA4F8 "~"
 *   insn=0x00000000004FA500 string=0x00000000004FA504 "G"
 *   insn=0x00000000004FA504 string=0x00000000001FD620 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA420()
{
  int v0; // w20

  lua_settop();
  lua_newuserdata();
  if ( (unsigned int)lua_toboolean() )
  {
    if ( (unsigned int)lua_type() == 1 )
    {
      lua_createtable();
      lua_pushvalue();
      lua_pushboolean();
      lua_rawset();
    }
    else
    {
      if ( !(unsigned int)lua_getmetatable() || (lua_rawget(), v0 = lua_toboolean(), lua_settop(), !v0) )
        luaL_argerror();
      lua_getmetatable();
    }
    lua_setmetatable();
  }
  return 1;
}

