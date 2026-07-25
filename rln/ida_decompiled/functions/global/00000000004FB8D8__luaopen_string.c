/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB8D8
 * Mangled: _Z14luaopen_stringP9lua_State
 * Demangled: luaopen_string(lua_State *)
 *
 * Callers: 1
 *   0x00000000001FF7F0  luaopen_string(lua_State *)
 *
 * Callees: 8
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *   0x00000000001FA550  lua_setfield(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FD620  lua_setmetatable(lua_State *,int)
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *
 * Referenced strings: 16
 *   insn=0x00000000004FB8E4 string=0x000000000059A84E "string"
 *   insn=0x00000000004FB8E8 string=0x00000000004FB8EC "!8!"
 *   insn=0x00000000004FB8EC string=0x00000000004FB8F0 "B`."
 *   insn=0x00000000004FB8FC string=0x000000000059ACEC "gmatch"
 *   insn=0x00000000004FB908 string=0x00000000004FB90C "u"
 *   insn=0x00000000004FB90C string=0x00000000001F9EE0 "0'"
 *   insn=0x00000000004FB910 string=0x000000000059ACF3 "gfind"
 *   insn=0x00000000004FB920 string=0x00000000001FA550 "0'"
 *   insn=0x00000000004FB92C string=0x00000000004FB930 "4 "
 *   insn=0x00000000004FB940 string=0x00000000004FB944 ""
 *   insn=0x00000000004FB944 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004FB950 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FB958 string=0x00000000004FB95C "1"
 *   insn=0x00000000004FB95C string=0x00000000001FD620 "0'"
 *   insn=0x00000000004FB970 string=0x00000000004FB974 "{"
 *   insn=0x00000000004FB978 string=0x0000000000595F05 "__index"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaopen_string(int a1)
{
  luaL_register();
  lua_getfield(a1, -1, "gmatch");
  lua_setfield(a1, -2, "gfind");
  lua_createtable();
  lua_pushlstring();
  lua_pushvalue();
  lua_setmetatable();
  lua_settop();
  lua_pushvalue();
  lua_setfield(a1, -2, "__index");
  lua_settop();
  return 1;
}

