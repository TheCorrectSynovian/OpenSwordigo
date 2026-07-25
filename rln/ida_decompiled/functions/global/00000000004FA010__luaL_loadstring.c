/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA010
 * Mangled: _Z15luaL_loadstringP9lua_StatePKc
 * Demangled: luaL_loadstring(lua_State *,char const*)
 *
 * Callers: 1
 *   0x00000000001FB9D0  luaL_loadstring(lua_State *,char const*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8110  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *   0x0000000000203230  .strlen
 *   0x00000000004F9FF0  sub_4F9FF0
 *
 * Referenced strings: 7
 *   insn=0x00000000004FA020 string=0x00000000004FA024 "U"
 *   insn=0x00000000004FA038 string=0x00000000004FA03C "}$"
 *   insn=0x00000000004FA040 string=0x00000000004F9FF0 "("
 *   insn=0x00000000004FA044 string=0x00000000004FA048 "!"
 *   insn=0x00000000004FA054 string=0x00000000004FA058 "."
 *   insn=0x00000000004FA058 string=0x00000000001F8110 "0'"
 *   insn=0x00000000004FA080 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_loadstring(int a1, char *a2)
{
  _ReadStatusReg(TPIDR_EL0);
  strlen(a2);
  return lua_load();
}

