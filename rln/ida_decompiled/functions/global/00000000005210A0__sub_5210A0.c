/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005210A0
 * Mangled: sub_5210A0
 * Demangled: sub_5210A0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000521E3C  sub_521E3C
 *
 * Referenced strings: 2
 *   insn=0x00000000005210AC string=0x00000000005210B0 "c"
 *   insn=0x00000000005210C0 string=0x00000000005210C4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_5210A0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // x0

  sub_521E3C(a1);
  *(_QWORD *)(a1 + 216) = 0;
  result = off_6B6B30;
  *(_BYTE *)(a1 + 224) = 0;
  *(_QWORD *)a1 = off_6B6B30;
  *(_BYTE *)(a1 + 225) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  return result;
}

