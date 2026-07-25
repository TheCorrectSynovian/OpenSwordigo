/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054862C
 * Mangled: sub_54862C
 * Demangled: sub_54862C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203E90  start
 *   0x00000000005219C8  sub_5219C8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056DF24  sub_56DF24
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x0000000000548660 string=0x0000000000548664 "`"
 *   insn=0x0000000000548664 string=0x0000000000548668 "tB"
 *   insn=0x000000000054866C string=0x0000000000548670 "y""
 *   insn=0x0000000000548678 string=0x000000000054867C "dj#"
 *   insn=0x000000000054868C string=0x0000000000548690 "`"
 *   insn=0x000000000054869C string=0x00000000005486A0 "a"
 *   insn=0x00000000005486A0 string=0x00000000005486A4 "!"
 *   insn=0x00000000005486A8 string=0x00000000005486AC "cj!"
 *   insn=0x00000000005486B0 string=0x00000000005486B4 "!@"
 *   insn=0x00000000005486B4 string=0x00000000005486B8 "a\n"
 *   insn=0x00000000005486E0 string=0x00000000005486E4 "A"
 *   insn=0x00000000005486E4 string=0x00000000005486E8 "`\n"
 *   insn=0x00000000005486E8 string=0x00000000005486EC "`b"
 *   insn=0x00000000005486F0 string=0x00000000005486F4 """
 *   insn=0x00000000005486F4 string=0x00000000005486F8 ""
 *   insn=0x0000000000548700 string=0x0000000000548704 "a.@"
 *   insn=0x0000000000548708 string=0x000000000054870C "V"
 *   insn=0x000000000054870C string=0x0000000000548710 "#"
 *   insn=0x000000000054871C string=0x0000000000548720 "`"
 *   insn=0x0000000000548728 string=0x000000000054872C "`"
 *   insn=0x000000000054875C string=0x0000000000548760 "w\n"
 *   insn=0x0000000000548760 string=0x0000000000548764 "Y"
 *   insn=0x000000000054876C string=0x0000000000548770 "a"
 *   insn=0x0000000000548770 string=0x0000000000548774 "!"
 *   insn=0x0000000000548778 string=0x000000000054877C "bj!"
 *   insn=0x000000000054877C string=0x0000000000548780 "Q"
 *   insn=0x0000000000548788 string=0x000000000054878C "x\n"
 *   insn=0x0000000000548790 string=0x0000000000548794 "`.@"
 *   insn=0x0000000000548794 string=0x0000000000548798 "!"
 *   insn=0x00000000005487A0 string=0x00000000005487A4 "`"
 *   insn=0x00000000005487B8 string=0x00000000005487BC "w\n"
 *   insn=0x00000000005487BC string=0x00000000005487C0 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_54862C(__int64 a1, __int64 *a2, __int64 *a3, int a4)
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
  sub_5219C8(a1 + *(_QWORD *)(v7 - 24), 0);
  v9 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v9 - 24)) = a2[3];
  *(_QWORD *)(a1 + 16) = off_6B7790;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  sub_53DB28((_QWORD *)(a1 + 72));
  v10 = *a3;
  *(_QWORD *)(a1 + 16) = off_6DA9F0;
  *(_DWORD *)(a1 + 80) = 0;
  sub_56DF24(a1 + 88, v10, *(_QWORD *)(v10 - 24), &v15);
  *(_DWORD *)(a1 + 80) = a4 | 8;
  v11 = *(_QWORD *)(a1 + 88);
  v12 = 0;
  if ( (a4 & 3) != 0 )
    v12 = *(_QWORD *)(v11 - 24);
  sub_547EA4(a1 + 16, v11, 0, v12);
  return sub_5219C8(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), a1 + 16);
}

