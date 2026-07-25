/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005615C4
 * Mangled: sub_5615C4
 * Demangled: sub_5615C4
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x000000000051F468  sub_51F468
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000005615F0 string=0x00000000005615F4 "B "
 *   insn=0x0000000000561630 string=0x0000000000561634 "!"
 *   insn=0x0000000000561664 string=0x0000000000561668 "!"
 *   insn=0x0000000000561698 string=0x000000000056169C "!"
 *   insn=0x00000000005616A0 string=0x00000000005616A4 "!<E"
 *   insn=0x00000000005616A4 string=0x00000000005616A8 "!@"
 *   insn=0x00000000005616C0 string=0x00000000005616C4 "B@"
 *   insn=0x00000000005616D0 string=0x00000000005616D4 "/"
 *   insn=0x00000000005616D8 string=0x00000000005616DC "c"
 *   insn=0x00000000005616DC string=0x00000000005616E0 "!"
 *   insn=0x00000000005616E4 string=0x00000000005616E8 "!$E"
 *   insn=0x00000000005616E8 string=0x00000000005616EC "!@"
 *   insn=0x00000000005616F0 string=0x00000000005616F4 "uj"
 *   insn=0x00000000005616FC string=0x0000000000561700 "!"
 *   insn=0x0000000000561704 string=0x0000000000571950 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5615C4(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 33);
  sub_521E3C((__int64)(a1 + 33));
  *(_QWORD *)(v1 + 216) = 0;
  *(_BYTE *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 225) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &unk_6DB588;
  a1[1] = 0;
  a1[33] = &unk_6DB5B0;
  sub_5210E8(v1, 0);
  a1[2] = &unk_6DB538;
  a1[33] = &unk_6DB560;
  sub_5210E8(v1, 0);
  *a1 = off_6B7DD8;
  a1[33] = off_6B7E28;
  a1[2] = off_6B7E00;
  sub_55EDEC((__int64)(a1 + 3));
  return sub_5210E8(v1, (__int64)(a1 + 3));
}

