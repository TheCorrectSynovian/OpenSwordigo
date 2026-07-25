/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FF268
 * Mangled: sub_4FF268
 * Demangled: sub_4FF268
 *
 * Callers: 2
 *   0x00000000004FF07C  sub_4FF07C
 *   0x00000000004FF9D0  sub_4FF9D0
 *
 * Callees: 3
 *   0x0000000000500404  sub_500404
 *   0x00000000005005C8  sub_5005C8
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 22
 *   insn=0x00000000004FF290 string=0x00000000004FF294 "A"
 *   insn=0x00000000004FF29C string=0x00000000004FF2A0 "@"
 *   insn=0x00000000004FF2A0 string=0x00000000004FF2A4 "yi"
 *   insn=0x00000000004FF2A4 string=0x00000000004FF2A8 "\t"
 *   insn=0x00000000004FF2A8 string=0x00000000004FF2AC "?M"
 *   insn=0x00000000004FF2AC string=0x00000000004FF2B0 "a"
 *   insn=0x00000000004FF2C0 string=0x00000000004FF2C4 "("
 *   insn=0x00000000004FF2C4 string=0x00000000004FF2C8 "A"
 *   insn=0x00000000004FF2D4 string=0x00000000004FF2D8 "+"
 *   insn=0x00000000004FF2E0 string=0x00000000004FF2E4 "\n=G86"
 *   insn=0x00000000004FF2E4 string=0x00000000004FF2E8 "6"
 *   insn=0x00000000004FF2E8 string=0x00000000004FF2EC "?"
 *   insn=0x00000000004FF2F0 string=0x00000000004FF2F4 "?"
 *   insn=0x00000000004FF2F8 string=0x00000000004FF2FC "+"
 *   insn=0x00000000004FF304 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FF314 string=0x00000000004FF318 ""
 *   insn=0x00000000004FF318 string=0x00000000004FF31C ")"
 *   insn=0x00000000004FF334 string=0x00000000004FF338 "3"
 *   insn=0x00000000004FF340 string=0x00000000004FF344 "A"
 *   insn=0x00000000004FF348 string=0x00000000004FF34C "("
 *   insn=0x00000000004FF35C string=0x00000000004FF360 ""
 *   insn=0x00000000004FF370 string=0x00000000004FF374 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FF268(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x4
  __int64 v8; // x1
  __int64 v9; // x3
  int v10; // w9
  int v11; // w22
  int v12; // w8
  unsigned int *v13; // x21
  int v14; // t1

  v5 = a1;
  if ( *a2 == 12 )
    goto LABEL_10;
  if ( *a2 != 11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4LL * (int)a2[2]) & 0x3F) != 0x13 )
  {
    v10 = a1[15];
    v11 = v10 + 1;
    if ( v10 >= *(unsigned __int8 *)(*(_QWORD *)a1 + 115LL) )
    {
      if ( v10 >= 249 )
        sub_500968(*((_QWORD *)a1 + 3), "function or expression too complex");
      *(_BYTE *)(*(_QWORD *)a1 + 115LL) = v11;
    }
    a1[15] = v11;
    sub_500404(a1, a2, (unsigned int)v10);
    if ( *a2 != 12 )
    {
      v13 = a2 + 2;
LABEL_14:
      v9 = *v13;
      v8 = 27;
      v6 = 255;
      a1 = v5;
      v7 = a3;
      return sub_5005C8(a1, v8, v6, v9, v7);
    }
LABEL_10:
    v14 = a2[2];
    v13 = a2 + 2;
    v12 = v14;
    if ( (v14 & 0x100) == 0 && v12 >= *((unsigned __int8 *)v5 + 74) )
      --v5[15];
    goto LABEL_14;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4LL * (int)a2[2]) >> 23;
  v7 = a3 == 0;
  v8 = 26;
  --a1[12];
  v9 = 0;
  return sub_5005C8(a1, v8, v6, v9, v7);
}

