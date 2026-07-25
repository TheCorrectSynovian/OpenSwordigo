/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D548
 * Mangled: sub_54D548
 * Demangled: sub_54D548
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000054D548 string=0x000000000054D54C "A"
 *   insn=0x000000000054D554 string=0x000000000054D558 "!"
 *   insn=0x000000000054D570 string=0x000000000054D574 "O"
 *   insn=0x000000000054D574 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D548(_QWORD *a1)
{
  *a1 = off_6B7BA0;
  nullsub_2();
  operator delete(a1);
}

