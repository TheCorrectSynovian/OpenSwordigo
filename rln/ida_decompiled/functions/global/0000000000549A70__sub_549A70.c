/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000549A70
 * Mangled: sub_549A70
 * Demangled: sub_549A70
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x0000000000203E90  start
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056DF24  sub_56DF24
 *   0x0000000000571CAC  sub_571CAC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000549AB0 string=0x0000000000549AB4 "B"
 *   insn=0x0000000000549ACC string=0x0000000000549AD0 "b"
 *   insn=0x0000000000549ADC string=0x0000000000549AE0 "b6"
 *   insn=0x0000000000549AF0 string=0x0000000000549AF4 "!"
 *   insn=0x0000000000549AF4 string=0x0000000000549AF8 "`\n"
 *   insn=0x0000000000549AFC string=0x0000000000549B00 "a6"
 *   insn=0x0000000000549B08 string=0x0000000000549B0C "`"
 *   insn=0x0000000000549B14 string=0x0000000000549B18 "`"
 *   insn=0x0000000000549B18 string=0x0000000000549B1C "`"
 *   insn=0x0000000000549B1C string=0x0000000000549B20 "ub"
 *   insn=0x0000000000549B24 string=0x0000000000549B28 "`6"
 *   insn=0x0000000000549B28 string=0x0000000000549B2C "`"
 *   insn=0x0000000000549B2C string=0x0000000000549B30 "yB"
 *   insn=0x0000000000549B34 string=0x0000000000549B38 "`\n"
 *   insn=0x0000000000549B48 string=0x0000000000549B4C "!@"
 *   insn=0x0000000000549B4C string=0x0000000000549B50 "a"
 *   insn=0x0000000000549B6C string=0x0000000000549B70 "a"
 *   insn=0x0000000000549B74 string=0x0000000000549B78 "`"
 *   insn=0x0000000000549B80 string=0x0000000000549B84 "`"
 *   insn=0x0000000000549B84 string=0x0000000000549B88 """
 *   insn=0x0000000000549B94 string=0x0000000000549B98 "a2@"
 *   insn=0x0000000000549B9C string=0x0000000000549BA0 "V"
 *   insn=0x0000000000549BA0 string=0x0000000000549BA4 "#"
 *   insn=0x0000000000549BE4 string=0x0000000000549BE8 "!$E"
 *   insn=0x0000000000549BE8 string=0x0000000000549BEC "!@"
 *   insn=0x0000000000549BEC string=0x0000000000549BF0 "a6"
 *   insn=0x0000000000549BF0 string=0x0000000000549BF4 "za"
 *   insn=0x0000000000549BF8 string=0x0000000000549BFC "2"
 *   insn=0x0000000000549C04 string=0x0000000000549C08 "x"
 *   insn=0x0000000000549C0C string=0x0000000000549C10 "`2@"
 *   insn=0x0000000000549C10 string=0x0000000000549C14 "!"
 *   insn=0x0000000000549C1C string=0x0000000000549C20 "`"
 *   insn=0x0000000000549C34 string=0x0000000000549C38 "w"
 *   insn=0x0000000000549C38 string=0x0000000000549C3C "#"
 *   insn=0x0000000000549C3C string=0x0000000000549C40 "a"
 *   insn=0x0000000000549C44 string=0x0000000000549C48 "! "
 *   insn=0x0000000000549C50 string=0x0000000000571CAC """
 *   insn=0x0000000000549C68 string=0x0000000000549C6C "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_549A70(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  char v11; // [xsp+68h] [xbp+68h] BYREF

  v3 = a1 + 104;
  sub_521E3C(a1 + 104);
  *(_QWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DAB68;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 104) = &unk_6DAB90;
  sub_5219C8(v3, 0);
  *(_QWORD *)(a1 + 16) = &unk_6DAB18;
  *(_QWORD *)(a1 + 104) = &unk_6DAB40;
  sub_5219C8(v3, 0);
  *(_QWORD *)a1 = off_6B74E8;
  *(_QWORD *)(a1 + 104) = off_6B7538;
  *(_QWORD *)(a1 + 16) = off_6B7510;
  *(_QWORD *)(a1 + 24) = off_6B7790;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  sub_53DB28((_QWORD *)(a1 + 80));
  v7 = *a2;
  *(_QWORD *)(a1 + 24) = off_6DA9F0;
  *(_DWORD *)(a1 + 88) = 0;
  sub_56DF24(a1 + 96, v7, *(_QWORD *)(v7 - 24), &v11);
  *(_DWORD *)(a1 + 88) = a3;
  v8 = *(_QWORD *)(a1 + 96);
  v9 = 0;
  if ( (a3 & 3) != 0 )
    v9 = *(_QWORD *)(v8 - 24);
  sub_547EA4(a1 + 24, v8, 0, v9);
  return sub_5219C8(v3, a1 + 24);
}

