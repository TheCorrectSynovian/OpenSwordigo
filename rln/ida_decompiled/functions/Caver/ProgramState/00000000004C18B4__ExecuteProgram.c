/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C18B4
 * Mangled: _ZN5Caver12ProgramState14ExecuteProgramERKNS_7ProgramE
 * Demangled: Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x00000000001F9F70  Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Callees: 2
 *   0x00000000001FC860  Caver::Program::LoadIntoState(lua_State *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C18C0 string=0x00000000004C18C4 "h"
 *   insn=0x00000000004C18D0 string=0x00000000001FC860 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::ExecuteProgram(Caver::ProgramState *this, const Caver::Program *a2)
{
  __int64 result; // x0

  result = Caver::Program::LoadIntoState();
  if ( (result & 1) != 0 )
    return Caver::ProgramState::Execute(this, 0);
  return result;
}

