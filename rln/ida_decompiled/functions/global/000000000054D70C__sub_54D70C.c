/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D70C
 * Mangled: sub_54D70C
 * Demangled: sub_54D70C
 *
 * Callers: 1
 *   0x000000000054D6C8  sub_54D6C8
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000054D7E8  sub_54D7E8
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000054D70C string=0x000000000054D710 "A"
 *   insn=0x000000000054D718 string=0x000000000054D71C "!@ "
 *   insn=0x000000000054D724 string=0x000000000054D728 ""
 *   insn=0x000000000054D72C string=0x000000000054D730 "#"
 *   insn=0x000000000054D740 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054D750 string=0x000000000054D754 "\"
 *   insn=0x000000000054D758 string=0x000000000054D75C "A"
 *   insn=0x000000000054D764 string=0x000000000054D768 "!@ "
 *   insn=0x000000000054D78C string=0x000000000054D790 ""
 *   insn=0x000000000054D794 string=0x000000000054D798 "K"
 *   insn=0x000000000054D79C string=0x000000000054D7A0 "A"
 *   insn=0x000000000054D7A8 string=0x000000000054D7AC "!@ "
 *   insn=0x000000000054D7E0 string=0x000000000054D7E4 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D70C(_QWORD *a1)
{
  *a1 = off_6B7810;
  sub_570744(a1 + 2);
  nullsub_2();
  operator delete(a1);
}

