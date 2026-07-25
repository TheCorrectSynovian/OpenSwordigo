/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005631CC
 * Mangled: sub_5631CC
 * Demangled: sub_5631CC
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000005631F8 string=0x00000000005631FC "B`"
 *   insn=0x000000000056324C string=0x0000000000563250 "p"
 *   insn=0x0000000000563270 string=0x0000000000563274 "5"
 *   insn=0x0000000000563298 string=0x000000000056329C "!@"
 *   insn=0x00000000005632AC string=0x00000000005632B0 "n"
 *   insn=0x00000000005632B8 string=0x00000000005632BC "!"
 *   insn=0x00000000005632BC string=0x00000000005632C0 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5631CC(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 32);
  sub_521E3C((__int64)(a1 + 32));
  *(_QWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 228) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &unk_6DB6D8;
  a1[1] = 0;
  a1[32] = &unk_6DB700;
  sub_5219C8(v1, 0);
  *a1 = off_6B7E78;
  a1[32] = off_6B7EA0;
  sub_562010((__int64)(a1 + 2));
  return sub_5219C8(v1, (__int64)(a1 + 2));
}

