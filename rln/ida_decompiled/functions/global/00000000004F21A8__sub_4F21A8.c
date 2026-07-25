/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F21A8
 * Mangled: sub_4F21A8
 * Demangled: sub_4F21A8
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F17E0  sub_4F17E0
 *
 * Callees: 4
 *   0x00000000004EE334  sub_4EE334
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000005007A0  sub_5007A0
 *
 * Referenced strings: 46
 *   insn=0x00000000004F21D4 string=0x00000000004F21D8 ""
 *   insn=0x00000000004F21F0 string=0x00000000004F21F4 "A"
 *   insn=0x00000000004F21F0 string=0x00000000004F2210 "A"
 *   insn=0x00000000004F21F4 string=0x00000000004F21F8 "D"
 *   insn=0x00000000004F21F4 string=0x000000000059A08F "function at line %d has more than %d %s"
 *   insn=0x00000000004F21F8 string=0x00000000004F21FC "!<"
 *   insn=0x00000000004F21F8 string=0x000000000059A0C5 "local variables"
 *   insn=0x00000000004F2204 string=0x00000000004F2208 "s"
 *   insn=0x00000000004F2208 string=0x00000000004F220C ""
 *   insn=0x00000000004F2210 string=0x00000000004F2214 "C"
 *   insn=0x00000000004F2210 string=0x000000000059A06D "main function has more than %d %s"
 *   insn=0x00000000004F2214 string=0x00000000004F2218 "!"
 *   insn=0x00000000004F2218 string=0x00000000004F221C "c"
 *   insn=0x00000000004F2220 string=0x00000000004F2224 "l"
 *   insn=0x00000000004F2230 string=0x00000000004F2234 "[9"
 *   insn=0x00000000004F2240 string=0x00000000004F2244 "Y"
 *   insn=0x00000000004F2244 string=0x00000000004F2248 ""
 *   insn=0x00000000004F2248 string=0x00000000004F224C "?"
 *   insn=0x00000000004F2258 string=0x00000000004F225C "?"
 *   insn=0x00000000004F2260 string=0x00000000004F2264 "'"
 *   insn=0x00000000004F2260 string=0x00000000004F2294 ","
 *   insn=0x00000000004F2264 string=0x00000000004F2300 ""
 *   insn=0x00000000004F226C string=0x00000000004F2270 "E"
 *   insn=0x00000000004F2270 string=0x000000000059A0BC "too many local variables"
 *   insn=0x00000000004F227C string=0x00000000004F2280 "|"
 *   insn=0x00000000004F2288 string=0x00000000004F228C "?"
 *   insn=0x00000000004F2294 string=0x00000000004F2298 "}@"
 *   insn=0x00000000004F22A0 string=0x00000000004F22A4 "?"
 *   insn=0x00000000004F22AC string=0x00000000004F22B0 "\n"
 *   insn=0x00000000004F22B0 string=0x00000000004F22B4 "J"
 *   insn=0x00000000004F22B4 string=0x00000000004F22B8 "_\t"
 *   insn=0x00000000004F22BC string=0x00000000004F22C0 "K"
 *   insn=0x00000000004F22BC string=0x00000000004F22EC "\n"
 *   insn=0x00000000004F22C4 string=0x00000000004F22C8 ")"
 *   insn=0x00000000004F22E0 string=0x00000000004F22E4 "_"
 *   insn=0x00000000004F22EC string=0x00000000004F22F0 ""
 *   insn=0x00000000004F22F0 string=0x00000000004F22F4 ""
 *   insn=0x00000000004F22F4 string=0x00000000004F22F8 "_"
 *   insn=0x00000000004F2300 string=0x00000000004F2304 "\t"
 *   insn=0x00000000004F230C string=0x00000000004F2310 "="
 *   insn=0x00000000004F2310 string=0x00000000004F2314 "?"
 *   insn=0x00000000004F2318 string=0x00000000004F2338 "\t"
 *   insn=0x00000000004F2330 string=0x00000000004F2334 ""
 *   insn=0x00000000004F2338 string=0x00000000004F233C "\t"
 *   insn=0x00000000004F2340 string=0x00000000004F2344 ")"
 *   insn=0x00000000004F2348 string=0x00000000004F234C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F21A8(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // x23
  _QWORD *v7; // x0
  int v8; // w2
  __int64 v9; // x0
  __int64 v10; // x22
  int v11; // w25
  __int64 result; // x0
  int v13; // w8
  __int64 v14; // x9
  unsigned __int64 v15; // x10
  _QWORD *v16; // x12
  unsigned __int64 v17; // x13
  _QWORD *v18; // x10
  __int64 v19; // x8
  __int64 v20; // x8

  v4 = *(_QWORD *)(a1 + 48);
  if ( *(unsigned __int8 *)(v4 + 74) + a3 >= 200 )
  {
    v7 = *(_QWORD **)(v4 + 32);
    v8 = *(_DWORD *)(*(_QWORD *)v4 + 96LL);
    if ( v8 )
      v9 = sub_4EF3D4(v7, "function at line %d has more than %d %s", v8, 200, "local variables");
    else
      v9 = sub_4EF3D4(v7, "main function has more than %d %s", 200, "local variables");
    sub_5007A0(*(_QWORD *)(v4 + 24), v9, 0);
  }
  v10 = *(_QWORD *)v4;
  v11 = *(_DWORD *)(*(_QWORD *)v4 + 92LL);
  if ( v11 <= *(__int16 *)(v4 + 72) )
  {
    result = sub_4EEC70(
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(v10 + 48),
               (int *)(*(_QWORD *)v4 + 92LL),
               0x10u,
               0x7FFF,
               "too many local variables");
    v13 = *(_DWORD *)(v10 + 92);
    *(_QWORD *)(v10 + 48) = result;
    if ( v11 < v13 )
    {
      v14 = v11 + 1LL;
      *(_QWORD *)(result + 16LL * v11) = 0;
      if ( v14 < v13 )
      {
        v15 = v13 - 1LL - v11;
        if ( v15 < 2 )
          goto LABEL_14;
        v14 += v15 & 0xFFFFFFFFFFFFFFFELL;
        v16 = (_QWORD *)(result + 16LL * v11 + 32);
        v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
        do
        {
          *(v16 - 2) = 0;
          *v16 = 0;
          v16 += 4;
          v17 -= 2LL;
        }
        while ( v17 );
        if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
        {
LABEL_14:
          v18 = (_QWORD *)(result + 16 * v14);
          v19 = v13 - v14;
          do
          {
            --v19;
            *v18 = 0;
            v18 += 2;
          }
          while ( v19 );
        }
      }
    }
  }
  else
  {
    result = *(_QWORD *)(v10 + 48);
  }
  v20 = *(__int16 *)(v4 + 72);
  *(_QWORD *)(result + 16 * v20) = a2;
  if ( (*(_BYTE *)(a2 + 9) & 3) != 0 && (*(_BYTE *)(v10 + 9) & 4) != 0 )
  {
    result = sub_4EE334(*(_QWORD *)(a1 + 56), v10);
    LOWORD(v20) = *(_WORD *)(v4 + 72);
  }
  *(_WORD *)(v4 + 72) = v20 + 1;
  *(_WORD *)(v4 + 2LL * (*(unsigned __int8 *)(v4 + 74) + a3) + 196) = v20;
  return result;
}

