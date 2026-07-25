/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FD8D8
 * Mangled: sub_4FD8D8
 * Demangled: sub_4FD8D8
 *
 * Callers: 3
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FCAF8  sub_4FCAF8
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 3
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Referenced strings: 12
 *   insn=0x00000000004FD8F0 string=0x00000000004FD8F4 "M"
 *   insn=0x00000000004FD8FC string=0x00000000004FD900 "5|@"
 *   insn=0x00000000004FD928 string=0x00000000004FD92C ")"
 *   insn=0x00000000004FD92C string=0x00000000004FD930 "!"
 *   insn=0x00000000004FD938 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FD940 string=0x00000000004FD980 "h"
 *   insn=0x00000000004FD94C string=0x000000000059AE17 "invalid capture index"
 *   insn=0x00000000004FD954 string=0x00000000004FD958 "&"
 *   insn=0x00000000004FD958 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FD960 string=0x00000000004FD968 """
 *   insn=0x00000000004FD960 string=0x000000000059AE2D "unfinished capture"
 *   insn=0x00000000004FD998 string=0x00000000001FD1B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FD8D8(__int64 a1, int a2)
{
  __int64 v2; // x19

  if ( *(_DWORD *)(a1 + 24) <= a2 )
  {
    if ( a2 )
      luaL_error();
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 16LL * a2 + 40);
    if ( v2 == -1 )
      luaL_error();
    if ( v2 == -2 )
      return lua_pushinteger();
  }
  return lua_pushlstring();
}

