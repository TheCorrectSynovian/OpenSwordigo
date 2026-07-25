/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FAE4C
 * Mangled: sub_4FAE4C
 * Demangled: sub_4FAE4C
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FFCB0  lua_pushnumber(lua_State *,double)
 *   0x00000000002005D0  .isspace
 *   0x0000000000201750  .strtoul
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *
 * Referenced strings: 17
 *   insn=0x00000000004FAE60 string=0x00000000004FAE64 "V"
 *   insn=0x00000000004FAE6C string=0x00000000004FAE70 "B"
 *   insn=0x00000000004FAE7C string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FAE8C string=0x00000000004FAE90 "A"
 *   insn=0x00000000004FAE94 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FAEA0 string=0x00000000004FAEA4 "@"
 *   insn=0x00000000004FAEA0 string=0x00000000001FAE70 "0'"
 *   insn=0x00000000004FAEAC string=0x00000000004FAEB0 "`"
 *   insn=0x00000000004FAEB0 string=0x00000000004FAEB4 """
 *   insn=0x00000000004FAEB0 string=0x00000000001F5030 "P'"
 *   insn=0x00000000004FAEBC string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FAED0 string=0x000000000059A901 "base out of range"
 *   insn=0x00000000004FAEE0 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FAEFC string=0x00000000004FAF00 "`"
 *   insn=0x00000000004FAF2C string=0x00000000004FAF30 " "
 *   insn=0x00000000004FAF3C string=0x00000000004FAF40 "\"
 *   insn=0x00000000004FAF70 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FAE4C()
{
  int v0; // w20
  const char *v1; // x0
  char *v2; // x21
  char *v3; // x23
  int v4; // w21
  int v5; // t1
  char *v7[2]; // [xsp+0h] [xbp-40h] BYREF

  v7[1] = *(char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = luaL_optinteger();
  if ( v0 == 10 )
  {
    luaL_checkany();
    if ( (unsigned int)lua_isnumber() )
    {
      lua_tonumber();
LABEL_12:
      lua_pushnumber();
      return 1;
    }
  }
  else
  {
    v1 = (const char *)luaL_checklstring();
    v2 = (char *)v1;
    if ( (unsigned int)(v0 - 2) >= 0x23 )
      luaL_argerror();
    strtoul(v1, v7, v0);
    v3 = v7[0];
    if ( v2 != v7[0] )
    {
      v4 = (unsigned __int8)*v7[0];
      if ( isspace(v4) )
      {
        do
        {
          v5 = (unsigned __int8)*++v3;
          v4 = v5;
        }
        while ( isspace(v5) );
        v7[0] = v3;
      }
      if ( !v4 )
        goto LABEL_12;
    }
  }
  lua_pushnil();
  return 1;
}

