/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB850
 * Mangled: sub_4FB850
 * Demangled: sub_4FB850
 *
 * Callers: 1
 *   0x00000000004FB654  sub_4FB654
 *
 * Callees: 8
 *   0x00000000001F3BE0  lua_error(lua_State *)
 *   0x00000000001F7AA0  lua_isstring(lua_State *,int)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F9110  lua_tothread(lua_State *,int)
 *   0x00000000001FF580  luaL_where(lua_State *,int)
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Referenced strings: 10
 *   insn=0x00000000004FB858 string=0x00000000004FB85C "A"
 *   insn=0x00000000004FB860 string=0x00000000004FB864 "+"
 *   insn=0x00000000004FB864 string=0x00000000001F9110 "0'"
 *   insn=0x00000000004FB870 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FB894 string=0x00000000004FB898 "@"
 *   insn=0x00000000004FB894 string=0x00000000001F7AA0 "0'"
 *   insn=0x00000000004FB8A0 string=0x00000000004FB8A4 "7"
 *   insn=0x00000000004FB8AC string=0x00000000004FB8B0 "("
 *   insn=0x00000000004FB8B8 string=0x00000000004FB8BC "M"
 *   insn=0x00000000004FB8C4 string=0x00000000001F3BE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB850(__int64 a1)
{
  __int64 v2; // x20
  unsigned int v3; // w20

  v2 = lua_tothread();
  lua_gettop();
  v3 = sub_4FB6B4(a1, v2);
  if ( (v3 & 0x80000000) != 0 )
  {
    if ( (unsigned int)lua_isstring() )
    {
      luaL_where();
      lua_insert();
      lua_concat();
    }
    lua_error();
  }
  return v3;
}

