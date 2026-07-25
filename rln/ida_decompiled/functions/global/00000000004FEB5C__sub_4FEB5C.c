/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FEB5C
 * Mangled: sub_4FEB5C
 * Demangled: sub_4FEB5C
 *
 * Callers: 7
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004FED28  sub_4FED28
 *   0x00000000004FEF18  sub_4FEF18
 *   0x00000000004FF394  sub_4FF394
 *   0x00000000004FF794  sub_4FF794
 *   0x00000000004FF9D0  sub_4FF9D0
 *   0x00000000004FFC04  sub_4FFC04
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004FE158  sub_4FE158
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *
 * Referenced strings: 35
 *   insn=0x00000000004FEB70 string=0x00000000004FEB74 "U"
 *   insn=0x00000000004FEB84 string=0x00000000004FEB88 "v^B)?"
 *   insn=0x00000000004FEB88 string=0x00000000004FEB8C "?"
 *   insn=0x00000000004FEB94 string=0x00000000004FEB98 "h"
 *   insn=0x00000000004FEB94 string=0x00000000004FEBCC "h"
 *   insn=0x00000000004FEBA0 string=0x00000000004FEBA4 "h&B)"
 *   insn=0x00000000004FEBAC string=0x00000000004FEBB0 "b\n@"
 *   insn=0x00000000004FEBB4 string=0x00000000004FEBB8 "_"
 *   insn=0x00000000004FEBC4 string=0x00000000004FEBC8 "~"
 *   insn=0x00000000004FEBCC string=0x00000000004FEBD0 "\t"
 *   insn=0x00000000004FEBD0 string=0x00000000004FEBD4 "?"
 *   insn=0x00000000004FEBDC string=0x00000000004FEBE0 "@"
 *   insn=0x00000000004FEBE0 string=0x00000000004FEC28 "h\n@"
 *   insn=0x00000000004FEBEC string=0x00000000004FEBF0 "?"
 *   insn=0x00000000004FEBF0 string=0x00000000004FEBF4 "L"
 *   insn=0x00000000004FEBF8 string=0x00000000004FEBFC " "
 *   insn=0x00000000004FEBFC string=0x00000000004FECA0 "h"
 *   insn=0x00000000004FEC20 string=0x00000000004FEC24 "+"
 *   insn=0x00000000004FEC2C string=0x00000000004FEC30 "l"
 *   insn=0x00000000004FEC30 string=0x00000000004FEC34 ""
 *   insn=0x00000000004FEC34 string=0x00000000004FEC38 ","
 *   insn=0x00000000004FEC44 string=0x00000000004FEC48 "h"
 *   insn=0x00000000004FEC50 string=0x00000000004FEC88 "v""
 *   insn=0x00000000004FEC5C string=0x00000000004FEC60 "?"
 *   insn=0x00000000004FEC60 string=0x00000000004FEC64 " "
 *   insn=0x00000000004FEC7C string=0x00000000004FEC80 "}"
 *   insn=0x00000000004FEC90 string=0x00000000004FEC94 "K"
 *   insn=0x00000000004FECD0 string=0x00000000004FECD4 "!"
 *   insn=0x00000000004FECD8 string=0x00000000004FECDC "`\n"
 *   insn=0x00000000004FECDC string=0x00000000004FECE0 "h"
 *   insn=0x00000000004FECE0 string=0x00000000004FECE4 ""
 *   insn=0x00000000004FECEC string=0x00000000004FECF0 "?"
 *   insn=0x00000000004FECF4 string=0x00000000004FED24 "k"
 *   insn=0x00000000004FED18 string=0x00000000004FED1C "V"
 *   insn=0x00000000004FED24 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FEB5C(__int64 a1, _DWORD *a2)
{
  int v4; // w22
  int v5; // w23
  signed int v6; // w2
  int v7; // w8
  __int64 v8; // x8
  __int64 *v9; // x2
  int v10; // w8
  unsigned int v11; // w8
  unsigned int *v12; // x22
  __int64 v13; // x8
  int v14; // w0
  char v16; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+10h] [xbp-50h]
  __int64 v18; // [xsp+18h] [xbp-48h] BYREF
  int v19; // [xsp+20h] [xbp-40h]
  __int64 v20; // [xsp+28h] [xbp-38h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a2[4];
  v5 = a2[5];
  sub_4FE488(a1, a2);
  if ( v4 != v5 )
  {
    if ( *a2 != 12 )
      goto LABEL_5;
    if ( a2[4] == a2[5] )
      goto LABEL_6;
    v6 = a2[2];
    if ( v6 >= *(unsigned __int8 *)(a1 + 74) )
      sub_4FE674(a1, a2, v6);
    else
LABEL_5:
      sub_4FE5C0(a1, a2);
  }
LABEL_6:
  v7 = *a2;
  if ( (unsigned int)(*a2 - 1) < 3 )
    goto LABEL_9;
  if ( v7 == 4 )
  {
    v10 = a2[2];
    if ( v10 <= 255 )
      return v10 | 0x100u;
  }
  else if ( v7 == 5 )
  {
LABEL_9:
    if ( *(int *)(a1 + 64) <= 255 )
    {
      if ( v7 == 5 )
      {
        v13 = *((_QWORD *)a2 + 1);
        v19 = 3;
        v18 = v13;
      }
      else
      {
        if ( v7 == 1 )
        {
          v17 = 0;
          v8 = *(_QWORD *)(a1 + 8);
          v19 = 5;
          v18 = v8;
          v9 = (__int64 *)&v16;
LABEL_25:
          v14 = sub_4FE158(a1, &v18, v9);
          a2[2] = v14;
          *a2 = 4;
          return v14 | 0x100u;
        }
        LODWORD(v18) = v7 == 2;
        v19 = 1;
      }
      v9 = &v18;
      goto LABEL_25;
    }
  }
  sub_4FE488(a1, a2);
  if ( *a2 != 12 )
  {
    v12 = a2 + 2;
    goto LABEL_20;
  }
  v12 = a2 + 2;
  v11 = a2[2];
  if ( a2[4] != a2[5] )
  {
    if ( (int)v11 >= *(unsigned __int8 *)(a1 + 74) )
    {
      sub_4FE674(a1, a2, v11);
      return *v12;
    }
LABEL_20:
    sub_4FE5C0(a1, a2);
    return *v12;
  }
  return v11;
}

