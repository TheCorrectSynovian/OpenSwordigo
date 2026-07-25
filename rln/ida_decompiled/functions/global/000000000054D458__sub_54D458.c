/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D458
 * Mangled: sub_54D458
 * Demangled: sub_54D458
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 3
 *   insn=0x000000000054D458 string=0x000000000054D45C "A"
 *   insn=0x000000000054D464 string=0x000000000054D468 "!"
 *   insn=0x000000000054D484 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D458(_QWORD *a1)
{
  *a1 = off_6B78E0;
  nullsub_2();
  operator delete(a1);
}

