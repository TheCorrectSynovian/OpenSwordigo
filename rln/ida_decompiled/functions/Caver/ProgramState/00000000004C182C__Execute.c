/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C182C
 * Mangled: _ZN5Caver12ProgramState7ExecuteEi
 * Demangled: Caver::ProgramState::Execute(int)
 *
 * Callers: 1
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *
 * Callees: 5
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F6090  lua_pcall(lua_State *,int,int,int)
 *   0x00000000001FB600  lua_resume(lua_State *,int)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 15
 *   insn=0x00000000004C1838 string=0x00000000004C183C "h"
 *   insn=0x00000000004C183C string=0x00000000004C1840 "("
 *   insn=0x00000000004C1840 string=0x00000000004C1844 "`"
 *   insn=0x00000000004C1840 string=0x00000000004C1864 "`"
 *   insn=0x00000000004C1848 string=0x00000000004C184C "m"
 *   insn=0x00000000004C184C string=0x00000000001FB600 "0'"
 *   insn=0x00000000004C1858 string=0x00000000004C185C "hN"
 *   insn=0x00000000004C185C string=0x00000000004C1860 ""
 *   insn=0x00000000004C186C string=0x00000000004C1870 ""
 *   insn=0x00000000004C1870 string=0x00000000001F6090 "0'"
 *   insn=0x00000000004C1874 string=0x00000000004C1878 "`"
 *   insn=0x00000000004C1884 string=0x00000000004C1888 """
 *   insn=0x00000000004C1898 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004C18A0 string=0x00000000004C18A4 ";"
 *   insn=0x00000000004C18A4 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall Caver::ProgramState::Execute(Caver::ProgramState *this)
{
  __int64 result; // x0

  if ( *((_QWORD *)this + 1) )
  {
    *((_DWORD *)this + 18) = 0;
    result = lua_resume();
    if ( (_DWORD)result != 1 )
      *((_BYTE *)this + 83) = 1;
  }
  else
  {
    result = lua_pcall();
    if ( (_DWORD)result )
      return lua_settop();
  }
  return result;
}

