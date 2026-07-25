/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C17C4
 * Mangled: _ZN5Caver12ProgramState13ExecuteStringERKSs
 * Demangled: Caver::ProgramState::ExecuteString(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FB600  lua_resume(lua_State *,int)
 *   0x00000000001FB9D0  luaL_loadstring(lua_State *,char const*)
 *   0x00000000001FD590  .__cxa_end_catch
 *
 * Referenced strings: 11
 *   insn=0x00000000004C17D0 string=0x00000000004C17D4 "`"
 *   insn=0x00000000004C17D4 string=0x00000000004C17D8 "!"
 *   insn=0x00000000004C17D8 string=0x00000000004C17DC "}"
 *   insn=0x00000000004C17DC string=0x00000000004C17E0 "`"
 *   insn=0x00000000004C17DC string=0x00000000001FB9D0 "0'"
 *   insn=0x00000000004C17EC string=0x00000000001FB600 "0'"
 *   insn=0x00000000004C17F0 string=0x00000000004C17F4 "`"
 *   insn=0x00000000004C17F8 string=0x00000000004C17FC "hN"
 *   insn=0x00000000004C180C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004C1814 string=0x00000000004C1818 "^"
 *   insn=0x00000000004C1818 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall Caver::ProgramState::ExecuteString(__int64 a1, char **a2)
{
  __int64 result; // x0

  luaL_loadstring(*(_QWORD *)a1, *a2);
  *(_DWORD *)(a1 + 72) = 0;
  result = lua_resume();
  if ( (_DWORD)result != 1 )
    *(_BYTE *)(a1 + 83) = 1;
  return result;
}

