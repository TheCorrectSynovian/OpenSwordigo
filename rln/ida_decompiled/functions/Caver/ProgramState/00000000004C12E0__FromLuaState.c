/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C12E0
 * Mangled: _ZN5Caver12ProgramState12FromLuaStateEP9lua_State
 * Demangled: Caver::ProgramState::FromLuaState(lua_State *)
 *
 * Callers: 1
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200BC0  Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Referenced strings: 6
 *   insn=0x00000000004C12EC string=0x00000000004C12F0 "S"
 *   insn=0x00000000004C12F0 string=0x00000000004C12F4 "i"
 *   insn=0x00000000004C12F8 string=0x00000000004C12FC "*"
 *   insn=0x00000000004C1310 string=0x00000000004C1314 "+"
 *   insn=0x00000000004C1314 string=0x00000000004C1318 "h"
 *   insn=0x00000000004C1338 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::FromLuaState(void *a1)
{
  void *v2; // [xsp+8h] [xbp-28h] BYREF
  int v3; // [xsp+10h] [xbp-20h]
  __int64 v4; // [xsp+18h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a1;
  v3 = -10002;
  return Caver::ProgramTable::PointerForPointerKey((Caver::ProgramTable *)&v2, a1);
}

