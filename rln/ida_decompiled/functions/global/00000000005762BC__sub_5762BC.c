/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005762BC
 * Mangled: sub_5762BC
 * Demangled: sub_5762BC
 *
 * Callers: 6
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005764B0  sub_5764B0
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 3
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000572B14  sub_572B14
 *   0x0000000000574B04  sub_574B04
 *
 * Referenced strings: 53
 *   insn=0x00000000005762CC string=0x00000000005762D0 """
 *   insn=0x00000000005762D0 string=0x00000000005762D4 "B"
 *   insn=0x00000000005762D4 string=0x00000000005762D8 ""
 *   insn=0x00000000005762D4 string=0x000000000057635C """
 *   insn=0x00000000005762EC string=0x00000000005762F0 "`"
 *   insn=0x00000000005762F4 string=0x00000000005762F8 "@"
 *   insn=0x00000000005762FC string=0x0000000000576300 "$"
 *   insn=0x0000000000576314 string=0x0000000000576318 "@"
 *   insn=0x0000000000576318 string=0x000000000057631C "?"
 *   insn=0x0000000000576324 string=0x0000000000576328 "_"
 *   insn=0x0000000000576328 string=0x000000000057632C "!"
 *   insn=0x0000000000576348 string=0x000000000057634C "?"
 *   insn=0x0000000000576348 string=0x0000000000576460 " )@"
 *   insn=0x0000000000576360 string=0x0000000000576364 """
 *   insn=0x0000000000576364 string=0x0000000000576368 "&"
 *   insn=0x0000000000576368 string=0x000000000057636C "b"
 *   insn=0x000000000057636C string=0x0000000000576370 ""
 *   insn=0x000000000057636C string=0x0000000000576378 """
 *   insn=0x0000000000576384 string=0x0000000000576388 "("
 *   insn=0x0000000000576390 string=0x0000000000576394 "a"
 *   insn=0x0000000000576398 string=0x000000000057639C "!"
 *   insn=0x00000000005763A4 string=0x00000000005763A8 "?"
 *   insn=0x00000000005763B8 string=0x00000000005763BC "`Z@"
 *   insn=0x00000000005763BC string=0x00000000005763C0 "@"
 *   insn=0x00000000005763D0 string=0x00000000005763D4 "tZ"
 *   insn=0x00000000005763D0 string=0x0000000000571F00 "$"
 *   insn=0x00000000005763E8 string=0x00000000005763EC "?$"
 *   insn=0x00000000005763F8 string=0x00000000005763FC "a.@"
 *   insn=0x00000000005763FC string=0x0000000000576400 "`*@"
 *   insn=0x0000000000576404 string=0x0000000000576408 "J"
 *   insn=0x000000000057640C string=0x0000000000576410 "c"
 *   insn=0x0000000000576410 string=0x0000000000576414 "$"
 *   insn=0x0000000000576418 string=0x000000000057641C "`*"
 *   insn=0x0000000000576420 string=0x0000000000576424 "a"
 *   insn=0x0000000000576424 string=0x0000000000576428 "B"
 *   insn=0x0000000000576428 string=0x000000000057642C "!"
 *   insn=0x000000000057642C string=0x0000000000576430 "D"
 *   insn=0x0000000000576430 string=0x0000000000576434 "dh "
 *   insn=0x0000000000576434 string=0x0000000000576438 "4"
 *   insn=0x000000000057643C string=0x0000000000576440 """
 *   insn=0x0000000000576448 string=0x000000000057644C "a"
 *   insn=0x0000000000576454 string=0x0000000000576458 "tZ"
 *   insn=0x0000000000576460 string=0x0000000000576464 "!-@"
 *   insn=0x0000000000576468 string=0x000000000057646C "*"
 *   insn=0x0000000000576470 string=0x0000000000576474 """
 *   insn=0x0000000000576474 string=0x0000000000576478 "#"
 *   insn=0x000000000057647C string=0x0000000000576480 "a"
 *   insn=0x0000000000576480 string=0x0000000000576484 " )"
 *   insn=0x0000000000576484 string=0x0000000000576488 "C"
 *   insn=0x000000000057648C string=0x0000000000576490 " "
 *   insn=0x0000000000576490 string=0x0000000000576494 " "
 *   insn=0x0000000000576494 string=0x0000000000576498 "@h!"
 *   insn=0x0000000000576498 string=0x000000000057649C "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5762BC(__int64 a1)
{
  unsigned __int8 *v2; // x1
  unsigned int v3; // w8
  unsigned int v4; // w6
  int v5; // w3
  int v6; // w2
  int v7; // w0
  char **v8; // x7
  unsigned int v9; // w1
  __int64 result; // x0
  unsigned int v11; // w1
  int v13; // w20
  __int64 v14; // x2
  unsigned int v15; // w20
  __int64 v16; // x2
  int v17; // w0
  __int64 v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  int v21; // w0
  __int64 v22; // x2
  __int64 v23; // x1

  v2 = *(unsigned __int8 **)(a1 + 24);
  if ( !*v2 )
  {
    v3 = 0;
    v4 = 0;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 24) = v2 + 1;
  v4 = *v2;
  if ( !v2[1] )
  {
    v3 = 0;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 24) = v2 + 2;
  v3 = v2[1];
  if ( v4 == 118 )
  {
    v15 = v3 - 48;
    if ( (unsigned __int8)(v3 - 48) <= 9u )
    {
      v16 = sub_572B14(a1);
      v17 = *(_DWORD *)(a1 + 40);
      if ( v17 < *(_DWORD *)(a1 + 44) )
      {
        v18 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = v17 + 1;
        v19 = 24LL * v17;
        v20 = v18 + v19;
        if ( v16 )
        {
          if ( v20 )
          {
            *(_DWORD *)(v18 + v19) = 50;
            *(_DWORD *)(v20 + 8) = v15;
            result = v18 + v19;
            *(_QWORD *)(v20 + 16) = v16;
            return result;
          }
        }
      }
      return 0;
    }
    goto LABEL_3;
  }
  if ( v3 != 118 || v4 != 99 )
  {
LABEL_3:
    v5 = 61;
    v6 = 0;
    while ( 1 )
    {
      v7 = v6 + (v5 - v6) / 2;
      v8 = &off_6B88E8[3 * v7];
      v9 = (unsigned __int8)**v8;
      if ( v4 == v9 )
      {
        v11 = (unsigned __int8)(*v8)[1];
        if ( v3 == v11 )
        {
          v21 = *(_DWORD *)(a1 + 40);
          if ( v21 < *(_DWORD *)(a1 + 44) )
          {
            v22 = *(_QWORD *)(a1 + 32);
            v23 = 24LL * v21;
            *(_DWORD *)(a1 + 40) = v21 + 1;
            result = 0;
            if ( v22 + v23 )
            {
              *(_DWORD *)(v22 + v23) = 49;
              *(_QWORD *)(v22 + v23 + 8) = v8;
              return v22 + v23;
            }
            return result;
          }
          return 0;
        }
        if ( v11 <= v3 )
        {
LABEL_12:
          v6 = v7 + 1;
          goto LABEL_7;
        }
      }
      else if ( v9 <= v4 )
      {
        goto LABEL_12;
      }
      v5 = v6 + (v5 - v6) / 2;
LABEL_7:
      if ( v6 == v5 )
        return 0;
    }
  }
  v13 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 84) == 0;
  v14 = sub_574B04(a1);
  if ( *(_DWORD *)(a1 + 88) )
    result = sub_571F00(a1, 52, v14, 0);
  else
    result = sub_571F00(a1, 51, v14, 0);
  *(_DWORD *)(a1 + 88) = v13;
  return result;
}

