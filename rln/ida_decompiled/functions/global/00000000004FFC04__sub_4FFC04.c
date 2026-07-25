/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FFC04
 * Mangled: sub_4FFC04
 * Demangled: sub_4FFC04
 *
 * Callers: 1
 *   0x00000000004F1154  sub_4F1154
 *
 * Callees: 7
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000004FF794  sub_4FF794
 *   0x00000000005005C8  sub_5005C8
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 105
 *   insn=0x00000000004FFC1C string=0x00000000004FFC20 "?8"
 *   insn=0x00000000004FFC24 string=0x00000000004FFC28 "(,"
 *   insn=0x00000000004FFC2C string=0x000000000059AFEC "XL"
 *   insn=0x00000000004FFC30 string=0x00000000004FFC34 ")"
 *   insn=0x00000000004FFC34 string=0x00000000004FFC38 "(y"
 *   insn=0x00000000004FFC38 string=0x00000000004FFC3C ""
 *   insn=0x00000000004FFC40 string=0x00000000004FFC6C "!"
 *   insn=0x00000000004FFC44 string=0x00000000004FFC48 "J"
 *   insn=0x00000000004FFC4C string=0x00000000004FFC50 "H"
 *   insn=0x00000000004FFC54 string=0x00000000004FFC58 "F"
 *   insn=0x00000000004FFC5C string=0x00000000004FFC60 "D"
 *   insn=0x00000000004FFC64 string=0x00000000004FFC68 "B"
 *   insn=0x00000000004FFC6C string=0x00000000004FFC70 "@"
 *   insn=0x00000000004FFC98 string=0x00000000004FFC9C "!"
 *   insn=0x00000000004FFC9C string=0x00000000004FFCC0 "h"
 *   insn=0x00000000004FFCB4 string=0x00000000004FFCB8 ""
 *   insn=0x00000000004FFCC4 string=0x00000000004FFCC8 "!"
 *   insn=0x00000000004FFCC8 string=0x00000000004FFCCC "h\n@"
 *   insn=0x00000000004FFCE0 string=0x00000000004FFCE4 ""
 *   insn=0x00000000004FFD20 string=0x00000000004FFD24 "!"
 *   insn=0x00000000004FFD24 string=0x00000000004FFD48 "h"
 *   insn=0x00000000004FFD3C string=0x00000000004FFD40 ""
 *   insn=0x00000000004FFD4C string=0x00000000004FFD50 "!"
 *   insn=0x00000000004FFD50 string=0x00000000004FFD54 "h\n@"
 *   insn=0x00000000004FFD68 string=0x00000000004FFD6C ""
 *   insn=0x00000000004FFD80 string=0x00000000004FFD84 "v"
 *   insn=0x00000000004FFD90 string=0x00000000004FFD94 "r"
 *   insn=0x00000000004FFDA0 string=0x00000000004FFDA4 "!"
 *   insn=0x00000000004FFDA4 string=0x00000000004FFDC8 "h"
 *   insn=0x00000000004FFDBC string=0x00000000004FFDC0 ""
 *   insn=0x00000000004FFDCC string=0x00000000004FFDD0 "!"
 *   insn=0x00000000004FFDD0 string=0x00000000004FFDD4 "h\n@"
 *   insn=0x00000000004FFDE8 string=0x00000000004FFDEC ""
 *   insn=0x00000000004FFDF4 string=0x00000000004FFDF8 " "
 *   insn=0x00000000004FFE00 string=0x00000000004FFE04 "V"
 *   insn=0x00000000004FFE10 string=0x00000000004FFE14 "R"
 *   insn=0x00000000004FFE20 string=0x00000000004FFE24 "!"
 *   insn=0x00000000004FFE24 string=0x00000000004FFE48 "h"
 *   insn=0x00000000004FFE3C string=0x00000000004FFE40 ""
 *   insn=0x00000000004FFE4C string=0x00000000004FFE50 "!"
 *   insn=0x00000000004FFE50 string=0x00000000004FFE54 "h\n@"
 *   insn=0x00000000004FFE50 string=0x00000000004FFE74 "!"
 *   insn=0x00000000004FFE68 string=0x00000000004FFE6C ""
 *   insn=0x00000000004FFE8C string=0x00000000004FFE90 "~"
 *   insn=0x00000000004FFE90 string=0x00000000004FFE94 "h"
 *   insn=0x00000000004FFEA0 string=0x00000000004FFEA4 "_"
 *   insn=0x00000000004FFEA4 string=0x00000000004FFEA8 "@"
 *   insn=0x00000000004FFEB4 string=0x00000000004FFEB8 "6@"
 *   insn=0x00000000004FFEC0 string=0x00000000004FFEC4 "j9I"
 *   insn=0x00000000004FFEC8 string=0x00000000004FFECC "_"
 *   insn=0x00000000004FFED0 string=0x00000000004FFED4 "_"
 *   insn=0x00000000004FFED4 string=0x00000000004FFED8 "!"
 *   insn=0x00000000004FFEE4 string=0x00000000004FFEE8 "h"
 *   insn=0x00000000004FFEE8 string=0x00000000004FFEEC "h"
 *   insn=0x00000000004FFEF0 string=0x00000000004FFEF4 "@"
 *   insn=0x00000000004FFEF8 string=0x00000000004FFEFC "_"
 *   insn=0x00000000004FFF0C string=0x00000000004FFF10 "6@"
 *   insn=0x00000000004FFF18 string=0x00000000004FFF1C "j9I"
 *   insn=0x00000000004FFF20 string=0x00000000004FFF24 "_"
 *   insn=0x00000000004FFF28 string=0x00000000004FFF2C "_"
 *   insn=0x00000000004FFF2C string=0x00000000004FFF30 "!"
 *   insn=0x00000000004FFF3C string=0x00000000004FFF40 "W"
 *   insn=0x00000000004FFF50 string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FFF60 string=0x00000000004FFF64 "9"
 *   insn=0x00000000004FFF64 string=0x00000000004FFF68 "(5"
 *   insn=0x00000000004FFF7C string=0x00000000004FFF80 "B"
 *   insn=0x00000000004FFFA8 string=0x00000000004FFFAC "_"
 *   insn=0x00000000004FFFCC string=0x00000000004FFFD0 "\n@"
 *   insn=0x00000000004FFFD4 string=0x00000000004FFFD8 "H\t"
 *   insn=0x00000000004FFFD8 string=0x00000000004FFFDC "\t"
 *   insn=0x00000000004FFFDC string=0x00000000004FFFE0 "+"
 *   insn=0x00000000004FFFE8 string=0x00000000004FFFEC "k"
 *   insn=0x00000000004FFFF4 string=0x00000000004FFFF8 "k\n@"
 *   insn=0x00000000004FFFF4 string=0x0000000000500024 "j\n@"
 *   insn=0x00000000004FFFF8 string=0x00000000004FFFFC "K"
 *   insn=0x000000000050000C string=0x0000000000500010 ""
 *   insn=0x0000000000500018 string=0x000000000050001C "H\t"
 *   insn=0x000000000050001C string=0x0000000000500020 "\t"
 *   insn=0x0000000000500024 string=0x0000000000500028 "k"
 *   insn=0x0000000000500028 string=0x000000000050002C "I!\t3\t"
 *   insn=0x000000000050002C string=0x0000000000500030 "\t"
 *   insn=0x0000000000500030 string=0x0000000000500034 "k"
 *   insn=0x0000000000500038 string=0x000000000050003C "h\n"
 *   insn=0x000000000050003C string=0x0000000000500040 "["
 *   insn=0x0000000000500068 string=0x000000000050006C "!"
 *   insn=0x000000000050006C string=0x0000000000500090 "h"
 *   insn=0x0000000000500084 string=0x0000000000500088 ""
 *   insn=0x0000000000500094 string=0x0000000000500098 "!"
 *   insn=0x0000000000500098 string=0x000000000050009C "h\n@"
 *   insn=0x00000000005000B0 string=0x00000000005000B4 ""
 *   insn=0x00000000005000BC string=0x00000000005000C0 " "
 *   insn=0x00000000005000E8 string=0x00000000005000EC "!"
 *   insn=0x00000000005000EC string=0x0000000000500110 "h"
 *   insn=0x0000000000500104 string=0x0000000000500108 ""
 *   insn=0x0000000000500114 string=0x0000000000500118 "!"
 *   insn=0x0000000000500118 string=0x000000000050011C "h\n@"
 *   insn=0x0000000000500118 string=0x000000000050013C "!"
 *   insn=0x0000000000500130 string=0x0000000000500134 ""
 *   insn=0x000000000050014C string=0x0000000000500150 "H"
 *   insn=0x0000000000500150 string=0x0000000000500154 "`\n"
 *   insn=0x0000000000500154 string=0x0000000000500158 "h"
 *   insn=0x000000000050019C string=0x00000000005001A0 "h\n"
 *   insn=0x00000000005001A4 string=0x00000000005001A8 "`"
 *   insn=0x00000000005001C4 string=0x00000000005001C8 "+"
 *   insn=0x00000000005001C8 string=0x00000000005001CC "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall sub_4FFC04(__int64 a1, int a2, __int64 a3, double *a4)
{
  int v7; // w1
  unsigned int v8; // w22
  __int64 v9; // x4
  int v10; // w8
  int v11; // w8
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x2
  int v15; // w8
  int v16; // w8
  unsigned int v17; // w22
  __int64 v18; // x3
  int v19; // w8
  int v20; // w8
  int v21; // w8
  int v22; // w8
  int v23; // w8
  int v24; // w10
  __int64 v25; // x22
  int v26; // w13
  unsigned int v27; // w9
  int v28; // w10
  int v29; // w24
  int v30; // w8
  int v31; // w22
  int v32; // w23
  long double result; // q0
  signed int v34; // w2
  __int64 v35; // x10
  int *v36; // x8
  int v37; // w9
  int v38; // w11
  int v39; // w8
  int v40; // w8
  int v41; // w8
  int v42; // w8

  switch ( a2 )
  {
    case 0:
      v7 = 12;
      goto LABEL_100;
    case 1:
      v7 = 13;
      goto LABEL_100;
    case 2:
      v7 = 14;
      goto LABEL_100;
    case 3:
      v7 = 15;
      goto LABEL_100;
    case 4:
      v7 = 16;
      goto LABEL_100;
    case 5:
      v7 = 17;
      goto LABEL_100;
    case 6:
      v31 = *((_DWORD *)a4 + 4);
      v32 = *((_DWORD *)a4 + 5);
      sub_4FE488(a1, a4);
      if ( v31 == v32 )
        goto LABEL_71;
      if ( *(_DWORD *)a4 != 12 )
        goto LABEL_70;
      if ( *((_DWORD *)a4 + 4) != *((_DWORD *)a4 + 5) )
      {
        v34 = *((_DWORD *)a4 + 2);
        if ( v34 >= *(unsigned __int8 *)(a1 + 74) )
          *(double *)&result = sub_4FE674(a1, a4, v34);
        else
LABEL_70:
          sub_4FE5C0(a1, a4);
      }
LABEL_71:
      if ( *(_DWORD *)a4 == 11
        && (v35 = *(_QWORD *)(*(_QWORD *)a1 + 24LL),
            v36 = (int *)(v35 + 4LL * *((int *)a4 + 2)),
            v37 = *v36,
            (*v36 & 0x3F) == 0x15) )
      {
        if ( *(_DWORD *)a3 == 12 )
        {
          v38 = *(_DWORD *)(a3 + 8);
          if ( (v38 & 0x100) == 0 && v38 >= *(unsigned __int8 *)(a1 + 74) )
          {
            --*(_DWORD *)(a1 + 60);
            v36 = (int *)(v35 + 4LL * *((int *)a4 + 2));
            v37 = *v36;
          }
        }
        *v36 = v37 & 0x7FFFFF | ((unsigned __int16)*(_DWORD *)(a3 + 8) << 23);
        *(_DWORD *)a3 = 11;
        *(_DWORD *)(a3 + 8) = *((_DWORD *)a4 + 2);
      }
      else
      {
        sub_4FE5C0(a1, a4);
        v7 = 21;
LABEL_100:
        sub_4FF794(a1, v7, (double *)a3, a4);
      }
      return result;
    case 7:
      v8 = sub_4FEB5C(a1, (_DWORD *)a3);
      v9 = (unsigned int)sub_4FEB5C(a1, a4);
      if ( *(_DWORD *)a4 == 12 )
      {
        v10 = *((_DWORD *)a4 + 2);
        if ( (v10 & 0x100) == 0 && v10 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 == 12 )
      {
        v11 = *(_DWORD *)(a3 + 8);
        if ( (v11 & 0x100) == 0 && v11 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      v12 = 23;
      v13 = a1;
      v14 = 0;
      goto LABEL_97;
    case 8:
      v8 = sub_4FEB5C(a1, (_DWORD *)a3);
      v9 = (unsigned int)sub_4FEB5C(a1, a4);
      if ( *(_DWORD *)a4 == 12 )
      {
        v39 = *((_DWORD *)a4 + 2);
        if ( (v39 & 0x100) == 0 && v39 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 == 12 )
      {
        v40 = *(_DWORD *)(a3 + 8);
        if ( (v40 & 0x100) == 0 && v40 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      v12 = 23;
      goto LABEL_96;
    case 9:
      v8 = sub_4FEB5C(a1, (_DWORD *)a3);
      v9 = (unsigned int)sub_4FEB5C(a1, a4);
      if ( *(_DWORD *)a4 == 12 )
      {
        v15 = *((_DWORD *)a4 + 2);
        if ( (v15 & 0x100) == 0 && v15 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 == 12 )
      {
        v16 = *(_DWORD *)(a3 + 8);
        if ( (v16 & 0x100) == 0 && v16 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      v12 = 24;
      goto LABEL_96;
    case 10:
      v8 = sub_4FEB5C(a1, (_DWORD *)a3);
      v9 = (unsigned int)sub_4FEB5C(a1, a4);
      if ( *(_DWORD *)a4 == 12 )
      {
        v41 = *((_DWORD *)a4 + 2);
        if ( (v41 & 0x100) == 0 && v41 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 == 12 )
      {
        v42 = *(_DWORD *)(a3 + 8);
        if ( (v42 & 0x100) == 0 && v42 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      v12 = 25;
LABEL_96:
      v14 = 1;
      v13 = a1;
LABEL_97:
      v18 = v8;
      goto LABEL_98;
    case 11:
      v17 = sub_4FEB5C(a1, (_DWORD *)a3);
      v18 = (unsigned int)sub_4FEB5C(a1, a4);
      if ( *(_DWORD *)a4 == 12 )
      {
        v19 = *((_DWORD *)a4 + 2);
        if ( (v19 & 0x100) == 0 && v19 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 == 12 )
      {
        v20 = *(_DWORD *)(a3 + 8);
        if ( (v20 & 0x100) == 0 && v20 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      v12 = 24;
      goto LABEL_44;
    case 12:
      v17 = sub_4FEB5C(a1, (_DWORD *)a3);
      v18 = (unsigned int)sub_4FEB5C(a1, a4);
      if ( *(_DWORD *)a4 == 12 )
      {
        v21 = *((_DWORD *)a4 + 2);
        if ( (v21 & 0x100) == 0 && v21 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 == 12 )
      {
        v22 = *(_DWORD *)(a3 + 8);
        if ( (v22 & 0x100) == 0 && v22 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      v12 = 25;
LABEL_44:
      v14 = 1;
      v13 = a1;
      v9 = v17;
LABEL_98:
      *(_DWORD *)(a3 + 8) = sub_5005C8(v13, v12, v14, v18, v9);
      *(_DWORD *)a3 = 10;
      return result;
    case 13:
      sub_4FE488(a1, a4);
      v23 = *(_DWORD *)(a3 + 20);
      if ( v23 == -1 )
        goto LABEL_103;
      v24 = *((_DWORD *)a4 + 5);
      if ( v24 == -1 )
      {
        *((_DWORD *)a4 + 5) = v23;
        goto LABEL_103;
      }
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      do
      {
        v26 = v24;
        v27 = *(_DWORD *)(v25 + 4LL * v24);
        if ( v27 >> 14 == 131070 )
          v24 = -1;
        else
          v24 += (v27 >> 14) - 0x1FFFF + 1;
      }
      while ( v24 != -1 );
      goto LABEL_60;
    case 14:
      sub_4FE488(a1, a4);
      v23 = *(_DWORD *)(a3 + 16);
      if ( v23 == -1 )
        goto LABEL_103;
      v28 = *((_DWORD *)a4 + 4);
      if ( v28 == -1 )
      {
        *((_DWORD *)a4 + 4) = v23;
      }
      else
      {
        v25 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
        do
        {
          v26 = v28;
          v27 = *(_DWORD *)(v25 + 4LL * v28);
          if ( v27 >> 14 == 131070 )
            v28 = -1;
          else
            v28 += (v27 >> 14) - 0x1FFFF + 1;
        }
        while ( v28 != -1 );
LABEL_60:
        v29 = v23 + ~v26;
        if ( v29 >= 0 )
          v30 = v23 + ~v26;
        else
          v30 = -v29;
        if ( v30 >= 0x20000 )
          sub_500968(*(_QWORD *)(a1 + 24), "control structure too long");
        *(_DWORD *)(v25 + 4LL * v26) = ((v29 << 14) + 2147467264) & 0xFFFFC000 | v27 & 0x3FFF;
      }
LABEL_103:
      *(double *)(a3 + 16) = a4[2];
      result = *(long double *)a4;
      *(_OWORD *)a3 = *(_OWORD *)a4;
      return result;
    default:
      return result;
  }
}

