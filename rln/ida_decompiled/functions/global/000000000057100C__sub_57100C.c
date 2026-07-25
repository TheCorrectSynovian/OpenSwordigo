/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057100C
 * Mangled: sub_57100C
 * Demangled: sub_57100C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000571014 string=0x0000000000571018 "!"
 *   insn=0x000000000057101C string=0x0000000000571020 "!@"
 *   insn=0x000000000057102C string=0x0000000000571030 "`"
 *   insn=0x0000000000571030 string=0x0000000000571034 ""
 *   insn=0x000000000057103C string=0x0000000000571040 "!"
 *   insn=0x0000000000571040 string=0x0000000000571044 "!@"
 *   insn=0x000000000057105C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000571060 string=0x0000000000571064 "`"
 *   insn=0x0000000000571070 string=0x0000000000571074 "!"
 *   insn=0x0000000000571074 string=0x0000000000571078 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_57100C(unsigned int **a1)
{
  *a1 = (unsigned int *)off_6DB650;
  sub_562F10((__int64)a1);
  sub_51F468((__int64)(a1 + 13));
  *a1 = (unsigned int *)off_6B7790;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

