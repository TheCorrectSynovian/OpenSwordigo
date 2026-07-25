/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F1154
 * Mangled: sub_4F1154
 * Demangled: sub_4F1154
 *
 * Callers: 8
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004F2128  sub_4F2128
 *   0x00000000004F244C  sub_4F244C
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FF3C4  sub_4FF3C4
 *   0x00000000004FF9D0  sub_4FF9D0
 *   0x00000000004FFC04  sub_4FFC04
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 73
 *   insn=0x00000000004F116C string=0x00000000004F1170 "X"
 *   insn=0x00000000004F1170 string=0x00000000004F1174 ""
 *   insn=0x00000000004F1184 string=0x00000000004F1188 "h"
 *   insn=0x00000000004F1188 string=0x00000000004F118C "\t"
 *   insn=0x00000000004F118C string=0x00000000004F1190 ")"
 *   insn=0x00000000004F1190 string=0x00000000004F1194 "*="
 *   insn=0x00000000004F1194 string=0x00000000004F1198 "_%"
 *   insn=0x00000000004F1198 string=0x00000000004F119C "\t"
 *   insn=0x00000000004F11A0 string=0x00000000004F11A4 "A"
 *   insn=0x00000000004F11A0 string=0x00000000004F11B8 "h"
 *   insn=0x00000000004F11A4 string=0x000000000059A00A "chunk has too many syntax levels"
 *   insn=0x00000000004F11B0 string=0x00000000004F11B4 "{="
 *   insn=0x00000000004F11C0 string=0x00000000004F11C4 ""
 *   insn=0x00000000004F11C8 string=0x00000000004F11CC "h"
 *   insn=0x00000000004F11CC string=0x00000000004F11D0 "I"
 *   insn=0x00000000004F11D0 string=0x00000000004F11D8 "(y"
 *   insn=0x00000000004F11DC string=0x00000000004F11E0 ""
 *   insn=0x00000000004F11E4 string=0x00000000004F1280 "a"
 *   insn=0x00000000004F11E4 string=0x00000000004F1298 "v"
 *   insn=0x00000000004F11EC string=0x00000000004F11F0 " "
 *   insn=0x00000000004F11F4 string=0x00000000004F11F8 "@"
 *   insn=0x00000000004F11FC string=0x00000000004F1200 "@"
 *   insn=0x00000000004F1214 string=0x00000000004F1218 "K"
 *   insn=0x00000000004F1218 string=0x00000000004F1344 "i"
 *   insn=0x00000000004F1238 string=0x00000000004F123C "h"
 *   insn=0x00000000004F1240 string=0x00000000004F1244 ","
 *   insn=0x00000000004F1248 string=0x00000000004F124C "\n>"
 *   insn=0x00000000004F124C string=0x00000000004F1250 "c"
 *   insn=0x00000000004F125C string=0x00000000004F1260 "`"
 *   insn=0x00000000004F1260 string=0x00000000004F1264 "8"
 *   insn=0x00000000004F1280 string=0x00000000004F1284 "`"
 *   insn=0x00000000004F129C string=0x00000000004F12A0 "\t-G8"
 *   insn=0x00000000004F12A4 string=0x00000000004F12A8 "A"
 *   insn=0x00000000004F12A4 string=0x00000000004F12C0 ")y"
 *   insn=0x00000000004F12A8 string=0x000000000059A02B "cannot use '...' outside a vararg function"
 *   insn=0x00000000004F12B8 string=0x00000000004F12BC "\t-G8)y"
 *   insn=0x00000000004F12D4 string=0x00000000004F12D8 "\t"
 *   insn=0x00000000004F12D8 string=0x00000000004F12DC "*2"
 *   insn=0x00000000004F12DC string=0x00000000004FDB84 ""
 *   insn=0x00000000004F1320 string=0x00000000004F1324 "`"
 *   insn=0x00000000004F132C string=0x00000000004F1330 "%8"
 *   insn=0x00000000004F133C string=0x00000000004F1340 "m"
 *   insn=0x00000000004F1348 string=0x00000000004F134C "("
 *   insn=0x00000000004F1350 string=0x00000000004F1354 "("
 *   insn=0x00000000004F1354 string=0x00000000004F1358 "I"
 *   insn=0x00000000004F1354 string=0x00000000004F1378 "("
 *   insn=0x00000000004F1358 string=0x00000000004F1360 "(y"
 *   insn=0x00000000004F1360 string=0x00000000004F1364 "\t"
 *   insn=0x00000000004F1368 string=0x00000000004F136C " "
 *   insn=0x00000000004F136C string=0x00000000004F13A0 "h"
 *   insn=0x00000000004F136C string=0x00000000004F13C0 "("
 *   insn=0x00000000004F136C string=0x00000000004F13FC "Y"
 *   insn=0x00000000004F136C string=0x00000000004F1470 "h"
 *   insn=0x00000000004F1370 string=0x00000000004F1374 """
 *   insn=0x00000000004F1380 string=0x00000000004F1384 "I"
 *   insn=0x00000000004F1384 string=0x00000000004F138C "(y"
 *   insn=0x00000000004F1384 string=0x0000000000599F90 "t"
 *   insn=0x00000000004F138C string=0x00000000004F1390 ""
 *   insn=0x00000000004F1394 string=0x00000000004F13D8 "H"
 *   insn=0x00000000004F13D0 string=0x00000000004F13D4 "\n"
 *   insn=0x00000000004F13D8 string=0x00000000004F13DC ""
 *   insn=0x00000000004F140C string=0x00000000004F1410 "(kh8"
 *   insn=0x00000000004F1420 string=0x00000000004F1424 "`"
 *   insn=0x00000000004F142C string=0x00000000004F1430 "h9"
 *   insn=0x00000000004F1430 string=0x00000000004F1434 "("
 *   insn=0x00000000004F1440 string=0x00000000004F1444 "D"
 *   insn=0x00000000004F1444 string=0x00000000004F1448 "h"
 *   insn=0x00000000004F1470 string=0x00000000004F1474 "\t"
 *   insn=0x00000000004F1474 string=0x00000000004F1478 ")"
 *   insn=0x00000000004F1478 string=0x00000000004F147C "\t"
 *   insn=0x00000000004F147C string=0x00000000004F1480 ""
 *   insn=0x00000000004F1488 string=0x00000000004F148C "!"
 *   insn=0x00000000004F14B0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F1154(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // x8
  unsigned int v7; // w10
  int v8; // w8
  unsigned int v9; // w22
  int v10; // w8
  int v11; // w0
  int v12; // w8
  __int64 v13; // x22
  __int64 v14; // x0
  int v15; // w9
  unsigned int v16; // w22
  int v17; // w8
  unsigned int v18; // w23
  _QWORD v20[4]; // [xsp+0h] [xbp-60h] BYREF

  v20[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(a1 + 56);
  v7 = (unsigned __int16)++*(_WORD *)(v6 + 96);
  if ( v7 >= 0xC9 )
    sub_5007A0(a1, "chunk has too many syntax levels", 0);
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 <= 262 )
  {
    if ( v8 == 35 )
    {
      v9 = 2;
    }
    else
    {
      if ( v8 != 45 )
      {
        if ( v8 == 123 )
          sub_4F14B4(a1, a2);
        else
LABEL_24:
          sub_4F1CF4(a1, a2);
        goto LABEL_25;
      }
      v9 = 0;
    }
LABEL_23:
    sub_500A74(a1);
    sub_4F1154(a1, a2, 8);
    sub_4FF3C4(*(_QWORD *)(a1 + 48), v9, a2);
    goto LABEL_25;
  }
  v9 = 1;
  switch ( v8 )
  {
    case 263:
      v10 = 3;
      goto LABEL_14;
    case 265:
      sub_500A74(a1);
      sub_4F17E0(a1, a2, 0, *(unsigned int *)(a1 + 4));
      break;
    case 269:
      v10 = 1;
      goto LABEL_14;
    case 270:
      goto LABEL_23;
    case 275:
      v10 = 2;
LABEL_14:
      *(_QWORD *)(a2 + 16) = -1;
      *(_DWORD *)a2 = v10;
      *(_DWORD *)(a2 + 8) = 0;
      goto LABEL_20;
    case 279:
      v13 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(*(_QWORD *)v13 + 114LL) )
        sub_500968(a1, "cannot use '...' outside a vararg function");
      v14 = *(_QWORD *)(a1 + 48);
      *(_BYTE *)(*(_QWORD *)v13 + 114LL) &= ~4u;
      v11 = sub_4FDB84(v14, 37);
      v12 = 14;
      goto LABEL_19;
    case 284:
      *(_QWORD *)(a2 + 16) = -1;
      *(_DWORD *)a2 = 5;
      *(_DWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 24);
      goto LABEL_20;
    case 286:
      v11 = sub_4FE100(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 24));
      v12 = 4;
LABEL_19:
      *(_QWORD *)(a2 + 16) = -1;
      *(_DWORD *)a2 = v12;
      *(_DWORD *)(a2 + 8) = v11;
LABEL_20:
      sub_500A74(a1);
      break;
    default:
      goto LABEL_24;
  }
LABEL_25:
  v15 = *(_DWORD *)(a1 + 16);
  v16 = 15;
  v17 = 0;
  switch ( v15 )
  {
    case '%':
      v17 = 4;
      goto LABEL_41;
    case '&':
    case '\'':
    case '(':
    case ')':
    case ',':
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case ';':
    case '=':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
      break;
    case '*':
      v17 = 2;
      goto LABEL_41;
    case '+':
      goto LABEL_41;
    case '-':
      v17 = 1;
      goto LABEL_41;
    case '/':
      v17 = 3;
      goto LABEL_41;
    case '<':
      v17 = 9;
      goto LABEL_41;
    case '>':
      v17 = 11;
      goto LABEL_41;
    case '^':
      v17 = 5;
LABEL_41:
      v16 = v17;
      do
      {
        if ( byte_59A233[2 * v16] <= a3 )
          break;
        sub_500A74(a1);
        sub_4FF9D0(*(_QWORD *)(a1 + 48), v16, a2);
        v18 = sub_4F1154(a1, v20, byte_59A233[2 * v16 + 1]);
        sub_4FFC04(*(_QWORD *)(a1 + 48), v16, a2, v20);
        v16 = v18;
      }
      while ( v18 != 15 );
      break;
    default:
      switch ( v15 )
      {
        case 257:
          v17 = 13;
          goto LABEL_41;
        case 271:
          v17 = 14;
          goto LABEL_41;
        case 278:
          v17 = 6;
          goto LABEL_41;
        case 280:
          v17 = 8;
          goto LABEL_41;
        case 281:
          v17 = 12;
          goto LABEL_41;
        case 282:
          v17 = 10;
          goto LABEL_41;
        case 283:
          v17 = 7;
          goto LABEL_41;
        default:
          goto LABEL_44;
      }
  }
LABEL_44:
  --*(_WORD *)(*(_QWORD *)(a1 + 56) + 96LL);
  return v16;
}

