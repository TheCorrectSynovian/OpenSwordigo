/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E86A8
 * Mangled: _Z16lua_pushvfstringP9lua_StatePKcSt9__va_list
 * Demangled: lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *
 * Callers: 1
 *   0x00000000001FD3E0  lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EEFD8  sub_4EEFD8
 *
 * Referenced strings: 7
 *   insn=0x00000000004E86B8 string=0x00000000004E86BC "V"
 *   insn=0x00000000004E86D0 string=0x00000000004E86D4 "h"
 *   insn=0x00000000004E86D4 string=0x00000000004E86D8 "\t!G"
 *   insn=0x00000000004E86DC string=0x00000000004E86E0 "c"
 *   insn=0x00000000004E86E4 string=0x00000000004E86E8 "r"
 *   insn=0x00000000004E8704 string=0x00000000004E8708 "4"
 *   insn=0x00000000004E8730 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushvfstring(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD v7[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v8; // [xsp+28h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
    sub_4EDCB0(a1);
  v7[1] = a3[1];
  v7[0] = *a3;
  return sub_4EEFD8(a1, a2, v7);
}

