/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FACEC
 * Mangled: sub_4FACEC
 * Demangled: sub_4FACEC
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3A40  lua_iscfunction(lua_State *,int)
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F8A50  lua_setfenv(lua_State *,int)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FED10  lua_pushthread(lua_State *)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *   0x00000000004FB244  sub_4FB244
 *
 * Referenced strings: 16
 *   insn=0x00000000004FAD00 string=0x00000000004FAD04 "7"
 *   insn=0x00000000004FAD04 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FAD0C string=0x00000000004FAD10 "M"
 *   insn=0x00000000004FAD1C string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FAD24 string=0x00000000004FAD28 "R"
 *   insn=0x00000000004FAD28 string=0x00000000001FAE70 "0'"
 *   insn=0x00000000004FAD38 string=0x00000000004FAD3C " `"
 *   insn=0x00000000004FAD38 string=0x00000000001F5030 "P'"
 *   insn=0x00000000004FAD3C string=0x00000000004FAD40 "a"
 *   insn=0x00000000004FAD5C string=0x00000000004FAD60 "<"
 *   insn=0x00000000004FAD60 string=0x00000000001F8A50 "0'"
 *   insn=0x00000000004FAD70 string=0x00000000004FAD74 "3"
 *   insn=0x00000000004FAD74 string=0x00000000001F3A40 "P'"
 *   insn=0x00000000004FAD7C string=0x000000000059A893 "'setfenv' cannot change environment of given object"
 *   insn=0x00000000004FAD88 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FAD94 string=0x00000000004FAD98 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FACEC(__int64 a1)
{
  double v2; // d0

  luaL_checktype();
  sub_4FB244(a1, 0);
  lua_pushvalue();
  if ( (unsigned int)lua_isnumber() && (lua_tonumber(), v2 == 0.0) )
  {
    lua_pushthread();
    lua_insert();
    lua_setfenv();
    return 0;
  }
  else
  {
    if ( (unsigned int)lua_iscfunction() || !(unsigned int)lua_setfenv() )
      luaL_error();
    return 1;
  }
}

