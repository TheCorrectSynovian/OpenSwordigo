/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D6C8
 * Mangled: sub_54D6C8
 * Demangled: sub_54D6C8
 *
 * Callers: 1
 *   0x000000000054D5EC  sub_54D5EC
 *
 * Callees: 4
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000054D70C  sub_54D70C
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000054D6C8 string=0x000000000054D6CC "A"
 *   insn=0x000000000054D6D4 string=0x000000000054D6D8 "!@ "
 *   insn=0x000000000054D6F0 string=0x000000000054D6F4 "2"
 *   insn=0x000000000054D6FC string=0x000000000054D700 "/"
 *   insn=0x000000000054D704 string=0x000000000054D708 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D6C8(_QWORD *a1)
{
  *a1 = off_6B7810;
  sub_570744(a1 + 2);
  nullsub_2();
}

