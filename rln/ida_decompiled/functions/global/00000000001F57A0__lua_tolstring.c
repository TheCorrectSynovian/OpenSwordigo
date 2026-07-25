/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F57A0
 * Mangled: ._Z13lua_tolstringP9lua_StateiPm
 * Demangled: lua_tolstring(lua_State *,int,ulong *)
 *
 * Callers: 16
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004C0C6C  Caver::Program::LoadIntoState(lua_State *)
 *   0x00000000004C191C  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000004C21CC  Caver::ProgramTable::StringForKey(std::string const&)
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000004F8CF0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000004F9594  luaL_gsub(lua_State *,char const*,char const*,char const*)
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x00000000004FA0F4  sub_4FA0F4
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FAC38  sub_4FAC38
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 1
 *   0x00000000004E7CE0  lua_tolstring(lua_State *,int,ulong *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F57A8 string=0x00000000001F57AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_tolstring()
{
  return _Z13lua_tolstringP9lua_StateiPm();
}

