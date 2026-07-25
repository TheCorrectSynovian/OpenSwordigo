/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB998
 * Mangled: sub_4EB998
 * Demangled: sub_4EB998
 *
 * Callers: 2
 *   0x00000000004F3118  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *   0x00000000004F33F0  lua_close(lua_State *)
 *
 * Callees: 3
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *
 * Referenced strings: 10
 *   insn=0x00000000004EB9A4 string=0x00000000004EB9A8 "T"
 *   insn=0x00000000004EB9C0 string=0x00000000004EB9C4 "iV@"
 *   insn=0x00000000004EB9C8 string=0x00000000004EB9CC "jV"
 *   insn=0x00000000004EB9D8 string=0x00000000004EB9DC "hV"
 *   insn=0x00000000004EB9F0 string=0x00000000004EBA04 "3*"
 *   insn=0x00000000004EBA04 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004EBA08 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004EBA0C string=0x00000000004EBA10 "h"
 *   insn=0x00000000004EBA10 string=0x00000000004EBA14 ""
 *   insn=0x00000000004EBA1C string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EB998(__int64 a1, void (*a2)(void))
{
  __int64 v4; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v5; // [xsp+14h] [xbp-1Ch]
  __int64 v6; // [xsp+18h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = 0;
  v4 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = &v4;
  a2();
  *(_QWORD *)(a1 + 168) = v4;
  return v5;
}

