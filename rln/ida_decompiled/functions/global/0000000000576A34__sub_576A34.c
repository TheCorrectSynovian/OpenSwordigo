/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000576A34
 * Mangled: sub_576A34
 * Demangled: sub_576A34
 *
 * Callers: 3
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *   0x0000000000576FE0  sub_576FE0
 *
 * Callees: 11
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000571FA0  sub_571FA0
 *   0x0000000000572000  sub_572000
 *   0x00000000005721B0  sub_5721B0
 *   0x0000000000572BBC  sub_572BBC
 *   0x0000000000572C48  sub_572C48
 *   0x0000000000572CEC  sub_572CEC
 *   0x0000000000572EC4  sub_572EC4
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005764B0  sub_5764B0
 *   0x0000000000576FE0  sub_576FE0
 *
 * Referenced strings: 90
 *   insn=0x0000000000576A4C string=0x0000000000576A50 "`"
 *   insn=0x0000000000576A5C string=0x0000000000576A94 "A"
 *   insn=0x0000000000576A6C string=0x0000000000576A70 " "
 *   insn=0x0000000000576A74 string=0x0000000000576A78 "`"
 *   insn=0x0000000000576A94 string=0x0000000000576A9C " H`8a"
 *   insn=0x0000000000576A94 string=0x00000000005A0430 "0"
 *   insn=0x0000000000576A9C string=0x0000000000576AA0 "a"
 *   insn=0x0000000000576AA0 string=0x0000000000576AA4 " "
 *   insn=0x0000000000576AA0 string=0x0000000000576AAC "c"
 *   insn=0x0000000000576AA8 string=0x0000000000576B14 "`"
 *   insn=0x0000000000576AA8 string=0x0000000000576B6C "c"
 *   insn=0x0000000000576AB8 string=0x0000000000576ABC "I"
 *   insn=0x0000000000576AC8 string=0x0000000000576ACC "?"
 *   insn=0x0000000000576ACC string=0x0000000000576AD0 "`"
 *   insn=0x0000000000576AF0 string=0x0000000000576AF4 "o"
 *   insn=0x0000000000576B1C string=0x0000000000576CBC "A"
 *   insn=0x0000000000576B60 string=0x0000000000571F00 "$"
 *   insn=0x0000000000576B78 string=0x0000000000576B7C """
 *   insn=0x0000000000576B7C string=0x0000000000576B80 " "
 *   insn=0x0000000000576B84 string=0x0000000000576B88 "`"
 *   insn=0x0000000000576B9C string=0x0000000000576BA0 "`"
 *   insn=0x0000000000576BA0 string=0x0000000000576ECC "!"
 *   insn=0x0000000000576BA4 string=0x0000000000576BA8 "A"
 *   insn=0x0000000000576BAC string=0x0000000000576BB0 "S"
 *   insn=0x0000000000576BB4 string=0x0000000000576BB8 "@"
 *   insn=0x0000000000576BB8 string=0x0000000000576BBC "a"
 *   insn=0x0000000000576BBC string=0x0000000000576BC0 "!"
 *   insn=0x0000000000576BC0 string=0x0000000000576BC4 "?$"
 *   insn=0x0000000000576BC4 string=0x0000000000576BC8 ")"
 *   insn=0x0000000000576BC8 string=0x0000000000576BCC "a"
 *   insn=0x0000000000576BCC string=0x0000000000576BD0 "!"
 *   insn=0x0000000000576BD0 string=0x0000000000576BD4 "?d"
 *   insn=0x0000000000576BE8 string=0x0000000000576BEC "A"
 *   insn=0x0000000000576C44 string=0x0000000000576C48 "?"
 *   insn=0x0000000000576C48 string=0x0000000000576C4C "`"
 *   insn=0x0000000000576C4C string=0x0000000000576C50 "?"
 *   insn=0x0000000000576C50 string=0x0000000000576C54 "`"
 *   insn=0x0000000000576C58 string=0x0000000000576C5C "v"
 *   insn=0x0000000000576C60 string=0x0000000000576C64 "`"
 *   insn=0x0000000000576C88 string=0x0000000000576C8C "@"
 *   insn=0x0000000000576C94 string=0x0000000000576C98 "A"
 *   insn=0x0000000000576CBC string=0x0000000000576CC0 "c"
 *   insn=0x0000000000576CBC string=0x00000000005A06C0 "std"
 *   insn=0x0000000000576CC0 string=0x0000000000576CC4 "b"
 *   insn=0x0000000000576CC4 string=0x0000000000576CC8 "!"
 *   insn=0x0000000000576CE8 string=0x0000000000576CEC "!"
 *   insn=0x0000000000576D0C string=0x0000000000576D10 " "
 *   insn=0x0000000000576D14 string=0x0000000000576D18 "!"
 *   insn=0x0000000000576D28 string=0x0000000000576D2C "J"
 *   insn=0x0000000000576D34 string=0x0000000000576D38 "b"
 *   insn=0x0000000000576D4C string=0x0000000000576D50 "?"
 *   insn=0x0000000000576D50 string=0x0000000000576D54 "\n"
 *   insn=0x0000000000576D58 string=0x0000000000576D5C """
 *   insn=0x0000000000576D60 string=0x0000000000576D64 "s"
 *   insn=0x0000000000576D68 string=0x0000000000576D6C "V"
 *   insn=0x0000000000576D7C string=0x0000000000576D80 "`"
 *   insn=0x0000000000576D84 string=0x0000000000576D88 "="
 *   insn=0x0000000000576D98 string=0x0000000000576D9C "!"
 *   insn=0x0000000000576DA4 string=0x0000000000576DA8 "V"
 *   insn=0x0000000000576DD4 string=0x0000000000576DD8 "\n"
 *   insn=0x0000000000576DE0 string=0x0000000000576DE4 "U"
 *   insn=0x0000000000576DF0 string=0x0000000000576DF4 "o"
 *   insn=0x0000000000576E14 string=0x0000000000576E18 ";"
 *   insn=0x0000000000576E3C string=0x0000000000576E40 "&"
 *   insn=0x0000000000576E5C string=0x0000000000576E60 "!"
 *   insn=0x0000000000576E78 string=0x0000000000576E7C "M"
 *   insn=0x0000000000576E94 string=0x0000000000576E98 "B"
 *   insn=0x0000000000576EC4 string=0x0000000000576EC8 ":"
 *   insn=0x0000000000576ED4 string=0x0000000000576ED8 "B"
 *   insn=0x0000000000576EE8 string=0x0000000000576EEC "4"
 *   insn=0x0000000000576F0C string=0x0000000000576F10 "`"
 *   insn=0x0000000000576F14 string=0x0000000000576F18 "a"
 *   insn=0x0000000000576F28 string=0x0000000000576F2C "*"
 *   insn=0x0000000000576F34 string=0x0000000000576F38 "$"
 *   insn=0x0000000000576F44 string=0x0000000000576F48 "C"
 *   insn=0x0000000000576F48 string=0x0000000000576F4C " "
 *   insn=0x0000000000576F50 string=0x0000000000576F54 "@h!"
 *   insn=0x0000000000576F54 string=0x0000000000576F58 "v"
 *   insn=0x0000000000576F58 string=0x0000000000576F5C "s"
 *   insn=0x0000000000576F5C string=0x0000000000576F60 "L"
 *   insn=0x0000000000576F64 string=0x0000000000576F68 "8"
 *   insn=0x0000000000576F80 string=0x0000000000576F84 "1"
 *   insn=0x0000000000576F84 string=0x0000000000576F88 "`"
 *   insn=0x0000000000576F88 string=0x0000000000576F8C "A"
 *   insn=0x0000000000576F8C string=0x00000000005A06B0 "string literal"
 *   insn=0x0000000000576F90 string=0x0000000000576F94 "!"
 *   insn=0x0000000000576FA0 string=0x0000000000576FA4 ";"
 *   insn=0x0000000000576FA8 string=0x0000000000576FAC "U"
 *   insn=0x0000000000576FC4 string=0x0000000000576FC8 "?"
 *   insn=0x0000000000576FC8 string=0x0000000000576FCC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_576A34(__int64 a1)
{
  _BYTE *v1; // x3
  __int64 v3; // x19
  __int64 v5; // x21
  _BYTE *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 *v9; // x22
  unsigned __int8 *v10; // x0
  int v11; // w19
  __int64 v12; // x23
  __int64 v13; // x21
  int v14; // w1
  int *v15; // x0
  __int64 v16; // x3
  int v17; // w0
  int v18; // w0
  __int64 v19; // x0
  _BYTE *v20; // x1
  int v21; // w0
  int v22; // w1
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x3
  int v26; // w1
  int v27; // w0
  int v28; // w1
  int v29; // w2
  int v30; // w22
  _DWORD *v31; // x0
  _DWORD *v32; // x19
  int v33; // w0
  int v34; // w0
  __int64 v35; // x2
  _BYTE *v36; // x0
  __int64 v37; // [xsp+48h] [xbp+48h]
  __int64 v38; // [xsp+48h] [xbp+48h]
  __int64 v39; // [xsp+48h] [xbp+48h]
  __int64 v40; // [xsp+58h] [xbp+58h] BYREF

  v1 = *(_BYTE **)(a1 + 24);
  switch ( *v1 )
  {
    case 'N':
      *(_QWORD *)(a1 + 24) = v1 + 1;
      v9 = sub_572000(a1, &v40, 1);
      if ( !v9 )
        return 0;
      v10 = *(unsigned __int8 **)(a1 + 24);
      v11 = *v10;
      if ( v11 == 79 )
      {
        v28 = 32;
        v29 = *(_DWORD *)(a1 + 80) + 3;
      }
      else
      {
        v12 = 0;
        if ( v11 != 82 )
        {
          v13 = 0;
          goto LABEL_15;
        }
        v28 = 31;
        v29 = *(_DWORD *)(a1 + 80) + 2;
      }
      *(_DWORD *)(a1 + 80) = v29;
      *(_QWORD *)(a1 + 24) = v10 + 1;
      v13 = 0;
      v12 = sub_571F00(a1, v28, 0, 0);
      v10 = *(unsigned __int8 **)(a1 + 24);
      v11 = *v10;
LABEL_15:
      while ( 2 )
      {
        while ( 2 )
        {
          if ( !v11 )
            goto LABEL_57;
          if ( v11 != 68 )
            break;
          if ( (v10[1] & 0xDF) == 0x54 )
            v25 = sub_574B04(a1);
          else
            v25 = sub_5764B0(a1);
LABEL_55:
          if ( v13 )
            goto LABEL_43;
          v13 = v25;
LABEL_46:
          v10 = *(unsigned __int8 **)(a1 + 24);
          v11 = *v10;
          if ( v11 != 69 )
          {
            if ( v13 )
            {
              v27 = *(_DWORD *)(a1 + 56);
              if ( v27 < *(_DWORD *)(a1 + 60) )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v27) = v13;
                *(_DWORD *)(a1 + 56) = v27 + 1;
LABEL_50:
                v10 = *(unsigned __int8 **)(a1 + 24);
                v11 = *v10;
                continue;
              }
            }
LABEL_57:
            *v9 = 0;
            return 0;
          }
          break;
        }
        if ( (unsigned __int8)(v11 - 48) <= 9u
          || (unsigned __int8)(v11 - 97) <= 0x19u
          || v11 == 67
          || v11 == 85
          || v11 == 76 )
        {
          v24 = sub_5764B0(a1);
          v25 = v24;
          if ( !v13 )
          {
            v13 = v24;
LABEL_45:
            if ( v11 == 83 )
              goto LABEL_50;
            goto LABEL_46;
          }
        }
        else
        {
          if ( v11 != 83 )
          {
            if ( v11 != 73 )
            {
              if ( v11 == 84 )
              {
                v25 = sub_572CEC(a1);
                goto LABEL_55;
              }
              if ( v11 != 69 )
              {
                if ( v11 == 77 && v13 )
                {
                  *(_QWORD *)(a1 + 24) = v10 + 1;
                  v11 = *++v10;
                  continue;
                }
                goto LABEL_57;
              }
              *v9 = v13;
              if ( v13 )
              {
                if ( v12 )
                {
                  *(_QWORD *)(v12 + 8) = v40;
                  v40 = v12;
                }
                v36 = *(_BYTE **)(a1 + 24);
                if ( *v36 == 69 )
                {
                  v3 = v40;
                  *(_QWORD *)(a1 + 24) = v36 + 1;
                  return v3;
                }
              }
              return 0;
            }
            if ( !v13 )
              goto LABEL_57;
            v25 = sub_572EC4(a1);
            v26 = 4;
            goto LABEL_44;
          }
          v25 = sub_5721B0(a1, 1);
          if ( !v13 )
          {
            v10 = *(unsigned __int8 **)(a1 + 24);
            v13 = v25;
            v11 = *v10;
            continue;
          }
        }
        break;
      }
LABEL_43:
      v26 = 1;
LABEL_44:
      v13 = sub_571F00(a1, v26, v13, v25);
      goto LABEL_45;
    case 'S':
      if ( v1[1] != 116 )
      {
        v7 = sub_5721B0(a1, 0);
        v3 = v7;
        if ( **(_BYTE **)(a1 + 24) != 73 )
          return v3;
        goto LABEL_10;
      }
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v39 = sub_571FA0(a1, (__int64)"std", 3);
      v19 = sub_5764B0(a1);
      v7 = sub_571F00(a1, 1, v39, v19);
      v3 = v7;
      v20 = *(_BYTE **)(a1 + 24);
      *(_DWORD *)(a1 + 80) += 3;
      if ( *v20 != 73 )
        return v3;
      if ( v7 )
      {
        v21 = *(_DWORD *)(a1 + 56);
        if ( v21 < *(_DWORD *)(a1 + 60) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v21) = v7;
          *(_DWORD *)(a1 + 56) = v21 + 1;
LABEL_10:
          v37 = v7;
          v8 = sub_572EC4(a1);
          return sub_571F00(a1, 4, v37, v8);
        }
      }
      return 0;
    case 'U':
      return sub_5764B0(a1);
    case 'Z':
      *(_QWORD *)(a1 + 24) = v1 + 1;
      v5 = sub_576FE0(a1, 0);
      v6 = *(_BYTE **)(a1 + 24);
      if ( *v6 != 69 )
        return 0;
      *(_QWORD *)(a1 + 24) = v6 + 1;
      v14 = (unsigned __int8)v6[1];
      if ( v14 == 115 )
      {
        *(_QWORD *)(a1 + 24) = v6 + 2;
        if ( !(unsigned int)sub_572C48(a1) )
          return 0;
        v16 = sub_571FA0(a1, (__int64)"string literal", 14);
      }
      else if ( v14 == 100 )
      {
        *(_QWORD *)(a1 + 24) = v6 + 2;
        v30 = sub_572BBC(a1);
        if ( v30 < 0 )
          return 0;
        v31 = (_DWORD *)sub_576A34(a1);
        v32 = v31;
        if ( v31 )
        {
          v33 = *v31;
          if ( v33 != 69 && v33 != 71 && !(unsigned int)sub_572C48(a1) )
            return 0;
        }
        v34 = *(_DWORD *)(a1 + 40);
        v16 = 0;
        if ( v34 < *(_DWORD *)(a1 + 44) )
        {
          v35 = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 40) = v34 + 1;
          v16 = v35 + 24LL * v34;
          if ( v16 )
          {
            *(_DWORD *)(v35 + 24LL * v34) = 70;
            *(_DWORD *)(v16 + 16) = v30;
            *(_QWORD *)(v16 + 8) = v32;
          }
        }
      }
      else
      {
        v15 = (int *)sub_576A34(a1);
        v16 = (__int64)v15;
        if ( v15 )
        {
          v17 = *v15;
          if ( v17 != 69 && v17 != 71 )
          {
            v38 = v16;
            v18 = sub_572C48(a1);
            v16 = v38;
            if ( !v18 )
              return 0;
          }
        }
      }
      return sub_571F00(a1, 2, v5, v16);
    default:
      v3 = sub_5764B0(a1);
      if ( **(_BYTE **)(a1 + 24) != 73 )
        return v3;
      if ( !v3 )
        return 0;
      v22 = *(_DWORD *)(a1 + 56);
      if ( v22 >= *(_DWORD *)(a1 + 60) )
        return 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v22) = v3;
      *(_DWORD *)(a1 + 56) = v22 + 1;
      v23 = sub_572EC4(a1);
      return sub_571F00(a1, 4, v3, v23);
  }
}

