/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8BB4
 * Mangled: _Z16luaL_checkoptionP9lua_StateiPKcPKS2_
 * Demangled: luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *
 * Callers: 1
 *   0x00000000001F3D30  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *
 * Callees: 5
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 12
 *   insn=0x00000000004F8BE0 string=0x00000000004F8BE4 "o\n"
 *   insn=0x00000000004F8BE4 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8BFC string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004F8C04 string=0x00000000004F8C08 " "
 *   insn=0x00000000004F8C14 string=0x00000000004F8C18 "B"
 *   insn=0x00000000004F8C18 string=0x00000000004F8C1C " "
 *   insn=0x00000000004F8C18 string=0x00000000001FA120 "0'"
 *   insn=0x00000000004F8C24 string=0x00000000004F8C28 "`"
 *   insn=0x00000000004F8C2C string=0x000000000059A5D0 "invalid option '%s'"
 *   insn=0x00000000004F8C38 string=0x00000000004F8C3C "]*"
 *   insn=0x00000000004F8C58 string=0x00000000004F8C5C "M"
 *   insn=0x00000000004F8C5C string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_checkoption(__int64 a1, __int64 a2, const char *a3, const char **a4)
{
  const char *v5; // x21
  const char *v6; // x0
  __int64 v7; // x23
  const char **v8; // x22

  v5 = a3;
  if ( !a3 || (int)lua_type() >= 1 )
    v5 = (const char *)luaL_checklstring();
  v6 = *a4;
  if ( !*a4 )
  {
LABEL_8:
    lua_pushfstring();
    luaL_argerror();
  }
  v7 = 0;
  v8 = a4 + 1;
  while ( strcmp(v6, v5) )
  {
    v6 = v8[v7++];
    if ( !v6 )
      goto LABEL_8;
  }
  return (unsigned int)v7;
}

