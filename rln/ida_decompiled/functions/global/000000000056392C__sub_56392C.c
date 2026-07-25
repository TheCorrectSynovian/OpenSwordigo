/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056392C
 * Mangled: sub_56392C
 * Demangled: sub_56392C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x000000000051F468  sub_51F468
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000563944 string=0x0000000000563948 "="
 *   insn=0x0000000000563958 string=0x000000000056395C "B "
 *   insn=0x0000000000563998 string=0x000000000056399C "!"
 *   insn=0x00000000005639CC string=0x00000000005639D0 "!"
 *   insn=0x0000000000563A00 string=0x0000000000563A04 "!"
 *   insn=0x0000000000563A08 string=0x0000000000563A0C "!$E"
 *   insn=0x0000000000563A0C string=0x0000000000563A10 "!@"
 *   insn=0x0000000000563A28 string=0x0000000000563A2C "B@"
 *   insn=0x0000000000563A38 string=0x0000000000563A3C "5"
 *   insn=0x0000000000563A4C string=0x0000000000563A50 "!"
 *   insn=0x0000000000563A50 string=0x0000000000563A54 "!@"
 *   insn=0x0000000000563A64 string=0x0000000000563A68 "!"
 *   insn=0x0000000000563A6C string=0x0000000000571CAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_56392C(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 33);
  sub_521E3C((__int64)(a1 + 33));
  *(_QWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 228) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &unk_6DB7C8;
  a1[1] = 0;
  a1[33] = &unk_6DB7F0;
  sub_5219C8(v1, 0);
  a1[2] = &unk_6DB778;
  a1[33] = &unk_6DB7A0;
  sub_5219C8(v1, 0);
  *a1 = off_6B7F88;
  a1[33] = off_6B7FD8;
  a1[2] = off_6B7FB0;
  sub_562010((__int64)(a1 + 3));
  return sub_5219C8(v1, (__int64)(a1 + 3));
}

