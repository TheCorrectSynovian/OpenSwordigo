/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB35C
 * Mangled: sub_4FB35C
 * Demangled: sub_4FB35C
 *
 * Callers: 1
 *   0x00000000004FA880  sub_4FA880
 *
 * Callees: 8
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F7AA0  lua_isstring(lua_State *,int)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD3A0  lua_replace(lua_State *,int)
 *   0x00000000002004E0  luaL_checkstack(lua_State *,int,char const*)
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004FB36C string=0x000000000059A816 "too many nested functions"
 *   insn=0x00000000004FB378 string=0x00000000004FB37C "Y"
 *   insn=0x00000000004FB388 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FB3A4 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FB3B4 string=0x00000000001F7AA0 "0'"
 *   insn=0x00000000004FB3C4 string=0x00000000001FD3A0 "0'"
 *   insn=0x00000000004FB3DC string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FB3E8 string=0x000000000059A830 "reader function must return a string"
 *   insn=0x00000000004FB3F4 string=0x00000000001FADF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB35C(__int64 a1, __int64 a2, _QWORD *a3)
{
  luaL_checkstack();
  lua_pushvalue();
  lua_call();
  if ( (unsigned int)lua_type() )
  {
    if ( !(unsigned int)lua_isstring() )
      luaL_error();
    lua_replace();
    return lua_tolstring();
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}

