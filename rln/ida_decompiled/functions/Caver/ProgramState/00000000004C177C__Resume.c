/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C177C
 * Mangled: _ZN5Caver12ProgramState6ResumeEi
 * Demangled: Caver::ProgramState::Resume(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FB600  lua_resume(lua_State *,int)
 *   0x00000000001FD590  .__cxa_end_catch
 *
 * Referenced strings: 7
 *   insn=0x00000000004C1788 string=0x00000000004C178C "`"
 *   insn=0x00000000004C1794 string=0x00000000001FB600 "0'"
 *   insn=0x00000000004C1798 string=0x00000000004C179C "`"
 *   insn=0x00000000004C17A0 string=0x00000000004C17A4 "hN"
 *   insn=0x00000000004C17B4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004C17BC string=0x00000000004C17C0 "t"
 *   insn=0x00000000004C17C0 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall Caver::ProgramState::Resume(Caver::ProgramState *this)
{
  __int64 result; // x0

  *((_DWORD *)this + 18) = 0;
  result = lua_resume();
  if ( (_DWORD)result != 1 )
    *((_BYTE *)this + 83) = 1;
  return result;
}

