/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB094
 * Mangled: sub_4FB094
 * Demangled: sub_4FB094
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *
 * Referenced strings: 3
 *   insn=0x00000000004FB0A8 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FB0B0 string=0x00000000004FB0B4 ";"
 *   insn=0x00000000004FB0B4 string=0x00000000001FB5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB094(int a1)
{
  char *v2; // x0

  luaL_checkany();
  lua_type();
  v2 = (char *)lua_typename();
  lua_pushstring(a1, v2);
  return 1;
}

