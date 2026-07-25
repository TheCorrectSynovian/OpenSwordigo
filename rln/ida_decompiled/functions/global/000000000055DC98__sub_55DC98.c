/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055DC98
 * Mangled: sub_55DC98
 * Demangled: sub_55DC98
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F7D8  sub_51F7D8
 *   0x000000000054AE74  sub_54AE74
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 39
 *   insn=0x000000000055DCB4 string=0x000000000055DCB8 """
 *   insn=0x000000000055DCC4 string=0x000000000055DDF4 "5"
 *   insn=0x000000000055DCCC string=0x000000000055DCD0 "B"
 *   insn=0x000000000055DCD0 string=0x000000000055DCD4 "@"
 *   insn=0x000000000055DCE0 string=0x000000000055DCE4 "u"
 *   insn=0x000000000055DCE4 string=0x000000000055DCE8 "`"
 *   insn=0x000000000055DCE8 string=0x000000000055DCEC " "
 *   insn=0x000000000055DCEC string=0x000000000055DCF0 "c"
 *   insn=0x000000000055DCF0 string=0x000000000055DCF4 "b"
 *   insn=0x000000000055DCF4 string=0x000000000055DCF8 "`"
 *   insn=0x000000000055DD00 string=0x000000000055DD04 "cR@"
 *   insn=0x000000000055DD04 string=0x000000000055DD08 "d"
 *   insn=0x000000000055DD20 string=0x000000000055DD24 "l"
 *   insn=0x000000000055DD24 string=0x000000000055DD28 "e"
 *   insn=0x000000000055DD30 string=0x000000000055DD34 "`"
 *   insn=0x000000000055DD34 string=0x000000000055DD38 "U"
 *   insn=0x000000000055DD50 string=0x000000000055DD88 "bz@"
 *   insn=0x000000000055DD60 string=0x000000000055DD64 " "
 *   insn=0x000000000055DD80 string=0x000000000055DD84 "<"
 *   insn=0x000000000055DD88 string=0x000000000055DD8C "!"
 *   insn=0x000000000055DD8C string=0x000000000055DD90 "_"
 *   insn=0x000000000055DD90 string=0x000000000055DD94 "a"
 *   insn=0x000000000055DD94 string=0x000000000055DD98 "aN@"
 *   insn=0x000000000055DD94 string=0x000000000055DDC0 "bR@"
 *   insn=0x000000000055DD98 string=0x000000000055DD9C "a"
 *   insn=0x000000000055DD9C string=0x000000000055DDA0 "a\n"
 *   insn=0x000000000055DDA0 string=0x000000000055DDA4 "a"
 *   insn=0x000000000055DDB0 string=0x000000000055DDB4 "!"
 *   insn=0x000000000055DDB4 string=0x000000000055DDB8 "a"
 *   insn=0x000000000055DDC0 string=0x000000000055DDC4 "aN@"
 *   insn=0x000000000055DDC4 string=0x000000000055DDC8 "a"
 *   insn=0x000000000055DDC8 string=0x000000000055DDCC "_"
 *   insn=0x000000000055DDCC string=0x000000000055DDD0 "a\n"
 *   insn=0x000000000055DDD0 string=0x000000000055DDD4 "a"
 *   insn=0x000000000055DDD8 string=0x000000000055DDDC "B"
 *   insn=0x000000000055DDDC string=0x000000000055DDE0 "a"
 *   insn=0x000000000055DDE0 string=0x000000000055DDE4 """
 *   insn=0x000000000055DDE4 string=0x000000000055DDE8 "a"
 *   insn=0x000000000055DDE8 string=0x000000000055DDEC "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55DC98(__int64 a1, unsigned __int8 *a2, __int64 a3)
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
    return sub_54AE74((_QWORD *)a1, a2, a3);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 48) - v8;
  if ( !*(_BYTE *)(a1 + 170) )
  {
    v10 = *(_QWORD *)(a1 + 160);
    if ( v10 >= 2 )
      v9 = v10 - 1;
  }
  if ( v9 > 1023 )
    v9 = 1024;
  if ( v9 > a3 )
    return sub_54AE74((_QWORD *)a1, a2, a3);
  v11 = v8 - *(_QWORD *)(a1 + 32);
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
        *(_QWORD *)(a1 + 48) = v16 + v15 - 1;
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

