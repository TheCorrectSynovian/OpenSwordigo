/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201AB0
 * Mangled: ._Z9lua_closeP9lua_State
 * Demangled: lua_close(lua_State *)
 *
 * Callers: 2
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004C109C  Caver::ProgramState::~ProgramState()
 *
 * Callees: 1
 *   0x00000000004F33F0  lua_close(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201AB8 string=0x0000000000201ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_close()
{
  return _Z9lua_closeP9lua_State();
}

