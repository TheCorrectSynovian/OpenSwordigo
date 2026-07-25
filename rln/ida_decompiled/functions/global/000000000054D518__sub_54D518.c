/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D518
 * Mangled: sub_54D518
 * Demangled: sub_54D518
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000054D518 string=0x000000000054D51C "A"
 *   insn=0x000000000054D524 string=0x000000000054D528 "!"
 *   insn=0x000000000054D540 string=0x000000000054D544 "["
 *   insn=0x000000000054D544 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D518(_QWORD *a1)
{
  *a1 = off_6B7B40;
  nullsub_2();
  operator delete(a1);
}

