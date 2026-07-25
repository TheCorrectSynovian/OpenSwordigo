/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056309C
 * Mangled: sub_56309C
 * Demangled: sub_56309C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 5
 *   insn=0x00000000005630AC string=0x00000000005630B0 "!@"
 *   insn=0x00000000005630CC string=0x00000000005630D0 "!"
 *   insn=0x00000000005630D0 string=0x00000000005630D4 "!@"
 *   insn=0x00000000005630E8 string=0x00000000005630EC "qP"
 *   insn=0x00000000005630EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56309C(unsigned int **a1)
{
  __int64 v2; // x20

  *a1 = (unsigned int *)off_6DB650;
  v2 = (__int64)(a1 + 13);
  sub_562F10((__int64)a1);
  sub_51F468(v2);
  *a1 = (unsigned int *)off_6B7790;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

