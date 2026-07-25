/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F5F80
 * Mangled: sub_4F5F80
 * Demangled: sub_4F5F80
 *
 * Callers: 2
 *   0x00000000004E7CE0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000004E7F18  lua_objlen(lua_State *,int)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203230  .strlen
 *   0x0000000000203240  .sprintf
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 10
 *   insn=0x00000000004F5F90 string=0x00000000004F5F94 "U"
 *   insn=0x00000000004F5FA4 string=0x00000000004F5FA8 "h\n@"
 *   insn=0x00000000004F5FAC string=0x00000000004F5FB0 "!"
 *   insn=0x00000000004F5FB0 string=0x00000000004F5FB4 "`"
 *   insn=0x00000000004F5FB4 string=0x00000000004F5FB8 "!"
 *   insn=0x00000000004F5FB8 string=0x000000000059A4B4 "%.14g"
 *   insn=0x00000000004F5FD8 string=0x00000000004F5FDC "d"
 *   insn=0x00000000004F5FDC string=0x00000000004F5FE0 "`"
 *   insn=0x00000000004F5FE8 string=0x00000000004F5FEC "h\n"
 *   insn=0x00000000004F601C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F5F80(__int64 a1, __int64 a2)
{
  size_t v4; // x0
  __int64 result; // x0
  char s[32]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v7; // [xsp+28h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(a2 + 8) != 3 )
    return 0;
  sprintf(s, "%.14g", *(double *)a2);
  v4 = strlen(s);
  *(_QWORD *)a2 = sub_4F356C(a1, s, v4);
  result = 1;
  *(_DWORD *)(a2 + 8) = 4;
  return result;
}

