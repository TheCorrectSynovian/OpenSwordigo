/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056432C
 * Mangled: sub_56432C
 * Demangled: sub_56432C
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x000000000051F468  sub_51F468
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000563BDC  sub_563BDC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000564364 string=0x0000000000564368 "B"
 *   insn=0x00000000005643D4 string=0x00000000005643D8 "`"
 *   insn=0x00000000005643E8 string=0x00000000005643EC "u"
 *   insn=0x0000000000564410 string=0x0000000000564414 "! @"
 *   insn=0x0000000000564414 string=0x0000000000564418 "!"
 *   insn=0x0000000000564418 string=0x000000000056441C "i"
 *   insn=0x0000000000564448 string=0x000000000056444C "d"
 *   insn=0x000000000056445C string=0x0000000000564460 "!@"
 *   insn=0x000000000056447C string=0x0000000000564480 "!"
 *   insn=0x0000000000564480 string=0x0000000000564484 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56432C(_QWORD *a1, const char **a2, int a3)
{
  __int64 v3; // x19

  v3 = (__int64)(a1 + 31);
  sub_521E3C((__int64)(a1 + 31));
  *(_QWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB728;
  a1[31] = &unk_6DB750;
  sub_5219C8(v3, 0);
  *a1 = off_6B7EE8;
  a1[31] = off_6B7F10;
  sub_562010((__int64)(a1 + 1));
  sub_5219C8(v3, (__int64)(a1 + 1));
  if ( sub_563BDC((__int64)(a1 + 1), *a2, a3 | 0x10u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

