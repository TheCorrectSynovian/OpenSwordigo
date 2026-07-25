/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F2D4
 * Mangled: sub_57F2D4
 * Demangled: sub_57F2D4
 *
 * Callers: 1
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Callees: 1
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Referenced strings: 30
 *   insn=0x000000000057F2D8 string=0x000000000057F2DC "D"
 *   insn=0x000000000057F304 string=0x000000000057F308 "`"
 *   insn=0x000000000057F314 string=0x000000000057F318 "?"
 *   insn=0x000000000057F318 string=0x000000000057F31C "`"
 *   insn=0x000000000057F31C string=0x000000000057F320 " "
 *   insn=0x000000000057F31C string=0x000000000057F388 "b"
 *   insn=0x000000000057F320 string=0x000000000057F324 "`"
 *   insn=0x000000000057F328 string=0x000000000057F32C "bj!8"
 *   insn=0x000000000057F330 string=0x000000000057F334 "b""
 *   insn=0x000000000057F340 string=0x000000000057F344 "a"
 *   insn=0x000000000057F344 string=0x000000000057F348 "?"
 *   insn=0x000000000057F348 string=0x000000000057F34C " "
 *   insn=0x000000000057F34C string=0x000000000057F350 " "
 *   insn=0x000000000057F34C string=0x000000000057F3B0 "b"
 *   insn=0x000000000057F350 string=0x000000000057F354 "`"
 *   insn=0x000000000057F354 string=0x000000000057F358 " "
 *   insn=0x000000000057F358 string=0x000000000057F35C "`j!8`""
 *   insn=0x000000000057F35C string=0x000000000057F360 "`""
 *   insn=0x000000000057F388 string=0x000000000057F38C "c"
 *   insn=0x000000000057F390 string=0x000000000057F394 "`"
 *   insn=0x000000000057F394 string=0x000000000057F398 "b"
 *   insn=0x000000000057F398 string=0x000000000057F39C " "
 *   insn=0x000000000057F3A0 string=0x000000000057F3A4 "B"
 *   insn=0x000000000057F3A4 string=0x000000000057F3A8 "b"
 *   insn=0x000000000057F3B4 string=0x000000000057F3B8 "c"
 *   insn=0x000000000057F3BC string=0x000000000057F3C0 "`"
 *   insn=0x000000000057F3C0 string=0x000000000057F3C4 "b"
 *   insn=0x000000000057F3C4 string=0x000000000057F3C8 " "
 *   insn=0x000000000057F3CC string=0x000000000057F3D0 "B"
 *   insn=0x000000000057F3D0 string=0x000000000057F3D4 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57F2D4(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // w4
  __int64 v6; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 result; // x0
  __int64 v12; // x2
  void (__fastcall *v13)(__int64, __int64, __int64); // x3
  __int64 v14; // x2
  void (__fastcall *v15)(__int64, __int64, __int64); // x3

  v3 = *a3;
  if ( v3 == 48 || v3 <= 1 || v3 == 6 )
    return sub_57A6E8(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 == 255 )
  {
    v12 = *(_QWORD *)(a1 + 280);
    v13 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v13(a1, 255, v12);
    v8 = 1;
    v6 = 0;
    ++*(_QWORD *)(a1 + 312);
  }
  else
  {
    v8 = v6 + 1;
  }
  *(_QWORD *)(a1 + 256) = v8;
  *(_BYTE *)(a1 + v6) = 40;
  *(_BYTE *)(a1 + 264) = 40;
  sub_57A6E8(a1, a2, a3);
  v9 = *(_QWORD *)(a1 + 256);
  if ( v9 == 255 )
  {
    v14 = *(_QWORD *)(a1 + 280);
    v15 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v15(a1, 255, v14);
    v10 = 1;
    v9 = 0;
    ++*(_QWORD *)(a1 + 312);
  }
  else
  {
    v10 = v9 + 1;
  }
  *(_QWORD *)(a1 + 256) = v10;
  result = 41;
  *(_BYTE *)(a1 + v9) = 41;
  *(_BYTE *)(a1 + 264) = 41;
  return result;
}

