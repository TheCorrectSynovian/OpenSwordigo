/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000525D94
 * Mangled: sub_525D94
 * Demangled: sub_525D94
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
 *   insn=0x0000000000525DB0 string=0x0000000000525DB4 """
 *   insn=0x0000000000525DC4 string=0x0000000000525DC8 "B 0"
 *   insn=0x0000000000525DE8 string=0x0000000000525DEC "B"
 *   insn=0x0000000000525E14 string=0x0000000000525E18 "!$E"
 *   insn=0x0000000000525E18 string=0x0000000000525E1C "!@"
 *   insn=0x0000000000525E2C string=0x0000000000525E30 """
 *   insn=0x0000000000525E34 string=0x0000000000525E38 "B"
 *   insn=0x0000000000525E38 string=0x0000000000525E3C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_525D94(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x19

  v2 = (__int64)(a1 + 2);
  sub_521E3C((__int64)(a1 + 2));
  *(_QWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 228) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *a1 = off_6B6C08;
  a1[1] = 0;
  a1[2] = off_6B6C30;
  return sub_5219C8(v2, a2);
}

