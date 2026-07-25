/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D488
 * Mangled: sub_54D488
 * Demangled: sub_54D488
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000054D488 string=0x000000000054D48C "A"
 *   insn=0x000000000054D494 string=0x000000000054D498 "!"
 *   insn=0x000000000054D4B4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D488(_QWORD *a1)
{
  *a1 = off_6B7960;
  nullsub_2();
  operator delete(a1);
}

