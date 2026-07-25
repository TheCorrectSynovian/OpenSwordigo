/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE100
 * Mangled: sub_4FE100
 * Demangled: sub_4FE100
 *
 * Callers: 6
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004F2368  sub_4F2368
 *   0x00000000004F244C  sub_4F244C
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004FE158  sub_4FE158
 *
 * Referenced strings: 6
 *   insn=0x00000000004FE10C string=0x00000000004FE110 "S"
 *   insn=0x00000000004FE110 string=0x00000000004FE114 "h"
 *   insn=0x00000000004FE12C string=0x00000000004FE130 "\n"
 *   insn=0x00000000004FE130 string=0x00000000004FE134 "h"
 *   insn=0x00000000004FE140 string=0x00000000004FE154 "_"
 *   insn=0x00000000004FE154 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE100(__int64 a1, __int64 a2)
{
  __int64 v3; // [xsp+8h] [xbp-28h] BYREF
  int v4; // [xsp+10h] [xbp-20h]
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a2;
  v4 = 4;
  return sub_4FE158(a1, &v3, &v3);
}

