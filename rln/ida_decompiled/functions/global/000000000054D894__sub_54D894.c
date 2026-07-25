/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D894
 * Mangled: sub_54D894
 * Demangled: sub_54D894
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000570828  sub_570828
 *
 * Referenced strings: 4
 *   insn=0x000000000054D894 string=0x000000000054D898 "a"
 *   insn=0x000000000054D8A0 string=0x000000000054D8A4 "!"
 *   insn=0x000000000054D8BC string=0x000000000054D8C0 "|"
 *   insn=0x000000000054D8C0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D894(_QWORD *a1)
{
  *a1 = off_6DB2B0;
  sub_570828();
  operator delete(a1);
}

