/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000541D0C
 * Mangled: sub_541D0C
 * Demangled: sub_541D0C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000541D28 string=0x0000000000541D2C "D"
 *   insn=0x0000000000541D3C string=0x0000000000541D40 "B"
 *   insn=0x0000000000541D60 string=0x0000000000541D64 "B"
 *   insn=0x0000000000541D88 string=0x0000000000541D8C "!$E"
 *   insn=0x0000000000541D8C string=0x0000000000541D90 "!@"
 *   insn=0x0000000000541DA0 string=0x0000000000541DA4 """
 *   insn=0x0000000000541DA8 string=0x0000000000541DAC "B"
 *   insn=0x0000000000541DAC string=0x0000000000541DB0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_541D0C(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x19

  v2 = (__int64)(a1 + 1);
  sub_521E3C((__int64)(a1 + 1));
  *(_QWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 228) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *a1 = off_6B71B8;
  a1[1] = off_6B71E0;
  return sub_5219C8(v2, a2);
}

