/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055DDF8
 * Mangled: sub_55DDF8
 * Demangled: sub_55DDF8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F7D8  sub_51F7D8
 *   0x000000000054B018  sub_54B018
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 37
 *   insn=0x000000000055DE14 string=0x000000000055DE18 """
 *   insn=0x000000000055DE2C string=0x000000000055DE30 "B"
 *   insn=0x000000000055DE30 string=0x000000000055DE34 "@"
 *   insn=0x000000000055DE44 string=0x000000000055DE48 "`"
 *   insn=0x000000000055DE48 string=0x000000000055DE4C "`"
 *   insn=0x000000000055DE4C string=0x000000000055DE50 "b"
 *   insn=0x000000000055DE50 string=0x000000000055DE54 "`"
 *   insn=0x000000000055DE54 string=0x000000000055DE58 "c"
 *   insn=0x000000000055DE64 string=0x000000000055DE68 "cR@"
 *   insn=0x000000000055DE68 string=0x000000000055DE6C "d"
 *   insn=0x000000000055DE88 string=0x000000000055DE8C "e"
 *   insn=0x000000000055DE94 string=0x000000000055DE98 "`"
 *   insn=0x000000000055DE98 string=0x000000000055DE9C "U"
 *   insn=0x000000000055DEAC string=0x000000000055DEB0 "J"
 *   insn=0x000000000055DEB8 string=0x000000000055DEF0 "bz@"
 *   insn=0x000000000055DEC8 string=0x000000000055DECC " "
 *   insn=0x000000000055DEE8 string=0x000000000055DEEC "K"
 *   insn=0x000000000055DEF0 string=0x000000000055DEF4 "!"
 *   insn=0x000000000055DEF4 string=0x000000000055DEF8 "_"
 *   insn=0x000000000055DEF8 string=0x000000000055DEFC "a"
 *   insn=0x000000000055DEFC string=0x000000000055DF00 "aN@"
 *   insn=0x000000000055DEFC string=0x000000000055DF28 "bR@"
 *   insn=0x000000000055DF00 string=0x000000000055DF04 "a"
 *   insn=0x000000000055DF04 string=0x000000000055DF08 "a\n"
 *   insn=0x000000000055DF08 string=0x000000000055DF0C "a"
 *   insn=0x000000000055DF18 string=0x000000000055DF1C "!"
 *   insn=0x000000000055DF1C string=0x000000000055DF20 "a"
 *   insn=0x000000000055DF28 string=0x000000000055DF2C "aN@"
 *   insn=0x000000000055DF2C string=0x000000000055DF30 "a"
 *   insn=0x000000000055DF30 string=0x000000000055DF34 "_"
 *   insn=0x000000000055DF34 string=0x000000000055DF38 "a\n"
 *   insn=0x000000000055DF38 string=0x000000000055DF3C "a"
 *   insn=0x000000000055DF40 string=0x000000000055DF44 """
 *   insn=0x000000000055DF44 string=0x000000000055DF48 "a"
 *   insn=0x000000000055DF48 string=0x000000000055DF4C "B"
 *   insn=0x000000000055DF4C string=0x000000000055DF50 "a"
 *   insn=0x000000000055DF50 string=0x000000000055DF54 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55DDF8(__int64 a1, wchar_t *a2, __int64 a3)
{
  int v3; // w3
  __int64 v5; // x0
  _BOOL4 v7; // w21
  __int64 v8; // x2
  __int64 v9; // x0
  unsigned __int64 v10; // x3
  signed __int64 v11; // x21
  signed __int64 v12; // x0
  __int64 v14; // x1
  unsigned __int64 v15; // x2
  __int64 v16; // x1

  v3 = *(_DWORD *)(a1 + 120);
  v5 = *(_QWORD *)(a1 + 200);
  v7 = (v3 & 0x11) != 0;
  if ( !v5 )
    sub_5652C8(0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5) || !v7 || *(_BYTE *)(a1 + 169) )
    return sub_54B018((_QWORD *)a1, a2, a3);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = (*(_QWORD *)(a1 + 48) - v8) >> 2;
  if ( !*(_BYTE *)(a1 + 170) )
  {
    v10 = *(_QWORD *)(a1 + 160);
    if ( v10 >= 2 )
      v9 = v10 - 1;
  }
  if ( v9 > 1023 )
    v9 = 1024;
  if ( v9 > a3 )
    return sub_54B018((_QWORD *)a1, a2, a3);
  v11 = (v8 - *(_QWORD *)(a1 + 32)) >> 2;
  v12 = sub_51F7D8((FILE **)(a1 + 104), *(char **)(a1 + 32), v11, (__int64)a2, a3);
  if ( v12 == v11 + a3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x11) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 160);
      v16 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = v16;
      if ( v15 > 1 )
      {
        *(_QWORD *)(a1 + 40) = v16;
        *(_QWORD *)(a1 + 32) = v16;
        *(_QWORD *)(a1 + 48) = v16 + 4 * v15 - 4;
        goto LABEL_20;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v14;
      *(_QWORD *)(a1 + 24) = v14;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
LABEL_20:
    *(_BYTE *)(a1 + 170) = 1;
  }
  if ( v11 >= v12 )
    return 0;
  else
    return v12 - v11;
}

