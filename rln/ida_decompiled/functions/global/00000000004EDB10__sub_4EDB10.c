/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EDB10
 * Mangled: sub_4EDB10
 * Demangled: sub_4EDB10
 *
 * Callers: 3
 *   0x00000000004EDA98  sub_4EDA98
 *   0x00000000004EDB10  sub_4EDB10
 *   0x00000000004EDD78  sub_4EDD78
 *
 * Callees: 6
 *   0x00000000004ED5C8  sub_4ED5C8
 *   0x00000000004ED720  sub_4ED720
 *   0x00000000004ED7DC  sub_4ED7DC
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004F30A8  sub_4F30A8
 *   0x00000000004F3FB8  sub_4F3FB8
 *
 * Referenced strings: 35
 *   insn=0x00000000004EDB28 string=0x00000000004EDB2C "u"
 *   insn=0x00000000004EDB38 string=0x00000000004EDB3C "y"
 *   insn=0x00000000004EDB40 string=0x00000000004EDB44 "9"
 *   insn=0x00000000004EDB48 string=0x00000000004EDB4C ""
 *   insn=0x00000000004EDB78 string=0x00000000004EDB7C "\t"
 *   insn=0x00000000004EDB7C string=0x00000000004EDB80 "?"
 *   insn=0x00000000004EDB80 string=0x00000000004EDB84 " "
 *   insn=0x00000000004EDB88 string=0x00000000004EDB8C ""
 *   insn=0x00000000004EDB90 string=0x00000000004EDB94 "("
 *   insn=0x00000000004EDB98 string=0x00000000004EDB9C "u"
 *   insn=0x00000000004EDBA0 string=0x00000000004EDBA4 "<"
 *   insn=0x00000000004EDBA8 string=0x00000000004EDBAC "h"
 *   insn=0x00000000004EDBB4 string=0x00000000004EDBB8 "a"
 *   insn=0x00000000004EDBC4 string=0x00000000004EDBC8 ""
 *   insn=0x00000000004EDBCC string=0x00000000004EDBD0 "h"
 *   insn=0x00000000004EDBD0 string=0x00000000004EDBD4 "({"
 *   insn=0x00000000004EDBD4 string=0x00000000004EDBD8 ""
 *   insn=0x00000000004EDBE0 string=0x00000000004EDBE4 "\t\t@"
 *   insn=0x00000000004EDBE4 string=0x00000000004EDBE8 ")"
 *   insn=0x00000000004EDBE8 string=0x00000000004EDBEC "\t\t"
 *   insn=0x00000000004EDC04 string=0x00000000004EDC08 "u"
 *   insn=0x00000000004EDC08 string=0x00000000004EDC0C "U"
 *   insn=0x00000000004EDC0C string=0x00000000004EDC10 "!"
 *   insn=0x00000000004EDC1C string=0x00000000004EDC20 "u"
 *   insn=0x00000000004EDC1C string=0x00000000004ED7DC "((@9"
 *   insn=0x00000000004EDC24 string=0x00000000004EDC28 ""
 *   insn=0x00000000004EDC3C string=0x00000000004EDC40 "M"
 *   insn=0x00000000004EDC40 string=0x00000000004EDC44 "u"
 *   insn=0x00000000004EDC44 string=0x00000000004EDC48 "u"
 *   insn=0x00000000004EDC58 string=0x00000000004EDC5C "u"
 *   insn=0x00000000004EDC70 string=0x00000000004EDC74 "u"
 *   insn=0x00000000004EDC84 string=0x00000000004EDC88 "P"
 *   insn=0x00000000004EDC88 string=0x00000000004EDC8C "u"
 *   insn=0x00000000004EDC88 string=0x00000000004ED5C8 "(@"
 *   insn=0x00000000004EDC8C string=0x00000000004EDC90 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4EDB10(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // x19
  __int64 v4; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  int v8; // w24
  int v9; // w8
  __int64 v10; // x2

  v3 = a2;
  v4 = *a2;
  if ( *a2 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v7 = ~a3;
    v8 = *(_BYTE *)(v6 + 32) ^ 3;
    do
    {
LABEL_3:
      if ( !++v7 )
        break;
      if ( *(_BYTE *)(v4 + 8) == 8 )
        sub_4EDB10(a1, v4 + 152, -3);
      v9 = *(unsigned __int8 *)(v4 + 9);
      if ( ((v9 ^ 3) & v8) == 0 )
      {
        *v3 = *(_QWORD *)v4;
        if ( v4 == *(_QWORD *)(v6 + 40) )
          *(_QWORD *)(v6 + 40) = *(_QWORD *)v4;
        switch ( *(_BYTE *)(v4 + 8) )
        {
          case 4:
            --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
            v10 = *(_QWORD *)(v4 + 16) + 25LL;
            goto LABEL_19;
          case 5:
            sub_4F3FB8(a1, v4);
            v4 = *v3;
            if ( *v3 )
              goto LABEL_3;
            return v3;
          case 6:
            sub_4ED7DC(a1, v4);
            v4 = *v3;
            if ( *v3 )
              goto LABEL_3;
            return v3;
          case 7:
            v10 = *(_QWORD *)(v4 + 32) + 40LL;
LABEL_19:
            sub_4EED74(a1, v4, v10, 0);
            v4 = *v3;
            if ( !*v3 )
              return v3;
            goto LABEL_3;
          case 8:
            sub_4F30A8(a1, v4);
            v4 = *v3;
            if ( *v3 )
              goto LABEL_3;
            return v3;
          case 9:
            sub_4ED720(a1, v4);
            v4 = *v3;
            if ( *v3 )
              goto LABEL_3;
            return v3;
          case 0xA:
            sub_4ED5C8(a1, (_QWORD *)v4);
            v4 = *v3;
            if ( *v3 )
              goto LABEL_3;
            return v3;
          default:
            goto LABEL_8;
        }
      }
      v3 = (__int64 *)v4;
      *(_BYTE *)(v4 + 9) = v9 & 0xF8 | *(_BYTE *)(v6 + 32) & 3;
LABEL_8:
      v4 = *v3;
    }
    while ( *v3 );
  }
  return v3;
}

