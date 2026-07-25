/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B10
 * Mangled: ._Z13luaL_newstatev
 * Demangled: luaL_newstate(void)
 *
 * Callers: 2
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callees: 1
 *   0x00000000004FA084  luaL_newstate(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B18 string=0x0000000000202B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_newstate(void)
{
  return _Z13luaL_newstatev();
}

