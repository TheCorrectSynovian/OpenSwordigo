/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005487CC
 * Mangled: sub_5487CC
 * Demangled: sub_5487CC
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000203E90  start
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056DF24  sub_56DF24
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000054880C string=0x0000000000548810 "B"
 *   insn=0x0000000000548828 string=0x000000000054882C "b"
 *   insn=0x0000000000548838 string=0x000000000054883C "b2"
 *   insn=0x000000000054883C string=0x0000000000548840 "bd"
 *   insn=0x0000000000548840 string=0x0000000000548844 "`"
 *   insn=0x000000000054884C string=0x0000000000548850 "`"
 *   insn=0x0000000000548850 string=0x0000000000548854 "`"
 *   insn=0x0000000000548854 string=0x0000000000548858 "uB"
 *   insn=0x000000000054885C string=0x0000000000548860 "`2"
 *   insn=0x0000000000548860 string=0x0000000000548864 "y""
 *   insn=0x0000000000548878 string=0x000000000054887C "!@"
 *   insn=0x000000000054887C string=0x0000000000548880 "a\n"
 *   insn=0x00000000005488A4 string=0x00000000005488A8 "`\n"
 *   insn=0x00000000005488B0 string=0x00000000005488B4 "`b"
 *   insn=0x00000000005488B4 string=0x00000000005488B8 """
 *   insn=0x00000000005488C4 string=0x00000000005488C8 "a.@"
 *   insn=0x00000000005488CC string=0x00000000005488D0 "V"
 *   insn=0x00000000005488D0 string=0x00000000005488D4 "#"
 *   insn=0x00000000005488DC string=0x00000000005488E0 "q"
 *   insn=0x00000000005488E8 string=0x00000000005488EC "7d"
 *   insn=0x0000000000548914 string=0x0000000000548918 "!$E"
 *   insn=0x0000000000548918 string=0x000000000054891C "!@"
 *   insn=0x000000000054891C string=0x0000000000548920 "a2"
 *   insn=0x0000000000548920 string=0x0000000000548924 ".f"
 *   insn=0x0000000000548934 string=0x0000000000548938 "x\n"
 *   insn=0x000000000054893C string=0x0000000000548940 "`.@"
 *   insn=0x0000000000548940 string=0x0000000000548944 "!"
 *   insn=0x000000000054894C string=0x0000000000548950 "`"
 *   insn=0x0000000000548954 string=0x0000000000548958 "N"
 *   insn=0x0000000000548964 string=0x0000000000548968 "w\n"
 *   insn=0x0000000000548984 string=0x0000000000548988 "w\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5487CC(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  char v11; // [xsp+68h] [xbp+68h] BYREF

  v3 = a1 + 96;
  sub_521E3C(a1 + 96);
  *(_QWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DAA78;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 96) = &unk_6DAAA0;
  sub_5219C8(v3, 0);
  *(_QWORD *)a1 = off_6B73D8;
  *(_QWORD *)(a1 + 96) = off_6B7400;
  *(_QWORD *)(a1 + 16) = off_6B7790;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  sub_53DB28((_QWORD *)(a1 + 72));
  v7 = *a2;
  *(_QWORD *)(a1 + 16) = off_6DA9F0;
  *(_DWORD *)(a1 + 80) = 0;
  sub_56DF24(a1 + 88, v7, *(_QWORD *)(v7 - 24), &v11);
  *(_DWORD *)(a1 + 80) = a3 | 8;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = 0;
  if ( (a3 & 3) != 0 )
    v9 = *(_QWORD *)(v8 - 24);
  sub_547EA4(a1 + 16, v8, 0, v9);
  return sub_5219C8(v3, a1 + 16);
}

