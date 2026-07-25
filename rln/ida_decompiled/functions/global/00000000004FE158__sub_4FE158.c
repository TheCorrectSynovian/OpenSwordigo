/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE158
 * Mangled: sub_4FE158
 * Demangled: sub_4FE158
 *
 * Callers: 4
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FE2E8  sub_4FE2E8
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x0000000000500404  sub_500404
 *
 * Callees: 3
 *   0x00000000004EE334  sub_4EE334
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004F4320  sub_4F4320
 *
 * Referenced strings: 37
 *   insn=0x00000000004FE16C string=0x00000000004FE170 "t"
 *   insn=0x00000000004FE170 string=0x00000000004FE174 "h"
 *   insn=0x00000000004FE188 string=0x00000000004FE18C "e"
 *   insn=0x00000000004FE18C string=0x00000000004FE190 "v"
 *   insn=0x00000000004FE194 string=0x00000000004FE198 "W"
 *   insn=0x00000000004FE198 string=0x00000000004FE19C "@"
 *   insn=0x00000000004FE1A4 string=0x00000000004FE1B4 "hB@"
 *   insn=0x00000000004FE1AC string=0x00000000004FE1B0 "I"
 *   insn=0x00000000004FE1B8 string=0x00000000004FE1BC "\t"
 *   insn=0x00000000004FE1C4 string=0x00000000004FE1C8 "iB@"
 *   insn=0x00000000004FE1CC string=0x00000000004FE1D0 "?"
 *   insn=0x00000000004FE1E0 string=0x00000000004FE1E4 "'"
 *   insn=0x00000000004FE1E0 string=0x00000000004FE214 "}@"
 *   insn=0x00000000004FE1E4 string=0x00000000004FE280 "hB"
 *   insn=0x00000000004FE1EC string=0x000000000059A0F2 "constant table overflow"
 *   insn=0x00000000004FE218 string=0x00000000004FE21C "\n"
 *   insn=0x00000000004FE21C string=0x00000000004FE220 "?"
 *   insn=0x00000000004FE220 string=0x00000000004FE224 "_\t"
 *   insn=0x00000000004FE228 string=0x00000000004FE22C "\n"
 *   insn=0x00000000004FE22C string=0x00000000004FE230 "J"
 *   insn=0x00000000004FE230 string=0x00000000004FE234 "_\t"
 *   insn=0x00000000004FE238 string=0x00000000004FE23C "K"
 *   insn=0x00000000004FE238 string=0x00000000004FE268 "\n"
 *   insn=0x00000000004FE240 string=0x00000000004FE244 ")"
 *   insn=0x00000000004FE25C string=0x00000000004FE260 "_"
 *   insn=0x00000000004FE268 string=0x00000000004FE26C "J!"
 *   insn=0x00000000004FE26C string=0x00000000004FE270 ")"
 *   insn=0x00000000004FE270 string=0x00000000004FE274 "?"
 *   insn=0x00000000004FE274 string=0x00000000004FE278 "_"
 *   insn=0x00000000004FE284 string=0x00000000004FE288 ""
 *   insn=0x00000000004FE288 string=0x00000000004FE28C "\t"
 *   insn=0x00000000004FE290 string=0x00000000004FE294 "\t\t"
 *   insn=0x00000000004FE29C string=0x00000000004FE2A0 "K"
 *   insn=0x00000000004FE2A0 string=0x00000000004FE2C8 "`B@"
 *   insn=0x00000000004FE2A4 string=0x00000000004FE2A8 "H$@9"
 *   insn=0x00000000004FE2C8 string=0x00000000004FE2CC ""
 *   insn=0x00000000004FE2CC string=0x00000000004FE2D0 "hB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE158(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // x20
  __int64 *v6; // x0
  __int64 v7; // x22
  int *v8; // x2
  __int64 v9; // x23
  __int64 result; // x0
  int v11; // w8
  int v12; // w8
  __int64 v13; // x0
  __int64 v14; // x9
  unsigned __int64 v15; // x10
  _DWORD *v16; // x12
  unsigned __int64 v17; // x13
  _DWORD *v18; // x10
  __int64 v19; // x8

  v4 = *(_QWORD *)(a1 + 32);
  v6 = sub_4F4320(v4, *(_QWORD *)(a1 + 8), a2);
  v7 = *(_QWORD *)a1;
  v8 = (int *)(*(_QWORD *)a1 + 76LL);
  v9 = *v8;
  if ( *((_DWORD *)v6 + 2) == 3 )
    return (unsigned int)(int)*(double *)v6;
  v11 = *(_DWORD *)(a1 + 64);
  *((_DWORD *)v6 + 2) = 3;
  *(double *)v6 = (double)v11;
  v12 = *(_DWORD *)(v7 + 76);
  if ( *(_DWORD *)(a1 + 64) >= v12 )
  {
    v13 = sub_4EEC70(v4, *(_QWORD *)(v7 + 16), v8, 0x10u, 0x3FFFF, "constant table overflow");
    v12 = *(_DWORD *)(v7 + 76);
    *(_QWORD *)(v7 + 16) = v13;
    if ( (int)v9 >= v12 )
      goto LABEL_14;
LABEL_7:
    v14 = v9 + 1;
    *(_DWORD *)(v13 + 16 * v9 + 8) = 0;
    if ( v9 + 1 < v12 )
    {
      v15 = v12 - 1LL - v9;
      if ( v15 < 2 )
        goto LABEL_12;
      v14 += v15 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (_DWORD *)(v13 + 16 * v9 + 40);
      v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
      do
      {
        *(v16 - 4) = 0;
        *v16 = 0;
        v16 += 8;
        v17 -= 2LL;
      }
      while ( v17 );
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
      {
LABEL_12:
        v18 = (_DWORD *)(v13 + 16 * v14 + 8);
        do
        {
          ++v14;
          *v18 = 0;
          v18 += 4;
        }
        while ( v14 < v12 );
      }
    }
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(v7 + 16);
  if ( (int)v9 < v12 )
    goto LABEL_7;
LABEL_14:
  v19 = v13 + 16LL * *(int *)(a1 + 64);
  *(_QWORD *)v19 = *(_QWORD *)a3;
  *(_DWORD *)(v19 + 8) = a3[2];
  if ( (int)a3[2] >= 4 && (*(_BYTE *)(*(_QWORD *)a3 + 9LL) & 3) != 0 && (*(_BYTE *)(v7 + 9) & 4) != 0 )
    sub_4EE334(v4, v7);
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = result + 1;
  return result;
}

