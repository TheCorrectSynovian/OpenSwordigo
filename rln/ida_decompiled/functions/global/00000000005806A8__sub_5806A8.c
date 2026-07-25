/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005806A8
 * Mangled: sub_5806A8
 * Demangled: sub_5806A8
 *
 * Callers: 6
 *   0x000000000058128C  sub_58128C
 *   0x00000000005813B4  sub_5813B4
 *   0x0000000000581474  sub_581474
 *   0x0000000000581560  sub_581560
 *   0x0000000000581658  sub_581658
 *   0x0000000000581ADC  sub_581ADC
 *
 * Callees: 9
 *   0x00000000001FBC40  .memset
 *   0x00000000001FE620  .abort
 *   0x0000000000203230  .strlen
 *   0x000000000057FC60  sub_57FC60
 *   0x000000000057FC88  sub_57FC88
 *   0x000000000057FCC8  sub_57FCC8
 *   0x0000000000580138  sub_580138
 *   0x00000000005801B0  sub_5801B0
 *   0x0000000000583248  sub_583248
 *
 * Referenced strings: 78
 *   insn=0x00000000005806D4 string=0x00000000005806D8 "Z"
 *   insn=0x00000000005806D8 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000005806E4 string=0x00000000005806E8 "a"
 *   insn=0x00000000005806FC string=0x0000000000580700 " "
 *   insn=0x0000000000580718 string=0x0000000000580720 """
 *   insn=0x0000000000580720 string=0x0000000000580724 "_"
 *   insn=0x0000000000580724 string=0x0000000000580728 "!"
 *   insn=0x0000000000580728 string=0x000000000058072C "!"
 *   insn=0x000000000058072C string=0x0000000000580730 " "
 *   insn=0x0000000000580730 string=0x0000000000580738 "?"
 *   insn=0x0000000000580738 string=0x000000000058073C "!"
 *   insn=0x000000000058073C string=0x0000000000580740 "a"
 *   insn=0x0000000000580748 string=0x000000000058074C "`"
 *   insn=0x0000000000580750 string=0x0000000000580754 "aB"
 *   insn=0x0000000000580758 string=0x000000000058075C "`"
 *   insn=0x0000000000580768 string=0x000000000058076C "A"
 *   insn=0x000000000058076C string=0x0000000000580770 "@"
 *   insn=0x0000000000580784 string=0x0000000000580788 "!"
 *   insn=0x0000000000580788 string=0x000000000058078C "e"
 *   insn=0x000000000058078C string=0x0000000000580790 "&"
 *   insn=0x0000000000580790 string=0x0000000000580794 "!"
 *   insn=0x000000000058079C string=0x00000000005807A0 "$"
 *   insn=0x00000000005807A0 string=0x00000000005807A8 "_"
 *   insn=0x00000000005807AC string=0x00000000005807B0 "b"
 *   insn=0x00000000005807B0 string=0x00000000005807B4 "$"
 *   insn=0x00000000005807B4 string=0x00000000005807B8 "F"
 *   insn=0x00000000005807BC string=0x00000000005807C0 "D"
 *   insn=0x00000000005807C0 string=0x00000000005807C4 "_"
 *   insn=0x00000000005807C4 string=0x00000000005807C8 "a"
 *   insn=0x00000000005807D8 string=0x00000000005807DC " "
 *   insn=0x00000000005807E0 string=0x00000000005807E4 "`"
 *   insn=0x00000000005807E4 string=0x00000000005807E8 "t"
 *   insn=0x00000000005807E8 string=0x00000000005807EC "`"
 *   insn=0x00000000005807F0 string=0x00000000005807F4 "`\n"
 *   insn=0x00000000005807F4 string=0x00000000005807F8 "`"
 *   insn=0x0000000000580800 string=0x0000000000580804 "c"
 *   insn=0x0000000000580804 string=0x0000000000580808 "`6"
 *   insn=0x000000000058081C string=0x0000000000580820 "`&"
 *   insn=0x0000000000580838 string=0x000000000058083C "?"
 *   insn=0x0000000000580844 string=0x0000000000580848 "?"
 *   insn=0x0000000000580854 string=0x0000000000580858 "a>"
 *   insn=0x000000000058085C string=0x0000000000580860 "?"
 *   insn=0x0000000000580868 string=0x000000000058086C "? "
 *   insn=0x0000000000580870 string=0x0000000000580AAC "`"
 *   insn=0x000000000058088C string=0x0000000000580890 "a2"
 *   insn=0x00000000005808A0 string=0x00000000005808A4 "b."
 *   insn=0x00000000005808A8 string=0x00000000005808AC "_"
 *   insn=0x00000000005808B4 string=0x00000000005808B8 "!"
 *   insn=0x00000000005808BC string=0x00000000005808CC "a6"
 *   insn=0x00000000005808D0 string=0x00000000005808D4 "a"
 *   insn=0x00000000005808DC string=0x00000000005808E0 "?"
 *   insn=0x00000000005808F4 string=0x00000000005808F8 "!"
 *   insn=0x00000000005808F8 string=0x00000000005808FC "a"
 *   insn=0x0000000000580904 string=0x0000000000580908 ";"
 *   insn=0x0000000000580910 string=0x0000000000580914 "A"
 *   insn=0x0000000000580914 string=0x0000000000580918 "?0"
 *   insn=0x000000000058091C string=0x000000000058092C "?H"
 *   insn=0x0000000000580920 string=0x0000000000580924 "a"
 *   insn=0x0000000000580930 string=0x0000000000580944 "?@"
 *   insn=0x0000000000580934 string=0x0000000000580938 "a"
 *   insn=0x0000000000580948 string=0x0000000000580988 "?L"
 *   insn=0x0000000000580950 string=0x0000000000580954 "Z"
 *   insn=0x000000000058097C string=0x0000000000580980 "a*"
 *   insn=0x000000000058098C string=0x0000000000580990 "{"
 *   insn=0x00000000005809B8 string=0x00000000005809BC "!"
 *   insn=0x00000000005809C4 string=0x00000000005809C8 "`"
 *   insn=0x00000000005809D8 string=0x00000000005809DC "h"
 *   insn=0x00000000005809E0 string=0x00000000005809E8 " H`8a"
 *   insn=0x00000000005809E0 string=0x00000000005A1100 ""
 *   insn=0x00000000005809E8 string=0x00000000005809EC "a"
 *   insn=0x00000000005809EC string=0x00000000005809F0 " "
 *   insn=0x00000000005809EC string=0x00000000005809F8 "B"
 *   insn=0x00000000005809F8 string=0x00000000005809FC ""
 *   insn=0x00000000005809FC string=0x0000000000580A18 "`"
 *   insn=0x0000000000580A18 string=0x0000000000580A1C "Bx"
 *   insn=0x0000000000580A1C string=0x0000000000580A20 "B "
 *   insn=0x0000000000580A2C string=0x0000000000580A48 "w"
 *   insn=0x0000000000580A90 string=0x0000000000580A94 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5806A8(_QWORD *a1, char *a2)
{
  __int64 v4; // x1
  __int64 result; // x0
  __int64 v6; // x0
  unsigned int *v7; // x21
  _DWORD *v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  char *v11; // x2
  _DWORD *i; // x0
  char *v13; // x2
  unsigned int *v14; // x22
  _BYTE *v15; // x23
  char *v16; // x0
  __int64 v17; // t1
  char *v18; // x0
  char *v19; // x0
  char *v20; // x1
  char *v21; // x0
  __int64 v22; // x1
  char *v23; // x24
  __int64 v24; // x24
  _BYTE *j; // x23
  int v26; // w1
  char v27; // w26
  char *v28; // x0
  int v29; // w0
  int v30; // w2
  char *v31; // x22
  char *v32; // x2
  int v33; // w23
  char *v34; // x0
  char *v35; // x0
  char *v36; // [xsp+68h] [xbp+68h]
  char *v37; // [xsp+68h] [xbp+68h]
  __int64 v38; // [xsp+78h] [xbp+78h] BYREF
  __int64 v39; // [xsp+80h] [xbp+80h] BYREF
  unsigned __int64 v40; // [xsp+88h] [xbp+88h] BYREF

  memset(a2, 0, 0x680u);
  v4 = a1[99];
  a1[106] = 0;
  a1[100] = 0;
  if ( !v4 )
    return 5;
  v6 = sub_583248(v4 + (a1[104] >> 63) - 1LL, a1 + 101);
  v7 = (unsigned int *)v6;
  if ( !v6 )
  {
    v8 = (_DWORD *)a1[99];
    if ( *v8 == -763358872 && v8[1] == -738197503 )
    {
      v9 = a1[98];
      *((_QWORD *)a2 + 198) = 31;
      *((_DWORD *)a2 + 400) = 1;
      *((_QWORD *)a2 + 197) = 304;
      v10 = 8;
      v11 = a2;
      do
      {
        *((_DWORD *)v11 + 2) = 1;
        *(_QWORD *)v11 = v10;
        v11 += 16;
        v10 += 8;
      }
      while ( v10 != 256 );
      for ( i = (_DWORD *)(v9 + 592); *i; i = (_DWORD *)((char *)i + (unsigned int)i[1]) )
      {
        if ( *i == 1179680769 )
        {
          v13 = a2 + 1024;
          do
          {
            *((_DWORD *)v13 + 2) = 1;
            *(_QWORD *)v13 = &v13[-1312 - v9 - (_QWORD)a2 + (_QWORD)i];
            v13 += 16;
          }
          while ( v13 != a2 + 1536 );
        }
      }
      a2[1651] = 1;
      *((_QWORD *)a2 + 62) = 256;
      *((_DWORD *)a2 + 126) = 1;
      *((_DWORD *)a2 + 386) = 4;
      *((_QWORD *)a2 + 192) = *(_QWORD *)(v9 + 568) - (v9 + 304);
      *((_QWORD *)a2 + 205) = 96;
      return 0;
    }
    return 5;
  }
  v14 = (unsigned int *)(v6 + 4 - *(int *)(v6 + 4));
  *((_QWORD *)a2 + 201) = a1[103];
  v15 = (char *)v14 + 9;
  v16 = (char *)v14 + strlen((const char *)v14 + 9) + 10;
  if ( *((_BYTE *)v14 + 9) == 101 && *((_BYTE *)v14 + 10) == 104 )
  {
    v17 = *(_QWORD *)v16;
    v16 += 8;
    v15 = (char *)v14 + 11;
    *((_QWORD *)a2 + 207) = v17;
  }
  if ( *((unsigned __int8 *)v14 + 8) > 3u )
  {
    if ( *v16 != 8 || v16[1] )
      return 3;
    v16 += 2;
  }
  v18 = sub_57FC60(v16, &v38);
  *((_QWORD *)a2 + 204) = v38;
  v19 = sub_57FC88(v18, &v39);
  v20 = v19;
  *((_QWORD *)a2 + 203) = v39;
  if ( *((_BYTE *)v14 + 8) == 1 )
  {
    v21 = v19 + 1;
    v22 = (unsigned __int8)*v20;
  }
  else
  {
    v21 = sub_57FC60(v19, &v38);
    v22 = v38;
  }
  *((_QWORD *)a2 + 205) = v22;
  a2[1649] = -1;
  v23 = 0;
  if ( *v15 == 122 )
  {
    ++v15;
    v21 = sub_57FC60(v21, &v38);
    v24 = v38;
    a2[1650] = 1;
    v23 = &v21[v24];
  }
  for ( j = v15 + 1; ; ++j )
  {
    v26 = (unsigned __int8)*(j - 1);
    if ( !*(j - 1) )
      break;
    switch ( v26 )
    {
      case 'L':
        a2[1649] = *v21;
LABEL_33:
        ++v21;
        continue;
      case 'R':
        a2[1648] = *v21;
        goto LABEL_33;
      case 'P':
        v27 = *v21;
        v36 = v21 + 1;
        v28 = (char *)sub_580138(*v21, (__int64)a1);
        v21 = sub_57FCC8(v27, v28, v36, &v40);
        *((_QWORD *)a2 + 202) = v40;
        break;
      case 'S':
        a2[1651] = 1;
        break;
      default:
        v21 = v23;
        goto LABEL_43;
    }
  }
  if ( v23 )
    v21 = v23;
LABEL_43:
  if ( !v21 )
    return 3;
  sub_5801B0(v21, (unsigned __int64)v14 + *v14 + 4, a1, a2);
  v29 = (unsigned __int8)a2[1648];
  if ( v29 == 255 )
  {
    v30 = 0;
  }
  else
  {
    switch ( v29 & 7 )
    {
      case 0:
      case 4:
        v30 = 8;
        break;
      case 2:
        v30 = 2;
        break;
      case 3:
        v30 = 4;
        break;
      default:
        abort();
        return result;
    }
  }
  v31 = 0;
  v32 = (char *)v7 + (unsigned int)(2 * v30) + 8;
  if ( a2[1650] )
  {
    v32 = sub_57FC60(v32, &v40);
    v31 = &v32[v40];
  }
  v33 = (unsigned __int8)a2[1649];
  if ( v33 != 255 )
  {
    v37 = v32;
    v34 = (char *)sub_580138(v33, (__int64)a1);
    v32 = sub_57FCC8(v33, v34, v37, &v40);
    a1[100] = v40;
  }
  if ( v31 )
    v35 = v31;
  else
    v35 = v32;
  sub_5801B0(v35, (unsigned __int64)v7 + *v7 + 4, a1, a2);
  return 0;
}

