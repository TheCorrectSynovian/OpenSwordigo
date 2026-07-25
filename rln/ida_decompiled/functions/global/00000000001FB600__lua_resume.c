/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB600
 * Mangled: ._Z10lua_resumeP9lua_Statei
 * Demangled: lua_resume(lua_State *,int)
 *
 * Callers: 5
 *   0x00000000004C15FC  Caver::ProgramState::Update(float)
 *   0x00000000004C177C  Caver::ProgramState::Resume(int)
 *   0x00000000004C17C4  Caver::ProgramState::ExecuteString(std::string const&)
 *   0x00000000004C182C  Caver::ProgramState::Execute(int)
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004EC700  lua_resume(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB608 string=0x00000000001FB60C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_resume()
{
  return _Z10lua_resumeP9lua_Statei();
}

