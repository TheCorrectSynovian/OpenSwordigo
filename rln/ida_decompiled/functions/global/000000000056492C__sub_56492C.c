/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056492C
 * Mangled: sub_56492C
 * Demangled: sub_56492C
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
 *   insn=0x0000000000564950 string=0x0000000000564954 ":"
 *   insn=0x0000000000564964 string=0x0000000000564968 "B`"
 *   insn=0x00000000005649D8 string=0x00000000005649DC "`"
 *   insn=0x0000000000564A14 string=0x0000000000564A18 "! @"
 *   insn=0x0000000000564A18 string=0x0000000000564A1C "!"
 *   insn=0x0000000000564A60 string=0x0000000000564A64 "!@"
 *   insn=0x0000000000564A6C string=0x0000000000564A70 "("
 *   insn=0x0000000000564A74 string=0x0000000000564A78 "|"
 *   insn=0x0000000000564A80 string=0x0000000000564A84 "!"
 *   insn=0x0000000000564A84 string=0x0000000000564A88 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56492C(_QWORD *a1, const char *a2, int a3)
{
  __int64 v3; // x19

  v3 = (__int64)(a1 + 32);
  sub_521E3C((__int64)(a1 + 32));
  *(_QWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB6D8;
  a1[1] = 0;
  a1[32] = &unk_6DB700;
  sub_5219C8(v3, 0);
  *a1 = off_6B7E78;
  a1[32] = off_6B7EA0;
  sub_562010((__int64)(a1 + 2));
  sub_5219C8(v3, (__int64)(a1 + 2));
  if ( sub_563BDC((__int64)(a1 + 2), a2, a3 | 8u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

