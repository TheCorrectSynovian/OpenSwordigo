/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE364
 * Mangled: sub_4EE364
 * Demangled: sub_4EE364
 *
 * Callers: 7
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004EE294  sub_4EE294
 *   0x00000000004EE334  sub_4EE334
 *   0x00000000004EE364  sub_4EE364
 *   0x00000000004EE4B0  sub_4EE4B0
 *   0x00000000004EE534  sub_4EE534
 *   0x00000000004EEB50  sub_4EEB50
 *
 * Callees: 0
 *
 * Referenced strings: 34
 *   insn=0x00000000004EE374 string=0x00000000004EE378 "h&@9U"
 *   insn=0x00000000004EE378 string=0x00000000004EE37C "U"
 *   insn=0x00000000004EE384 string=0x00000000004EE388 "i"@9u"
 *   insn=0x00000000004EE388 string=0x00000000004EE38C "u"
 *   insn=0x00000000004EE38C string=0x00000000004EE390 "h&"
 *   insn=0x00000000004EE390 string=0x00000000004EE394 ")"
 *   insn=0x00000000004EE394 string=0x00000000004EE398 "?"
 *   insn=0x00000000004EE3A0 string=0x00000000004EE3A4 ")"
 *   insn=0x00000000004EE3A4 string=0x00000000004EE3A8 " "
 *   insn=0x00000000004EE3A8 string=0x00000000004EE3AC "a\n@"
 *   insn=0x00000000004EE3A8 string=0x00000000004EE424 "h\n@"
 *   insn=0x00000000004EE3AC string=0x00000000004EE3B0 ""
 *   insn=0x00000000004EE3B0 string=0x00000000004EE3B4 "h&"
 *   insn=0x00000000004EE3B8 string=0x00000000004EE3BC "($@9"
 *   insn=0x00000000004EE3B8 string=0x00000000004EE3D0 "s"
 *   insn=0x00000000004EE3C0 string=0x00000000004EE3C4 "`"
 *   insn=0x00000000004EE3D0 string=0x00000000004EE3D4 "h&@9"
 *   insn=0x00000000004EE3D8 string=0x00000000004EE3DC "a"
 *   insn=0x00000000004EE3DC string=0x00000000004EE3E0 ""
 *   insn=0x00000000004EE3E4 string=0x00000000004EE3E8 "h"
 *   insn=0x00000000004EE3E8 string=0x00000000004EE3EC "\t"
 *   insn=0x00000000004EE3F0 string=0x00000000004EE3F4 "h\n"
 *   insn=0x00000000004EE3FC string=0x00000000004EE400 "hR"
 *   insn=0x00000000004EE408 string=0x00000000004EE40C "h6"
 *   insn=0x00000000004EE424 string=0x00000000004EE428 "\t\t@"
 *   insn=0x00000000004EE428 string=0x00000000004EE42C "?"
 *   insn=0x00000000004EE42C string=0x00000000004EE430 ""
 *   insn=0x00000000004EE430 string=0x00000000004EE450 "ib"
 *   insn=0x00000000004EE434 string=0x00000000004EE438 ")$@9?"
 *   insn=0x00000000004EE438 string=0x00000000004EE43C "?"
 *   insn=0x00000000004EE448 string=0x00000000004EE44C "h\n@"
 *   insn=0x00000000004EE458 string=0x00000000004EE45C "h&@9"
 *   insn=0x00000000004EE45C string=0x00000000004EE460 ""
 *   insn=0x00000000004EE460 string=0x00000000004EE464 "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE364(__int64 result, __int64 a2)
{
  __int64 v2; // x19
  char v3; // w8
  __int64 v4; // x20
  int v5; // w9
  char v6; // w8
  __int64 v7; // x1
  int *v8; // x8

  v2 = a2;
  v3 = *(_BYTE *)(a2 + 9);
  v4 = result;
  while ( 2 )
  {
    v5 = *(unsigned __int8 *)(v2 + 8);
    v6 = v3 & 0xFC;
    *(_BYTE *)(v2 + 9) = v6;
    switch ( v5 )
    {
      case 5:
        *(_QWORD *)(v2 + 48) = *(_QWORD *)(v4 + 56);
        goto LABEL_12;
      case 6:
        *(_QWORD *)(v2 + 16) = *(_QWORD *)(v4 + 56);
        goto LABEL_12;
      case 7:
        v7 = *(_QWORD *)(v2 + 16);
        *(_BYTE *)(v2 + 9) = v6 | 4;
        if ( v7 )
        {
          if ( (*(_BYTE *)(v7 + 9) & 3) != 0 )
            result = sub_4EE364(v4);
        }
        v2 = *(_QWORD *)(v2 + 24);
        v3 = *(_BYTE *)(v2 + 9);
        if ( (v3 & 3) != 0 )
          continue;
        return result;
      case 8:
        *(_QWORD *)(v2 + 160) = *(_QWORD *)(v4 + 56);
        goto LABEL_12;
      case 9:
        *(_QWORD *)(v2 + 104) = *(_QWORD *)(v4 + 56);
LABEL_12:
        *(_QWORD *)(v4 + 56) = v2;
        break;
      case 10:
        v8 = *(int **)(v2 + 16);
        if ( v8[2] >= 4 && (*(_BYTE *)(*(_QWORD *)v8 + 9LL) & 3) != 0 )
        {
          result = sub_4EE364(v4);
          v8 = *(int **)(v2 + 16);
        }
        if ( v8 == (int *)(v2 + 24) )
          *(_BYTE *)(v2 + 9) |= 4u;
        break;
      default:
        return result;
    }
    return result;
  }
}

