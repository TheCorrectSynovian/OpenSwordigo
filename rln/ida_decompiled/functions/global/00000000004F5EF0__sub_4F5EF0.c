/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F5EF0
 * Mangled: sub_4F5EF0
 * Demangled: sub_4F5EF0
 *
 * Callers: 4
 *   0x00000000004E706C  lua_isnumber(lua_State *,int)
 *   0x00000000004E7954  lua_tonumber(lua_State *,int)
 *   0x00000000004E7A8C  lua_tointeger(lua_State *,int)
 *   0x00000000004EB578  sub_4EB578
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EEEFC  sub_4EEEFC
 *
 * Referenced strings: 7
 *   insn=0x00000000004F5EFC string=0x00000000004F5F00 "T"
 *   insn=0x00000000004F5F0C string=0x00000000004F5F10 "@"
 *   insn=0x00000000004F5F1C string=0x00000000004F5F20 "a"
 *   insn=0x00000000004F5F20 string=0x00000000004F5F24 ""
 *   insn=0x00000000004F5F3C string=0x00000000004F5F40 "i\n"
 *   insn=0x00000000004F5F40 string=0x00000000004F5F44 "h"
 *   insn=0x00000000004F5F7C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_4F5EF0(_DWORD *a1, __int64 a2)
{
  int v3; // w8
  double v4; // x8
  double v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v6[1] = *(double *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a1[2];
  if ( v3 == 3 )
    return a1;
  if ( v3 != 4 || !sub_4EEEFC((const char *)(*(_QWORD *)a1 + 24LL), v6) )
    return 0;
  v4 = v6[0];
  *(_DWORD *)(a2 + 8) = 3;
  *(double *)a2 = v4;
  return (_DWORD *)a2;
}

