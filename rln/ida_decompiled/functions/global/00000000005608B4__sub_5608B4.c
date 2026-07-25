/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005608B4
 * Mangled: sub_5608B4
 * Demangled: sub_5608B4
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
 * Referenced strings: 12
 *   insn=0x00000000005608D8 string=0x00000000005608DC "X"
 *   insn=0x00000000005608EC string=0x00000000005608F0 "B`"
 *   insn=0x0000000000560940 string=0x0000000000560944 "*"
 *   insn=0x0000000000560960 string=0x0000000000560964 "`"
 *   insn=0x000000000056099C string=0x00000000005609A0 "! @"
 *   insn=0x00000000005609A0 string=0x00000000005609A4 "!"
 *   insn=0x00000000005609C0 string=0x00000000005609C4 "5"
 *   insn=0x00000000005609E8 string=0x00000000005609EC "!@"
 *   insn=0x00000000005609F4 string=0x00000000005609F8 "f"
 *   insn=0x0000000000560A00 string=0x0000000000560A04 "!"
 *   insn=0x0000000000560A08 string=0x0000000000560A0C "!$E"
 *   insn=0x0000000000560A0C string=0x0000000000560A10 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5608B4(_QWORD *a1, const char **a2, int a3)
{
  __int64 v3; // x19

  v3 = (__int64)(a1 + 32);
  sub_521E3C((__int64)(a1 + 32));
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB498;
  a1[1] = 0;
  a1[32] = &unk_6DB4C0;
  sub_5210E8(v3, 0);
  *a1 = off_6B7CC8;
  a1[32] = off_6B7CF0;
  sub_55EDEC((__int64)(a1 + 2));
  sub_5210E8(v3, (__int64)(a1 + 2));
  if ( sub_55F8C0((__int64)(a1 + 2), *a2, a3 | 8u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

