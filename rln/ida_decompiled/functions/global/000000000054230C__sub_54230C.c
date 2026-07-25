/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054230C
 * Mangled: sub_54230C
 * Demangled: sub_54230C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005423A0  sub_5423A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000542338 string=0x000000000054233C "B"
 *   insn=0x0000000000542384 string=0x0000000000542388 "!$E"
 *   insn=0x0000000000542388 string=0x000000000054238C "!@"
 *   insn=0x0000000000542398 string=0x000000000054239C "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_54230C(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 1);
  sub_521E3C((__int64)(a1 + 1));
  *(_QWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 228) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = off_6B71B8;
  a1[1] = off_6B71E0;
  return sub_5219C8(v1, 0);
}

