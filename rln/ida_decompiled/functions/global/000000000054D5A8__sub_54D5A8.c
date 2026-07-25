/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D5A8
 * Mangled: sub_54D5A8
 * Demangled: sub_54D5A8
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000054D5EC  sub_54D5EC
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000054D5A8 string=0x000000000054D5AC "a"
 *   insn=0x000000000054D5B4 string=0x000000000054D5B8 "!@"
 *   insn=0x000000000054D5C0 string=0x000000000054D5C4 "`"
 *   insn=0x000000000054D5D0 string=0x000000000054D5D4 "z"
 *   insn=0x000000000054D5DC string=0x000000000054D5E0 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D5A8(_QWORD *a1)
{
  *a1 = off_6DB210;
  sub_570744(a1 + 2);
  nullsub_2();
}

