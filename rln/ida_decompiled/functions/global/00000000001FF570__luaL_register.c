/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF570
 * Mangled: ._Z13luaL_registerP9lua_StatePKcPK8luaL_Reg
 * Demangled: luaL_register(lua_State *,char const*,luaL_Reg const*)
 *
 * Callers: 6
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004C1B20  Caver::ProgramState::RegisterFunctions(Caver::LibFunction const*)
 *   0x00000000004C1B58  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *
 * Callees: 1
 *   0x00000000004F9300  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF578 string=0x00000000001FF57C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_register()
{
  return _Z13luaL_registerP9lua_StatePKcPK8luaL_Reg();
}

