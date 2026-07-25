/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005603BC
 * Mangled: sub_5603BC
 * Demangled: sub_5603BC
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000005603E8 string=0x00000000005603EC "B`"
 *   insn=0x0000000000560418 string=0x000000000056041C "3"
 *   insn=0x000000000056043C string=0x0000000000560440 "k"
 *   insn=0x0000000000560448 string=0x000000000056044C "'"
 *   insn=0x0000000000560460 string=0x0000000000560464 "5"
 *   insn=0x0000000000560474 string=0x0000000000560478 "Y"
 *   insn=0x0000000000560488 string=0x000000000056048C "!@"
 *   insn=0x00000000005604A0 string=0x00000000005604A4 "!"
 *   insn=0x00000000005604A8 string=0x00000000005604AC "!$E"
 *   insn=0x00000000005604AC string=0x00000000005604B0 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5603BC(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 32);
  sub_521E3C((__int64)(a1 + 32));
  *(_QWORD *)(v1 + 216) = 0;
  *(_BYTE *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 225) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &unk_6DB498;
  a1[1] = 0;
  a1[32] = &unk_6DB4C0;
  sub_5210E8(v1, 0);
  *a1 = off_6B7CC8;
  a1[32] = off_6B7CF0;
  sub_55EDEC((__int64)(a1 + 2));
  return sub_5210E8(v1, (__int64)(a1 + 2));
}

