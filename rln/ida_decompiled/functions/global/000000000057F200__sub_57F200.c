/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F200
 * Mangled: sub_57F200
 * Demangled: sub_57F200
 *
 * Callers: 1
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Callees: 1
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Referenced strings: 20
 *   insn=0x000000000057F204 string=0x000000000057F208 "D"
 *   insn=0x000000000057F220 string=0x000000000057F238 "@"
 *   insn=0x000000000057F230 string=0x000000000057F234 "-"
 *   insn=0x000000000057F244 string=0x000000000057F248 "a"
 *   insn=0x000000000057F24C string=0x000000000057F250 ""
 *   insn=0x000000000057F250 string=0x000000000057F270 "?"
 *   insn=0x000000000057F254 string=0x000000000057F258 "a"
 *   insn=0x000000000057F25C string=0x000000000057F260 "uj 8"
 *   insn=0x000000000057F264 string=0x000000000057F268 "u""
 *   insn=0x000000000057F27C string=0x000000000057F280 "b"
 *   insn=0x000000000057F27C string=0x000000000057F254 "!"
 *   insn=0x000000000057F284 string=0x000000000057F288 "c"
 *   insn=0x000000000057F290 string=0x000000000057F294 "`"
 *   insn=0x000000000057F294 string=0x000000000057F298 "b"
 *   insn=0x000000000057F29C string=0x000000000057F2A0 "!"
 *   insn=0x000000000057F2A0 string=0x000000000057F2A4 "a"
 *   insn=0x000000000057F2A4 string=0x000000000057F2A8 "B"
 *   insn=0x000000000057F2A8 string=0x000000000057F2AC "b"
 *   insn=0x000000000057F2AC string=0x000000000057F2B0 "uj 8"
 *   insn=0x000000000057F2B4 string=0x000000000057F2B8 "u""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57F200(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x1
  __int64 v8; // x20
  char v9; // w21
  __int64 v10; // x2
  void (__fastcall *v11)(__int64, __int64, __int64); // x3
  __int64 v12; // x2

  if ( *(_DWORD *)a3 != 49 )
    return sub_57A6E8(a1, a2, (unsigned int *)a3);
  result = *(_QWORD *)(a3 + 8);
  v5 = *(int *)(result + 16);
  v6 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)(result + 16) )
  {
    v7 = *(_QWORD *)(a1 + 256);
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *(_BYTE *)(v6 + v8);
        result = v7;
        if ( v7 == 255 )
          break;
        *(_QWORD *)(a1 + 256) = ++v7;
        ++v8;
        *(_BYTE *)(a1 + result) = v9;
        *(_BYTE *)(a1 + 264) = v9;
        if ( v5 == v8 )
          return result;
      }
      v10 = *(_QWORD *)(a1 + 280);
      v11 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      ++v8;
      *(_BYTE *)(a1 + 255) = 0;
      v11(a1, 255, v10);
      v12 = *(_QWORD *)(a1 + 312);
      result = 0;
      v7 = 1;
      *(_QWORD *)(a1 + 256) = 1;
      *(_QWORD *)(a1 + 312) = v12 + 1;
      *(_BYTE *)a1 = v9;
      *(_BYTE *)(a1 + 264) = v9;
    }
    while ( v5 != v8 );
  }
  return result;
}

