/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000525F4C
 * Mangled: sub_525F4C
 * Demangled: sub_525F4C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000525FE4  sub_525FE4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000525F78 string=0x0000000000525F7C "B 0"
 *   insn=0x0000000000525FC8 string=0x0000000000525FCC "!$E"
 *   insn=0x0000000000525FCC string=0x0000000000525FD0 "!@"
 *   insn=0x0000000000525FDC string=0x0000000000525FE0 "9n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_525F4C(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 2);
  sub_521E3C((__int64)(a1 + 2));
  *(_QWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 228) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = off_6B6C08;
  a1[1] = 0;
  a1[2] = off_6B6C30;
  return sub_5219C8(v1, 0);
}

