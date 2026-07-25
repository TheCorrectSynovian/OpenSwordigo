/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF60
 * Mangled: ._Z13lua_pushvalueP9lua_Statei
 * Demangled: lua_pushvalue(lua_State *,int)
 *
 * Callers: 23
 *   0x0000000000476BE8  sub_476BE8
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004C1AA8  Caver::ProgramState::PushValueAtStackIndex(int)
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FA2B4  sub_4FA2B4
 *   0x00000000004FA37C  sub_4FA37C
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FA778  sub_4FA778
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FB408  sub_4FB408
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E6D7C  lua_pushvalue(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCF64 string=0x00000000004E6D7C "?"
 *   insn=0x00000000001FCF68 string=0x00000000001FCF6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushvalue()
{
  return _Z13lua_pushvalueP9lua_Statei();
}

