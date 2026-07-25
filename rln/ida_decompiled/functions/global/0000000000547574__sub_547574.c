/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547574
 * Mangled: sub_547574
 * Demangled: sub_547574
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000566A7C  sub_566A7C
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000005475A8 string=0x00000000005475AC "`"
 *   insn=0x00000000005475B0 string=0x00000000005475B4 "cj""
 *   insn=0x00000000005475BC string=0x00000000005475C0 "`"
 *   insn=0x00000000005475C8 string=0x00000000005475CC "cB"
 *   insn=0x00000000005475CC string=0x00000000005475D0 "`\n"
 *   insn=0x00000000005475DC string=0x00000000005475E0 "`"
 *   insn=0x00000000005475E0 string=0x00000000005475E4 "dh""
 *   insn=0x00000000005475F0 string=0x00000000005475F4 "`"
 *   insn=0x00000000005475F4 string=0x00000000005475F8 "ub"
 *   insn=0x00000000005475F8 string=0x00000000005475FC "yB"
 *   insn=0x0000000000547610 string=0x0000000000547614 "bj!"
 *   insn=0x0000000000547618 string=0x000000000054761C "a\n"
 *   insn=0x0000000000547620 string=0x0000000000547624 "a"
 *   insn=0x0000000000547624 string=0x0000000000547628 "!"
 *   insn=0x000000000054762C string=0x0000000000547630 "bj!"
 *   insn=0x0000000000547634 string=0x0000000000547638 "a\n"
 *   insn=0x000000000054763C string=0x0000000000547640 "!@"
 *   insn=0x0000000000547640 string=0x0000000000547644 "a"
 *   insn=0x000000000054765C string=0x0000000000547660 "2"
 *   insn=0x0000000000547660 string=0x0000000000547664 "a"
 *   insn=0x0000000000547668 string=0x000000000054766C "`"
 *   insn=0x0000000000547674 string=0x0000000000547678 "`"
 *   insn=0x0000000000547678 string=0x000000000054767C """
 *   insn=0x0000000000547688 string=0x000000000054768C "a2@"
 *   insn=0x0000000000547690 string=0x0000000000547694 "V"
 *   insn=0x0000000000547694 string=0x0000000000547698 "#"
 *   insn=0x00000000005476A0 string=0x00000000005476A4 ":"
 *   insn=0x00000000005476A4 string=0x00000000005476A8 "`"
 *   insn=0x00000000005476B0 string=0x00000000005476B4 "`"
 *   insn=0x00000000005476D8 string=0x00000000005476DC "a"
 *   insn=0x00000000005476DC string=0x00000000005476E0 "!"
 *   insn=0x00000000005476E4 string=0x00000000005476E8 "bj!"
 *   insn=0x00000000005476E8 string=0x00000000005476EC "v"
 *   insn=0x00000000005476F4 string=0x00000000005476F8 "x"
 *   insn=0x00000000005476FC string=0x0000000000547700 "`2@"
 *   insn=0x0000000000547700 string=0x0000000000547704 "!"
 *   insn=0x000000000054770C string=0x0000000000547710 "`"
 *   insn=0x0000000000547724 string=0x0000000000547728 "w"
 *   insn=0x0000000000547728 string=0x000000000054772C "g"
 *   insn=0x0000000000547738 string=0x0000000000571950 """
 *   insn=0x000000000054773C string=0x0000000000547740 "a"
 *   insn=0x0000000000547754 string=0x0000000000547758 "w"
 *   insn=0x0000000000547758 string=0x000000000054775C "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_547574(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v7; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  _QWORD *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x3
  char v18; // [xsp+68h] [xbp+68h] BYREF

  v7 = a2[2];
  v9 = *(_QWORD *)(v7 - 24);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + v9) = a2[3];
  *(_QWORD *)(a1 + 8) = 0;
  sub_5210E8(a1 + *(_QWORD *)(v7 - 24), 0);
  v10 = a2[4];
  *(_QWORD *)(a1 + 16) = v10;
  v11 = (_QWORD *)(a1 + 16 + *(_QWORD *)(v10 - 24));
  *v11 = a2[5];
  sub_5210E8((__int64)v11, 0);
  v12 = a2[1];
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + *(_QWORD *)(v12 - 24)) = a2[6];
  *(_QWORD *)(a1 + 16) = a2[7];
  v13 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v13 - 24)) = a2[8];
  *(_QWORD *)(a1 + 16) = a2[9];
  *(_QWORD *)(a1 + 24) = off_6B7710;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  sub_53DB28((_QWORD *)(a1 + 80));
  v14 = *a3;
  *(_QWORD *)(a1 + 24) = off_6DA7B0;
  *(_DWORD *)(a1 + 88) = 0;
  sub_566A7C(a1 + 96, v14, *(_QWORD *)(v14 - 24), &v18);
  *(_DWORD *)(a1 + 88) = a4;
  v15 = *(_QWORD *)(a1 + 96);
  v16 = 0;
  if ( (a4 & 3) != 0 )
    v16 = *(_QWORD *)(v15 - 24);
  sub_545B8C(a1 + 24, v15, 0, v16);
  return sub_5210E8(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), a1 + 24);
}

