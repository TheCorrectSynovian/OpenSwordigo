/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057088C
 * Mangled: sub_57088C
 * Demangled: sub_57088C
 *
 * Callers: 1
 *   0x0000000000570828  sub_570828
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005708F8  sub_5708F8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000057088C string=0x0000000000570890 "A"
 *   insn=0x0000000000570898 string=0x000000000057089C "!@/"
 *   insn=0x00000000005708B0 string=0x00000000005708B4 "!"
 *   insn=0x00000000005708B4 string=0x00000000005708B8 "!@"
 *   insn=0x00000000005708B8 string=0x00000000005708BC "a"
 *   insn=0x00000000005708CC string=0x00000000005708D0 "x"
 *   insn=0x00000000005708D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000005708DC string=0x00000000005708E0 "!"
 *   insn=0x00000000005708E0 string=0x00000000005708E4 "!@"
 *   insn=0x00000000005708E4 string=0x00000000005708E8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_57088C(_QWORD *a1)
{
  *a1 = off_6DBBD0;
  sub_570744(a1 + 2);
  *a1 = algn_6DB250;
  nullsub_2();
  operator delete(a1);
}

