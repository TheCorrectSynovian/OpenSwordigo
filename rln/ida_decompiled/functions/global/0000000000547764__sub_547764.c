/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547764
 * Mangled: sub_547764
 * Demangled: sub_547764
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000566A7C  sub_566A7C
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x00000000005477A4 string=0x00000000005477A8 "B"
 *   insn=0x00000000005477C0 string=0x00000000005477C4 "b"
 *   insn=0x00000000005477D0 string=0x00000000005477D4 "b6"
 *   insn=0x00000000005477D4 string=0x00000000005477D8 "Df"
 *   insn=0x00000000005477E4 string=0x00000000005477E8 "!"
 *   insn=0x00000000005477E8 string=0x00000000005477EC "`\n"
 *   insn=0x00000000005477F0 string=0x00000000005477F4 "a6"
 *   insn=0x00000000005477F8 string=0x00000000005477FC ";f"
 *   insn=0x0000000000547808 string=0x000000000054780C "`"
 *   insn=0x0000000000547810 string=0x0000000000547814 "ub"
 *   insn=0x0000000000547818 string=0x000000000054781C "`6"
 *   insn=0x0000000000547820 string=0x0000000000547824 "yB"
 *   insn=0x0000000000547828 string=0x000000000054782C "`\n"
 *   insn=0x000000000054783C string=0x0000000000547840 "!@"
 *   insn=0x0000000000547840 string=0x0000000000547844 "a"
 *   insn=0x0000000000547860 string=0x0000000000547864 "a"
 *   insn=0x0000000000547868 string=0x000000000054786C "`"
 *   insn=0x0000000000547874 string=0x0000000000547878 "`"
 *   insn=0x0000000000547878 string=0x000000000054787C """
 *   insn=0x0000000000547888 string=0x000000000054788C "a2@"
 *   insn=0x0000000000547890 string=0x0000000000547894 "V"
 *   insn=0x0000000000547894 string=0x0000000000547898 "#"
 *   insn=0x00000000005478D8 string=0x00000000005478DC "!<E"
 *   insn=0x00000000005478DC string=0x00000000005478E0 "!@"
 *   insn=0x00000000005478E0 string=0x00000000005478E4 "a6"
 *   insn=0x00000000005478E4 string=0x00000000005478E8 "=j"
 *   insn=0x00000000005478F8 string=0x00000000005478FC "x"
 *   insn=0x0000000000547900 string=0x0000000000547904 "`2@"
 *   insn=0x0000000000547904 string=0x0000000000547908 "!"
 *   insn=0x0000000000547910 string=0x0000000000547914 "`"
 *   insn=0x0000000000547918 string=0x000000000054791C "m"
 *   insn=0x0000000000547928 string=0x000000000054792C "w"
 *   insn=0x0000000000547938 string=0x000000000054793C "!`"
 *   insn=0x0000000000547944 string=0x0000000000571950 """
 *   insn=0x000000000054795C string=0x0000000000547960 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_547764(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  char v11; // [xsp+68h] [xbp+68h] BYREF

  v3 = a1 + 104;
  sub_521E3C(a1 + 104);
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DA928;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 104) = &unk_6DA950;
  sub_5210E8(v3, 0);
  *(_QWORD *)(a1 + 16) = &unk_6DA8D8;
  *(_QWORD *)(a1 + 104) = &unk_6DA900;
  sub_5210E8(v3, 0);
  *(_QWORD *)a1 = off_6B7338;
  *(_QWORD *)(a1 + 104) = off_6B7388;
  *(_QWORD *)(a1 + 16) = off_6B7360;
  *(_QWORD *)(a1 + 24) = off_6B7710;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  sub_53DB28((_QWORD *)(a1 + 80));
  v7 = *a2;
  *(_QWORD *)(a1 + 24) = off_6DA7B0;
  *(_DWORD *)(a1 + 88) = 0;
  sub_566A7C(a1 + 96, v7, *(_QWORD *)(v7 - 24), &v11);
  *(_DWORD *)(a1 + 88) = a3;
  v8 = *(_QWORD *)(a1 + 96);
  v9 = 0;
  if ( (a3 & 3) != 0 )
    v9 = *(_QWORD *)(v8 - 24);
  sub_545B8C(a1 + 24, v8, 0, v9);
  return sub_5210E8(v3, a1 + 24);
}

