/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005707C4
 * Mangled: sub_5707C4
 * Demangled: sub_5707C4
 *
 * Callers: 3
 *   0x000000000052B41C  sub_52B41C
 *   0x000000000052B42C  sub_52B42C
 *   0x000000000052D0C8  sub_52D0C8
 *
 * Callees: 4
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x0000000000570828  sub_570828
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000005707C4 string=0x00000000005707C8 "A\n"
 *   insn=0x00000000005707D0 string=0x00000000005707D4 "!"
 *   insn=0x00000000005707E8 string=0x00000000005707EC "!$F"
 *   insn=0x00000000005707EC string=0x00000000005707F0 "!@"
 *   insn=0x00000000005707F0 string=0x00000000005707F4 "a"
 *   insn=0x000000000057080C string=0x0000000000570810 "!$F"
 *   insn=0x0000000000570810 string=0x0000000000570814 "!@"
 *   insn=0x0000000000570814 string=0x0000000000570818 "a"
 *   insn=0x0000000000570820 string=0x0000000000570824 "(D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5707C4(_QWORD *a1)
{
  *a1 = off_6B8140;
  sub_570744(a1 + 2);
  *a1 = &unk_6DA2A0;
  nullsub_2();
}

