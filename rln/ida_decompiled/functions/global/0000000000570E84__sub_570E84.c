/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570E84
 * Mangled: sub_570E84
 * Demangled: sub_570E84
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000570E8C string=0x0000000000570E90 "!E"
 *   insn=0x0000000000570E94 string=0x0000000000570E98 "!@"
 *   insn=0x0000000000570EA0 string=0x0000000000570EA4 ";"
 *   insn=0x0000000000570EA4 string=0x0000000000570EA8 "`"
 *   insn=0x0000000000570EA8 string=0x0000000000570EAC "o"
 *   insn=0x0000000000570EB8 string=0x0000000000570EBC "!$E"
 *   insn=0x0000000000570EBC string=0x0000000000570EC0 "!@"
 *   insn=0x0000000000570ED0 string=0x0000000000570ED4 "`"
 *   insn=0x0000000000570ED4 string=0x0000000000570ED8 "d"
 *   insn=0x0000000000570EE0 string=0x0000000000570EE4 "!$E"
 *   insn=0x0000000000570EE4 string=0x0000000000570EE8 "!@"
 *   insn=0x0000000000570EEC string=0x0000000000570EF0 "v,"
 *   insn=0x0000000000570EF4 string=0x0000000000570EF8 "sB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_570E84(__int64 a1)
{
  *(_QWORD *)a1 = off_6DB410;
  sub_55F390(a1);
  sub_51F468(a1 + 104);
  *(_QWORD *)a1 = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

