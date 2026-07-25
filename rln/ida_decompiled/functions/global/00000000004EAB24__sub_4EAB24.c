/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EAB24
 * Mangled: sub_4EAB24
 * Demangled: sub_4EAB24
 *
 * Callers: 2
 *   0x00000000004EAB00  sub_4EAB00
 *   0x00000000004EB12C  sub_4EB12C
 *
 * Callees: 0
 *
 * Referenced strings: 87
 *   insn=0x00000000004EAB30 string=0x00000000004EAB34 "\t"
 *   insn=0x00000000004EAB34 string=0x00000000004EAB38 "?"
 *   insn=0x00000000004EAB38 string=0x00000000004EAB3C ""
 *   insn=0x00000000004EAB50 string=0x00000000004EAB54 "`"
 *   insn=0x00000000004EAB54 string=0x00000000004EAB58 "\n"
 *   insn=0x00000000004EAB5C string=0x00000000004EAB60 "j"
 *   insn=0x00000000004EAB60 string=0x00000000004EAB64 "_"
 *   insn=0x00000000004EAB68 string=0x00000000004EAB6C "H@"
 *   insn=0x00000000004EAB6C string=0x00000000004EAB70 "\n"
 *   insn=0x00000000004EAB74 string=0x00000000004EAB78 ""
 *   insn=0x00000000004EAB78 string=0x00000000004EAB98 " J)"
 *   insn=0x00000000004EABA8 string=0x00000000004EABAC "l"
 *   insn=0x00000000004EABB0 string=0x00000000004EABB4 "k"
 *   insn=0x00000000004EABB8 string=0x00000000004EABBC "-"
 *   insn=0x00000000004EABBC string=0x00000000004EABC0 ""
 *   insn=0x00000000004EABCC string=0x00000000004EABD0 "a"
 *   insn=0x00000000004EABD0 string=0x00000000004EABD4 "?"
 *   insn=0x00000000004EABD4 string=0x00000000004EABD8 "K"
 *   insn=0x00000000004EABD8 string=0x00000000004EABDC "q"
 *   insn=0x00000000004EABDC string=0x0000000000599DD1 "`qT`Pql1"
 *   insn=0x00000000004EABE0 string=0x00000000004EABE4 "d"
 *   insn=0x00000000004EABE4 string=0x00000000004EABE8 ""
 *   insn=0x00000000004EABF4 string=0x00000000004EABF8 "1F7"
 *   insn=0x00000000004EAC30 string=0x00000000004EAC34 "b"
 *   insn=0x00000000004EAC34 string=0x00000000004EAC38 "7Ju8"
 *   insn=0x00000000004EAC68 string=0x00000000004EAC6C ""
 *   insn=0x00000000004EAC7C string=0x00000000004EAC80 "U:V"
 *   insn=0x00000000004EAC90 string=0x00000000004EAC94 "d"
 *   insn=0x00000000004EAC98 string=0x00000000004EAC9C "*"
 *   insn=0x00000000004EACB4 string=0x00000000004EACB8 "Z"
 *   insn=0x00000000004EACB8 string=0x00000000004EACBC "_"
 *   insn=0x00000000004EACC0 string=0x00000000004EACC4 "9"
 *   insn=0x00000000004EACC4 string=0x00000000004EACC8 "?"
 *   insn=0x00000000004EACC8 string=0x00000000004EACCC ""
 *   insn=0x00000000004EACCC string=0x00000000004EACD0 "+"
 *   insn=0x00000000004EACD8 string=0x00000000004EACDC "Y"
 *   insn=0x00000000004EACF4 string=0x00000000004EACF8 "L@"
 *   insn=0x00000000004EAD00 string=0x00000000004EAD04 ""
 *   insn=0x00000000004EAD20 string=0x00000000004EAFDC "L@"
 *   insn=0x00000000004EAD40 string=0x00000000004EAD44 "("
 *   insn=0x00000000004EAD40 string=0x00000000004EAD58 "?"
 *   insn=0x00000000004EAD54 string=0x00000000004EAD70 "L@"
 *   insn=0x00000000004EAD5C string=0x00000000004EAD60 "#"
 *   insn=0x00000000004EAD90 string=0x00000000004EAD94 "_Wj"
 *   insn=0x00000000004EAD9C string=0x00000000004EADA0 "9"
 *   insn=0x00000000004EADDC string=0x00000000004EADEC "@"
 *   insn=0x00000000004EADDC string=0x00000000004EAED4 "X"
 *   insn=0x00000000004EADE0 string=0x00000000004EADE4 "K"
 *   insn=0x00000000004EADE4 string=0x00000000004EADE8 "e"
 *   insn=0x00000000004EADEC string=0x00000000004EADF0 ""
 *   insn=0x00000000004EADF0 string=0x00000000004EADF4 "\t@"
 *   insn=0x00000000004EADFC string=0x00000000004EAE00 "_"
 *   insn=0x00000000004EAE0C string=0x00000000004EAE10 "l"
 *   insn=0x00000000004EAE14 string=0x00000000004EAE18 ""
 *   insn=0x00000000004EAE18 string=0x00000000004EAE1C "H"
 *   insn=0x00000000004EAE1C string=0x00000000004EAE20 ""
 *   insn=0x00000000004EAE28 string=0x00000000004EAE2C "T"
 *   insn=0x00000000004EAE34 string=0x00000000004EAE38 """
 *   insn=0x00000000004EAE3C string=0x00000000004EAE40 ""
 *   insn=0x00000000004EAE44 string=0x00000000004EAE48 "D"
 *   insn=0x00000000004EAE54 string=0x00000000004EAE58 "]"
 *   insn=0x00000000004EAE5C string=0x00000000004EAE60 "a"
 *   insn=0x00000000004EAE70 string=0x00000000004EAE74 ""
 *   insn=0x00000000004EAE74 string=0x00000000004EAE78 ""
 *   insn=0x00000000004EAE7C string=0x00000000004EAE80 "a\n"
 *   insn=0x00000000004EAE80 string=0x00000000004EAE84 ">"
 *   insn=0x00000000004EAE8C string=0x00000000004EAE90 "N"
 *   insn=0x00000000004EAE90 string=0x00000000004EAFC8 "s"
 *   insn=0x00000000004EAEA4 string=0x00000000004EAEA8 "I"
 *   insn=0x00000000004EAEB0 string=0x00000000004EAEB4 "2"
 *   insn=0x00000000004EAEC0 string=0x00000000004EAEC4 ""
 *   insn=0x00000000004EAEC8 string=0x00000000004EAECC ""
 *   insn=0x00000000004EAECC string=0x00000000004EAED0 "+"
 *   insn=0x00000000004EAEE8 string=0x00000000004EAEEC "7"
 *   insn=0x00000000004EAEF4 string=0x00000000004EAF04 "X"
 *   insn=0x00000000004EAF34 string=0x00000000004EAF38 "*"
 *   insn=0x00000000004EAF38 string=0x00000000004EAF3C "u"
 *   insn=0x00000000004EAF3C string=0x00000000004EAF68 "_"
 *   insn=0x00000000004EAF40 string=0x00000000004EAF44 "\n"
 *   insn=0x00000000004EAF54 string=0x00000000004EAF58 "!"
 *   insn=0x00000000004EAF60 string=0x00000000004EAF64 "#"
 *   insn=0x00000000004EAF74 string=0x00000000004EAF78 "!"
 *   insn=0x00000000004EAF88 string=0x00000000004EAF8C ""
 *   insn=0x00000000004EAFB4 string=0x00000000004EAFB8 "@"
 *   insn=0x00000000004EAFD0 string=0x00000000004EAFD4 "+"
 *   insn=0x00000000004EAFE4 string=0x00000000004EAFE8 "+"
 *   insn=0x00000000004EB010 string=0x00000000004EB014 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EAB24(__int64 a1, int a2, int a3)
{
  unsigned int v3; // w9
  char v4; // w15
  unsigned int v5; // w8
  int v6; // w10
  int v8; // w8
  int v9; // w11
  _BOOL4 v10; // w13
  _BOOL4 v11; // w14
  int v12; // w12
  __int64 v13; // x13
  int v14; // w14
  int v15; // w15
  int v16; // w19
  unsigned int v17; // w22
  signed int v18; // w20
  unsigned int v19; // w23
  int v20; // w8
  int v21; // w21
  int v22; // w24
  __int64 v23; // x25
  int v24; // w8
  int v25; // w24
  unsigned int v26; // w25
  int v27; // w8
  int v30; // w8
  bool v31; // cc
  unsigned __int64 v32; // x21
  unsigned __int64 i; // x22
  int v34; // w22
  unsigned int v35; // w21
  unsigned int v36; // w21

  v3 = *(unsigned __int8 *)(a1 + 115);
  if ( v3 > 0xFA )
    return 0;
  v4 = *(_BYTE *)(a1 + 114);
  v5 = 0;
  if ( (v4 & 5) != 4 && (v4 & 1) + (unsigned int)*(unsigned __int8 *)(a1 + 113) <= v3 )
  {
    v6 = *(unsigned __int8 *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 72) > v6 )
      return 0;
    v9 = *(_DWORD *)(a1 + 80);
    v8 = *(_DWORD *)(a1 + 84);
    v10 = v8 == v9;
    v11 = v8 == 0;
    v12 = v9 - 1;
    v5 = 0;
    if ( v9 >= 1 && (v11 || v10) )
    {
      v13 = *(_QWORD *)(a1 + 24);
      v5 = *(_DWORD *)(v13 + 4LL * v12);
      if ( (v5 & 0x3F) != 0x1E )
        return 0;
      if ( a2 >= 1 )
      {
        v14 = 0;
        v15 = v4 & 6;
        v16 = v9 - 1;
        while ( 2 )
        {
          v17 = *(_DWORD *)(v13 + 4LL * v14);
          v5 = 0;
          if ( (v17 & 0x3F) <= 0x25 )
          {
            v18 = (unsigned __int8)(v17 >> 6);
            if ( v18 < v3 )
            {
              v19 = byte_599DD1[v17 & 0x3F];
              if ( (v19 & 3) == 2 )
              {
                v21 = (v17 >> 14) - 0x1FFFF;
                if ( (v19 & 0x30) != 0x20 )
                  goto LABEL_35;
                v22 = v14 + v21 + 1;
                v5 = 0;
                if ( v22 < 0 || v22 >= v9 )
                  return v5;
                if ( v22 >= 1 )
                {
                  v23 = 0;
                  v24 = v21 + v14;
                  do
                  {
                    if ( (*(_DWORD *)(v13 + 4LL * v24) & 0x7FC03F) != 0x22 )
                      break;
                    ++v23;
                    --v24;
                  }
                  while ( v23 < v22 );
                  v25 = 0;
                  v5 = 0;
                  if ( (v23 & 1) != 0 )
                    return v5;
                }
                else
                {
LABEL_35:
                  v25 = 0;
                }
                goto LABEL_48;
              }
              if ( (v19 & 3) == 1 )
              {
                v21 = v17 >> 14;
                v25 = 0;
                if ( (~(_BYTE)v19 & 0x30) == 0 )
                {
                  v5 = 0;
                  if ( v21 >= *(_DWORD *)(a1 + 76) )
                    return v5;
                }
                goto LABEL_48;
              }
              if ( (v19 & 3) != 0 )
              {
                v25 = 0;
                v21 = 0;
LABEL_48:
                if ( ((v18 == a3) & ((unsigned __int8)(v19 & 0x40) >> 6)) != 0 )
                  v16 = v14;
                if ( (char)v19 < 0 && (v14 + 2 >= v9 || (*(_DWORD *)(v13 + 4LL * v14 + 4) & 0x3F) != 0x16) )
                  return 0;
                switch ( v17 & 0x3F )
                {
                  case 2u:
                    if ( v25 == 1 && (v14 + 2 >= v9 || (*(_DWORD *)(v13 + 4LL * v14 + 4) & 0x7FC03F) == 0x22) )
                      return 0;
                    goto LABEL_118;
                  case 3u:
                    v31 = v21 >= a3 && v18 <= a3;
                    goto LABEL_115;
                  case 4u:
                  case 8u:
                    if ( v21 >= v6 )
                      return 0;
                    goto LABEL_118;
                  case 5u:
                  case 7u:
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL * v21 + 8) != 4 )
                      return 0;
                    goto LABEL_118;
                  case 0xBu:
                    if ( v18 + 1 >= v3 )
                      return 0;
                    if ( v18 + 1 == a3 )
                      v16 = v14;
                    goto LABEL_118;
                  case 0x15u:
                    if ( v21 >= v25 )
                      return 0;
                    goto LABEL_118;
                  case 0x16u:
                    goto LABEL_65;
                  case 0x1Cu:
                  case 0x1Du:
                    if ( v21 && v21 + v18 > (int)v3 )
                      return 0;
                    if ( v25 )
                    {
                      if ( v25 != 1 && v25 - 1 + v18 > (int)v3 )
                        return 0;
                    }
                    else
                    {
                      v35 = *(_DWORD *)(v13 + 4LL * v14 + 4);
                      v5 = 0;
                      if ( (v35 & 0x3F) > 0x22 || ((1LL << (v35 & 0x3F)) & 0x470000000LL) == 0 )
                        return v5;
                      if ( v35 >> 23 )
                        return 0;
                    }
                    v31 = v18 <= a3;
LABEL_115:
                    if ( v31 )
                      v16 = v14;
                    goto LABEL_118;
                  case 0x1Eu:
                    if ( v21 >= 2 && v18 + v21 - 1 > (int)v3 )
                      return 0;
                    goto LABEL_118;
                  case 0x1Fu:
                  case 0x20u:
                    if ( v18 + 3 >= v3 )
                      return 0;
LABEL_65:
                    v27 = v14 + v21 + 1;
                    if ( v14 < v27 && a3 != 255 && v27 <= a2 )
                      v30 = v21;
                    else
                      v30 = 0;
                    v14 += v30;
                    goto LABEL_118;
                  case 0x21u:
                    if ( !v25 || v25 + v18 + 2 >= v3 )
                      return 0;
                    v31 = v18 + 2 <= a3;
                    goto LABEL_115;
                  case 0x22u:
                    if ( v21 >= 1 && v21 + v18 >= (int)v3 )
                      return 0;
                    if ( !v25 && ++v14 >= v12 )
                      return 0;
                    goto LABEL_118;
                  case 0x24u:
                    if ( v21 >= *(_DWORD *)(a1 + 88) )
                      return 0;
                    v32 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v21) + 112LL);
                    if ( v14 + (int)v32 >= v9 )
                      return 0;
                    if ( !(_DWORD)v32 )
                      goto LABEL_105;
                    for ( i = 0; i < v32; ++i )
                    {
                      if ( (*(_DWORD *)(v13 + 4 + 4LL * v14 + 4 * i) & 0x3B | 4) != 4 )
                        return 0;
                    }
LABEL_105:
                    if ( a3 != 255 )
                      v14 += v32;
                    goto LABEL_118;
                  case 0x25u:
                    if ( v15 != 2 )
                      return 0;
                    v34 = v21 - 1;
                    if ( v21 )
                    {
                      if ( v34 + v18 > (int)v3 )
                        return 0;
                    }
                    else
                    {
                      v36 = *(_DWORD *)(v13 + 4LL * v14 + 4);
                      v5 = 0;
                      if ( (v36 & 0x3F) > 0x22 )
                        return v5;
                      if ( ((1LL << (v36 & 0x3F)) & 0x470000000LL) == 0 )
                        return v5;
                      v5 = 0;
                      if ( v34 + v18 > (int)v3 || v36 >> 23 )
                        return v5;
                    }
LABEL_118:
                    if ( ++v14 < a2 )
                      continue;
                    v5 = *(_DWORD *)(v13 + 4LL * v16);
                    break;
                  default:
                    goto LABEL_118;
                }
                return v5;
              }
              v20 = (v19 >> 4) & 3;
              v21 = v17 >> 23;
              if ( v20 == 3 )
              {
                if ( (v17 & 0x80000000) != 0 )
                {
                  if ( (unsigned __int8)(v17 >> 23) >= *(int *)(a1 + 76) )
                    return 0;
                  goto LABEL_38;
                }
              }
              else if ( v20 != 2 )
              {
                if ( !v20 && v21 )
                  return 0;
LABEL_38:
                v5 = (v19 >> 2) & 3;
                v26 = (v17 >> 14) & 0x1FF;
                if ( v5 == 3 )
                {
                  if ( (v17 & 0x400000) != 0 )
                  {
                    v25 = (v17 >> 14) & 0x1FF;
                    if ( (unsigned __int8)(v17 >> 14) >= *(int *)(a1 + 76) )
                      return 0;
                    goto LABEL_48;
                  }
                }
                else if ( v5 != 2 )
                {
                  if ( v5 )
                  {
                    v25 = (v17 >> 14) & 0x1FF;
                  }
                  else
                  {
                    v25 = 0;
                    if ( v26 )
                      return v5;
                  }
                  goto LABEL_48;
                }
                v25 = (v17 >> 14) & 0x1FF;
                if ( v26 >= v3 )
                  return 0;
                goto LABEL_48;
              }
              if ( v21 >= v3 )
                return 0;
              goto LABEL_38;
            }
          }
          break;
        }
      }
    }
  }
  return v5;
}

