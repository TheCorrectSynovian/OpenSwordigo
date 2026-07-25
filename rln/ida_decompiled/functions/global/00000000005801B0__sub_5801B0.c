/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005801B0
 * Mangled: sub_5801B0
 * Demangled: sub_5801B0
 *
 * Callers: 1
 *   0x00000000005806A8  sub_5806A8
 *
 * Callees: 6
 *   0x00000000001FE620  .abort
 *   0x0000000000201760  .memcpy
 *   0x000000000057FC60  sub_57FC60
 *   0x000000000057FC88  sub_57FC88
 *   0x000000000057FCC8  sub_57FCC8
 *   0x0000000000580138  sub_580138
 *
 * Referenced strings: 101
 *   insn=0x00000000005801C8 string=0x00000000005801CC ""
 *   insn=0x00000000005801E0 string=0x00000000005801E4 "{"
 *   insn=0x00000000005801EC string=0x00000000005801F0 "7"
 *   insn=0x00000000005801F8 string=0x00000000005801FC "b$"
 *   insn=0x00000000005801FC string=0x0000000000580200 "A"
 *   insn=0x0000000000580200 string=0x0000000000580204 "C"
 *   insn=0x0000000000580204 string=0x0000000000580208 "b&C"
 *   insn=0x0000000000580208 string=0x000000000058020C "a"
 *   insn=0x000000000058020C string=0x0000000000580210 "_"
 *   insn=0x000000000058021C string=0x0000000000580220 "#"
 *   insn=0x0000000000580228 string=0x000000000058022C "`2C"
 *   insn=0x000000000058022C string=0x0000000000580230 "!"
 *   insn=0x0000000000580230 string=0x0000000000580234 "!"
 *   insn=0x0000000000580234 string=0x0000000000580238 "a&"
 *   insn=0x0000000000580244 string=0x0000000000580248 "!"
 *   insn=0x0000000000580250 string=0x0000000000580254 "1"
 *   insn=0x000000000058025C string=0x0000000000580260 "!"
 *   insn=0x000000000058025C string=0x0000000000580270 "?"
 *   insn=0x0000000000580260 string=0x0000000000580264 "a"
 *   insn=0x0000000000580264 string=0x0000000000580268 "?"
 *   insn=0x0000000000580270 string=0x0000000000580274 "H "
 *   insn=0x0000000000580274 string=0x0000000000580278 "a[axc"
 *   insn=0x0000000000580278 string=0x000000000058027C "c"
 *   insn=0x000000000058027C string=0x0000000000580280 "a"
 *   insn=0x000000000058027C string=0x0000000000580288 "b"
 *   insn=0x0000000000580280 string=0x0000000000580284 " "
 *   insn=0x0000000000580284 string=0x00000000005803F0 "c"
 *   insn=0x0000000000580284 string=0x000000000058047C "@"
 *   insn=0x00000000005802B8 string=0x00000000005802BC "`&"
 *   insn=0x00000000005802C8 string=0x00000000005802CC "c2C"
 *   insn=0x00000000005802CC string=0x00000000005802D0 """
 *   insn=0x00000000005802D0 string=0x00000000005802D4 "b&"
 *   insn=0x00000000005802E0 string=0x00000000005802E4 "c2C"
 *   insn=0x00000000005802E4 string=0x00000000005802E8 """
 *   insn=0x00000000005802E8 string=0x00000000005802EC "b&"
 *   insn=0x00000000005802F8 string=0x00000000005802FC "c2C"
 *   insn=0x00000000005802FC string=0x0000000000580300 """
 *   insn=0x0000000000580300 string=0x0000000000580304 "b&"
 *   insn=0x0000000000580310 string=0x0000000000580314 "S"
 *   insn=0x0000000000580318 string=0x000000000058031C "Q"
 *   insn=0x0000000000580320 string=0x0000000000580324 "a.C"
 *   insn=0x0000000000580328 string=0x000000000058032C "k"
 *   insn=0x0000000000580334 string=0x0000000000580338 "J"
 *   insn=0x0000000000580348 string=0x000000000058034C "`"
 *   insn=0x000000000058035C string=0x0000000000580360 "@"
 *   insn=0x0000000000580370 string=0x0000000000580374 "`"
 *   insn=0x0000000000580388 string=0x000000000058038C "5"
 *   insn=0x0000000000580390 string=0x0000000000580394 "3"
 *   insn=0x00000000005803A8 string=0x00000000005803AC "B"
 *   insn=0x00000000005803AC string=0x00000000005803B0 "a"
 *   insn=0x00000000005803B0 string=0x00000000005803B4 """
 *   insn=0x00000000005803BC string=0x0000000000580674 "aj "
 *   insn=0x00000000005803E4 string=0x00000000005803E8 "`"
 *   insn=0x0000000000580408 string=0x000000000058040C "x"
 *   insn=0x0000000000580424 string=0x0000000000580428 "a"
 *   insn=0x0000000000580438 string=0x000000000058043C "`"
 *   insn=0x000000000058043C string=0x0000000000580440 ""
 *   insn=0x0000000000580440 string=0x000000000058045C "wB"
 *   insn=0x0000000000580454 string=0x0000000000580458 "`"
 *   insn=0x0000000000580474 string=0x0000000000580478 ","
 *   insn=0x0000000000580478 string=0x0000000000580528 "`"
 *   insn=0x000000000058047C string=0x0000000000580480 "t"
 *   insn=0x0000000000580480 string=0x0000000000580484 "`B"
 *   insn=0x0000000000580488 string=0x000000000058048C "S"
 *   insn=0x000000000058049C string=0x00000000005804A0 "?"
 *   insn=0x00000000005804A4 string=0x00000000005804A8 "!"
 *   insn=0x00000000005804A8 string=0x00000000005804AC "c"
 *   insn=0x00000000005804AC string=0x00000000005804B0 "b"
 *   insn=0x00000000005804B0 string=0x00000000005804B4 "G"
 *   insn=0x00000000005804B4 string=0x00000000005805D0 "C"
 *   insn=0x00000000005804CC string=0x00000000005804D0 "a.C"
 *   insn=0x00000000005804E8 string=0x00000000005804EC "b"
 *   insn=0x00000000005804EC string=0x00000000005804F0 "W"
 *   insn=0x00000000005804F0 string=0x00000000005804F4 "`"
 *   insn=0x0000000000580504 string=0x0000000000580508 "a"
 *   insn=0x0000000000580510 string=0x0000000000580514 "wB"
 *   insn=0x0000000000580518 string=0x000000000058051C "a.C"
 *   insn=0x0000000000580528 string=0x000000000058052C "U"
 *   insn=0x0000000000580558 string=0x000000000058055C "a.C"
 *   insn=0x0000000000580560 string=0x0000000000580564 "\t"
 *   insn=0x000000000058057C string=0x0000000000580580 "a.C"
 *   insn=0x0000000000580590 string=0x0000000000580594 "h"
 *   insn=0x000000000058059C string=0x00000000005805A0 "b"
 *   insn=0x00000000005805A0 string=0x00000000005805A4 "C"
 *   insn=0x00000000005805A4 string=0x00000000005805A8 "3"
 *   insn=0x00000000005805B8 string=0x00000000005805BC "?"
 *   insn=0x00000000005805C0 string=0x00000000005805C4 "!"
 *   insn=0x00000000005805C8 string=0x00000000005805CC "b"
 *   insn=0x00000000005805D0 string=0x00000000005805D4 "`j!"
 *   insn=0x00000000005805E4 string=0x00000000005805E8 "&"
 *   insn=0x00000000005805EC string=0x00000000005805F0 "b"
 *   insn=0x00000000005805F8 string=0x00000000005805FC "W"
 *   insn=0x0000000000580600 string=0x0000000000580604 "A"
 *   insn=0x0000000000580608 string=0x000000000058060C "! "
 *   insn=0x000000000058060C string=0x0000000000580610 "a"
 *   insn=0x0000000000580610 string=0x0000000000580614 ""
 *   insn=0x0000000000580628 string=0x000000000058062C "@"
 *   insn=0x000000000058064C string=0x0000000000580650 "`.C"
 *   insn=0x000000000058065C string=0x0000000000580660 ""
 *   insn=0x0000000000580668 string=0x000000000058066C "b"
 *   insn=0x000000000058066C string=0x0000000000580670 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_5801B0(char *result, unsigned __int64 a2, _QWORD *a3, char *a4)
{
  __int64 *v7; // x24
  unsigned __int64 v8; // x2
  char v9; // w1
  char *v10; // x20
  int v11; // w3
  char *v12; // x0
  char *v13; // x0
  __int64 v14; // x1
  unsigned __int64 v15; // x0
  char *v16; // x0
  __int64 v17; // x0
  unsigned __int64 v18; // x1
  __int64 *v19; // x3
  __int64 *v20; // x3
  char *v21; // x0
  unsigned __int64 v22; // x0
  char *v23; // x0
  __int64 v24; // x1
  int v25; // w3
  char *v26; // x2
  char *v27; // x0
  char *v28; // x0
  char *v29; // x0
  char *v30; // x0
  __int64 v31; // x1
  unsigned __int64 v32; // x0
  char *v33; // x0
  char *v34; // x0
  __int64 v35; // x0
  char *v36; // x2
  __int64 v37; // x1
  char *v38; // x0
  __int64 v39; // [xsp-660h] [xbp-660h] BYREF
  unsigned __int64 v40; // [xsp+68h] [xbp+68h]
  unsigned __int64 v41; // [xsp+78h] [xbp+78h] BYREF
  unsigned __int64 v42; // [xsp+80h] [xbp+80h] BYREF
  unsigned __int64 v43; // [xsp+88h] [xbp+88h] BYREF

  *((_QWORD *)a4 + 196) = 0;
  v7 = 0;
  while ( (unsigned __int64)result < a2 )
  {
    v8 = *((_QWORD *)a4 + 201);
    if ( v8 >= a3[99] + (a3[104] >> 63) )
      break;
    v9 = *result;
    v10 = result + 1;
    v11 = *result & 0xC0;
    if ( v11 == 64 )
    {
      *((_QWORD *)a4 + 201) = v8 + (v9 & 0x3F) * *((_QWORD *)a4 + 204);
      goto LABEL_58;
    }
    if ( v11 != 128 )
    {
      if ( v11 == 192 )
      {
        *(_DWORD *)&a4[16 * (v9 & 0x3F) + 8] = 0;
        goto LABEL_58;
      }
      switch ( *result )
      {
        case 0:
          goto LABEL_58;
        case 1:
          v40 = (unsigned __int8)a4[1648];
          v13 = (char *)sub_580138(v40, (__int64)a3);
          v10 = sub_57FCC8(v40, v13, v10, &v43);
          *((_QWORD *)a4 + 201) = v43;
          goto LABEL_58;
        case 2:
          v10 = result + 2;
          *((_QWORD *)a4 + 201) = v8 + (unsigned __int8)result[1] * *((_QWORD *)a4 + 204);
          goto LABEL_58;
        case 3:
          v10 = result + 3;
          *((_QWORD *)a4 + 201) = v8 + *(unsigned __int16 *)(result + 1) * *((_QWORD *)a4 + 204);
          goto LABEL_58;
        case 4:
          v10 = result + 5;
          *((_QWORD *)a4 + 201) = v8 + *(unsigned int *)(result + 1) * *((_QWORD *)a4 + 204);
          goto LABEL_58;
        case 5:
          v12 = sub_57FC60(result + 1, &v41);
          goto LABEL_16;
        case 6:
        case 8:
          v10 = sub_57FC60(result + 1, &v41);
          if ( v41 <= 0x61 )
            *(_DWORD *)&a4[16 * v41 + 8] = 0;
          goto LABEL_58;
        case 7:
          v10 = sub_57FC60(result + 1, &v41);
          if ( v41 <= 0x61 )
            *(_DWORD *)&a4[16 * v41 + 8] = 6;
          goto LABEL_58;
        case 9:
          v16 = sub_57FC60(result + 1, &v41);
          v10 = sub_57FC60(v16, &v43);
          if ( v41 > 0x61 )
            goto LABEL_58;
          v17 = 16 * v41;
          *(_DWORD *)&a4[16 * v41 + 8] = 2;
          v18 = v43;
          goto LABEL_56;
        case 10:
          if ( v7 )
          {
            v19 = v7;
            v7 = (__int64 *)v7[196];
          }
          else
          {
            v19 = &v39;
          }
          *((_QWORD *)a4 + 196) = memcpy(v19, a4, 0x648u);
          goto LABEL_58;
        case 11:
          v40 = *((_QWORD *)a4 + 196);
          memcpy(a4, (const void *)v40, 0x648u);
          v20 = (__int64 *)v40;
          *(_QWORD *)(v40 + 1568) = v7;
          v7 = v20;
          goto LABEL_58;
        case 12:
          v21 = sub_57FC60(result + 1, &v42);
          *((_QWORD *)a4 + 198) = v42;
          v10 = sub_57FC60(v21, &v42);
          *((_QWORD *)a4 + 197) = v42;
          goto LABEL_30;
        case 13:
          v10 = sub_57FC60(result + 1, &v42);
          *((_QWORD *)a4 + 198) = v42;
LABEL_30:
          *((_DWORD *)a4 + 400) = 1;
          goto LABEL_58;
        case 14:
          v10 = sub_57FC60(result + 1, &v42);
          v22 = v42;
          goto LABEL_40;
        case 15:
          *((_QWORD *)a4 + 199) = v10;
          *((_DWORD *)a4 + 400) = 2;
          v23 = result + 1;
          goto LABEL_49;
        case 16:
          v23 = sub_57FC60(result + 1, &v41);
          if ( v41 > 0x61 )
            goto LABEL_49;
          v24 = 16 * v41;
          v25 = 3;
          v26 = &a4[16 * v41];
          goto LABEL_48;
        case 17:
          v27 = sub_57FC60(result + 1, &v41);
          v10 = sub_57FC88(v27, &v43);
          v14 = *((_QWORD *)a4 + 203);
          v15 = v43;
          goto LABEL_36;
        case 18:
          v28 = sub_57FC60(result + 1, &v42);
          *((_QWORD *)a4 + 198) = v42;
          v29 = sub_57FC88(v28, &v43);
          *((_DWORD *)a4 + 400) = 1;
          v10 = v29;
          goto LABEL_39;
        case 19:
          v10 = sub_57FC88(result + 1, &v43);
LABEL_39:
          v22 = v43 * *((_QWORD *)a4 + 203);
LABEL_40:
          *((_QWORD *)a4 + 197) = v22;
          goto LABEL_58;
        case 20:
          v30 = sub_57FC60(result + 1, &v41);
          v10 = sub_57FC60(v30, &v42);
          v31 = *((_QWORD *)a4 + 203);
          v32 = v42;
          goto LABEL_44;
        case 21:
          v33 = sub_57FC60(result + 1, &v41);
          v10 = sub_57FC88(v33, &v43);
          v31 = *((_QWORD *)a4 + 203);
          v32 = v43;
LABEL_44:
          v18 = v32 * v31;
          if ( v41 > 0x61 )
            goto LABEL_58;
          v17 = 16 * v41;
          *(_DWORD *)&a4[16 * v41 + 8] = 4;
          break;
        case 22:
          v23 = sub_57FC60(result + 1, &v41);
          if ( v41 <= 0x61 )
          {
            v24 = 16 * v41;
            v25 = 5;
            v26 = &a4[16 * v41];
LABEL_48:
            *((_DWORD *)v26 + 2) = v25;
            *(_QWORD *)&a4[v24] = v23;
          }
LABEL_49:
          v34 = sub_57FC60(v23, &v42);
          v10 = &v34[v42];
          goto LABEL_58;
        case 45:
          v35 = 16;
          v36 = a4 + 256;
          v41 = 16;
          v37 = 0;
          do
          {
            *((_DWORD *)v36 + 2) = 1;
            ++v35;
            *(_QWORD *)v36 = v37;
            v36 += 16;
            v37 += 8;
          }
          while ( v35 != 32 );
          goto LABEL_58;
        case 46:
          v10 = sub_57FC60(result + 1, &v42);
          a3[106] = v42;
          goto LABEL_58;
        case 47:
          v38 = sub_57FC60(result + 1, &v41);
          v10 = sub_57FC60(v38, &v42);
          if ( v41 > 0x61 )
            goto LABEL_58;
          v17 = 16 * v41;
          v18 = -(__int64)(*((_QWORD *)a4 + 203) * v42);
          *(_DWORD *)&a4[16 * v41 + 8] = 1;
          break;
        default:
          abort();
          return result;
      }
      goto LABEL_56;
    }
    v12 = result + 1;
    v41 = v9 & 0x3F;
LABEL_16:
    v10 = sub_57FC60(v12, &v42);
    v14 = *((_QWORD *)a4 + 203);
    v15 = v42;
LABEL_36:
    v18 = v15 * v14;
    if ( v41 <= 0x61 )
    {
      v17 = 16 * v41;
      *(_DWORD *)&a4[16 * v41 + 8] = 1;
LABEL_56:
      *(_QWORD *)&a4[v17] = v18;
    }
LABEL_58:
    result = v10;
  }
  return result;
}

