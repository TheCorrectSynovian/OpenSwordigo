/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1B58
 * Mangled: _ZN5Caver12ProgramState15RegisterLibraryERKSsPKNS_11LibFunctionE
 * Demangled: Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *
 * Callers: 1
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *
 * Callees: 2
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 4
 *   insn=0x00000000004C1B64 string=0x00000000004C1B68 "`"
 *   insn=0x00000000004C1B68 string=0x00000000004C1B6C "!"
 *   insn=0x00000000004C1B70 string=0x00000000004C1B74 "`"
 *   insn=0x00000000004C1B80 string=0x00000000004C1B84 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramState::RegisterLibrary()
{
  luaL_register();
  return lua_settop();
}

