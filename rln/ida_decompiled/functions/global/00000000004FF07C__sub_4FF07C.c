/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FF07C
 * Mangled: sub_4FF07C
 * Demangled: sub_4FF07C
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004FF9D0  sub_4FF9D0
 *
 * Callees: 3
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FF268  sub_4FF268
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 49
 *   insn=0x00000000004FF098 string=0x00000000004FF09C "h"
 *   insn=0x00000000004FF09C string=0x00000000004FF0A0 "\t"
 *   insn=0x00000000004FF0A0 string=0x00000000004FF0A4 "?\t"
 *   insn=0x00000000004FF0A8 string=0x00000000004FF1B8 "h"
 *   insn=0x00000000004FF0AC string=0x00000000004FF0B0 "@"
 *   insn=0x00000000004FF0BC string=0x00000000004FF0C0 "i\n"
 *   insn=0x00000000004FF0C0 string=0x00000000004FF0C4 "@"
 *   insn=0x00000000004FF0C4 string=0x00000000004FF0C8 "?"
 *   insn=0x00000000004FF0C8 string=0x00000000004FF0CC "\t\t"
 *   insn=0x00000000004FF0CC string=0x00000000004FF0D0 ""
 *   insn=0x00000000004FF0D0 string=0x00000000004FF0F0 "\t"
 *   insn=0x00000000004FF0D4 string=0x00000000004FF0D8 "I"
 *   insn=0x00000000004FF0DC string=0x00000000004FF0E4 "+"
 *   insn=0x00000000004FF0DC string=0x0000000000599DD1 "`qT`Pql1"
 *   insn=0x00000000004FF0E8 string=0x00000000004FF0EC "K"
 *   insn=0x00000000004FF0F0 string=0x00000000004FF0F4 "\t"
 *   insn=0x00000000004FF0F4 string=0x00000000004FF118 "?"
 *   insn=0x00000000004FF100 string=0x00000000004FF104 "Y"
 *   insn=0x00000000004FF108 string=0x00000000004FF10C "a"
 *   insn=0x00000000004FF10C string=0x00000000004FF110 "*"
 *   insn=0x00000000004FF10C string=0x00000000004FF138 "i"
 *   insn=0x00000000004FF118 string=0x00000000004FF11C "*]"
 *   insn=0x00000000004FF120 string=0x00000000004FF124 "*"
 *   insn=0x00000000004FF124 string=0x00000000004FF128 "\n"
 *   insn=0x00000000004FF128 string=0x00000000004FF12C "`\n@"
 *   insn=0x00000000004FF130 string=0x00000000004FF134 " "
 *   insn=0x00000000004FF138 string=0x00000000004FF13C "?"
 *   insn=0x00000000004FF140 string=0x00000000004FF1B4 "`"
 *   insn=0x00000000004FF148 string=0x00000000004FF14C ""
 *   insn=0x00000000004FF158 string=0x00000000004FF15C "I9H"
 *   insn=0x00000000004FF160 string=0x00000000004FF164 "?"
 *   insn=0x00000000004FF164 string=0x00000000004FF168 "i"
 *   insn=0x00000000004FF168 string=0x00000000004FF16C "?"
 *   insn=0x00000000004FF16C string=0x00000000004FF170 "!"
 *   insn=0x00000000004FF180 string=0x00000000004FF184 "?"
 *   insn=0x00000000004FF190 string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FF1A0 string=0x00000000004FF1A4 ")9"
 *   insn=0x00000000004FF1A4 string=0x00000000004FF1A8 "\t5"
 *   insn=0x00000000004FF1C4 string=0x00000000004FF1C8 " "
 *   insn=0x00000000004FF1C8 string=0x00000000004FF24C ""
 *   insn=0x00000000004FF1CC string=0x00000000004FF1D0 "_"
 *   insn=0x00000000004FF1E0 string=0x00000000004FF1E4 "5@"
 *   insn=0x00000000004FF1EC string=0x00000000004FF1F0 "j9I"
 *   insn=0x00000000004FF1F4 string=0x00000000004FF1F8 "_"
 *   insn=0x00000000004FF1FC string=0x00000000004FF200 "_"
 *   insn=0x00000000004FF200 string=0x00000000004FF204 "!"
 *   insn=0x00000000004FF234 string=0x00000000004FF238 "9"
 *   insn=0x00000000004FF238 string=0x00000000004FF23C "(5"
 *   insn=0x00000000004FF24C string=0x00000000004FF250 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FF07C(__int64 a1, int *a2)
{
  __int64 result; // x0
  int v5; // w8
  __int64 v6; // x9
  unsigned int *v7; // x8
  unsigned int v8; // w9
  int v9; // w9
  __int64 v10; // x21
  int v11; // w12
  unsigned int v12; // w8
  int v13; // w23
  int v14; // w9
  int v15; // w8
  int v16; // w10
  __int64 v17; // x21
  int v18; // w13
  unsigned int v19; // w9
  int v20; // w23
  int v21; // w8

  result = sub_4FE488(a1, a2);
  v5 = *a2;
  if ( (unsigned int)(*a2 - 4) < 2 || v5 == 2 )
    goto LABEL_24;
  if ( v5 == 10 )
  {
    v6 = a2[2];
    v7 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4 * v6);
    if ( (int)v6 >= 1 && (v8 = *(v7 - 1), (char)byte_599DD1[v8 & 0x3F] < 0) )
      --v7;
    else
      v8 = *v7;
    *v7 = v8 & 0xFFFFC03F | (((v8 & 0x3FC0) == 0) << 6);
    result = (unsigned int)a2[2];
    if ( (_DWORD)result == -1 )
      goto LABEL_24;
  }
  else
  {
    result = sub_4FF268(a1, a2, 0);
    if ( (_DWORD)result == -1 )
      goto LABEL_24;
  }
  v9 = a2[5];
  if ( v9 == -1 )
  {
    a2[5] = result;
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    do
    {
      v11 = v9;
      v12 = *(_DWORD *)(v10 + 4LL * v9);
      if ( v12 >> 14 == 131070 )
        v9 = -1;
      else
        v9 += (v12 >> 14) - 0x1FFFF + 1;
    }
    while ( v9 != -1 );
    v13 = result + ~v11;
    if ( v13 >= 0 )
      v14 = result + ~v11;
    else
      v14 = -v13;
    if ( v14 >= 0x20000 )
      sub_500968(*(_QWORD *)(a1 + 24), "control structure too long");
    *(_DWORD *)(v10 + 4LL * v11) = ((v13 << 14) + 2147467264) & 0xFFFFC000 | v12 & 0x3FFF;
  }
LABEL_24:
  v15 = a2[4];
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 48);
  if ( v15 != -1 )
  {
    v16 = *(_DWORD *)(a1 + 56);
    if ( v16 == -1 )
    {
      *(_DWORD *)(a1 + 56) = v15;
    }
    else
    {
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      do
      {
        v18 = v16;
        v19 = *(_DWORD *)(v17 + 4LL * v16);
        if ( v19 >> 14 == 131070 )
          v16 = -1;
        else
          v16 += (v19 >> 14) - 0x1FFFF + 1;
      }
      while ( v16 != -1 );
      v20 = v15 + ~v18;
      if ( v20 >= 0 )
        v21 = v15 + ~v18;
      else
        v21 = -v20;
      if ( v21 >= 0x20000 )
        sub_500968(*(_QWORD *)(a1 + 24), "control structure too long");
      *(_DWORD *)(v17 + 4LL * v18) = ((v20 << 14) + 2147467264) & 0xFFFFC000 | v19 & 0x3FFF;
    }
  }
  a2[4] = -1;
  return result;
}

