/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560C9C
 * Mangled: sub_560C9C
 * Demangled: sub_560C9C
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
 * Referenced strings: 9
 *   insn=0x0000000000560CB4 string=0x0000000000560CB8 "a"
 *   insn=0x0000000000560CC8 string=0x0000000000560CCC "B"
 *   insn=0x0000000000560D18 string=0x0000000000560D1C "4"
 *   insn=0x0000000000560D3C string=0x0000000000560D40 "5"
 *   insn=0x0000000000560D50 string=0x0000000000560D54 """
 *   insn=0x0000000000560D64 string=0x0000000000560D68 "!@"
 *   insn=0x0000000000560D7C string=0x0000000000560D80 "!"
 *   insn=0x0000000000560D84 string=0x0000000000560D88 "!$E"
 *   insn=0x0000000000560D88 string=0x0000000000560D8C "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_560C9C(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 31);
  sub_521E3C((__int64)(a1 + 31));
  *(_QWORD *)(v1 + 216) = 0;
  *(_BYTE *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 225) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &unk_6DB4E8;
  a1[31] = &unk_6DB510;
  sub_5210E8(v1, 0);
  *a1 = off_6B7D38;
  a1[31] = off_6B7D60;
  sub_55EDEC((__int64)(a1 + 1));
  return sub_5210E8(v1, (__int64)(a1 + 1));
}

