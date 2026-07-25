/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9A88
 * Mangled: _Z10lua_cpcallP9lua_StatePFiS0_EPv
 * Demangled: lua_cpcall(lua_State *,int (*)(lua_State *),void *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004E9AEC  sub_4E9AEC
 *   0x00000000004EC9BC  sub_4EC9BC
 *
 * Referenced strings: 6
 *   insn=0x00000000004E9A94 string=0x00000000004E9A98 "S"
 *   insn=0x00000000004E9A98 string=0x00000000004E9A9C "h"
 *   insn=0x00000000004E9AA8 string=0x00000000004E9AAC "@"
 *   insn=0x00000000004E9AAC string=0x00000000004E9AB0 "\t @"
 *   insn=0x00000000004E9AC4 string=0x00000000004E9AC8 "h"
 *   insn=0x00000000004E9AE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_cpcall(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4[0] = a2;
  v4[1] = a3;
  return sub_4EC9BC(a1, sub_4E9AEC, v4, *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 64), 0);
}

