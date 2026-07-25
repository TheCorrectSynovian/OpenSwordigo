/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005708F8
 * Mangled: sub_5708F8
 * Demangled: sub_5708F8
 *
 * Callers: 1
 *   0x000000000057088C  sub_57088C
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x0000000000570964  sub_570964
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000005708F8 string=0x00000000005708FC "A\n"
 *   insn=0x0000000000570904 string=0x0000000000570908 "!"
 *   insn=0x000000000057091C string=0x0000000000570920 "!$F"
 *   insn=0x0000000000570920 string=0x0000000000570924 "!@"
 *   insn=0x0000000000570924 string=0x0000000000570928 "a"
 *   insn=0x0000000000570938 string=0x000000000057093C "]"
 *   insn=0x000000000057093C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000570948 string=0x000000000057094C "!$F"
 *   insn=0x000000000057094C string=0x0000000000570950 "!@"
 *   insn=0x0000000000570950 string=0x0000000000570954 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5708F8(_QWORD *a1)
{
  *a1 = off_6B8140;
  sub_570744(a1 + 2);
  *a1 = &unk_6DA2A0;
  nullsub_2();
  operator delete(a1);
}

