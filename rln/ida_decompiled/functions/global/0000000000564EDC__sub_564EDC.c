/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000564EDC
 * Mangled: sub_564EDC
 * Demangled: sub_564EDC
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
 *   insn=0x0000000000564F14 string=0x0000000000564F18 "B "
 *   insn=0x0000000000564F30 string=0x0000000000564F34 "b"
 *   insn=0x0000000000564F40 string=0x0000000000564F44 "b"
 *   insn=0x0000000000564F54 string=0x0000000000564F58 "!"
 *   insn=0x0000000000564F58 string=0x0000000000564F5C "`\n"
 *   insn=0x0000000000564F60 string=0x0000000000564F64 "a"
 *   insn=0x0000000000564F70 string=0x0000000000564F74 "ub"
 *   insn=0x0000000000564F78 string=0x0000000000564F7C "`"
 *   insn=0x0000000000564F88 string=0x0000000000564F8C "!"
 *   insn=0x0000000000564F8C string=0x0000000000564F90 "`"
 *   insn=0x0000000000564F94 string=0x0000000000564F98 "a\n"
 *   insn=0x0000000000564FB4 string=0x0000000000564FB8 "\t"
 *   insn=0x0000000000564FB8 string=0x0000000000564FBC "`"
 *   insn=0x0000000000564FBC string=0x0000000000564FC0 "`"
 *   insn=0x0000000000564FBC string=0x0000000000564FE8 "`"
 *   insn=0x0000000000564FC8 string=0x0000000000564FCC "`"
 *   insn=0x0000000000564FCC string=0x0000000000564FD0 "|"
 *   insn=0x0000000000564FEC string=0x0000000000564FF0 "a"
 *   insn=0x0000000000564FF4 string=0x0000000000564FF8 "! @"
 *   insn=0x0000000000564FF8 string=0x0000000000564FFC "!"
 *   insn=0x0000000000564FFC string=0x0000000000565000 "p"
 *   insn=0x0000000000565020 string=0x0000000000565024 "!$E"
 *   insn=0x0000000000565024 string=0x0000000000565028 "!@"
 *   insn=0x0000000000565028 string=0x000000000056502C "a"
 *   insn=0x000000000056502C string=0x0000000000565030 "k"
 *   insn=0x0000000000565034 string=0x0000000000565038 "#r"
 *   insn=0x0000000000565040 string=0x0000000000565044 "!@"
 *   insn=0x0000000000565048 string=0x000000000056504C "a"
 *   insn=0x0000000000565050 string=0x0000000000565054 "`"
 *   insn=0x000000000056505C string=0x0000000000565060 "`B"
 *   insn=0x0000000000565060 string=0x0000000000565064 "!"
 *   insn=0x0000000000565064 string=0x0000000000565068 "!@"
 *   insn=0x0000000000565068 string=0x000000000056506C "a"
 *   insn=0x0000000000565078 string=0x000000000056507C "!"
 *   insn=0x000000000056507C string=0x0000000000565080 "3"
 *   insn=0x0000000000565080 string=0x0000000000571CAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_564EDC(_QWORD *a1, const char *a2, unsigned int a3)
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
  if ( sub_563BDC((__int64)(a1 + 3), a2, a3) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

