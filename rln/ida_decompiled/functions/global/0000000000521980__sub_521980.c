/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521980
 * Mangled: sub_521980
 * Demangled: sub_521980
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000521E3C  sub_521E3C
 *
 * Referenced strings: 2
 *   insn=0x000000000052198C string=0x0000000000521990 "+"
 *   insn=0x00000000005219A0 string=0x00000000005219A4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_521980(__int64 a1))()
{
  __int64 (__fastcall **result)(); // x0

  sub_521E3C(a1);
  *(_QWORD *)(a1 + 216) = 0;
  result = off_6B6B50;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)a1 = off_6B6B50;
  *(_BYTE *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  return result;
}

