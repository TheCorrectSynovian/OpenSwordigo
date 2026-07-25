/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000564634
 * Mangled: sub_564634
 * Demangled: sub_564634
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x000000000051F468  sub_51F468
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000563BDC  sub_563BDC
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x000000000056466C string=0x0000000000564670 "B "
 *   insn=0x0000000000564688 string=0x000000000056468C "b"
 *   insn=0x0000000000564698 string=0x000000000056469C "b"
 *   insn=0x00000000005646AC string=0x00000000005646B0 "!"
 *   insn=0x00000000005646B0 string=0x00000000005646B4 "`\n"
 *   insn=0x00000000005646B8 string=0x00000000005646BC "a"
 *   insn=0x00000000005646C8 string=0x00000000005646CC "ub"
 *   insn=0x00000000005646D0 string=0x00000000005646D4 "`"
 *   insn=0x00000000005646E0 string=0x00000000005646E4 "!"
 *   insn=0x00000000005646E4 string=0x00000000005646E8 "`"
 *   insn=0x00000000005646EC string=0x00000000005646F0 "a\n"
 *   insn=0x00000000005646F0 string=0x00000000005646F4 "G"
 *   insn=0x000000000056470C string=0x0000000000564710 "3"
 *   insn=0x0000000000564710 string=0x0000000000564714 "`"
 *   insn=0x0000000000564714 string=0x0000000000564718 "`"
 *   insn=0x0000000000564714 string=0x0000000000564740 "`"
 *   insn=0x0000000000564720 string=0x0000000000564724 "`"
 *   insn=0x0000000000564744 string=0x0000000000564748 "a"
 *   insn=0x000000000056474C string=0x0000000000564750 "! @"
 *   insn=0x0000000000564750 string=0x0000000000564754 "!"
 *   insn=0x0000000000564778 string=0x000000000056477C "!$E"
 *   insn=0x000000000056477C string=0x0000000000564780 "!@"
 *   insn=0x0000000000564780 string=0x0000000000564784 "a"
 *   insn=0x000000000056478C string=0x0000000000564790 "Mt"
 *   insn=0x0000000000564798 string=0x000000000056479C "!@"
 *   insn=0x00000000005647A0 string=0x00000000005647A4 "a"
 *   insn=0x00000000005647A8 string=0x00000000005647AC "`"
 *   insn=0x00000000005647AC string=0x00000000005647B0 "."
 *   insn=0x00000000005647B4 string=0x00000000005647B8 "`B"
 *   insn=0x00000000005647B8 string=0x00000000005647BC "!"
 *   insn=0x00000000005647BC string=0x00000000005647C0 "!@"
 *   insn=0x00000000005647C0 string=0x00000000005647C4 "a"
 *   insn=0x00000000005647C4 string=0x00000000005647C8 "@^"
 *   insn=0x00000000005647D0 string=0x00000000005647D4 "!"
 *   insn=0x00000000005647D4 string=0x00000000005647D8 "55"
 *   insn=0x00000000005647D8 string=0x0000000000571CAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_564634(_QWORD *a1, const char **a2, unsigned int a3)
{
  __int64 v3; // x20

  v3 = (__int64)(a1 + 33);
  sub_521E3C((__int64)(a1 + 33));
  *(_QWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB7C8;
  a1[1] = 0;
  a1[33] = &unk_6DB7F0;
  sub_5219C8(v3, 0);
  a1[2] = &unk_6DB778;
  a1[33] = &unk_6DB7A0;
  sub_5219C8(v3, 0);
  *a1 = off_6B7F88;
  a1[33] = off_6B7FD8;
  a1[2] = off_6B7FB0;
  sub_562010((__int64)(a1 + 3));
  sub_5219C8(v3, (__int64)(a1 + 3));
  if ( sub_563BDC((__int64)(a1 + 3), *a2, a3) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

