/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA130
 * Mangled: _Z12luaopen_baseP9lua_State
 * Demangled: luaopen_base(lua_State *)
 *
 * Callers: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callees: 12
 *   0x00000000001FA550  lua_setfield(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FD620  lua_setmetatable(lua_State *,int)
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *   0x00000000002034A0  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *   0x00000000004FA2B4  sub_4FA2B4
 *   0x00000000004FA304  sub_4FA304
 *   0x00000000004FA37C  sub_4FA37C
 *   0x00000000004FA3C8  sub_4FA3C8
 *   0x00000000004FA420  sub_4FA420
 *
 * Referenced strings: 21
 *   insn=0x00000000004FA138 string=0x00000000004FA13C "!"
 *   insn=0x00000000004FA144 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FA148 string=0x00000000004FA150 "!"
 *   insn=0x00000000004FA148 string=0x000000000059A6A4 "_G"
 *   insn=0x00000000004FA15C string=0x00000000001FA550 "0'"
 *   insn=0x00000000004FA174 string=0x000000000059A6A7 "Lua 5.1"
 *   insn=0x00000000004FA180 string=0x00000000004FA184 ""
 *   insn=0x00000000004FA184 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004FA188 string=0x00000000004FA190 "!"
 *   insn=0x00000000004FA188 string=0x000000000059A6AF "_VERSION"
 *   insn=0x00000000004FA1C4 string=0x000000000059A6B8 "ipairs"
 *   insn=0x00000000004FA200 string=0x000000000059A6B9 "pairs"
 *   insn=0x00000000004FA228 string=0x00000000004FA22C "M"
 *   insn=0x00000000004FA238 string=0x00000000001FD620 "0'"
 *   insn=0x00000000004FA23C string=0x000000000059A6BF "kv"
 *   insn=0x00000000004FA250 string=0x000000000059A328 "__mode"
 *   insn=0x00000000004FA278 string=0x00000000004FA280 "!"
 *   insn=0x00000000004FA278 string=0x000000000059A6C2 "newproxy"
 *   insn=0x00000000004FA28C string=0x0000000000599A93 "coroutine"
 *   insn=0x00000000004FA290 string=0x00000000004FA294 "!L*"
 *   insn=0x00000000004FA294 string=0x00000000004FA298 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaopen_base(int a1)
{
  lua_pushvalue();
  lua_setfield(a1, -10002, "_G");
  luaL_register();
  lua_pushlstring();
  lua_setfield(a1, -10002, "_VERSION");
  lua_pushcclosure();
  lua_pushcclosure();
  lua_setfield(a1, -2, "ipairs");
  lua_pushcclosure();
  lua_pushcclosure();
  lua_setfield(a1, -2, "pairs");
  lua_createtable();
  lua_pushvalue();
  lua_setmetatable();
  lua_pushlstring();
  lua_setfield(a1, -2, "__mode");
  lua_pushcclosure();
  lua_setfield(a1, -10002, "newproxy");
  luaL_register();
  return 2;
}

