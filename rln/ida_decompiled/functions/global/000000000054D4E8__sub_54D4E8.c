/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D4E8
 * Mangled: sub_54D4E8
 * Demangled: sub_54D4E8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 4
 *   insn=0x000000000054D4E8 string=0x000000000054D4EC "A"
 *   insn=0x000000000054D4F4 string=0x000000000054D4F8 "!"
 *   insn=0x000000000054D510 string=0x000000000054D514 "g"
 *   insn=0x000000000054D514 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D4E8(_QWORD *a1)
{
  *a1 = off_6B7B40;
  nullsub_2();
  operator delete(a1);
}

