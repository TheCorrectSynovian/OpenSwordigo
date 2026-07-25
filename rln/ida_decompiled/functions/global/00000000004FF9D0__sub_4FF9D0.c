/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FF9D0
 * Mangled: sub_4FF9D0
 * Demangled: sub_4FF9D0
 *
 * Callers: 1
 *   0x00000000004F1154  sub_4F1154
 *
 * Callees: 6
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000004FF07C  sub_4FF07C
 *   0x00000000004FF268  sub_4FF268
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 41
 *   insn=0x00000000004FF9E4 string=0x00000000004FF9E8 "?8"
 *   insn=0x00000000004FF9EC string=0x00000000004FF9F0 ""
 *   insn=0x00000000004FF9F4 string=0x000000000059AFB0 "\J"
 *   insn=0x00000000004FF9F8 string=0x00000000004FF9FC ")"
 *   insn=0x00000000004FF9FC string=0x00000000004FFA00 "(y"
 *   insn=0x00000000004FFA00 string=0x00000000004FFA04 ""
 *   insn=0x00000000004FFA08 string=0x00000000004FFA0C "h"
 *   insn=0x00000000004FFA14 string=0x00000000004FFA18 "h"
 *   insn=0x00000000004FFA20 string=0x00000000004FFA24 "h"
 *   insn=0x00000000004FFA28 string=0x00000000004FFA2C " "
 *   insn=0x00000000004FFA44 string=0x00000000004FFA48 "E"
 *   insn=0x00000000004FFA8C string=0x00000000004FFA90 "h"
 *   insn=0x00000000004FFA98 string=0x00000000004FFB54 "h"
 *   insn=0x00000000004FFAA8 string=0x00000000004FFAAC "`\n@"
 *   insn=0x00000000004FFAB4 string=0x00000000004FFAB8 "'"
 *   insn=0x00000000004FFAB4 string=0x00000000004FFAD4 "i"
 *   insn=0x00000000004FFACC string=0x00000000004FFAD0 " "
 *   insn=0x00000000004FFAD4 string=0x00000000004FFAD8 "?"
 *   insn=0x00000000004FFADC string=0x00000000004FFB50 "`"
 *   insn=0x00000000004FFAE4 string=0x00000000004FFAE8 ""
 *   insn=0x00000000004FFAF4 string=0x00000000004FFAF8 "I9H"
 *   insn=0x00000000004FFAFC string=0x00000000004FFB00 "?"
 *   insn=0x00000000004FFB00 string=0x00000000004FFB04 "i"
 *   insn=0x00000000004FFB04 string=0x00000000004FFB08 "?"
 *   insn=0x00000000004FFB08 string=0x00000000004FFB0C "!"
 *   insn=0x00000000004FFB1C string=0x00000000004FFB20 "?"
 *   insn=0x00000000004FFB2C string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FFB3C string=0x00000000004FFB40 ")9"
 *   insn=0x00000000004FFB40 string=0x00000000004FFB44 "\t5"
 *   insn=0x00000000004FFB60 string=0x00000000004FFB64 " "
 *   insn=0x00000000004FFB64 string=0x00000000004FFBE8 ""
 *   insn=0x00000000004FFB68 string=0x00000000004FFB6C "_"
 *   insn=0x00000000004FFB7C string=0x00000000004FFB80 "5@"
 *   insn=0x00000000004FFB88 string=0x00000000004FFB8C "j9I"
 *   insn=0x00000000004FFB90 string=0x00000000004FFB94 "_"
 *   insn=0x00000000004FFB98 string=0x00000000004FFB9C "_"
 *   insn=0x00000000004FFB9C string=0x00000000004FFBA0 "!"
 *   insn=0x00000000004FFBC0 string=0x00000000004FFBC8 "h"
 *   insn=0x00000000004FFBD0 string=0x00000000004FFBD4 "9"
 *   insn=0x00000000004FFBD4 string=0x00000000004FFBD8 "(5"
 *   insn=0x00000000004FFBE8 string=0x00000000004FFBEC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FF9D0(__int64 result, int a2, int *a3)
{
  __int64 v4; // x20
  int v5; // w8
  int v6; // w9
  __int64 v7; // x21
  int v8; // w12
  unsigned int v9; // w8
  int v10; // w23
  int v11; // w9
  int v12; // w8
  int v13; // w10
  __int64 v14; // x21
  int v15; // w13
  unsigned int v16; // w9
  int v17; // w23
  int v18; // w8

  v4 = result;
  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if ( *a3 != 5 || a3[4] != -1 || a3[5] != -1 )
        return sub_4FEB5C(result, a3);
      return result;
    case 6:
      return sub_4FE5C0(result, a3);
    case 13:
      return sub_4FF07C(result, a3);
    case 14:
      result = sub_4FE488(result, a3);
      v5 = *a3;
      if ( *a3 == 1 || v5 == 3 )
        goto LABEL_27;
      if ( v5 == 10 )
      {
        result = (unsigned int)a3[2];
        if ( (_DWORD)result == -1 )
          goto LABEL_27;
      }
      else
      {
        result = sub_4FF268((_DWORD *)v4, a3, 1u);
        if ( (_DWORD)result == -1 )
          goto LABEL_27;
      }
      v6 = a3[4];
      if ( v6 == -1 )
      {
        a3[4] = result;
      }
      else
      {
        v7 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
        do
        {
          v8 = v6;
          v9 = *(_DWORD *)(v7 + 4LL * v6);
          if ( v9 >> 14 == 131070 )
            v6 = -1;
          else
            v6 += (v9 >> 14) - 0x1FFFF + 1;
        }
        while ( v6 != -1 );
        v10 = result + ~v8;
        if ( v10 >= 0 )
          v11 = result + ~v8;
        else
          v11 = -v10;
        if ( v11 >= 0x20000 )
          sub_500968(*(_QWORD *)(v4 + 24), "control structure too long");
        *(_DWORD *)(v7 + 4LL * v8) = ((v10 << 14) + 2147467264) & 0xFFFFC000 | v9 & 0x3FFF;
      }
LABEL_27:
      v12 = a3[5];
      *(_DWORD *)(v4 + 52) = *(_DWORD *)(v4 + 48);
      if ( v12 != -1 )
      {
        v13 = *(_DWORD *)(v4 + 56);
        if ( v13 == -1 )
        {
          *(_DWORD *)(v4 + 56) = v12;
        }
        else
        {
          v14 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
          do
          {
            v15 = v13;
            v16 = *(_DWORD *)(v14 + 4LL * v13);
            if ( v16 >> 14 == 131070 )
              v13 = -1;
            else
              v13 += (v16 >> 14) - 0x1FFFF + 1;
          }
          while ( v13 != -1 );
          v17 = v12 + ~v15;
          if ( v17 >= 0 )
            v18 = v12 + ~v15;
          else
            v18 = -v17;
          if ( v18 >= 0x20000 )
            sub_500968(*(_QWORD *)(v4 + 24), "control structure too long");
          *(_DWORD *)(v14 + 4LL * v15) = ((v17 << 14) + 2147467264) & 0xFFFFC000 | v16 & 0x3FFF;
        }
      }
      a3[5] = -1;
      return result;
    default:
      return sub_4FEB5C(result, a3);
  }
}

