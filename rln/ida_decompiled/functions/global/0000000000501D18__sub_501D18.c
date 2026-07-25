/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000501D18
 * Mangled: sub_501D18
 * Demangled: sub_501D18
 *
 * Callers: 2
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501F70  sub_501F70
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF46C  sub_4EF46C
 *   0x00000000004F8650  sub_4F8650
 *
 * Referenced strings: 57
 *   insn=0x0000000000501D34 string=0x0000000000501D38 "W"
 *   insn=0x0000000000501D44 string=0x0000000000501D48 "u&@"
 *   insn=0x0000000000501D48 string=0x0000000000501D4C "x"
 *   insn=0x0000000000501D50 string=0x0000000000501D54 "\t"
 *   insn=0x0000000000501D54 string=0x0000000000501D58 "?"
 *   insn=0x0000000000501D58 string=0x0000000000501D5C "\t"
 *   insn=0x0000000000501D5C string=0x0000000000501D60 "H"
 *   insn=0x0000000000501D60 string=0x0000000000501D68 "_"
 *   insn=0x0000000000501D6C string=0x0000000000501D70 "h*@"
 *   insn=0x0000000000501D6C string=0x0000000000501DC4 "t"
 *   insn=0x0000000000501D8C string=0x0000000000599A32 "%s:%d: %s"
 *   insn=0x0000000000501D90 string=0x0000000000501D94 "!"
 *   insn=0x0000000000501D90 string=0x000000000059B30B "lexical element too long"
 *   insn=0x0000000000501DC8 string=0x0000000000501DCC "T"
 *   insn=0x0000000000501DD0 string=0x0000000000501DD4 "a"
 *   insn=0x0000000000501DF4 string=0x0000000000501DF8 "\t"
 *   insn=0x0000000000501E00 string=0x0000000000501E04 "`"@"
 *   insn=0x0000000000501E04 string=0x0000000000501E08 ""
 *   insn=0x0000000000501E08 string=0x0000000000501E0C "\t"
 *   insn=0x0000000000501E0C string=0x0000000000501E10 "\t"
 *   insn=0x0000000000501E14 string=0x0000000000501E18 ""
 *   insn=0x0000000000501E14 string=0x0000000000501E2C "\t"
 *   insn=0x0000000000501E18 string=0x0000000000501E1C "\t"
 *   insn=0x0000000000501E1C string=0x0000000000501E20 "\t"
 *   insn=0x0000000000501E34 string=0x0000000000501E38 "`"
 *   insn=0x0000000000501E3C string=0x0000000000501E40 "Z"
 *   insn=0x0000000000501E58 string=0x0000000000501E5C "|&@"
 *   insn=0x0000000000501E60 string=0x0000000000501E64 "\t"
 *   insn=0x0000000000501E64 string=0x0000000000501E68 "?"
 *   insn=0x0000000000501E68 string=0x0000000000501E6C "\t"
 *   insn=0x0000000000501E6C string=0x0000000000501E70 "_"
 *   insn=0x0000000000501E70 string=0x0000000000501E74 "\t"
 *   insn=0x0000000000501E74 string=0x0000000000501E78 "h*@"
 *   insn=0x0000000000501E74 string=0x0000000000501EB4 "`"
 *   insn=0x0000000000501E84 string=0x0000000000501E88 "y"
 *   insn=0x0000000000501E88 string=0x0000000000501E8C "`"
 *   insn=0x0000000000501E8C string=0x0000000000501E90 "c"
 *   insn=0x0000000000501E9C string=0x0000000000501EA0 "M"
 *   insn=0x0000000000501EA0 string=0x0000000000501EA4 "`"
 *   insn=0x0000000000501EA8 string=0x0000000000501EAC "Z"
 *   insn=0x0000000000501EB4 string=0x0000000000501EB8 "V"
 *   insn=0x0000000000501ECC string=0x0000000000501ED0 ""
 *   insn=0x0000000000501EE8 string=0x0000000000501EEC "\t"
 *   insn=0x0000000000501EF0 string=0x0000000000501EF4 "h(8`"@"
 *   insn=0x0000000000501EF4 string=0x0000000000501EF8 "`"@"
 *   insn=0x0000000000501EF8 string=0x0000000000501EFC ""
 *   insn=0x0000000000501EFC string=0x0000000000501F00 "\t"
 *   insn=0x0000000000501F00 string=0x0000000000501F04 "\t"
 *   insn=0x0000000000501F08 string=0x0000000000501F0C ""
 *   insn=0x0000000000501F0C string=0x0000000000501F10 "\t"
 *   insn=0x0000000000501F10 string=0x0000000000501F14 "\t"
 *   insn=0x0000000000501F24 string=0x0000000000501F28 "9"
 *   insn=0x0000000000501F28 string=0x0000000000501F2C "`"
 *   insn=0x0000000000501F2C string=0x0000000000501F30 "`"
 *   insn=0x0000000000501F3C string=0x0000000000501F40 " "
 *   insn=0x0000000000501F44 string=0x0000000000501F48 "!"
 *   insn=0x0000000000501F6C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_501D18(int *a1)
{
  __int64 *v2; // x21
  int v3; // w24
  unsigned __int64 v4; // x2
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x20
  _QWORD *v10; // x0
  unsigned __int8 *v12; // x8
  int v13; // w0
  unsigned int v14; // w25
  __int64 *v15; // x28
  unsigned __int64 v16; // x2
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x0
  __int64 v20; // x22
  __int64 v21; // x0
  _QWORD *v22; // x0
  unsigned __int8 *v24; // x8
  char v26[80]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v27; // [xsp+58h] [xbp-58h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (__int64 *)*((_QWORD *)a1 + 9);
  v3 = *a1;
  v5 = v2[1];
  v4 = v2[2];
  v6 = v5 + 1;
  if ( v5 + 1 <= v4 )
  {
    v7 = *v2;
  }
  else
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFDLL )
    {
      sub_4EF46C(v26, (char *)(*((_QWORD *)a1 + 10) + 24LL), 0x50u);
      sub_4EF3D4(*((_QWORD **)a1 + 7), "%s:%d: %s", v26, a1[1], "lexical element too long");
      sub_4EB814(*((_QWORD *)a1 + 7), 3);
    }
    v8 = *((_QWORD *)a1 + 7);
    v9 = 2 * v4;
    if ( 2 * v4 == -2 )
      sub_4EEDE0(v8);
    v7 = sub_4EED74(v8, *v2, v4, 2 * v4);
    v5 = v2[1];
    *v2 = v7;
    v2[2] = v9;
    v6 = v5 + 1;
  }
  v2[1] = v6;
  *(_BYTE *)(v7 + v5) = v3;
  v10 = (_QWORD *)*((_QWORD *)a1 + 8);
  if ( (*v10)-- )
  {
    v12 = (unsigned __int8 *)v10[1];
    v10[1] = v12 + 1;
    v13 = *v12;
  }
  else
  {
    v13 = sub_4F8650((__int64)v10);
  }
  v14 = 0;
  for ( *a1 = v13; v13 == 61; *a1 = v13 )
  {
    v15 = (__int64 *)*((_QWORD *)a1 + 9);
    v17 = v15[1];
    v16 = v15[2];
    v18 = v17 + 1;
    if ( v17 + 1 <= v16 )
    {
      v21 = *v15;
    }
    else
    {
      if ( v16 > 0x7FFFFFFFFFFFFFFDLL )
      {
        sub_4EF46C(v26, (char *)(*((_QWORD *)a1 + 10) + 24LL), 0x50u);
        sub_4EF3D4(*((_QWORD **)a1 + 7), "%s:%d: %s", v26, a1[1], "lexical element too long");
        sub_4EB814(*((_QWORD *)a1 + 7), 3);
      }
      v19 = *((_QWORD *)a1 + 7);
      v20 = 2 * v16;
      if ( 2 * v16 == -2 )
        sub_4EEDE0(v19);
      v21 = sub_4EED74(v19, *v15, v16, 2 * v16);
      v17 = v15[1];
      *v15 = v21;
      v15[2] = v20;
      v18 = v17 + 1;
    }
    v15[1] = v18;
    *(_BYTE *)(v21 + v17) = 61;
    v22 = (_QWORD *)*((_QWORD *)a1 + 8);
    if ( (*v22)-- )
    {
      v24 = (unsigned __int8 *)v22[1];
      v22[1] = v24 + 1;
      v13 = *v24;
    }
    else
    {
      v13 = sub_4F8650((__int64)v22);
    }
    ++v14;
  }
  if ( v13 == v3 )
    return v14;
  else
    return ~v14;
}

