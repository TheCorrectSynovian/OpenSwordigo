/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD1B0
 * Mangled: ._Z15lua_pushlstringP9lua_StatePKcm
 * Demangled: lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Callers: 26
 *   0x00000000004C1A6C  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x00000000004C2080  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x00000000004C20DC  Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *   0x00000000004C2124  Caver::ProgramTable::BoolForKey(std::string const&)
 *   0x00000000004C2184  Caver::ProgramTable::SetBoolForKey(std::string const&,bool)
 *   0x00000000004C21CC  Caver::ProgramTable::StringForKey(std::string const&)
 *   0x00000000004C22E0  Caver::ProgramTable::SetStringForKey(std::string const&,std::string const&)
 *   0x00000000004C2328  Caver::ProgramTable::IntForKey(std::string const&)
 *   0x00000000004C2384  Caver::ProgramTable::SetIntForKey(std::string const&,int)
 *   0x00000000004C23CC  Caver::ProgramTable::FloatForKey(std::string const&)
 *   0x00000000004C242C  Caver::ProgramTable::SetFloatForKey(std::string const&,float)
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *   0x00000000004F8B0C  luaL_where(lua_State *,int)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004F9594  luaL_gsub(lua_State *,char const*,char const*,char const*)
 *   0x00000000004F9850  luaL_pushresult(luaL_Buffer *)
 *   0x00000000004F98C0  luaL_prepbuffer(luaL_Buffer *)
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC928  sub_4FC928
 *   0x00000000004FD8D8  sub_4FD8D8
 *
 * Callees: 1
 *   0x00000000004E85A0  lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD1B8 string=0x00000000001FD1BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushlstring()
{
  return _Z15lua_pushlstringP9lua_StatePKcm();
}

