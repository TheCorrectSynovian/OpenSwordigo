/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000576FE0
 * Mangled: sub_576FE0
 * Demangled: sub_576FE0
 *
 * Callers: 4
 *   0x0000000000576A34  sub_576A34
 *   0x0000000000576FE0  sub_576FE0
 *   0x00000000005776A4  sub_5776A4
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Callees: 7
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000571FA0  sub_571FA0
 *   0x00000000005725B4  sub_5725B4
 *   0x0000000000572DD8  sub_572DD8
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005761AC  sub_5761AC
 *   0x0000000000576A34  sub_576A34
 *
 * Referenced strings: 127
 *   insn=0x0000000000576FF8 string=0x0000000000576FFC "C"
 *   insn=0x0000000000577000 string=0x0000000000577004 "@"
 *   insn=0x0000000000577020 string=0x0000000000577024 "a"
 *   insn=0x0000000000577028 string=0x000000000057702C " "
 *   insn=0x000000000057702C string=0x0000000000577090 "`"
 *   insn=0x0000000000577030 string=0x0000000000577034 "A"
 *   insn=0x0000000000577034 string=0x0000000000577038 "?"
 *   insn=0x000000000057703C string=0x0000000000577040 "?"
 *   insn=0x0000000000577044 string=0x0000000000577048 "`"
 *   insn=0x0000000000577048 string=0x000000000057704C "@"
 *   insn=0x000000000057704C string=0x0000000000577050 "3"
 *   insn=0x0000000000577054 string=0x0000000000577058 "`"
 *   insn=0x000000000057705C string=0x0000000000577060 " "
 *   insn=0x0000000000577060 string=0x0000000000577124 "c"
 *   insn=0x0000000000577064 string=0x000000000057707C "?("
 *   insn=0x000000000057706C string=0x0000000000577070 "h"
 *   insn=0x0000000000577070 string=0x0000000000577074 "c"
 *   insn=0x000000000057707C string=0x0000000000577080 "`*"
 *   insn=0x0000000000577080 string=0x00000000005775CC "B"
 *   insn=0x0000000000577084 string=0x0000000000577088 "9"
 *   insn=0x0000000000577094 string=0x0000000000577098 "?"
 *   insn=0x000000000057709C string=0x000000000057708C "s"
 *   insn=0x00000000005770A4 string=0x00000000005770A8 "a\n@"
 *   insn=0x00000000005770A8 string=0x00000000005770AC " "
 *   insn=0x00000000005770B8 string=0x00000000005770BC "!"
 *   insn=0x00000000005770B8 string=0x00000000005770D0 "a\n"
 *   insn=0x00000000005770BC string=0x00000000005770C0 " "
 *   insn=0x00000000005770EC string=0x00000000005770F0 " P"
 *   insn=0x00000000005770F4 string=0x00000000005770F8 "@"
 *   insn=0x0000000000577100 string=0x00000000005771F4 "@"
 *   insn=0x0000000000577104 string=0x0000000000577108 "`"
 *   insn=0x0000000000577108 string=0x00000000005771B4 "@"
 *   insn=0x0000000000577124 string=0x0000000000577128 "c"
 *   insn=0x0000000000577128 string=0x000000000057712C "`"
 *   insn=0x0000000000577128 string=0x0000000000577154 "?("
 *   insn=0x0000000000577130 string=0x0000000000577134 "(%"
 *   insn=0x0000000000577144 string=0x0000000000577148 "h"
 *   insn=0x0000000000577148 string=0x000000000057714C "c@"
 *   insn=0x000000000057715C string=0x0000000000577160 "i"
 *   insn=0x0000000000577178 string=0x000000000057717C " ("
 *   insn=0x0000000000577184 string=0x0000000000577188 "!"
 *   insn=0x0000000000577188 string=0x000000000057718C "]"
 *   insn=0x000000000057718C string=0x0000000000571F00 "$"
 *   insn=0x0000000000577194 string=0x0000000000577198 "a"
 *   insn=0x00000000005771AC string=0x00000000005771B0 "T"
 *   insn=0x00000000005771B8 string=0x00000000005771BC "@"
 *   insn=0x00000000005771BC string=0x00000000005771C0 "`"
 *   insn=0x00000000005771C0 string=0x00000000005771C4 "@"
 *   insn=0x00000000005771C8 string=0x00000000005771CC "@"
 *   insn=0x00000000005771D8 string=0x00000000005771DC "A"
 *   insn=0x00000000005771DC string=0x00000000005771E4 " H`8a"
 *   insn=0x00000000005771DC string=0x00000000005A0440 "e"
 *   insn=0x00000000005771E4 string=0x00000000005771E8 "a"
 *   insn=0x00000000005771E8 string=0x00000000005771EC " "
 *   insn=0x00000000005771F0 string=0x00000000005773A8 "@@9"
 *   insn=0x00000000005771F8 string=0x00000000005771FC "@"
 *   insn=0x00000000005771FC string=0x0000000000577200 "`"
 *   insn=0x0000000000577200 string=0x0000000000577204 "@"
 *   insn=0x0000000000577208 string=0x000000000057720C "@"
 *   insn=0x0000000000577218 string=0x000000000057721C "B"
 *   insn=0x000000000057721C string=0x0000000000577224 "@X`xb"
 *   insn=0x0000000000577224 string=0x0000000000577228 "b"
 *   insn=0x0000000000577228 string=0x000000000057722C "@"
 *   insn=0x0000000000577230 string=0x0000000000577414 "!<"
 *   insn=0x0000000000577230 string=0x0000000000577438 "!("
 *   insn=0x000000000057723C string=0x0000000000577240 "m"
 *   insn=0x0000000000577244 string=0x0000000000577248 """
 *   insn=0x000000000057724C string=0x0000000000577250 "5"
 *   insn=0x0000000000577254 string=0x0000000000577258 "!"
 *   insn=0x0000000000577258 string=0x000000000057725C "?|"
 *   insn=0x000000000057725C string=0x0000000000577260 "a"
 *   insn=0x0000000000577280 string=0x0000000000577298 "s"
 *   insn=0x000000000057729C string=0x00000000005772A0 "L"
 *   insn=0x00000000005772B0 string=0x00000000005772B4 ";"
 *   insn=0x00000000005772C4 string=0x00000000005772C8 " "
 *   insn=0x00000000005772D8 string=0x00000000005772DC "\t"
 *   insn=0x00000000005772E0 string=0x00000000005772E4 "@"
 *   insn=0x00000000005772E8 string=0x00000000005772EC ","
 *   insn=0x000000000057730C string=0x0000000000577310 "a"
 *   insn=0x0000000000577340 string=0x0000000000577344 "$"
 *   insn=0x0000000000577350 string=0x0000000000577354 "s"
 *   insn=0x0000000000577358 string=0x000000000057735C "$"
 *   insn=0x0000000000577360 string=0x0000000000577364 "dh!"
 *   insn=0x000000000057736C string=0x0000000000577370 "`"
 *   insn=0x00000000005773AC string=0x00000000005773B0 " "
 *   insn=0x00000000005773B0 string=0x00000000005773B4 "@"
 *   insn=0x00000000005773B8 string=0x00000000005773BC "@@9"
 *   insn=0x00000000005773D0 string=0x00000000005773D4 "!\t"
 *   insn=0x00000000005773DC string=0x00000000005773E0 "p"
 *   insn=0x00000000005773E8 string=0x00000000005773EC "{"
 *   insn=0x000000000057740C string=0x0000000000577410 "d"
 *   insn=0x0000000000577424 string=0x0000000000577428 "!"
 *   insn=0x0000000000577430 string=0x0000000000577434 "["
 *   insn=0x0000000000577448 string=0x000000000057744C "A"
 *   insn=0x0000000000577454 string=0x0000000000577458 "R"
 *   insn=0x0000000000577470 string=0x0000000000577474 "K"
 *   insn=0x0000000000577480 string=0x0000000000577484 "A"
 *   insn=0x000000000057748C string=0x0000000000577490 "D"
 *   insn=0x00000000005774A8 string=0x00000000005774AC "="
 *   insn=0x00000000005774B0 string=0x00000000005774B4 "`"
 *   insn=0x00000000005774C4 string=0x00000000005774C8 "6"
 *   insn=0x00000000005774E0 string=0x00000000005774E4 "/"
 *   insn=0x00000000005774F4 string=0x00000000005774F8 "/"
 *   insn=0x0000000000577504 string=0x0000000000577508 "?|"
 *   insn=0x0000000000577518 string=0x000000000057751C "z"
 *   insn=0x0000000000577528 string=0x000000000057752C "a"
 *   insn=0x0000000000577544 string=0x0000000000577548 "$"
 *   insn=0x0000000000577554 string=0x0000000000577558 " "
 *   insn=0x000000000057756C string=0x0000000000577570 "!"
 *   insn=0x0000000000577578 string=0x000000000057757C "\t"
 *   insn=0x0000000000577580 string=0x0000000000577584 ","
 *   insn=0x00000000005775A0 string=0x00000000005775A4 ""
 *   insn=0x00000000005775A4 string=0x00000000005775A8 " "
 *   insn=0x00000000005775E8 string=0x00000000005775EC "`"
 *   insn=0x0000000000577608 string=0x000000000057760C "*"
 *   insn=0x000000000057760C string=0x0000000000577610 "a|@"
 *   insn=0x0000000000577614 string=0x0000000000577618 "$"
 *   insn=0x0000000000577618 string=0x000000000057761C "c"
 *   insn=0x0000000000577624 string=0x0000000000577628 "C"
 *   insn=0x0000000000577628 string=0x000000000057762C " "
 *   insn=0x000000000057762C string=0x0000000000577630 "Xh!"
 *   insn=0x0000000000577634 string=0x0000000000577638 "`"
 *   insn=0x0000000000577644 string=0x0000000000577648 "!"
 *   insn=0x000000000057764C string=0x0000000000577650 "&"
 *   insn=0x0000000000577654 string=0x0000000000577658 "b"
 *   insn=0x0000000000577688 string=0x000000000057768C "<"
 *   insn=0x0000000000577694 string=0x0000000000577698 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_576FE0(__int64 a1, int a2)
{
  unsigned __int8 *v2; // x2
  int v4; // w3
  __int64 v5; // x19
  unsigned __int8 *v6; // x2
  int v7; // w1
  __int64 v8; // x3
  unsigned int v9; // w0
  __int64 v10; // x2
  __int64 i; // x1
  __int64 result; // x0
  int v13; // w1
  int v14; // w0
  __int64 v15; // x3
  unsigned int v16; // w0
  __int64 v17; // x3
  __int64 v18; // x3
  __int64 v19; // x0
  int v20; // w1
  __int64 v21; // x2
  __int64 v22; // x0
  _BYTE *v23; // x1
  _BYTE *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  __int64 v27; // x19
  __int64 v28; // x3
  __int64 v29; // x2
  int v30; // w0
  __int64 v31; // x3
  __int64 v32; // x19
  __int64 v33; // x2
  __int64 v34; // x2
  __int64 v35; // x2
  __int64 v36; // x2
  __int64 v37; // x2
  __int64 v38; // x2
  __int64 v39; // x2
  __int64 v40; // x2
  __int64 v41; // x2
  __int64 v42; // x2
  __int64 v43; // x19
  _BYTE *v44; // x0
  __int64 v45; // x2
  __int64 v46; // x2
  __int64 v47; // x2
  __int64 v48; // x2
  int v49; // w0
  int v50; // w3
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v55; // [xsp+48h] [xbp+48h]
  __int64 v56; // [xsp+48h] [xbp+48h]

  v2 = *(unsigned __int8 **)(a1 + 24);
  v4 = *v2;
  if ( v4 == 84 || v4 == 71 )
  {
    v13 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v13 + 20;
    v14 = *v2;
    if ( v14 == 84 )
    {
      *(_QWORD *)(a1 + 24) = v2 + 1;
      if ( v2[1] )
      {
        *(_QWORD *)(a1 + 24) = v2 + 2;
        switch ( v2[1] )
        {
          case 'C':
            v43 = sub_574B04(a1);
            if ( sub_5725B4((unsigned __int8 **)(a1 + 24)) < 0 )
              return 0;
            v44 = *(_BYTE **)(a1 + 24);
            if ( *v44 != 95 )
              return 0;
            *(_QWORD *)(a1 + 24) = v44 + 1;
            v45 = sub_574B04(a1);
            *(_DWORD *)(a1 + 80) += 5;
            result = sub_571F00(a1, 11, v45, v43);
            break;
          case 'F':
            v42 = sub_574B04(a1);
            result = sub_571F00(a1, 14, v42, 0);
            break;
          case 'H':
            v41 = sub_576A34(a1);
            result = sub_571F00(a1, 20, v41, 0);
            break;
          case 'I':
            v40 = sub_574B04(a1);
            result = sub_571F00(a1, 12, v40, 0);
            break;
          case 'J':
            v39 = sub_574B04(a1);
            result = sub_571F00(a1, 18, v39, 0);
            break;
          case 'S':
            v38 = sub_574B04(a1);
            result = sub_571F00(a1, 13, v38, 0);
            break;
          case 'T':
            *(_DWORD *)(a1 + 80) = v13 + 10;
            v37 = sub_574B04(a1);
            result = sub_571F00(a1, 10, v37, 0);
            break;
          case 'V':
            *(_DWORD *)(a1 + 80) = v13 + 15;
            v36 = sub_574B04(a1);
            result = sub_571F00(a1, 9, v36, 0);
            break;
          case 'W':
            v47 = sub_576A34(a1);
            result = sub_571F00(a1, 21, v47, 0);
            break;
          case 'c':
            if ( !(unsigned int)sub_572DD8(a1, 0) || !(unsigned int)sub_572DD8(a1, 0) )
              return 0;
            v46 = sub_576FE0(a1, 0);
            result = sub_571F00(a1, 17, v46, 0);
            break;
          case 'h':
            if ( !(unsigned int)sub_572DD8(a1, 104) )
              return 0;
            v48 = sub_576FE0(a1, 0);
            result = sub_571F00(a1, 15, v48, 0);
            break;
          case 'v':
            if ( !(unsigned int)sub_572DD8(a1, 118) )
              return 0;
            v35 = sub_576FE0(a1, 0);
            result = sub_571F00(a1, 16, v35, 0);
            break;
          default:
            return 0;
        }
        return result;
      }
    }
    else if ( v14 == 71 )
    {
      *(_QWORD *)(a1 + 24) = v2 + 1;
      if ( v2[1] )
      {
        *(_QWORD *)(a1 + 24) = v2 + 2;
        switch ( v2[1] )
        {
          case 'A':
            v33 = sub_576FE0(a1, 0);
            return sub_571F00(a1, 23, v33, 0);
          case 'R':
            v21 = sub_576A34(a1);
            v30 = *(_DWORD *)(a1 + 40);
            if ( v30 < *(_DWORD *)(a1 + 44)
              && (v31 = *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40) = v30 + 1, (v32 = v31 + 24LL * v30) != 0) )
            {
              *(_DWORD *)(v31 + 24LL * v30) = 65;
              v56 = v21;
              *(_QWORD *)(v32 + 8) = sub_5725B4((unsigned __int8 **)(a1 + 24));
              v21 = v56;
              v18 = v32;
            }
            else
            {
              v18 = 0;
            }
            v19 = a1;
            v20 = 22;
            return sub_571F00(v19, v20, v21, v18);
          case 'T':
            if ( v2[2] && (*(_QWORD *)(a1 + 24) = v2 + 3, v2[2] == 110) )
            {
              v34 = sub_576FE0(a1, 0);
              return sub_571F00(a1, 73, v34, 0);
            }
            else
            {
              v53 = sub_576FE0(a1, 0);
              return sub_571F00(a1, 72, v53, 0);
            }
          case 'V':
            v29 = sub_576A34(a1);
            return sub_571F00(a1, 19, v29, 0);
          case 'r':
            v22 = sub_5725B4((unsigned __int8 **)(a1 + 24));
            if ( v22 <= 1 )
              return 0;
            v23 = *(_BYTE **)(a1 + 24);
            if ( !*v23 )
              return 0;
            v24 = v23 + 1;
            *(_QWORD *)(a1 + 24) = v23 + 1;
            if ( *v23 != 95 )
              return 0;
            v25 = v22 - 1;
            v26 = 0;
            break;
          default:
            return 0;
        }
        while ( *v24 )
        {
          v27 = 0;
          if ( *v24 == 36 )
          {
            v49 = (unsigned __int8)v24[1];
            switch ( v49 )
            {
              case 'S':
                v49 = 47;
                break;
              case '_':
                v49 = 46;
                break;
              case '$':
                break;
              default:
                return 0;
            }
            v50 = *(_DWORD *)(a1 + 40);
            if ( v50 >= *(_DWORD *)(a1 + 44)
              || (v51 = *(_QWORD *)(a1 + 32), v52 = 24LL * v50, *(_DWORD *)(a1 + 40) = v50 + 1, (v28 = v51 + v52) == 0) )
            {
              result = 0;
              *(_QWORD *)(a1 + 24) += 2LL;
              return result;
            }
            *(_DWORD *)(v51 + v52) = 64;
            v25 -= 2;
            *(_DWORD *)(v28 + 8) = v49;
            v24 = (_BYTE *)(*(_QWORD *)(a1 + 24) + 2LL);
            *(_QWORD *)(a1 + 24) = v24;
          }
          else
          {
            do
              ++v27;
            while ( v25 > v27 && v24[v27] && v24[v27] != 36 );
            v25 -= v27;
            v28 = sub_571FA0(a1, (__int64)v24, v27);
            v24 = (_BYTE *)(*(_QWORD *)(a1 + 24) + v27);
            *(_QWORD *)(a1 + 24) = v24;
            if ( !v28 )
              return 0;
          }
          if ( v26 )
          {
            v26 = sub_571F00(a1, 63, v26, v28);
            if ( !v26 )
              return 0;
          }
          else
          {
            v26 = v28;
          }
          if ( v25 <= 0 )
            return sub_571F00(a1, 62, v26, 0);
        }
      }
    }
    return 0;
  }
  v5 = sub_576A34(a1);
  if ( v5 && a2 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
  {
    while ( (unsigned int)(*(_DWORD *)v5 - 28) <= 4 )
      v5 = *(_QWORD *)(v5 + 8);
    if ( *(_DWORD *)v5 == 2 )
    {
      for ( i = *(_QWORD *)(v5 + 16); (unsigned int)(*(_DWORD *)i - 28) <= 4; i = *(_QWORD *)(i + 8) )
        ;
      *(_QWORD *)(v5 + 16) = i;
    }
    return v5;
  }
  v6 = *(unsigned __int8 **)(a1 + 24);
  v7 = *v6;
  if ( v7 == 69 || v7 == 0 || !v5 )
    return v5;
  v8 = v5;
  while ( 1 )
  {
    v9 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == 4 )
      break;
    if ( v9 >= 4 && v9 - 28 <= 4 )
    {
      v8 = *(_QWORD *)(v8 + 8);
      if ( v8 )
        continue;
    }
    goto LABEL_13;
  }
  v15 = *(_QWORD *)(v8 + 8);
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 > 8u )
        break;
      if ( v16 >= 7 )
        goto LABEL_13;
      if ( v16 - 1 <= 1 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        if ( v15 )
          continue;
      }
      goto LABEL_30;
    }
    if ( v16 == 52 )
    {
LABEL_13:
      if ( v7 != 74 )
      {
        v10 = 0;
        goto LABEL_32;
      }
      goto LABEL_83;
    }
  }
LABEL_30:
  if ( v7 != 74 )
    goto LABEL_31;
LABEL_83:
  *(_QWORD *)(a1 + 24) = v6 + 1;
LABEL_31:
  v10 = sub_574B04(a1);
  if ( !v10 )
    goto LABEL_96;
LABEL_32:
  v55 = v10;
  v17 = sub_5761AC(a1);
  if ( v17 )
  {
    v18 = sub_571F00(a1, 41, v55, v17);
    goto LABEL_34;
  }
LABEL_96:
  v18 = 0;
LABEL_34:
  v19 = a1;
  v20 = 3;
  v21 = v5;
  return sub_571F00(v19, v20, v21, v18);
}

