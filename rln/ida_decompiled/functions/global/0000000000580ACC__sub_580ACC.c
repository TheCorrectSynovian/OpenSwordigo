/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000580ACC
 * Mangled: sub_580ACC
 * Demangled: sub_580ACC
 *
 * Callers: 1
 *   0x0000000000581080  sub_581080
 *
 * Callees: 6
 *   0x00000000001FE620  .abort
 *   0x000000000057FC60  sub_57FC60
 *   0x000000000057FC88  sub_57FC88
 *   0x000000000057FCC8  sub_57FCC8
 *   0x000000000057FF08  sub_57FF08
 *   0x0000000000580138  sub_580138
 *
 * Referenced strings: 144
 *   insn=0x0000000000580B04 string=0x0000000000580B08 "9"
 *   insn=0x0000000000580B20 string=0x0000000000581054 "9"
 *   insn=0x0000000000580B28 string=0x0000000000580B2C "_"
 *   insn=0x0000000000580B30 string=0x0000000000580B34 "_"
 *   insn=0x0000000000580B30 string=0x0000000000580C20 "_?"
 *   insn=0x0000000000580B34 string=0x0000000000580B38 "b"
 *   insn=0x0000000000580B38 string=0x0000000000580B3C "_C"
 *   insn=0x0000000000580B3C string=0x0000000000580B40 " "
 *   insn=0x0000000000580B40 string=0x0000000000580B44 "H"
 *   insn=0x0000000000580B44 string=0x0000000000580B48 "_+"
 *   insn=0x0000000000580B44 string=0x0000000000580BCC "_W"
 *   insn=0x0000000000580B4C string=0x0000000000580B50 ""
 *   insn=0x0000000000580B50 string=0x0000000000580B54 "_"
 *   insn=0x0000000000580B50 string=0x0000000000580B90 "_7"
 *   insn=0x0000000000580B54 string=0x0000000000580B58 "`"
 *   insn=0x0000000000580B5C string=0x0000000000580B60 "_"
 *   insn=0x0000000000580B5C string=0x0000000000580B74 "_#"
 *   insn=0x0000000000580B64 string=0x0000000000581038 "z"
 *   insn=0x0000000000580B6C string=0x0000000000580B70 "3"
 *   insn=0x0000000000580B70 string=0x000000000058103C "?"
 *   insn=0x0000000000580B7C string=0x0000000000580B80 "_'"
 *   insn=0x0000000000580B88 string=0x0000000000580B8C ","
 *   insn=0x0000000000580B98 string=0x0000000000580B9C "_/"
 *   insn=0x0000000000580B98 string=0x0000000000580BB4 "_;"
 *   insn=0x0000000000580B9C string=0x0000000000580BA0 " "
 *   insn=0x0000000000580BA0 string=0x0000000000580BA4 "_3"
 *   insn=0x0000000000580BAC string=0x0000000000580BB0 "a"
 *   insn=0x0000000000580BBC string=0x0000000000580BC0 "_?"
 *   insn=0x0000000000580BD0 string=0x0000000000580BD4 "("
 *   insn=0x0000000000580BD0 string=0x0000000000580DE4 " "
 *   insn=0x0000000000580BD4 string=0x0000000000580BD8 "_K"
 *   insn=0x0000000000580BD4 string=0x0000000000580BF8 "_g"
 *   insn=0x0000000000580BDC string=0x0000000000580DCC "y"
 *   insn=0x0000000000580BE0 string=0x0000000000580BE4 "_O"
 *   insn=0x0000000000580BE8 string=0x0000000000580BEC "_S"
 *   insn=0x0000000000580BF0 string=0x0000000000580E0C "?"
 *   insn=0x0000000000580BF8 string=0x0000000000580BFC "@"
 *   insn=0x0000000000580BFC string=0x0000000000580C00 "H"
 *   insn=0x0000000000580C00 string=0x0000000000580C04 "_["
 *   insn=0x0000000000580C00 string=0x0000000000580F28 "?"
 *   insn=0x0000000000580C04 string=0x0000000000580C08 "!"
 *   insn=0x0000000000580C08 string=0x0000000000580C0C " "
 *   insn=0x0000000000580C10 string=0x0000000000580C14 "__"
 *   insn=0x0000000000580C10 string=0x0000000000580E20 "?"
 *   insn=0x0000000000580C14 string=0x0000000000580C18 " "
 *   insn=0x0000000000580C18 string=0x0000000000580C1C ""
 *   insn=0x0000000000580C18 string=0x0000000000580E3C "?"
 *   insn=0x0000000000580C24 string=0x0000000000580C28 "_"
 *   insn=0x0000000000580C24 string=0x0000000000580C60 "_C"
 *   insn=0x0000000000580C2C string=0x0000000000580C30 "_"
 *   insn=0x0000000000580C2C string=0x0000000000580D0C "@"
 *   insn=0x0000000000580C34 string=0x0000000000580C38 "_"
 *   insn=0x0000000000580C34 string=0x0000000000580C4C "_"
 *   insn=0x0000000000580C38 string=0x0000000000580C3C "b"
 *   insn=0x0000000000580C3C string=0x0000000000580C40 "_"
 *   insn=0x0000000000580C40 string=0x0000000000580C44 ""
 *   insn=0x0000000000580C50 string=0x0000000000580C54 "_"
 *   insn=0x0000000000580C58 string=0x0000000000581014 "9"
 *   insn=0x0000000000580C68 string=0x0000000000580C6C "_"
 *   insn=0x0000000000580C68 string=0x0000000000580C80 "_S"
 *   insn=0x0000000000580C6C string=0x0000000000580C70 "H\t"
 *   insn=0x0000000000580C74 string=0x0000000000580C78 "AC"
 *   insn=0x0000000000580C78 string=0x0000000000580C7C "E"
 *   insn=0x0000000000580C7C string=0x0000000000580D90 "^"
 *   insn=0x0000000000580C88 string=0x0000000000580C8C "_K"
 *   insn=0x0000000000580C88 string=0x0000000000580CC4 "_["
 *   insn=0x0000000000580C8C string=0x0000000000580C90 "A"
 *   insn=0x0000000000580CB8 string=0x0000000000580CBC "A"
 *   insn=0x0000000000580CBC string=0x0000000000580CC0 "A"
 *   insn=0x0000000000580CC4 string=0x0000000000580CC8 " "
 *   insn=0x0000000000580CC8 string=0x0000000000580CCC "_"
 *   insn=0x0000000000580CCC string=0x0000000000580CD0 "A"
 *   insn=0x0000000000580D6C string=0x0000000000580D70 "@"
 *   insn=0x0000000000580DAC string=0x0000000000580DB0 "A"
 *   insn=0x0000000000580DB4 string=0x0000000000580DB8 "T"
 *   insn=0x0000000000580DBC string=0x0000000000580DC0 "A"
 *   insn=0x0000000000580DCC string=0x0000000000580DD0 " "
 *   insn=0x0000000000580DD8 string=0x0000000000580DDC "9"
 *   insn=0x0000000000580DF4 string=0x0000000000580DF8 "?"
 *   insn=0x0000000000580E0C string=0x0000000000580E10 "M"
 *   insn=0x0000000000580E10 string=0x0000000000580E14 " "
 *   insn=0x0000000000580E40 string=0x0000000000580E44 """
 *   insn=0x0000000000580E5C string=0x0000000000580E60 "{"
 *   insn=0x0000000000580E64 string=0x0000000000580E68 "9"
 *   insn=0x0000000000580E68 string=0x0000000000580E6C "_"
 *   insn=0x0000000000580E70 string=0x0000000000580E74 "@"
 *   insn=0x0000000000580E74 string=0x0000000000580E78 ""
 *   insn=0x0000000000580E78 string=0x0000000000580E7C "_"
 *   insn=0x0000000000580E78 string=0x0000000000580E98 "_"
 *   insn=0x0000000000580E80 string=0x0000000000580E84 "_g"
 *   insn=0x0000000000580E80 string=0x0000000000580EF4 "@"
 *   insn=0x0000000000580E88 string=0x0000000000580E8C "A"
 *   insn=0x0000000000580E8C string=0x0000000000580E90 " "
 *   insn=0x0000000000580E90 string=0x0000000000580E94 "j"
 *   insn=0x0000000000580E98 string=0x0000000000580E9C "@"
 *   insn=0x0000000000580E9C string=0x0000000000580EA0 "_S"
 *   insn=0x0000000000580EA4 string=0x0000000000580EA8 "_"
 *   insn=0x0000000000580EA8 string=0x0000000000580EAC "a"
 *   insn=0x0000000000580EB0 string=0x0000000000580EB4 "b"
 *   insn=0x0000000000580ECC string=0x0000000000580ED0 "a"
 *   insn=0x0000000000580ED0 string=0x0000000000580ED4 " "
 *   insn=0x0000000000580ED0 string=0x0000000000580EDC "@"
 *   insn=0x0000000000580ED8 string=0x0000000000580EE4 "@"
 *   insn=0x0000000000580ED8 string=0x0000000000580EEC "@"
 *   insn=0x0000000000580EDC string=0x0000000000580EE0 "W"
 *   insn=0x0000000000580EE4 string=0x0000000000580EE8 "U"
 *   insn=0x0000000000580EEC string=0x0000000000580EF0 "S"
 *   insn=0x0000000000580EF4 string=0x0000000000580EF8 "Q"
 *   insn=0x0000000000580EFC string=0x0000000000580F00 "O"
 *   insn=0x0000000000580F0C string=0x0000000000580F10 "T"
 *   insn=0x0000000000580F1C string=0x0000000000580F20 "@"
 *   insn=0x0000000000580F20 string=0x0000000000580F24 "F"
 *   insn=0x0000000000580F28 string=0x0000000000580F2C "m"
 *   insn=0x0000000000580F2C string=0x0000000000580F30 """
 *   insn=0x0000000000580F30 string=0x0000000000580F34 "Zk"
 *   insn=0x0000000000580F34 string=0x0000000000580F38 "9"
 *   insn=0x0000000000580F38 string=0x0000000000580F3C "_S"
 *   insn=0x0000000000580F4C string=0x0000000000580F50 "d"
 *   insn=0x0000000000580F54 string=0x0000000000580F58 "`"
 *   insn=0x0000000000580F58 string=0x0000000000580F64 " "
 *   insn=0x0000000000580F58 string=0x0000000000580F6C " "
 *   insn=0x0000000000580F58 string=0x0000000000580F74 "#"
 *   insn=0x0000000000580F58 string=0x0000000000580F98 "  "
 *   insn=0x0000000000580F58 string=0x0000000000580FA0 " $"
 *   insn=0x0000000000580F58 string=0x0000000000580FA8 " ("
 *   insn=0x0000000000580F58 string=0x0000000000580FB8 "?"
 *   insn=0x0000000000580F58 string=0x0000000000580FC4 "?"
 *   insn=0x0000000000580F58 string=0x0000000000580FD0 "?"
 *   insn=0x0000000000580F58 string=0x0000000000580FDC "?"
 *   insn=0x0000000000580F58 string=0x0000000000580FE8 "?"
 *   insn=0x0000000000580F58 string=0x0000000000580FF8 "?"
 *   insn=0x0000000000580F5C string=0x0000000000580F60 "$"
 *   insn=0x0000000000580F64 string=0x0000000000580F68 """
 *   insn=0x0000000000580F6C string=0x0000000000580F70 " "
 *   insn=0x0000000000580F74 string=0x0000000000580F78 "`"
 *   insn=0x0000000000580F80 string=0x0000000000580F84 ""
 *   insn=0x0000000000580FC8 string=0x0000000000580FCC "\t"
 *   insn=0x0000000000581008 string=0x000000000058100C "{"
 *   insn=0x0000000000581014 string=0x0000000000581018 "9"
 *   insn=0x0000000000581020 string=0x0000000000581024 "`"
 *   insn=0x0000000000581028 string=0x000000000058102C "?"
 *   insn=0x000000000058102C string=0x0000000000581030 "{"
 *   insn=0x0000000000581044 string=0x0000000000581048 "9"
 *   insn=0x0000000000581054 string=0x0000000000581058 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_580ACC(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // w25
  unsigned int v8; // w26
  char *v9; // x27
  __int64 v10; // x0
  int v11; // w1
  int v12; // w0
  __int64 v13; // x0
  int v14; // w1
  char *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  char *v18; // x27
  char *v19; // x0
  char *v20; // x0
  int v21; // w0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x0
  unsigned __int8 v31; // [xsp+68h] [xbp+68h]
  __int64 v32; // [xsp+68h] [xbp+68h]
  __int64 v33; // [xsp+70h] [xbp+70h] BYREF
  __int64 v34; // [xsp+78h] [xbp+78h] BYREF
  __int64 v35; // [xsp+80h] [xbp+80h] BYREF
  __int64 v36; // [xsp+88h] [xbp+88h] BYREF
  _QWORD v37[64]; // [xsp+90h] [xbp+90h]

  v37[0] = a4;
  v7 = 1;
  while ( (unsigned __int64)a1 < a2 )
  {
    v8 = (unsigned __int8)*a1;
    v9 = a1 + 1;
    if ( v8 > 0x20 )
    {
      if ( v8 > 0x4F )
      {
        if ( v8 != 144 )
        {
          if ( v8 > 0x90 )
          {
            if ( v8 == 148 )
              goto LABEL_78;
            if ( v8 > 0x94 )
            {
              if ( v8 == 150 )
                goto LABEL_121;
              if ( v8 != 241 )
                goto LABEL_118;
              v18 = a1 + 2;
              v31 = a1[1];
              v19 = (char *)sub_580138(v31, a3);
              v20 = sub_57FCC8(v31, v19, v18, (unsigned __int64 *)&v36);
LABEL_60:
              v9 = v20;
              v10 = v36;
              goto LABEL_119;
            }
            if ( v8 != 146 )
              goto LABEL_118;
            v15 = sub_57FC60(a1 + 1, &v33);
            v9 = sub_57FC88(v15, &v35);
            v16 = sub_57FF08(a3, v33);
            v17 = v35;
          }
          else
          {
            if ( v8 <= 0x6F )
            {
              v13 = a3;
              v14 = v8 - 80;
LABEL_62:
              v10 = sub_57FF08(v13, v14);
              goto LABEL_119;
            }
            v9 = sub_57FC88(a1 + 1, &v35);
            v16 = sub_57FF08(a3, v8 - 112);
            v17 = v35;
          }
          v10 = v16 + v17;
          goto LABEL_119;
        }
        v9 = sub_57FC60(a1 + 1, &v33);
        v14 = v33;
        v13 = a3;
        goto LABEL_62;
      }
      if ( v8 >= 0x30 )
      {
        v10 = v8 - 48;
        goto LABEL_119;
      }
      if ( v8 <= 0x27 )
      {
        if ( v8 != 35 )
          goto LABEL_93;
        goto LABEL_78;
      }
      if ( v8 > 0x2E )
      {
        v9 = &a1[*(__int16 *)(a1 + 1) + 3];
      }
      else
      {
        if ( v8 >= 0x29 )
        {
LABEL_93:
          if ( v7 > 1 )
          {
            v28 = v37[v7 - 2];
            v29 = v37[v7 - 1];
            switch ( *a1 )
            {
              case 26:
                v10 = v29 & v28;
                goto LABEL_111;
              case 27:
                v10 = v28 / v29;
                goto LABEL_111;
              case 28:
                v10 = v28 - v29;
                goto LABEL_111;
              case 29:
                v10 = v28 % (unsigned __int64)v29;
                goto LABEL_111;
              case 30:
                v10 = v29 * v28;
                goto LABEL_111;
              case 33:
                v10 = v29 | v28;
                goto LABEL_111;
              case 34:
                v10 = v29 + v28;
                goto LABEL_111;
              case 36:
                v10 = v28 << v29;
                goto LABEL_111;
              case 37:
                v10 = (unsigned __int64)v28 >> v29;
                goto LABEL_111;
              case 38:
                v10 = v28 >> v29;
                goto LABEL_111;
              case 39:
                v10 = v29 ^ v28;
                goto LABEL_111;
              case 41:
                v10 = v28 == v29;
                goto LABEL_111;
              case 42:
                v10 = v28 >= v29;
                goto LABEL_111;
              case 43:
                v10 = v28 > v29;
                goto LABEL_111;
              case 44:
                v10 = v28 <= v29;
                goto LABEL_111;
              case 45:
                v10 = v28 < v29;
                goto LABEL_111;
              case 46:
                v10 = v28 != v29;
LABEL_111:
                v7 -= 2;
                goto LABEL_119;
              default:
                break;
            }
          }
LABEL_118:
          abort();
        }
        if ( !v7 )
          goto LABEL_118;
        --v7;
        v9 = a1 + 3;
        if ( v37[v7] )
          v9 = &a1[*(__int16 *)(a1 + 1) + 3];
      }
    }
    else
    {
      if ( v8 >= 0x1F )
        goto LABEL_78;
      if ( v8 == 16 )
      {
        v9 = sub_57FC60(a1 + 1, &v34);
        v10 = v34;
        goto LABEL_119;
      }
      if ( v8 <= 0x10 )
      {
        if ( v8 == 10 )
        {
          v10 = *(unsigned __int16 *)(a1 + 1);
          goto LABEL_56;
        }
        if ( v8 <= 0xA )
        {
          if ( v8 != 6 )
          {
            if ( v8 > 6 )
            {
              v9 = a1 + 2;
              if ( v8 == 8 )
              {
                v10 = (unsigned __int8)a1[1];
              }
              else
              {
                if ( v8 != 9 )
                  goto LABEL_118;
                v10 = a1[1];
              }
            }
            else
            {
              if ( v8 != 3 )
                goto LABEL_118;
              v10 = *(_QWORD *)(a1 + 1);
              v9 = a1 + 9;
            }
            goto LABEL_119;
          }
LABEL_78:
          if ( !v7 )
            goto LABEL_118;
          v27 = v37[--v7];
          if ( v8 == 31 )
          {
            v10 = -v27;
          }
          else if ( v8 > 0x1F )
          {
            if ( v8 == 35 )
            {
              v32 = v37[v7];
              v9 = sub_57FC60(a1 + 1, &v34);
              v10 = v32 + v34;
            }
            else
            {
              if ( v8 == 148 )
              {
                v9 = a1 + 2;
                switch ( a1[1] )
                {
                  case 1:
                    v10 = *(unsigned __int8 *)v27;
                    goto LABEL_119;
                  case 2:
                    v10 = *(unsigned __int16 *)v27;
                    goto LABEL_119;
                  case 4:
                    v10 = *(unsigned int *)v27;
                    goto LABEL_119;
                  case 8:
                    goto LABEL_90;
                  default:
                    goto LABEL_118;
                }
              }
              v10 = ~v27;
            }
          }
          else if ( v8 == 6 )
          {
LABEL_90:
            v10 = *(_QWORD *)v27;
          }
          else
          {
            v10 = (v27 ^ (v27 >> 63)) + ((unsigned __int64)v27 >> 63);
          }
          goto LABEL_119;
        }
        if ( v8 == 13 )
        {
          v10 = *(int *)(a1 + 1);
LABEL_58:
          v9 = a1 + 5;
        }
        else if ( v8 > 0xD )
        {
          v9 = a1 + 9;
          v10 = *(_QWORD *)(a1 + 1);
        }
        else
        {
          if ( v8 != 11 )
          {
            v10 = *(unsigned int *)(a1 + 1);
            goto LABEL_58;
          }
          v10 = *(__int16 *)(a1 + 1);
LABEL_56:
          v9 = a1 + 3;
        }
LABEL_119:
        if ( (unsigned int)v7 > 0x3F )
          goto LABEL_118;
        v37[v7++] = v10;
        goto LABEL_121;
      }
      if ( v8 == 21 )
      {
        v22 = (unsigned __int8)a1[1];
        v35 = v22;
        v9 = a1 + 2;
        v23 = v7 - 1;
        if ( v22 >= v23 )
          goto LABEL_118;
        v10 = v37[v23 - v22];
        goto LABEL_119;
      }
      if ( v8 <= 0x15 )
      {
        if ( v8 == 18 )
        {
          if ( !v7 )
            goto LABEL_118;
          v21 = v7 - 1;
        }
        else
        {
          if ( v8 < 0x12 )
          {
            v20 = sub_57FC88(a1 + 1, &v36);
            goto LABEL_60;
          }
          if ( v8 == 19 )
          {
            if ( !v7 )
              goto LABEL_118;
            --v7;
            goto LABEL_121;
          }
          if ( v7 <= 1 )
            goto LABEL_118;
          v21 = v7 - 2;
        }
        v10 = v37[v21];
        goto LABEL_119;
      }
      if ( v8 == 25 )
        goto LABEL_78;
      if ( v8 > 0x19 )
        goto LABEL_93;
      v11 = v7 - 1;
      v12 = v7 - 2;
      if ( v8 == 22 )
      {
        if ( v7 <= 1 )
          goto LABEL_118;
        v24 = v37[v11];
        v37[v11] = v37[v12];
        v37[v12] = v24;
      }
      else
      {
        if ( v8 != 23 || v7 <= 2 )
          goto LABEL_118;
        v25 = v37[v11];
        v26 = v37[v7 - 3];
        v37[v11] = v37[v12];
        v37[v12] = v26;
        v37[v7 - 3] = v25;
      }
    }
LABEL_121:
    a1 = v9;
  }
  if ( !v7 )
    goto LABEL_118;
  return v37[v7 - 1];
}

