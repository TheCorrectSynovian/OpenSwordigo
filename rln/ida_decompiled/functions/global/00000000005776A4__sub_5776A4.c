/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005776A4
 * Mangled: sub_5776A4
 * Demangled: sub_5776A4
 *
 * Callers: 5
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 4
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000571FA0  sub_571FA0
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576FE0  sub_576FE0
 *
 * Referenced strings: 41
 *   insn=0x00000000005776B8 string=0x00000000005776BC "a"
 *   insn=0x00000000005776BC string=0x00000000005776C0 "?0"
 *   insn=0x00000000005776C4 string=0x00000000005776DC "b"
 *   insn=0x00000000005776E0 string=0x00000000005776E4 "a"
 *   insn=0x00000000005776E4 string=0x00000000005776E8 "?|"
 *   insn=0x00000000005776EC string=0x00000000005776F0 "?h"
 *   insn=0x00000000005776F0 string=0x00000000005776F4 "@"
 *   insn=0x00000000005776F8 string=0x00000000005777CC "b"
 *   insn=0x0000000000577700 string=0x0000000000577704 " "
 *   insn=0x000000000057770C string=0x0000000000577710 "`"
 *   insn=0x0000000000577710 string=0x0000000000577714 "a"
 *   insn=0x0000000000577718 string=0x000000000057771C " "
 *   insn=0x0000000000577724 string=0x00000000005777FC """
 *   insn=0x0000000000577728 string=0x000000000057772C "@"
 *   insn=0x0000000000577730 string=0x0000000000577734 """
 *   insn=0x0000000000577738 string=0x0000000000577744 "b"
 *   insn=0x000000000057773C string=0x0000000000577740 "@"
 *   insn=0x0000000000577744 string=0x0000000000577748 "@"
 *   insn=0x000000000057774C string=0x0000000000577750 "a"
 *   insn=0x0000000000577750 string=0x0000000000577754 "B"
 *   insn=0x0000000000577750 string=0x000000000057773C "B"
 *   insn=0x0000000000577770 string=0x0000000000577774 "b"
 *   insn=0x0000000000577770 string=0x0000000000571F00 "$"
 *   insn=0x0000000000577774 string=0x0000000000577778 "A"
 *   insn=0x0000000000577778 string=0x000000000057777C "?"
 *   insn=0x000000000057777C string=0x0000000000577780 "A"
 *   insn=0x0000000000577780 string=0x0000000000577784 "B"
 *   insn=0x0000000000577784 string=0x0000000000577788 "b"
 *   insn=0x000000000057779C string=0x00000000005777A0 "?h"
 *   insn=0x00000000005777A8 string=0x00000000005777AC "B"
 *   insn=0x00000000005777B0 string=0x00000000005777B4 "b"
 *   insn=0x00000000005777B8 string=0x00000000005777BC "\t"
 *   insn=0x00000000005777BC string=0x00000000005777C0 "b"
 *   insn=0x00000000005777C0 string=0x00000000005777C4 "A"
 *   insn=0x00000000005777CC string=0x00000000005777D0 "b"
 *   insn=0x00000000005777D0 string=0x00000000005777D4 "a@9"
 *   insn=0x00000000005777E4 string=0x00000000005777E8 "aR@"
 *   insn=0x00000000005777EC string=0x00000000005777F0 " "
 *   insn=0x00000000005777F0 string=0x00000000005777F4 "`R"
 *   insn=0x00000000005777FC string=0x0000000000577800 "b"
 *   insn=0x0000000000577804 string=0x0000000000577808 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5776A4(__int64 a1)
{
  _BYTE *v1; // x3
  __int64 result; // x0
  unsigned __int8 *v4; // x2
  int v5; // w1
  __int64 v6; // x0
  __int64 v7; // x20
  unsigned __int8 *v8; // x1
  int v9; // w21
  int v10; // w0
  unsigned __int8 *i; // x2
  int v12; // w0
  int v13; // w2
  __int64 v14; // x0
  __int64 v15; // x0

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 76 )
    return 0;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v5 = (unsigned __int8)v1[1];
  if ( v5 != 90 )
  {
    if ( v5 != 95 )
    {
      v6 = sub_574B04(a1);
      v7 = v6;
      if ( v6 )
      {
        if ( *(_DWORD *)v6 == 39 )
        {
          v15 = *(_QWORD *)(v6 + 8);
          if ( *(_DWORD *)(v15 + 28) )
            *(_DWORD *)(a1 + 80) -= *(_DWORD *)(v15 + 8);
        }
        v8 = *(unsigned __int8 **)(a1 + 24);
        v9 = 60;
        v10 = *v8;
        if ( v10 == 110 )
        {
          *(_QWORD *)(a1 + 24) = v8 + 1;
          v9 = 61;
          v10 = *++v8;
        }
        if ( v10 == 69 )
        {
          v13 = 0;
LABEL_15:
          v14 = sub_571FA0(a1, (__int64)v8, v13);
          result = sub_571F00(a1, v9, v7, v14);
          v4 = *(unsigned __int8 **)(a1 + 24);
          v5 = *v4;
          goto LABEL_16;
        }
        if ( v10 )
        {
          for ( i = v8 + 1; ; ++i )
          {
            *(_QWORD *)(a1 + 24) = i;
            v12 = *i;
            if ( v12 == 69 )
              break;
            if ( !v12 )
              return 0;
          }
          v13 = (_DWORD)i - (_DWORD)v8;
          goto LABEL_15;
        }
      }
      return 0;
    }
    v4 = v1 + 2;
    *(_QWORD *)(a1 + 24) = v1 + 2;
    v5 = (unsigned __int8)v1[2];
  }
  result = 0;
  if ( v5 == 90 )
  {
    *(_QWORD *)(a1 + 24) = v4 + 1;
    result = sub_576FE0(a1, 0);
    v4 = *(unsigned __int8 **)(a1 + 24);
    v5 = *v4;
  }
LABEL_16:
  if ( v5 != 69 )
    return 0;
  *(_QWORD *)(a1 + 24) = v4 + 1;
  return result;
}

