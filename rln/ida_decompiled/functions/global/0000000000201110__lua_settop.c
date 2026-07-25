/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201110
 * Mangled: ._Z10lua_settopP9lua_Statei
 * Demangled: lua_settop(lua_State *,int)
 *
 * Callers: 37
 *   0x0000000000476BE8  sub_476BE8
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004C182C  Caver::ProgramState::Execute(int)
 *   0x00000000004C18A8  Caver::ProgramState::Pop(int)
 *   0x00000000004C1B20  Caver::ProgramState::RegisterFunctions(Caver::LibFunction const*)
 *   0x00000000004C1B58  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x00000000004C1FF0  Caver::ProgramTable::PointerForPointerKey(void *)
 *   0x00000000004C2080  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x00000000004C2124  Caver::ProgramTable::BoolForKey(std::string const&)
 *   0x00000000004C21CC  Caver::ProgramTable::StringForKey(std::string const&)
 *   0x00000000004C2328  Caver::ProgramTable::IntForKey(std::string const&)
 *   0x00000000004C23CC  Caver::ProgramTable::FloatForKey(std::string const&)
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x00000000004FA3C8  sub_4FA3C8
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FA6C8  sub_4FA6C8
 *   0x00000000004FA880  sub_4FA880
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FAB8C  sub_4FAB8C
 *   0x00000000004FABDC  sub_4FABDC
 *   0x00000000004FADB0  sub_4FADB0
 *   0x00000000004FB1D4  sub_4FB1D4
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *   0x00000000004FBBE4  sub_4FBBE4
 *   0x00000000004FC1E8  sub_4FC1E8
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E6904  lua_settop(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201118 string=0x000000000020111C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_settop()
{
  return _Z10lua_settopP9lua_Statei();
}

