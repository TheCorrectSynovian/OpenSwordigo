/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D428
 * Mangled: sub_54D428
 * Demangled: sub_54D428
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053F400  sub_53F400
 *
 * Referenced strings: 3
 *   insn=0x000000000054D428 string=0x000000000054D42C "A"
 *   insn=0x000000000054D434 string=0x000000000054D438 "!@""
 *   insn=0x000000000054D454 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D428(_QWORD *a1)
{
  *a1 = off_6B7890;
  sub_53F400(a1);
  operator delete(a1);
}

