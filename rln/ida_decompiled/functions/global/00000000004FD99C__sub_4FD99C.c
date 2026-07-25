/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FD99C
 * Mangled: sub_4FD99C
 * Demangled: sub_4FD99C
 *
 * Callers: 1
 *   0x00000000004FC1E8  sub_4FC1E8
 *
 * Callees: 8
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FB1C0  lua_tointeger(lua_State *,int)
 *   0x00000000001FD3A0  lua_replace(lua_State *,int)
 *   0x00000000002004E0  luaL_checkstack(lua_State *,int,char const*)
 *   0x00000000004FCDB4  sub_4FCDB4
 *   0x00000000004FD8D8  sub_4FD8D8
 *
 * Referenced strings: 18
 *   insn=0x00000000004FD9B4 string=0x00000000004FD9B8 "X"
 *   insn=0x00000000004FD9B8 string=0x00000000004FD9BC ""
 *   insn=0x00000000004FD9BC string=0x00000000004FD9C0 "A"
 *   insn=0x00000000004FD9CC string=0x00000000004FD9D0 "t"
 *   insn=0x00000000004FD9D0 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FD9D4 string=0x00000000004FD9D8 "a"
 *   insn=0x00000000004FD9E0 string=0x00000000004FD9E4 "o"
 *   insn=0x00000000004FDA04 string=0x00000000001FB1C0 "0'"
 *   insn=0x00000000004FDA28 string=0x00000000004FDA2C "U"
 *   insn=0x00000000004FDA40 string=0x00000000004FDA44 ""
 *   insn=0x00000000004FDA80 string=0x00000000004FDA84 "{"
 *   insn=0x00000000004FDA84 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FDA8C string=0x00000000004FDA90 "D"
 *   insn=0x00000000004FDA90 string=0x00000000001FD3A0 "0'"
 *   insn=0x00000000004FDA9C string=0x000000000059AD97 "too many captures"
 *   insn=0x00000000004FDAB8 string=0x00000000004FDABC "K"
 *   insn=0x00000000004FDADC string=0x00000000004FDAE0 "!"
 *   insn=0x00000000004FDAE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FD99C(__int64 a1)
{
  __int64 v2; // x22
  unsigned __int8 *v3; // x23
  __int64 v4; // x0
  unsigned __int8 *v5; // x20
  int v6; // w19
  bool v8; // zf
  int i; // w22
  __int64 v10; // [xsp+0h] [xbp-270h]
  __int64 v11; // [xsp+8h] [xbp-268h] BYREF
  unsigned __int64 v12; // [xsp+10h] [xbp-260h]
  __int64 v13; // [xsp+18h] [xbp-258h]
  int v14; // [xsp+20h] [xbp-250h]
  __int64 v15; // [xsp+228h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = lua_tolstring();
  v3 = (unsigned __int8 *)lua_tolstring();
  v11 = v2;
  v12 = v2 + v10;
  v13 = a1;
  v4 = lua_tointeger();
  if ( v4 > v10 )
  {
    return 0;
  }
  else
  {
    v5 = (unsigned __int8 *)(v2 + v4);
    while ( 1 )
    {
      v14 = 0;
      if ( sub_4FCDB4((__int64)&v11, v5, v3) )
        break;
      if ( (unsigned __int64)++v5 > v12 )
        return 0;
    }
    lua_pushinteger();
    lua_replace();
    if ( v14 )
      v8 = 1;
    else
      v8 = v5 == 0;
    if ( v8 )
      v6 = v14;
    else
      v6 = 1;
    luaL_checkstack();
    if ( v6 >= 1 )
    {
      for ( i = 0; i != v6; ++i )
        sub_4FD8D8((__int64)&v11, i);
    }
  }
  return (unsigned int)v6;
}

