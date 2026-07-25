/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057781C
 * Mangled: sub_57781C
 * Demangled: sub_57781C
 *
 * Callers: 5
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 10
 *   0x00000000001FA120  .strcmp
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000572BBC  sub_572BBC
 *   0x0000000000572CEC  sub_572CEC
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005762BC  sub_5762BC
 *   0x00000000005764B0  sub_5764B0
 *   0x00000000005776A4  sub_5776A4
 *
 * Referenced strings: 137
 *   insn=0x0000000000577830 string=0x0000000000577834 "a"
 *   insn=0x0000000000577834 string=0x0000000000577838 "?0"
 *   insn=0x000000000057783C string=0x0000000000577840 "?P"
 *   insn=0x0000000000577844 string=0x0000000000577848 "?"
 *   insn=0x0000000000577848 string=0x000000000057784C "@\n"
 *   insn=0x000000000057784C string=0x0000000000577850 "?"
 *   insn=0x000000000057784C string=0x0000000000577994 "a"
 *   insn=0x0000000000577850 string=0x0000000000577854 "@"
 *   insn=0x0000000000577854 string=0x0000000000577858 " "
 *   insn=0x0000000000577854 string=0x000000000057791C "a"
 *   insn=0x0000000000577864 string=0x0000000000577898 "?"
 *   insn=0x0000000000577874 string=0x0000000000577878 "a"
 *   insn=0x0000000000577878 string=0x000000000057787C "!"
 *   insn=0x000000000057787C string=0x0000000000577880 "?$"
 *   insn=0x000000000057789C string=0x00000000005778A0 "?"
 *   insn=0x000000000057789C string=0x0000000000577A58 "`"
 *   insn=0x00000000005778A8 string=0x00000000005778AC "`"
 *   insn=0x00000000005778A8 string=0x0000000000577E78 "?"
 *   insn=0x00000000005778B0 string=0x00000000005778B4 " "
 *   insn=0x00000000005778DC string=0x00000000005778E0 "!\t"
 *   insn=0x00000000005778E0 string=0x00000000005778E4 "`"
 *   insn=0x00000000005778E8 string=0x00000000005778EC "?|"
 *   insn=0x00000000005778EC string=0x00000000005778F0 " "
 *   insn=0x0000000000577914 string=0x0000000000577918 "z"
 *   insn=0x0000000000577918 string=0x0000000000571F00 "$"
 *   insn=0x000000000057791C string=0x0000000000577920 "?"
 *   insn=0x0000000000577924 string=0x0000000000577928 "a"
 *   insn=0x000000000057792C string=0x0000000000577930 "a@9?P"
 *   insn=0x0000000000577930 string=0x0000000000577934 "?P"
 *   insn=0x0000000000577938 string=0x0000000000577B10 "c"
 *   insn=0x0000000000577948 string=0x000000000057794C "`*@"
 *   insn=0x000000000057794C string=0x0000000000577950 "a.@"
 *   insn=0x0000000000577954 string=0x0000000000577958 "j"
 *   insn=0x000000000057795C string=0x0000000000577960 "b"
 *   insn=0x0000000000577960 string=0x0000000000577964 "#"
 *   insn=0x0000000000577968 string=0x000000000057796C "a"
 *   insn=0x000000000057796C string=0x0000000000577970 "`*"
 *   insn=0x0000000000577970 string=0x0000000000577974 "C"
 *   insn=0x0000000000577978 string=0x000000000057797C "`"
 *   insn=0x0000000000577980 string=0x0000000000577984 "@h!"
 *   insn=0x0000000000577984 string=0x0000000000577988 "d"
 *   insn=0x0000000000577994 string=0x0000000000577998 "?"
 *   insn=0x000000000057799C string=0x00000000005779A0 "?"
 *   insn=0x000000000057799C string=0x0000000000577AD4 "c"
 *   insn=0x00000000005779A4 string=0x00000000005779A8 "c"
 *   insn=0x00000000005779B4 string=0x00000000005779B8 "A\t"
 *   insn=0x00000000005779C0 string=0x00000000005779C4 "!"
 *   insn=0x00000000005779C8 string=0x00000000005779CC "A"
 *   insn=0x00000000005779CC string=0x00000000005779D0 "bR@"
 *   insn=0x00000000005779CC string=0x00000000005A0BF0 "st"
 *   insn=0x00000000005779D0 string=0x00000000005779D4 "!"
 *   insn=0x00000000005779E0 string=0x00000000005779E4 "B"
 *   insn=0x00000000005779E8 string=0x00000000005779EC "bR"
 *   insn=0x00000000005779F0 string=0x00000000001FA120 "0'"
 *   insn=0x00000000005779FC string=0x0000000000577A00 "\t\t"
 *   insn=0x0000000000577A00 string=0x0000000000577B20 "A"
 *   insn=0x0000000000577A1C string=0x0000000000577A20 "c"
 *   insn=0x0000000000577A24 string=0x0000000000577A28 "c"
 *   insn=0x0000000000577A30 string=0x0000000000577A34 "_"
 *   insn=0x0000000000577A50 string=0x0000000000577A54 "+"
 *   insn=0x0000000000577A60 string=0x0000000000577A64 "c"
 *   insn=0x0000000000577A64 string=0x0000000000577A68 "c"
 *   insn=0x0000000000577A78 string=0x0000000000577A7C "\n"
 *   insn=0x0000000000577A94 string=0x0000000000577A98 "h"
 *   insn=0x0000000000577A98 string=0x0000000000577A9C "A"
 *   insn=0x0000000000577A9C string=0x0000000000577AA4 " H`8a"
 *   insn=0x0000000000577A9C string=0x00000000005A04DC "!"
 *   insn=0x0000000000577AA4 string=0x0000000000577AA8 "a"
 *   insn=0x0000000000577AA8 string=0x0000000000577AAC " "
 *   insn=0x0000000000577AD8 string=0x0000000000577ADC "\n"
 *   insn=0x0000000000577AE4 string=0x0000000000577AE8 "r"
 *   insn=0x0000000000577AEC string=0x0000000000577AF0 "`"
 *   insn=0x0000000000577B00 string=0x0000000000577B04 "!"
 *   insn=0x0000000000577B20 string=0x0000000000577B28 " H`8a"
 *   insn=0x0000000000577B28 string=0x0000000000577B2C "a"
 *   insn=0x0000000000577B2C string=0x0000000000577B30 " "
 *   insn=0x0000000000577B34 string=0x0000000000577B50 "A"
 *   insn=0x0000000000577B50 string=0x00000000005A0698 "qu"
 *   insn=0x0000000000577B54 string=0x0000000000577B58 "!`"
 *   insn=0x0000000000577B58 string=0x0000000000577B5C "q\t"
 *   insn=0x0000000000577B5C string=0x0000000000577B60 "@"
 *   insn=0x0000000000577B74 string=0x0000000000577B78 "`"
 *   insn=0x0000000000577B7C string=0x0000000000577B80 "!"
 *   insn=0x0000000000577B88 string=0x0000000000577B8C "\t"
 *   insn=0x0000000000577B9C string=0x0000000000577BA0 "`"
 *   insn=0x0000000000577BA4 string=0x0000000000577BA8 "?"
 *   insn=0x0000000000577BAC string=0x0000000000577BB0 "?"
 *   insn=0x0000000000577BB0 string=0x0000000000577BB4 "@"
 *   insn=0x0000000000577BB8 string=0x0000000000577BBC "?"
 *   insn=0x0000000000577BBC string=0x0000000000577BC0 "!"
 *   insn=0x0000000000577BDC string=0x0000000000577BE0 "a"
 *   insn=0x0000000000577BEC string=0x0000000000577BF0 "A"
 *   insn=0x0000000000577C00 string=0x0000000000577C04 "!"
 *   insn=0x0000000000577C0C string=0x0000000000577C10 "?"
 *   insn=0x0000000000577C20 string=0x0000000000577C24 "?"
 *   insn=0x0000000000577C34 string=0x0000000000577C38 "A"
 *   insn=0x0000000000577C38 string=0x00000000005A0680 "cl"
 *   insn=0x0000000000577C3C string=0x0000000000577C40 "!"
 *   insn=0x0000000000577C40 string=0x0000000000577C44 "7\t"
 *   insn=0x0000000000577C44 string=0x0000000000577C48 "`\t"
 *   insn=0x0000000000577C48 string=0x0000000000577C4C "A"
 *   insn=0x0000000000577C4C string=0x00000000005A0688 "dt"
 *   insn=0x0000000000577C50 string=0x0000000000577C54 "! "
 *   insn=0x0000000000577C54 string=0x0000000000577C58 "2\t"
 *   insn=0x0000000000577C5C string=0x0000000000577C60 "A"
 *   insn=0x0000000000577C60 string=0x00000000005A0690 "pt"
 *   insn=0x0000000000577C64 string=0x0000000000577C68 "!@"
 *   insn=0x0000000000577C68 string=0x0000000000577C6C "-\t"
 *   insn=0x0000000000577C7C string=0x0000000000577C80 "`"
 *   insn=0x0000000000577CB8 string=0x0000000000577CBC "a"
 *   insn=0x0000000000577CC8 string=0x0000000000577CCC ""
 *   insn=0x0000000000577CD4 string=0x0000000000577CD8 "`"
 *   insn=0x0000000000577CE4 string=0x0000000000577CE8 "?"
 *   insn=0x0000000000577CE8 string=0x0000000000577CEC "A"
 *   insn=0x0000000000577CEC string=0x0000000000577CF0 "`"
 *   insn=0x0000000000577CF4 string=0x0000000000577CF8 "?|"
 *   insn=0x0000000000577D14 string=0x0000000000577D18 "z"
 *   insn=0x0000000000577D24 string=0x0000000000577D28 "w"
 *   insn=0x0000000000577D34 string=0x0000000000577D38 "s"
 *   insn=0x0000000000577D3C string=0x0000000000577D40 "c"
 *   insn=0x0000000000577D40 string=0x0000000000577D44 "7"
 *   insn=0x0000000000577D8C string=0x0000000000577D90 "!"
 *   insn=0x0000000000577D90 string=0x0000000000577D94 "?"
 *   insn=0x0000000000577DA4 string=0x0000000000577DA8 "("
 *   insn=0x0000000000577DAC string=0x0000000000577DB0 "U"
 *   insn=0x0000000000577DC0 string=0x0000000000577DC4 "@"
 *   insn=0x0000000000577DDC string=0x0000000000577DE0 "H"
 *   insn=0x0000000000577DE4 string=0x0000000000577DE8 "F"
 *   insn=0x0000000000577E00 string=0x0000000000577E04 "a"
 *   insn=0x0000000000577E04 string=0x0000000000577E08 "v"
 *   insn=0x0000000000577E10 string=0x0000000000577E14 ","
 *   insn=0x0000000000577E2C string=0x0000000000577E30 "4"
 *   insn=0x0000000000577E3C string=0x0000000000577E40 "?"
 *   insn=0x0000000000577E4C string=0x0000000000577E50 "a"
 *   insn=0x0000000000577E58 string=0x0000000000577E5C "U"
 *   insn=0x0000000000577E64 string=0x0000000000577E68 "^"
 *   insn=0x0000000000577E6C string=0x0000000000577E70 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57781C(__int64 a1)
{
  unsigned __int8 *v1; // x3
  int v3; // w1
  __int64 result; // x0
  int *v5; // x0
  __int64 v6; // x20
  int v7; // w0
  _BYTE *v8; // x0
  __int64 v9; // x3
  __int64 v10; // x0
  int v11; // w1
  __int64 v12; // x2
  int v13; // w0
  __int64 v14; // x4
  int v15; // w0
  __int64 v16; // x2
  __int64 v17; // x1
  int v18; // w1
  const char **v19; // x22
  const char *v20; // x21
  const char *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x20
  int v24; // w0
  __int64 v25; // x21
  __int64 v26; // x2
  unsigned __int8 *v27; // x0
  int v28; // w1
  __int64 v29; // x3
  __int64 v30; // x0
  __int64 v31; // x3
  char *v32; // x0
  __int64 v33; // x22
  __int64 v34; // x3
  __int64 v35; // x3
  int v36; // w0
  _BYTE *v37; // x0
  __int64 v38; // x0
  char v39; // w0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // [xsp+38h] [xbp+38h]
  __int64 v43; // [xsp+38h] [xbp+38h]
  __int64 v44; // [xsp+38h] [xbp+38h]
  __int64 v45; // [xsp+38h] [xbp+38h]
  __int64 v46; // [xsp+38h] [xbp+38h]
  __int64 v47; // [xsp+38h] [xbp+38h]
  __int64 v48; // [xsp+38h] [xbp+38h]

  v1 = *(unsigned __int8 **)(a1 + 24);
  v3 = *v1;
  switch ( v3 )
  {
    case 'L':
      return sub_5776A4(a1);
    case 'T':
      return sub_572CEC(a1);
    case 's':
      v18 = v1[1];
      if ( v18 == 114 )
      {
        *(_QWORD *)(a1 + 24) = v1 + 2;
        v23 = sub_574B04(a1);
        v9 = sub_5764B0(a1);
        if ( **(_BYTE **)(a1 + 24) == 73 )
        {
          v46 = v9;
          v40 = sub_572EC4(a1);
          v9 = sub_571F00(a1, 4, v46, v40);
        }
        v10 = a1;
        v11 = 1;
        v12 = v23;
        return sub_571F00(v10, v11, v12, v9);
      }
      if ( v18 == 112 )
      {
        *(_QWORD *)(a1 + 24) = v1 + 2;
        v12 = sub_57781C(a1);
        v11 = 74;
        v10 = a1;
        v9 = 0;
        return sub_571F00(v10, v11, v12, v9);
      }
      goto LABEL_12;
  }
  if ( v3 != 102 )
  {
    if ( (unsigned __int8)(v3 - 48) <= 9u )
      goto LABEL_6;
    if ( v3 == 111 )
    {
      if ( v1[1] == 110 )
      {
        *(_QWORD *)(a1 + 24) = v1 + 2;
LABEL_6:
        result = sub_5764B0(a1);
        if ( result )
        {
          if ( **(_BYTE **)(a1 + 24) != 73 )
            return result;
          v43 = result;
          v9 = sub_572EC4(a1);
          v11 = 4;
          v10 = a1;
          v12 = v43;
          return sub_571F00(v10, v11, v12, v9);
        }
        return 0;
      }
    }
    else if ( (v3 == 116 || v3 == 105) && v1[1] == 108 )
    {
      v22 = 0;
      if ( v3 == 116 )
      {
        v22 = sub_574B04(a1);
        v1 = *(unsigned __int8 **)(a1 + 24);
      }
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v42 = v22;
      v9 = sub_5743B0(a1, 0x45u);
      v12 = v42;
      v10 = a1;
      v11 = 48;
      return sub_571F00(v10, v11, v12, v9);
    }
LABEL_12:
    v5 = (int *)sub_5762BC(a1);
    v6 = (__int64)v5;
    if ( v5 )
    {
      v7 = *v5;
      switch ( v7 )
      {
        case '1':
          v19 = *(const char ***)(v6 + 8);
          v20 = *v19;
          v21 = *v19;
          *(_DWORD *)(a1 + 80) += *((_DWORD *)v19 + 4) - 2;
          if ( strcmp(v21, "st") )
          {
            switch ( *((_DWORD *)v19 + 5) )
            {
              case 0:
LABEL_46:
                v10 = a1;
                v11 = 53;
                v12 = v6;
                v9 = 0;
                return sub_571F00(v10, v11, v12, v9);
              case 1:
                v36 = *(unsigned __int8 *)v20;
                if ( v36 != 109 && v36 != 112 || *((unsigned __int8 *)v20 + 1) != v36 )
                  goto LABEL_17;
                v37 = *(_BYTE **)(a1 + 24);
                if ( *v37 != 95 )
                {
                  v38 = sub_57781C(a1);
                  v9 = sub_571F00(a1, 56, v38, v38);
                  goto LABEL_18;
                }
                *(_QWORD *)(a1 + 24) = v37 + 1;
                goto LABEL_17;
              case 2:
LABEL_59:
                v32 = **(char ***)(v6 + 8);
                if ( v32[1] == 99
                  && ((v39 = *v32, (unsigned __int8)(v39 - 114) <= 1u) || (unsigned __int8)(v39 - 99) <= 1u) )
                {
                  v33 = sub_574B04(a1);
                }
                else
                {
                  v33 = sub_57781C(a1);
                }
                if ( !strcmp(v20, "cl") )
                {
                  v34 = sub_5743B0(a1, 0x45u);
                }
                else if ( !strcmp(v20, "dt") || !strcmp(v20, "pt") )
                {
                  v34 = sub_5764B0(a1);
                  if ( **(_BYTE **)(a1 + 24) == 73 )
                  {
                    v47 = v34;
                    v41 = sub_572EC4(a1);
                    v34 = sub_571F00(a1, 4, v47, v41);
                  }
                }
                else
                {
                  v34 = sub_57781C(a1);
                }
                v35 = sub_571F00(a1, 56, v33, v34);
                return sub_571F00(a1, 55, v6, v35);
              case 3:
LABEL_48:
                if ( !strcmp(v20, "qu") )
                {
                  v25 = sub_57781C(a1);
                  v45 = sub_57781C(a1);
                  v29 = sub_57781C(a1);
                  v26 = v45;
                }
                else
                {
                  if ( *v20 != 110 )
                    return 0;
                  v24 = *((unsigned __int8 *)v20 + 1);
                  if ( v24 != 97 && v24 != 119 )
                    return 0;
                  v25 = sub_5743B0(a1, 0x5Fu);
                  v26 = sub_574B04(a1);
                  v27 = *(unsigned __int8 **)(a1 + 24);
                  v28 = *v27;
                  if ( v28 == 69 )
                  {
                    v29 = 0;
                    *(_QWORD *)(a1 + 24) = v27 + 1;
                  }
                  else if ( v28 == 112 )
                  {
                    if ( v27[1] != 105 )
                      return 0;
                    *(_QWORD *)(a1 + 24) = v27 + 2;
                    v48 = v26;
                    v29 = sub_5743B0(a1, 0x45u);
                    v26 = v48;
                  }
                  else
                  {
                    v44 = v26;
                    if ( v28 != 105 || v27[1] != 108 )
                      return 0;
                    v29 = sub_57781C(a1);
                    v26 = v44;
                  }
                }
                v30 = sub_571F00(a1, 59, v26, v29);
                v31 = sub_571F00(a1, 58, v25, v30);
                return sub_571F00(a1, 57, v6, v31);
              default:
                return 0;
            }
          }
          v9 = sub_574B04(a1);
          break;
        case '2':
          switch ( *(_DWORD *)(v6 + 8) )
          {
            case 0:
              goto LABEL_46;
            case 1:
              goto LABEL_17;
            case 2:
              v20 = 0;
              goto LABEL_59;
            case 3:
              v20 = 0;
              goto LABEL_48;
            default:
              return 0;
          }
        case '3':
          v8 = *(_BYTE **)(a1 + 24);
          if ( *v8 == 95 )
          {
            *(_QWORD *)(a1 + 24) = v8 + 1;
            v9 = sub_5743B0(a1, 0x45u);
          }
          else
          {
LABEL_17:
            v9 = sub_57781C(a1);
          }
          break;
        default:
          return 0;
      }
LABEL_18:
      v10 = a1;
      v11 = 54;
      v12 = v6;
      return sub_571F00(v10, v11, v12, v9);
    }
    return 0;
  }
  if ( v1[1] != 112 )
    goto LABEL_12;
  *(_QWORD *)(a1 + 24) = v1 + 2;
  if ( v1[2] == 84 )
  {
    v14 = 0;
    *(_QWORD *)(a1 + 24) = v1 + 3;
  }
  else
  {
    v13 = sub_572BBC(a1) + 1;
    v14 = v13;
    if ( !v13 )
      return 0;
  }
  v15 = *(_DWORD *)(a1 + 40);
  if ( v15 >= *(_DWORD *)(a1 + 44) )
    return 0;
  v16 = *(_QWORD *)(a1 + 32);
  v17 = 24LL * v15;
  *(_DWORD *)(a1 + 40) = v15 + 1;
  result = 0;
  if ( v16 + v17 )
  {
    *(_DWORD *)(v16 + v17) = 6;
    *(_QWORD *)(v16 + v17 + 8) = v14;
    return v16 + v17;
  }
  return result;
}

