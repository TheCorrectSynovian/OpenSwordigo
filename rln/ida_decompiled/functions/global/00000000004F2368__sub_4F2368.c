/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F2368
 * Mangled: sub_4F2368
 * Demangled: sub_4F2368
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1CF4  sub_4F1CF4
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FEA48  sub_4FEA48
 *   0x00000000004FF394  sub_4FF394
 *   0x000000000050072C  sub_50072C
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 7
 *   insn=0x00000000004F237C string=0x00000000004F2380 "W"
 *   insn=0x00000000004F23C0 string=0x00000000004F23C4 "!"
 *   insn=0x00000000004F23C4 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F23C8 string=0x00000000004F23CC "!"
 *   insn=0x00000000004F23DC string=0x00000000004F23E0 "b9"
 *   insn=0x00000000004F23F4 string=0x00000000004F23F8 "B/"
 *   insn=0x00000000004F2448 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F2368(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  _QWORD *v5; // x22
  const char *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x22
  _DWORD v10[4]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v11; // [xsp+10h] [xbp-40h]
  __int64 v12; // [xsp+18h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 48);
  sub_4FEA48(v4, a2);
  sub_500A74(a1);
  if ( *(_DWORD *)(a1 + 16) != 285 )
  {
    v5 = *(_QWORD **)(a1 + 56);
    v6 = (const char *)sub_50072C(a1, 285);
    v7 = sub_4EF3D4(v5, "'%s' expected", v6);
    sub_500968(a1, v7);
  }
  v8 = *(_QWORD *)(a1 + 24);
  sub_500A74(a1);
  v10[2] = sub_4FE100(*(_QWORD *)(a1 + 48), v8);
  v11 = -1;
  v10[0] = 4;
  return sub_4FF394(v4, a2, v10);
}

