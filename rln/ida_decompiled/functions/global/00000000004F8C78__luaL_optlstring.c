/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8C78
 * Mangled: _Z15luaL_optlstringP9lua_StateiPKcPm
 * Demangled: luaL_optlstring(lua_State *,int,char const*,ulong *)
 *
 * Callers: 1
 *   0x00000000001F7970  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *
 * Callees: 3
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 6
 *   insn=0x00000000004F8C94 string=0x00000000004F8C98 "B\n"
 *   insn=0x00000000004F8C98 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8C9C string=0x00000000004F8CA0 ""
 *   insn=0x00000000004F8CBC string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004F8CC8 string=0x00000000004F8CCC "Y)"
 *   insn=0x00000000004F8CD0 string=0x00000000004F8CD8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_optlstring(__int64 a1, __int64 a2, const char *a3, size_t *a4)
{
  size_t v7; // x0

  if ( (int)lua_type() > 0 )
    return luaL_checklstring();
  if ( a4 )
  {
    if ( a3 )
      v7 = strlen(a3);
    else
      v7 = 0;
    *a4 = v7;
  }
  return (__int64)a3;
}

