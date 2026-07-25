/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000553A38
 * Mangled: sub_553A38
 * Demangled: sub_553A38
 *
 * Callers: 1
 *   0x0000000000553A38  sub_553A38
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6A30  .wmemset
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000054FE98  sub_54FE98
 *   0x0000000000551BB0  sub_551BB0
 *   0x00000000005530A4  sub_5530A4
 *   0x000000000055398C  sub_55398C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x0000000000553A38 string=0x0000000000553A3C "@"
 *   insn=0x0000000000553A7C string=0x0000000000553A80 "[{y"
 *   insn=0x0000000000553A88 string=0x0000000000553A8C "@\t"
 *   insn=0x0000000000553A90 string=0x0000000000553A94 "yC"
 *   insn=0x0000000000553AD4 string=0x0000000000553AD8 "a"
 *   insn=0x0000000000553AE0 string=0x0000000000553AE4 "F"
 *   insn=0x0000000000553AE8 string=0x0000000000553AEC "3"
 *   insn=0x0000000000553AEC string=0x0000000000553BF0 "\"
 *   insn=0x0000000000553AF0 string=0x0000000000553C24 "aS@"
 *   insn=0x0000000000553AF4 string=0x0000000000553B94 "aW@"
 *   insn=0x0000000000553B0C string=0x0000000000553B10 "!x"
 *   insn=0x0000000000553B14 string=0x0000000000553B18 "!"
 *   insn=0x0000000000553B1C string=0x0000000000553B20 "_`!"
 *   insn=0x0000000000553B30 string=0x0000000000553B34 "\"
 *   insn=0x0000000000553B40 string=0x0000000000553B44 "4"
 *   insn=0x0000000000553B54 string=0x0000000000553B58 "c0@"
 *   insn=0x0000000000553B58 string=0x0000000000553B5C "`"
 *   insn=0x0000000000553BAC string=0x0000000000553BB0 "Z"
 *   insn=0x0000000000553BB0 string=0x0000000000553BB4 "aO@"
 *   insn=0x0000000000553BB4 string=0x0000000000553BB8 "Z{"
 *   insn=0x0000000000553BB8 string=0x0000000000553BBC "b@"
 *   insn=0x0000000000553BBC string=0x0000000000553BC0 "Z"
 *   insn=0x0000000000553BC0 string=0x0000000000553BC4 "c"
 *   insn=0x0000000000553BDC string=0x0000000000551BB0 "H"
 *   insn=0x0000000000553BE8 string=0x0000000000553BEC "3"
 *   insn=0x0000000000553BF0 string=0x0000000000553BF4 "6"
 *   insn=0x0000000000553BFC string=0x0000000000553C9C "ac@"
 *   insn=0x0000000000553C0C string=0x0000000000553C10 "!{|"
 *   insn=0x0000000000553C14 string=0x0000000000553C18 "ac@"
 *   insn=0x0000000000553C38 string=0x0000000000553C3C "i"
 *   insn=0x0000000000553C3C string=0x0000000000553C40 """
 *   insn=0x0000000000553C3C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000553C44 string=0x0000000000553C48 "B"
 *   insn=0x0000000000553C90 string=0x0000000000553C94 "[{y"
 *   insn=0x0000000000553C94 string=0x0000000000553C98 "|"
 *   insn=0x0000000000553CB0 string=0x0000000000553CB4 "a"
 *   insn=0x0000000000553CB0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000553CB8 string=0x0000000000553CBC "!"
 *   insn=0x0000000000553CBC string=0x0000000000553CC0 " "
 *   insn=0x0000000000553CD0 string=0x0000000000553CD4 "/"
 *   insn=0x0000000000553CD4 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000553CE8 string=0x0000000000553CEC "x"
 *   insn=0x0000000000553D14 string=0x0000000000553D18 "U"
 *   insn=0x0000000000553D1C string=0x0000000000553D20 "%"
 *   insn=0x0000000000553D1C string=0x0000000000553D5C "@"
 *   insn=0x0000000000553D20 string=0x0000000000553D24 "E"
 *   insn=0x0000000000553D28 string=0x0000000000553D2C "5"
 *   insn=0x0000000000553D78 string=0x0000000000553D7C "Y"
 *   insn=0x0000000000553D88 string=0x0000000000553D8C "9"
 *   insn=0x0000000000553D90 string=0x0000000000553D94 "M"
 *   insn=0x0000000000553D94 string=0x0000000000553D98 ""
 *   insn=0x0000000000553D9C string=0x0000000000553DA0 "`"
 *   insn=0x0000000000553DBC string=0x00000000001F6A30 "0'"
 *   insn=0x0000000000553DD0 string=0x0000000000553DD4 "{"
 *   insn=0x0000000000553DD0 string=0x0000000000553E48 "U"
 *   insn=0x0000000000553DE8 string=0x0000000000553DEC "c0@"
 *   insn=0x0000000000553DEC string=0x0000000000553DF0 "`"
 *   insn=0x0000000000553DF4 string=0x0000000000553DF8 "`"
 *   insn=0x0000000000553DF8 string=0x0000000000553DFC "5"
 *   insn=0x0000000000553E0C string=0x0000000000553E10 "9"
 *   insn=0x0000000000553E30 string=0x0000000000553E34 "c0@"
 *   insn=0x0000000000553E34 string=0x0000000000553E38 "`"
 *   insn=0x0000000000553E38 string=0x0000000000553E3C "?"
 *   insn=0x0000000000553E58 string=0x0000000000553E5C "c0@"
 *   insn=0x0000000000553E5C string=0x0000000000553E60 "`"
 *   insn=0x0000000000553E60 string=0x0000000000553E64 "?"
 *   insn=0x0000000000553E6C string=0x0000000000553E70 "{"
 *   insn=0x0000000000553E7C string=0x0000000000553E80 "c0@"
 *   insn=0x0000000000553E80 string=0x0000000000553E84 "`"
 *   insn=0x0000000000553E98 string=0x0000000000553E9C """
 *   insn=0x0000000000553EA0 string=0x0000000000553EA4 "B"
 *   insn=0x0000000000553F04 string=0x0000000000553F08 "!"
 *   insn=0x0000000000553F08 string=0x0000000000553F0C " "
 *   insn=0x0000000000553F24 string=0x0000000000553F28 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_553A38(__int64 a1, __int64 a2, char a3, __int64 a4, wchar_t a5, signed __int64 a6)
{
  __int64 v10; // x25
  __int64 v11; // x26
  __int64 v12; // x27
  unsigned __int64 v13; // x28
  unsigned int v14; // w19
  unsigned __int64 v15; // x1
  unsigned __int64 v16; // x0
  wchar_t *v17; // x6
  __int64 v18; // x4
  __int64 v19; // x19
  __int64 v21; // x0
  _DWORD *v22; // x19
  wchar_t v23[2]; // [xsp+80h] [xbp-B0h] BYREF
  _DWORD v24[38]; // [xsp+88h] [xbp-A8h] BYREF
  _BYTE v25[16]; // [xsp+120h] [xbp-10h] BYREF
  wchar_t c[2]; // [xsp+198h] [xbp+68h]

  c[0] = a5;
  v10 = sub_53C4D0(&qword_6FD2A8);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !v12 )
  {
    v21 = operator new(0x150u);
    *(_DWORD *)(v21 + 8) = 0;
    *(_QWORD *)v21 = off_6B7C80;
    v22 = (_DWORD *)v21;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
    *(_BYTE *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_QWORD *)(v21 + 56) = 0;
    *(_QWORD *)(v21 + 64) = 0;
    *(_DWORD *)(v21 + 72) = 0;
    *(_DWORD *)(v21 + 76) = 0;
    *(_BYTE *)(v21 + 328) = 0;
    sub_54FE98(v21, a4 + 208);
    sub_53C340(*(_QWORD *)(a4 + 208), v22, v10);
    v12 = *(_QWORD *)(v11 + 8 * v10);
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = (*(_DWORD *)(a4 + 24) & 0x4A) != 8 && (*(_DWORD *)(a4 + 24) & 0x4A) != 64;
  if ( (a6 > 0) >= v14 )
    v15 = a6;
  else
    v15 = -a6;
  LODWORD(v16) = sub_55398C((__int64)v25, v15, v12 + 80, *(_DWORD *)(a4 + 24), v14);
  v17 = &v23[40 - (int)v16];
  if ( *(_BYTE *)(v12 + 32) )
  {
    v16 = (unsigned __int64)((char *)sub_551BB0(
                                       v24,
                                       *(_DWORD *)(v12 + 76),
                                       *(unsigned __int8 **)(v12 + 16),
                                       *(_QWORD *)(v12 + 24),
                                       (unsigned __int64)&v23[40 - (int)v16],
                                       (unsigned __int64)&v17[(int)v16])
                           - (char *)v24) >> 2;
    v17 = v24;
    if ( v14 )
    {
LABEL_8:
      if ( a6 < 0 )
      {
        LODWORD(v16) = v16 + 1;
        *--v17 = *(_DWORD *)(v12 + 80);
      }
      else if ( (v13 & 0x800) != 0 )
      {
        LODWORD(v16) = v16 + 1;
        *--v17 = *(_DWORD *)(v12 + 84);
      }
      goto LABEL_11;
    }
  }
  else if ( v14 )
  {
    goto LABEL_8;
  }
  if ( (v13 & 0x200) != 0 && a6 )
  {
    if ( (v13 & 0x4A) == 0x40 )
    {
      LODWORD(v16) = v16 + 1;
      *--v17 = *(_DWORD *)(v12 + 96);
    }
    else
    {
      v17 -= 2;
      LODWORD(v16) = v16 + 2;
      v17[1] = *(_DWORD *)(v12 + 80 + 4 * (((v13 >> 14) & 1) + 2));
      *v17 = *(_DWORD *)(v12 + 96);
    }
  }
LABEL_11:
  v18 = *(_QWORD *)(a4 + 16);
  v19 = (int)v16;
  if ( v18 > (int)v16 )
  {
    v19 = (int)v18;
    sub_5530A4(a4, c[0], v23, v17, v18, (int)v16);
    v17 = v23;
  }
  *(_QWORD *)(a4 + 16) = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v17, v19);
  return a2;
}

