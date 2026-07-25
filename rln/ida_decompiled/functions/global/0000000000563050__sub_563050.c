/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563050
 * Mangled: sub_563050
 * Demangled: sub_563050
 *
 * Callers: 2
 *   0x00000000005713B0  sub_5713B0
 *   0x0000000000571470  sub_571470
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 3
 *   insn=0x0000000000563060 string=0x0000000000563064 "!@"
 *   insn=0x0000000000563084 string=0x0000000000563088 "!"
 *   insn=0x0000000000563088 string=0x000000000056308C "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_563050(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = off_6DB650;
  v2 = a1 + 104;
  sub_562F10(a1);
  sub_51F468(v2);
  *(_QWORD *)a1 = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

