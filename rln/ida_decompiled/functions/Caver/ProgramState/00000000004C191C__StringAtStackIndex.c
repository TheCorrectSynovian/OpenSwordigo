/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C191C
 * Mangled: _ZN5Caver12ProgramState18StringAtStackIndexEi
 * Demangled: Caver::ProgramState::StringAtStackIndex(int)
 *
 * Callers: 1
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *
 * Callees: 5
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203D20  lua_touserdata(lua_State *,int)
 *   0x0000000000566A7C  sub_566A7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000004C1928 string=0x00000000004C192C "T"
 *   insn=0x00000000004C1944 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004C1954 string=0x00000000004C1958 "I"
 *   insn=0x00000000004C1968 string=0x00000000004C197C "U"
 *   insn=0x00000000004C197C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ProgramState::StringAtStackIndex@<X0>(__int64 a1@<X8>)
{
  __int64 v3; // x0
  _BYTE v5[8]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v6; // [xsp+10h] [xbp-20h]
  __int64 v7; // [xsp+18h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = lua_tolstring();
  return sub_566A7C(a1, v3, v6, v5);
}

