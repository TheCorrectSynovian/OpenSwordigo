/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FF794
 * Mangled: sub_4FF794
 * Demangled: sub_4FF794
 *
 * Callers: 2
 *   0x00000000004FF3C4  sub_4FF3C4
 *   0x00000000004FFC04  sub_4FFC04
 *
 * Callees: 3
 *   0x00000000001F7BB0  .pow
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000005001E8  sub_5001E8
 *
 * Referenced strings: 43
 *   insn=0x00000000004FF7A8 string=0x00000000004FF7AC "h"
 *   insn=0x00000000004FF7C0 string=0x00000000004FF7C4 "h"
 *   insn=0x00000000004FF7CC string=0x00000000004FF7D0 "h"
 *   insn=0x00000000004FF7D4 string=0x00000000004FF7D8 "A"
 *   insn=0x00000000004FF830 string=0x00000000004FF834 "M"
 *   insn=0x00000000004FF834 string=0x00000000004FF838 "h"
 *   insn=0x00000000004FF83C string=0x00000000004FF840 "!"
 *   insn=0x00000000004FF840 string=0x00000000004FF844 "h\n@"
 *   insn=0x00000000004FF858 string=0x00000000004FF85C ""
 *   insn=0x00000000004FF868 string=0x00000000004FF86C "A"
 *   insn=0x00000000004FF870 string=0x00000000004FF874 "H"
 *   insn=0x00000000004FF880 string=0x00000000004FF884 "!"
 *   insn=0x00000000004FF884 string=0x00000000004FF8A8 "h"
 *   insn=0x00000000004FF89C string=0x00000000004FF8A0 ""
 *   insn=0x00000000004FF8AC string=0x00000000004FF8B0 "!"
 *   insn=0x00000000004FF8B0 string=0x00000000004FF8B4 "h\n@"
 *   insn=0x00000000004FF8C8 string=0x00000000004FF8CC ""
 *   insn=0x00000000004FF8E4 string=0x00000000004FF8E8 "@"
 *   insn=0x00000000004FF8E8 string=0x00000000004FF8EC "h"
 *   insn=0x00000000004FF8EC string=0x00000000004FF8F0 "`\n"
 *   insn=0x00000000004FF8F0 string=0x00000000004FF8F4 "h"
 *   insn=0x00000000004FF918 string=0x00000000004FF9C8 "`"
 *   insn=0x00000000004FF91C string=0x00000000004FF924 "(y"
 *   insn=0x00000000004FF924 string=0x00000000004FF928 "b"
 *   insn=0x00000000004FF930 string=0x00000000004FF934 ""
 *   insn=0x00000000004FF938 string=0x00000000004FF93C "@(a"
 *   insn=0x00000000004FF938 string=0x00000000004FF94C "@8a"
 *   insn=0x00000000004FF938 string=0x00000000004FF95C "@a"
 *   insn=0x00000000004FF938 string=0x00000000004FF96C "( `"
 *   insn=0x00000000004FF938 string=0x00000000004FF984 "( `"
 *   insn=0x00000000004FF938 string=0x00000000004FF9A8 "@"
 *   insn=0x00000000004FF938 string=0x00000000004FF9BC "@@a"
 *   insn=0x00000000004FF940 string=0x00000000004FF944 "'"
 *   insn=0x00000000004FF960 string=0x00000000004FF964 "'"
 *   insn=0x00000000004FF96C string=0x00000000004FF970 " "
 *   insn=0x00000000004FF970 string=0x00000000004FF974 "@"
 *   insn=0x00000000004FF978 string=0x00000000004FF97C "g"
 *   insn=0x00000000004FF984 string=0x00000000004FF988 "`"
 *   insn=0x00000000004FF988 string=0x00000000004FF98C "@"
 *   insn=0x00000000004FF990 string=0x00000000004FF994 " `"
 *   insn=0x00000000004FF994 string=0x00000000004FF998 "@8`"
 *   insn=0x00000000004FF99C string=0x00000000004FF9A0 "G"
 *   insn=0x00000000004FF9AC string=0x00000000001F7BB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_4FF794(__int64 a1, int a2, double *a3, double *a4)
{
  int v8; // w23
  int v9; // w0
  int v10; // w8
  int v11; // w8
  int v12; // w8
  double v13; // d0
  double v14; // d2
  double v15; // d1

  if ( *(_DWORD *)a3 != 5
    || *((_DWORD *)a3 + 4) != -1
    || *((_DWORD *)a3 + 5) != -1
    || *(_DWORD *)a4 != 5
    || *((_DWORD *)a4 + 4) != -1
    || *((_DWORD *)a4 + 5) != -1 )
  {
    v8 = 0;
    if ( a2 != 18 && a2 != 20 )
LABEL_9:
      v8 = sub_4FEB5C(a1, a4);
LABEL_10:
    v9 = sub_4FEB5C(a1, a3);
    if ( v9 <= v8 )
    {
      if ( *(_DWORD *)a4 == 12 )
      {
        v12 = *((_DWORD *)a4 + 2);
        if ( (v12 & 0x100) == 0 && v12 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a3 != 12 )
        goto LABEL_26;
      v11 = *((_DWORD *)a3 + 2);
      if ( (v11 & 0x100) != 0 )
        goto LABEL_26;
    }
    else
    {
      if ( *(_DWORD *)a3 == 12 )
      {
        v10 = *((_DWORD *)a3 + 2);
        if ( (v10 & 0x100) == 0 && v10 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      if ( *(_DWORD *)a4 != 12 )
        goto LABEL_26;
      v11 = *((_DWORD *)a4 + 2);
      if ( (v11 & 0x100) != 0 )
        goto LABEL_26;
    }
    if ( v11 >= *(unsigned __int8 *)(a1 + 74) )
      --*(_DWORD *)(a1 + 60);
LABEL_26:
    *((_DWORD *)a3 + 2) = sub_5001E8(
                            a1,
                            a2 | (v8 << 14) | (unsigned int)(v9 << 23),
                            *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
    *(_DWORD *)a3 = 11;
    return;
  }
  v13 = 0.0;
  v14 = a3[1];
  v15 = a4[1];
  v8 = 0;
  switch ( a2 )
  {
    case 12:
      v13 = v14 + v15;
      break;
    case 13:
      v13 = v14 - v15;
      break;
    case 14:
      v13 = v14 * v15;
      break;
    case 15:
      if ( v15 == 0.0 )
        goto LABEL_9;
      v13 = v14 / v15;
      break;
    case 16:
      if ( v15 == 0.0 )
        goto LABEL_9;
      v13 = v14 - v15 * floor(v14 / v15);
      break;
    case 17:
      v13 = pow(v14, v15);
      break;
    case 18:
      v13 = -v14;
      break;
    case 20:
      goto LABEL_10;
    default:
      break;
  }
  a3[1] = v13;
}

