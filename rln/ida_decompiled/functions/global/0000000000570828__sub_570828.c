/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570828
 * Mangled: sub_570828
 * Demangled: sub_570828
 *
 * Callers: 4
 *   0x000000000054D884  sub_54D884
 *   0x000000000054D894  sub_54D894
 *   0x000000000054F420  sub_54F420
 *   0x00000000005707C4  sub_5707C4
 *
 * Callees: 4
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x000000000057088C  sub_57088C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000570828 string=0x000000000057082C "A"
 *   insn=0x0000000000570834 string=0x0000000000570838 "!@/"
 *   insn=0x000000000057084C string=0x0000000000570850 "!"
 *   insn=0x0000000000570850 string=0x0000000000570854 "!@"
 *   insn=0x0000000000570854 string=0x0000000000570858 "a"
 *   insn=0x0000000000570870 string=0x0000000000570874 "!"
 *   insn=0x0000000000570874 string=0x0000000000570878 "!@"
 *   insn=0x0000000000570878 string=0x000000000057087C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_570828(_QWORD *a1)
{
  *a1 = off_6DBBD0;
  sub_570744(a1 + 2);
  *a1 = algn_6DB250;
  nullsub_2();
}

