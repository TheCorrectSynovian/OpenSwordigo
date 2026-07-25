/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE2E8
 * Mangled: sub_4FE2E8
 * Demangled: sub_4FE2E8
 *
 * Callers: 1
 *   0x00000000004EFACC  sub_4EFACC
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004FE158  sub_4FE158
 *
 * Referenced strings: 4
 *   insn=0x00000000004FE2F4 string=0x00000000004FE2F8 "S"
 *   insn=0x00000000004FE2F8 string=0x00000000004FE2FC "h"
 *   insn=0x00000000004FE318 string=0x00000000004FE31C "h"
 *   insn=0x00000000004FE33C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE2E8(__int64 a1, double a2)
{
  double v3; // [xsp+8h] [xbp-28h] BYREF
  int v4; // [xsp+10h] [xbp-20h]
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a2;
  v4 = 3;
  return sub_4FE158(a1, &v3, &v3);
}

