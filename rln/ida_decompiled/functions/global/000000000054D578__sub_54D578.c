/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D578
 * Mangled: sub_54D578
 * Demangled: sub_54D578
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000054D578 string=0x000000000054D57C "A"
 *   insn=0x000000000054D584 string=0x000000000054D588 "!"
 *   insn=0x000000000054D5A0 string=0x000000000054D5A4 "C"
 *   insn=0x000000000054D5A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D578(_QWORD *a1)
{
  *a1 = off_6B7BA0;
  nullsub_2();
  operator delete(a1);
}

