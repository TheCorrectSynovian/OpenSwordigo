/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057253C
 * Mangled: sub_57253C
 * Demangled: sub_57253C
 *
 * Callers: 1
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x0000000000572544 string=0x0000000000572548 "4"
 *   insn=0x0000000000572550 string=0x0000000000572554 "?"
 *   insn=0x0000000000572558 string=0x000000000057255C " "
 *   insn=0x000000000057255C string=0x0000000000572560 "`"
 *   insn=0x0000000000572560 string=0x0000000000572564 "tj!8t""
 *   insn=0x0000000000572564 string=0x0000000000572568 "t""
 *   insn=0x0000000000572580 string=0x0000000000572584 "`"
 *   insn=0x0000000000572584 string=0x0000000000572588 "b"
 *   insn=0x000000000057258C string=0x0000000000572590 " "
 *   insn=0x0000000000572590 string=0x0000000000572594 "`"
 *   insn=0x0000000000572594 string=0x0000000000572598 "B"
 *   insn=0x0000000000572598 string=0x000000000057259C "b"
 *   insn=0x000000000057259C string=0x00000000005725A0 "tj!8t""
 *   insn=0x00000000005725A0 string=0x00000000005725A4 "t""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57253C(__int64 a1, char a2)
{
  __int64 v3; // x1
  __int64 result; // x0
  void (__fastcall *v6)(__int64, __int64, __int64); // x3
  __int64 v7; // x2
  __int64 v8; // x2

  v3 = *(_QWORD *)(a1 + 256);
  if ( v3 == 255 )
  {
    v6 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    v7 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 255) = 0;
    v6(a1, 255, v7);
    v8 = *(_QWORD *)(a1 + 312);
    result = 1;
    *(_QWORD *)(a1 + 256) = 1;
    *(_QWORD *)(a1 + 312) = v8 + 1;
    *(_BYTE *)a1 = a2;
  }
  else
  {
    result = v3 + 1;
    *(_QWORD *)(a1 + 256) = v3 + 1;
    *(_BYTE *)(a1 + v3) = a2;
  }
  *(_BYTE *)(a1 + 264) = a2;
  return result;
}

