/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056117C
 * Mangled: sub_56117C
 * Demangled: sub_56117C
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000005611A0 string=0x00000000005611A4 "&"
 *   insn=0x00000000005611B4 string=0x00000000005611B8 "B"
 *   insn=0x0000000000561224 string=0x0000000000561228 "`"
 *   insn=0x0000000000561238 string=0x000000000056123C "v"
 *   insn=0x0000000000561260 string=0x0000000000561264 "! @"
 *   insn=0x0000000000561264 string=0x0000000000561268 "!"
 *   insn=0x0000000000561268 string=0x000000000056126C "j"
 *   insn=0x0000000000561284 string=0x0000000000561288 "5"
 *   insn=0x00000000005612AC string=0x00000000005612B0 "!@"
 *   insn=0x00000000005612B8 string=0x00000000005612BC "5"
 *   insn=0x00000000005612C0 string=0x00000000005612C4 "i"
 *   insn=0x00000000005612C4 string=0x00000000005612C8 "!"
 *   insn=0x00000000005612CC string=0x00000000005612D0 "!$E"
 *   insn=0x00000000005612D0 string=0x00000000005612D4 "!@"
 *   insn=0x00000000005612D8 string=0x00000000005612DC "{k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56117C(_QWORD *a1, const char **a2, int a3)
{
  __int64 v3; // x19

  v3 = (__int64)(a1 + 31);
  sub_521E3C((__int64)(a1 + 31));
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB4E8;
  a1[31] = &unk_6DB510;
  sub_5210E8(v3, 0);
  *a1 = off_6B7D38;
  a1[31] = off_6B7D60;
  sub_55EDEC((__int64)(a1 + 1));
  sub_5210E8(v3, (__int64)(a1 + 1));
  if ( sub_55F8C0((__int64)(a1 + 1), *a2, a3 | 0x10u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

