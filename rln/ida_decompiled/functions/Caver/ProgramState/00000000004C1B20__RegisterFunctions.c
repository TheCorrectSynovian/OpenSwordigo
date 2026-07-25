/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1B20
 * Mangled: _ZN5Caver12ProgramState17RegisterFunctionsEPKNS_11LibFunctionE
 * Demangled: Caver::ProgramState::RegisterFunctions(Caver::LibFunction const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 3
 *   insn=0x00000000004C1B2C string=0x00000000004C1B30 "`"
 *   insn=0x00000000004C1B40 string=0x00000000004C1B44 "`"
 *   insn=0x00000000004C1B50 string=0x00000000004C1B54 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramState::RegisterFunctions()
{
  luaL_register();
  return lua_settop();
}

