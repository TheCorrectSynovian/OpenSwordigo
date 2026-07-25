/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546320
 * Mangled: sub_546320
 * Demangled: sub_546320
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000566A7C  sub_566A7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000546354 string=0x0000000000546358 "`"
 *   insn=0x0000000000546358 string=0x000000000054635C "tB"
 *   insn=0x0000000000546360 string=0x0000000000546364 "y""
 *   insn=0x000000000054636C string=0x0000000000546370 "dj#"
 *   insn=0x0000000000546380 string=0x0000000000546384 "`"
 *   insn=0x0000000000546384 string=0x0000000000546388 "Xk"
 *   insn=0x0000000000546390 string=0x0000000000546394 "a"
 *   insn=0x0000000000546394 string=0x0000000000546398 "!"
 *   insn=0x000000000054639C string=0x00000000005463A0 "cj!"
 *   insn=0x00000000005463A4 string=0x00000000005463A8 "!@"
 *   insn=0x00000000005463A8 string=0x00000000005463AC "a\n"
 *   insn=0x00000000005463D4 string=0x00000000005463D8 "A"
 *   insn=0x00000000005463D8 string=0x00000000005463DC "`\n"
 *   insn=0x00000000005463DC string=0x00000000005463E0 "`b"
 *   insn=0x00000000005463E4 string=0x00000000005463E8 """
 *   insn=0x00000000005463F4 string=0x00000000005463F8 "a.@"
 *   insn=0x00000000005463FC string=0x0000000000546400 "V"
 *   insn=0x0000000000546400 string=0x0000000000546404 "#"
 *   insn=0x0000000000546410 string=0x0000000000546414 "`"
 *   insn=0x000000000054641C string=0x0000000000546420 "`"
 *   insn=0x0000000000546420 string=0x0000000000546424 "1k"
 *   insn=0x0000000000546450 string=0x0000000000546454 "w\n"
 *   insn=0x0000000000546460 string=0x0000000000546464 "a"
 *   insn=0x0000000000546464 string=0x0000000000546468 "!"
 *   insn=0x000000000054646C string=0x0000000000546470 "bj!"
 *   insn=0x000000000054647C string=0x0000000000546480 "x\n"
 *   insn=0x0000000000546484 string=0x0000000000546488 "`.@"
 *   insn=0x0000000000546488 string=0x000000000054648C "!"
 *   insn=0x0000000000546494 string=0x0000000000546498 "`"
 *   insn=0x00000000005464AC string=0x00000000005464B0 "w\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_546320(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v7; // x0
  __int64 v8; // x3
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x3
  char v15; // [xsp+78h] [xbp+78h] BYREF

  v7 = a2[1];
  v8 = *(_QWORD *)(v7 - 24);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + v8) = a2[2];
  *(_QWORD *)(a1 + 8) = 0;
  sub_5210E8(a1 + *(_QWORD *)(v7 - 24), 0);
  v9 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v9 - 24)) = a2[3];
  *(_QWORD *)(a1 + 16) = off_6B7710;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  sub_53DB28((_QWORD *)(a1 + 72));
  v10 = *a3;
  *(_QWORD *)(a1 + 16) = off_6DA7B0;
  *(_DWORD *)(a1 + 80) = 0;
  sub_566A7C(a1 + 88, v10, *(_QWORD *)(v10 - 24), &v15);
  *(_DWORD *)(a1 + 80) = a4 | 8;
  v11 = *(_QWORD *)(a1 + 88);
  v12 = 0;
  if ( (a4 & 3) != 0 )
    v12 = *(_QWORD *)(v11 - 24);
  sub_545B8C(a1 + 16, v11, 0, v12);
  return sub_5210E8(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), a1 + 16);
}

