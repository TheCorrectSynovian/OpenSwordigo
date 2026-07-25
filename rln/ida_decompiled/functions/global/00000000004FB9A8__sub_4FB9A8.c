/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB9A8
 * Mangled: sub_4FB9A8
 * Demangled: sub_4FB9A8
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000002004E0  luaL_checkstack(lua_State *,int,char const*)
 *
 * Referenced strings: 28
 *   insn=0x00000000004FB9C0 string=0x00000000004FB9C4 "V"
 *   insn=0x00000000004FB9D8 string=0x00000000004FB9DC "9"
 *   insn=0x00000000004FB9DC string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FB9F0 string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FB9F8 string=0x00000000004FB9FC ""
 *   insn=0x00000000004FB9FC string=0x00000000004FBA00 ""
 *   insn=0x00000000004FBA20 string=0x00000000004FBA24 "\t"
 *   insn=0x00000000004FBA24 string=0x00000000004FBA28 ")"
 *   insn=0x00000000004FBA28 string=0x00000000004FBA2C ")"
 *   insn=0x00000000004FBA2C string=0x00000000004FBA30 ")"
 *   insn=0x00000000004FBA30 string=0x00000000004FBA34 "?"
 *   insn=0x00000000004FBA34 string=0x00000000004FBA38 ""
 *   insn=0x00000000004FBA3C string=0x00000000004FBA40 "j"
 *   insn=0x00000000004FBA40 string=0x00000000004FBA4C "\t"
 *   insn=0x00000000004FBA44 string=0x00000000004FBA48 ""
 *   insn=0x00000000004FBA4C string=0x00000000004FBA50 "5"
 *   insn=0x00000000004FBA54 string=0x00000000004FBA58 "\t"
 *   insn=0x00000000004FBA58 string=0x00000000004FBA5C "?"
 *   insn=0x00000000004FBA64 string=0x000000000059AD27 "string slice too long"
 *   insn=0x00000000004FBA70 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FBA88 string=0x00000000004FBA8C "K"
 *   insn=0x00000000004FBAA0 string=0x00000000004FBAA4 "s"
 *   insn=0x00000000004FBAA4 string=0x00000000004FBAA8 "9"
 *   insn=0x00000000004FBAA4 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FBAA8 string=0x00000000004FBAAC "?"
 *   insn=0x00000000004FBAAC string=0x00000000004FBAB0 "k"
 *   insn=0x00000000004FBABC string=0x00000000004FBAC0 "!"
 *   insn=0x00000000004FBAE4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB9A8()
{
  __int64 v0; // x0
  __int64 v1; // x23
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x24
  int v5; // w21
  __int64 i; // x25
  unsigned __int64 v8; // [xsp+0h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  luaL_checklstring();
  v0 = luaL_optinteger();
  v1 = ((v8 + 1) & (v0 >> 63)) + v0;
  v2 = luaL_optinteger();
  v3 = v8;
  if ( (v1 & ~(v1 >> 63)) <= 1 )
    v4 = 1;
  else
    v4 = v1;
  if ( ((((v8 + 1) & (v2 >> 63)) + v2) & ~((__int64)(((v8 + 1) & (v2 >> 63)) + v2) >> 63)) <= v8 )
    v3 = (((v8 + 1) & (v2 >> 63)) + v2) & ~((__int64)(((v8 + 1) & (v2 >> 63)) + v2) >> 63);
  if ( v3 >= v4 )
  {
    v5 = v3 - v4 + 1;
    if ( v4 + v5 <= v3 )
      luaL_error();
    luaL_checkstack();
    if ( v5 >= 1 )
    {
      for ( i = 0; i < v5; ++i )
        lua_pushinteger();
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}

