/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005464C0
 * Mangled: sub_5464C0
 * Demangled: sub_5464C0
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000566A7C  sub_566A7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000005464EC string=0x00000000005464F0 "Sn"
 *   insn=0x0000000000546500 string=0x0000000000546504 "B"
 *   insn=0x000000000054651C string=0x0000000000546520 "b"
 *   insn=0x000000000054652C string=0x0000000000546530 "b2"
 *   insn=0x0000000000546540 string=0x0000000000546544 "`"
 *   insn=0x0000000000546548 string=0x000000000054654C "uB"
 *   insn=0x0000000000546550 string=0x0000000000546554 "`2"
 *   insn=0x0000000000546554 string=0x0000000000546558 "y""
 *   insn=0x000000000054656C string=0x0000000000546570 "!@"
 *   insn=0x0000000000546570 string=0x0000000000546574 "a\n"
 *   insn=0x000000000054658C string=0x0000000000546590 "f"
 *   insn=0x0000000000546598 string=0x000000000054659C "`\n"
 *   insn=0x00000000005465A4 string=0x00000000005465A8 "`b"
 *   insn=0x00000000005465A8 string=0x00000000005465AC """
 *   insn=0x00000000005465AC string=0x00000000005465B0 "3"
 *   insn=0x00000000005465B8 string=0x00000000005465BC "a.@"
 *   insn=0x00000000005465C0 string=0x00000000005465C4 "V"
 *   insn=0x00000000005465C4 string=0x00000000005465C8 "#"
 *   insn=0x00000000005465D0 string=0x00000000005465D4 "n"
 *   insn=0x0000000000546608 string=0x000000000054660C "!<E"
 *   insn=0x000000000054660C string=0x0000000000546610 "!@"
 *   insn=0x0000000000546610 string=0x0000000000546614 "a2"
 *   insn=0x0000000000546628 string=0x000000000054662C "x\n"
 *   insn=0x0000000000546630 string=0x0000000000546634 "`.@"
 *   insn=0x0000000000546634 string=0x0000000000546638 "!"
 *   insn=0x0000000000546640 string=0x0000000000546644 "`"
 *   insn=0x0000000000546648 string=0x000000000054664C "!"
 *   insn=0x0000000000546658 string=0x000000000054665C "w\n"
 *   insn=0x0000000000546678 string=0x000000000054667C "w\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5464C0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  char v11; // [xsp+68h] [xbp+68h] BYREF

  v3 = a1 + 96;
  sub_521E3C(a1 + 96);
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DA838;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 96) = &unk_6DA860;
  sub_5210E8(v3, 0);
  *(_QWORD *)a1 = off_6B7228;
  *(_QWORD *)(a1 + 96) = off_6B7250;
  *(_QWORD *)(a1 + 16) = off_6B7710;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  sub_53DB28((_QWORD *)(a1 + 72));
  v7 = *a2;
  *(_QWORD *)(a1 + 16) = off_6DA7B0;
  *(_DWORD *)(a1 + 80) = 0;
  sub_566A7C(a1 + 88, v7, *(_QWORD *)(v7 - 24), &v11);
  *(_DWORD *)(a1 + 80) = a3 | 8;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = 0;
  if ( (a3 & 3) != 0 )
    v9 = *(_QWORD *)(v8 - 24);
  sub_545B8C(a1 + 16, v8, 0, v9);
  return sub_5210E8(v3, a1 + 16);
}

