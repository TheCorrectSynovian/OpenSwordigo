/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC860
 * Mangled: ._ZNK5Caver7Program13LoadIntoStateEP9lua_State
 * Demangled: Caver::Program::LoadIntoState(lua_State *)
 *
 * Callers: 2
 *   0x00000000004C181C  Caver::ProgramState::LoadProgram(Caver::Program const&)
 *   0x00000000004C18B4  Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x00000000004C0C6C  Caver::Program::LoadIntoState(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC868 string=0x00000000001FC86C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Program::LoadIntoState()
{
  return _ZNK5Caver7Program13LoadIntoStateEP9lua_State();
}

