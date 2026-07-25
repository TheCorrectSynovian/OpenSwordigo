/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545DD0
 * Mangled: sub_545DD0
 * Demangled: sub_545DD0
 *
 * Callers: 1
 *   0x0000000000545D04  sub_545D04
 *
 * Callees: 8
 *   0x0000000000203ED0  sub_203ED0
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567BD4  sub_567BD4
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x0000000000545DF0 string=0x0000000000545DF4 "?"
 *   insn=0x0000000000545DF4 string=0x0000000000545DF8 "`"
 *   insn=0x0000000000545DF8 string=0x0000000000545DFC "`&@"
 *   insn=0x0000000000545E00 string=0x0000000000545E04 "b"
 *   insn=0x0000000000545E04 string=0x0000000000545E08 "!"
 *   insn=0x0000000000545E08 string=0x0000000000545E0C "c"
 *   insn=0x0000000000545E20 string=0x0000000000545E24 "?"
 *   insn=0x0000000000545E24 string=0x0000000000545E28 "("
 *   insn=0x0000000000545E2C string=0x0000000000545E30 "b"
 *   insn=0x0000000000545E30 string=0x0000000000545E34 "w"
 *   insn=0x0000000000545E34 string=0x0000000000545E38 "a"
 *   insn=0x0000000000545E3C string=0x0000000000545E40 "!"
 *   insn=0x0000000000545E40 string=0x0000000000545E44 "a"
 *   insn=0x0000000000545E60 string=0x0000000000545E64 "h"
 *   insn=0x0000000000545E7C string=0x0000000000545E80 "B`"
 *   insn=0x0000000000545E88 string=0x0000000000545E8C "a"
 *   insn=0x0000000000545E90 string=0x0000000000545E94 "b"
 *   insn=0x0000000000545E98 string=0x0000000000545E9C "B"
 *   insn=0x0000000000545EAC string=0x0000000000545EB0 "8"
 *   insn=0x0000000000545EBC string=0x0000000000545EC0 "_"
 *   insn=0x0000000000545ECC string=0x0000000000545ED0 "n"
 *   insn=0x0000000000545EE8 string=0x0000000000545EEC "_"
 *   insn=0x0000000000545EF0 string=0x0000000000545EF4 "`""
 *   insn=0x0000000000545EF8 string=0x0000000000545EFC "6"
 *   insn=0x0000000000545EFC string=0x0000000000545F00 "a"
 *   insn=0x0000000000545F04 string=0x0000000000545F08 "b\n@"
 *   insn=0x0000000000545F08 string=0x0000000000545F0C "d"
 *   insn=0x0000000000545F0C string=0x0000000000545F10 "c"
 *   insn=0x0000000000545F10 string=0x0000000000545F14 "B"
 *   insn=0x0000000000545F14 string=0x0000000000545F18 "a&@"
 *   insn=0x0000000000545F1C string=0x0000000000545F20 ""
 *   insn=0x0000000000545F2C string=0x0000000000545F30 "?"
 *   insn=0x0000000000545F30 string=0x0000000000545F34 " "
 *   insn=0x0000000000545F38 string=0x0000000000545F3C "B<G"
 *   insn=0x0000000000545F48 string=0x0000000000545F4C "C"
 *   insn=0x0000000000545F54 string=0x0000000000545F58 "_"
 *   insn=0x0000000000545F74 string=0x0000000000545F78 """
 *   insn=0x0000000000545F7C string=0x0000000000545F80 "!"
 *   insn=0x0000000000545F80 string=0x0000000000545F84 "h"
 *   insn=0x0000000000545FBC string=0x0000000000545FC0 "C"
 *   insn=0x0000000000545FDC string=0x0000000000545FE0 "`"
 *   insn=0x0000000000545FEC string=0x0000000000545FF0 "5"
 *   insn=0x0000000000546000 string=0x0000000000546004 "?"
 *   insn=0x0000000000546008 string=0x000000000054600C "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545DD0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // x2
  _BYTE *v5; // x3
  __int64 v6; // x0
  unsigned int v7; // w2
  __int64 result; // x0
  unsigned __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  char *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x24
  char *v15; // x0
  char *v16; // x1
  unsigned int *v17; // x0
  int v18; // w2
  char *v19; // [xsp+48h] [xbp+48h] BYREF

  if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  if ( a2 != -1 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(_BYTE **)(a1 + 40);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 72) - 16LL);
    v7 = (unsigned __int64)v5 < v4;
    if ( (v6 == 0x3FFFFFFFFFFFFFF9LL) <= v7 )
    {
      if ( v7 )
      {
        *v5 = a2;
LABEL_6:
        result = a2;
        ++*(_QWORD *)(a1 + 40);
        return result;
      }
      v9 = 2 * v6;
      if ( v9 > 0x1FF )
      {
        v10 = 0x3FFFFFFFFFFFFFF9LL;
        if ( v9 > 0x3FFFFFFFFFFFFFF9LL )
          goto LABEL_10;
      }
      else
      {
        v9 = 512;
      }
      v10 = v9;
LABEL_10:
      v19 = &byte_6FD2F8;
      sub_567088(&v19, v10);
      v11 = *(_QWORD *)(a1 + 32);
      if ( v11 )
        sub_56918C(&v19, v11, *(_QWORD *)(a1 + 48) - v11);
      v12 = v19;
      v13 = *((_QWORD *)v19 - 3);
      v14 = v13 + 1;
      if ( (unsigned __int64)(v13 + 1) > *((_QWORD *)v19 - 2) || *((int *)v19 - 2) > 0 )
      {
        sub_567088(&v19, v13 + 1);
        v12 = v19;
        v13 = *((_QWORD *)v19 - 3);
      }
      v12[v13] = a2;
      v15 = v19;
      if ( v19 - 24 != (char *)&qword_6FD2E0 )
      {
        *((_DWORD *)v19 - 2) = 0;
        *((_QWORD *)v15 - 3) = v14;
        v15[v14] = 0;
      }
      sub_567BD4(a1 + 72);
      sub_545B8C(
        a1,
        *(_QWORD *)(a1 + 72),
        *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8),
        *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32));
      v16 = v19 - 24;
      if ( v19 - 24 != (char *)&qword_6FD2E0 )
      {
        if ( &pthread_create )
        {
          v17 = (unsigned int *)(v19 - 8);
          do
            v18 = __ldaxr(v17);
          while ( __stlxr(v18 - 1, v17) );
        }
        else
        {
          v18 = *((_DWORD *)v19 - 2);
          *((_DWORD *)v19 - 2) = v18 - 1;
        }
        if ( v18 <= 0 )
          operator delete(v16);
      }
      goto LABEL_6;
    }
    return 0xFFFFFFFFLL;
  }
  return 0;
}

