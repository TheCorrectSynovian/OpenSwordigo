/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9B8C
 * Mangled: _Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_
 * Demangled: lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *
 * Callers: 1
 *   0x00000000001F8110  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004ECB9C  sub_4ECB9C
 *   0x00000000004F8748  sub_4F8748
 *
 * Referenced strings: 6
 *   insn=0x00000000004E9B9C string=0x00000000004E9BA0 "U"
 *   insn=0x00000000004E9BA8 string=0x000000000059A393 "?"
 *   insn=0x00000000004E9BB0 string=0x00000000004E9BB4 "kM"
 *   insn=0x00000000004E9BB8 string=0x00000000004E9BBC "t"
 *   insn=0x00000000004E9BD4 string=0x00000000004F8748 "#"
 *   insn=0x00000000004E9C0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_load(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned __int64 StatusReg; // x21
  char *v5; // x20
  _QWORD v8[6]; // [xsp+0h] [xbp-50h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( a4 )
    v5 = a4;
  else
    v5 = "?";
  v8[5] = *(_QWORD *)(StatusReg + 40);
  sub_4F8748(a1, v8, a2, a3);
  return sub_4ECB9C(a1, v8, v5);
}

