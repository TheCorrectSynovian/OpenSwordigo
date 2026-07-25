/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F2CCC
 * Mangled: sub_4F2CCC
 * Demangled: sub_4F2CCC
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F2C18  sub_4F2C18
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FE088  sub_4FE088
 *   0x00000000004FE424  sub_4FE424
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FED28  sub_4FED28
 *   0x000000000050072C  sub_50072C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 49
 *   insn=0x00000000004F2CE0 string=0x00000000004F2CE4 "X"
 *   insn=0x00000000004F2CE4 string=0x00000000004F2CE8 ""
 *   insn=0x00000000004F2CF8 string=0x00000000004F2CFC "h"
 *   insn=0x00000000004F2D00 string=0x00000000004F2D04 ""
 *   insn=0x00000000004F2D0C string=0x00000000004F2D10 "A"
 *   insn=0x00000000004F2D10 string=0x000000000059A20E "syntax error"
 *   insn=0x00000000004F2D2C string=0x00000000004F2D30 "A"
 *   insn=0x00000000004F2D34 string=0x00000000004F2D38 "O7"
 *   insn=0x00000000004F2D68 string=0x00000000004F2D6C "_%"
 *   insn=0x00000000004F2D94 string=0x00000000004F2D98 "a"
 *   insn=0x00000000004F2DA8 string=0x00000000004F2DAC "I"
 *   insn=0x00000000004F2DC0 string=0x00000000004F2DC4 "p+"
 *   insn=0x00000000004F2DC4 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F2DD4 string=0x00000000004F2DD8 "\t"
 *   insn=0x00000000004F2DD8 string=0x00000000004F2DDC ""
 *   insn=0x00000000004F2DDC string=0x00000000004F2DE0 "#"
 *   insn=0x00000000004F2DFC string=0x00000000004F2E00 "A"
 *   insn=0x00000000004F2DFC string=0x00000000004F2EF4 "H"
 *   insn=0x00000000004F2E00 string=0x00000000004F2E04 "D"
 *   insn=0x00000000004F2E00 string=0x000000000059A08F "function at line %d has more than %d %s"
 *   insn=0x00000000004F2E04 string=0x00000000004F2E08 "!<"
 *   insn=0x00000000004F2E04 string=0x000000000059A21B "variables in assignment"
 *   insn=0x00000000004F2E0C string=0x00000000004F2E10 "q"
 *   insn=0x00000000004F2E10 string=0x00000000004F2E14 "?"
 *   insn=0x00000000004F2E20 string=0x00000000004F2E24 "B6"
 *   insn=0x00000000004F2E24 string=0x00000000004F2E28 "!"
 *   insn=0x00000000004F2E28 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F2E2C string=0x00000000004F2E30 "!"
 *   insn=0x00000000004F2E34 string=0x00000000004F2E38 "g"
 *   insn=0x00000000004F2E48 string=0x00000000004F2E4C "\n7"
 *   insn=0x00000000004F2EB0 string=0x00000000004F2EB4 "\-"
 *   insn=0x00000000004F2EB4 string=0x00000000004FE424 "("
 *   insn=0x00000000004F2EB8 string=0x00000000004F2EBC "%"
 *   insn=0x00000000004F2ECC string=0x00000000004F2ED0 "R"
 *   insn=0x00000000004F2EE0 string=0x00000000004F2EE4 "\t=@"
 *   insn=0x00000000004F2EE4 string=0x00000000004F2EE8 "I"
 *   insn=0x00000000004F2EE8 string=0x00000000004F2EEC "\t="
 *   insn=0x00000000004F2EF4 string=0x00000000004F2EF8 "A"
 *   insn=0x00000000004F2EF8 string=0x00000000004F2EFC "m"
 *   insn=0x00000000004F2EF8 string=0x000000000059A06D "main function has more than %d %s"
 *   insn=0x00000000004F2EFC string=0x00000000004F2F00 "!"
 *   insn=0x00000000004F2F08 string=0x00000000004F2F0C "2"
 *   insn=0x00000000004F2F18 string=0x00000000004F2F1C "!6"
 *   insn=0x00000000004F2F28 string=0x00000000004F2F2C "h"
 *   insn=0x00000000004F2F38 string=0x00000000004F2F3C "<@"
 *   insn=0x00000000004F2F44 string=0x00000000004F2F48 ""
 *   insn=0x00000000004F2F54 string=0x00000000004F2F58 "t/"
 *   insn=0x00000000004F2F58 string=0x00000000004F2F5C ""
 *   insn=0x00000000004F2F84 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F2CCC(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // x22
  __int64 *v5; // x19
  int v7; // w8
  __int64 v8; // x23
  int v9; // w9
  int v10; // w8
  int v11; // w10
  int v12; // w3
  _QWORD *v13; // x22
  _QWORD *v14; // x0
  int v15; // w2
  __int64 v16; // x0
  _QWORD *v17; // x22
  const char *v18; // x0
  __int64 v19; // x0
  int i; // w22
  __int64 v21; // x0
  int v22; // w8
  __int64 *v24; // [xsp+8h] [xbp-58h] BYREF
  int v25; // [xsp+10h] [xbp-50h] BYREF
  __int64 v26; // [xsp+18h] [xbp-48h]
  __int64 v27; // [xsp+28h] [xbp-38h]

  v3 = a2;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a2 + 1;
  if ( (unsigned int)(*((_DWORD *)a2 + 2) - 6) >= 4 )
    sub_500968(a1, "syntax error");
  v7 = *(_DWORD *)(a1 + 16);
  if ( v7 != 61 )
  {
    if ( v7 != 44 )
    {
      v17 = *(_QWORD **)(a1 + 56);
      v18 = (const char *)sub_50072C(a1, 61);
      v19 = sub_4EF3D4(v17, "'%s' expected", v18);
      sub_500968(a1, v19);
    }
    sub_500A74(a1);
    v24 = v3;
    sub_4F1CF4(a1, (__int64)&v25);
    if ( v25 == 6 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      v9 = 0;
      v10 = *(_DWORD *)(v8 + 60);
      do
      {
        if ( *((_DWORD *)v3 + 2) == 9 )
        {
          v11 = v26;
          if ( *((_DWORD *)v3 + 4) == (_DWORD)v26 )
          {
            *((_DWORD *)v3 + 4) = v10;
            v11 = v26;
            v9 = 1;
          }
          if ( *((_DWORD *)v3 + 5) == v11 )
          {
            v9 = 1;
            *((_DWORD *)v3 + 5) = v10;
          }
        }
        v3 = (__int64 *)*v3;
      }
      while ( v3 );
      if ( v9 )
      {
        sub_4FDB84(v8, 0);
        sub_4FE088(v8, 1);
      }
    }
    v12 = 200 - *(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 96LL);
    if ( v12 < a3 )
    {
      v13 = *(_QWORD **)(a1 + 48);
      v14 = (_QWORD *)v13[4];
      v15 = *(_DWORD *)(*v13 + 96LL);
      if ( v15 )
        v16 = sub_4EF3D4(v14, "function at line %d has more than %d %s", v15, v12, "variables in assignment");
      else
        v16 = sub_4EF3D4(v14, "main function has more than %d %s", v12, "variables in assignment");
      sub_5007A0(v13[3], v16, 0);
    }
    sub_4F2CCC(a1, &v24, (unsigned int)(a3 + 1));
LABEL_28:
    v21 = *(_QWORD *)(a1 + 48);
    v22 = *(_DWORD *)(v21 + 60);
    v26 = -1;
    LODWORD(v24) = 12;
    v25 = v22 - 1;
    return sub_4FED28(v21, v5, &v24);
  }
  sub_500A74(a1);
  sub_4F1154(a1, (__int64)&v24, 0);
  for ( i = 1; *(_DWORD *)(a1 + 16) == 44; ++i )
  {
    sub_500A74(a1);
    sub_4FE5C0(*(_QWORD *)(a1 + 48), &v24);
    sub_4F1154(a1, (__int64)&v24, 0);
  }
  if ( i != a3 )
  {
    sub_4F2C18(a1, a3, i, &v24);
    if ( i > a3 )
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 60LL) += a3 - i;
    goto LABEL_28;
  }
  sub_4FE424(*(_QWORD *)(a1 + 48), &v24);
  v21 = *(_QWORD *)(a1 + 48);
  return sub_4FED28(v21, v5, &v24);
}

