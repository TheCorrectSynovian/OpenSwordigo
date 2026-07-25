/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB484
 * Mangled: sub_4FB484
 * Demangled: sub_4FB484
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F9110  lua_tothread(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Referenced strings: 8
 *   insn=0x00000000004FB49C string=0x00000000001F9110 "0'"
 *   insn=0x00000000004FB4A8 string=0x000000000059A994 "coroutine expected"
 *   insn=0x00000000004FB4B4 string=0x00000000004FB4B8 "6"
 *   insn=0x00000000004FB4B8 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FB4C0 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FB4CC string=0x00000000004FB4D0 "y"
 *   insn=0x00000000004FB4D4 string=0x00000000004FB4D8 "5"
 *   insn=0x00000000004FB4F4 string=0x00000000004FB4F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB484(__int64 a1)
{
  __int64 v2; // x20
  int v3; // w0
  int v4; // w21
  unsigned int v5; // w20

  v2 = lua_tothread();
  if ( !v2 )
    luaL_argerror();
  v3 = lua_gettop();
  v4 = sub_4FB6B4(a1, v2, (unsigned int)(v3 - 1));
  lua_pushboolean();
  if ( v4 < 0 )
  {
    lua_insert();
    return 2;
  }
  else
  {
    v5 = v4 + 1;
    lua_insert();
  }
  return v5;
}

