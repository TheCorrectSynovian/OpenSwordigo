/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB9D0
 * Mangled: ._Z15luaL_loadstringP9lua_StatePKc
 * Demangled: luaL_loadstring(lua_State *,char const*)
 *
 * Callers: 2
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004C17C4  Caver::ProgramState::ExecuteString(std::string const&)
 *
 * Callees: 1
 *   0x00000000004FA010  luaL_loadstring(lua_State *,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB9D8 string=0x00000000001FB9DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall luaL_loadstring(int a1, char *a2)
{
  return _Z15luaL_loadstringP9lua_StatePKc(a1, a2);
}

