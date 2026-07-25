/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545D04
 * Mangled: sub_545D04
 * Demangled: sub_545D04
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000545DD0  sub_545DD0
 *   0x0000000000566A7C  sub_566A7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000545D2C string=0x0000000000545D30 "c@"
 *   insn=0x0000000000545D34 string=0x0000000000545D38 "c"
 *   insn=0x0000000000545D4C string=0x0000000000545D50 "v"
 *   insn=0x0000000000545D58 string=0x0000000000545D60 "`""
 *   insn=0x0000000000545D60 string=0x0000000000545D64 "!"
 *   insn=0x0000000000545D68 string=0x0000000000545D6C """
 *   insn=0x0000000000545D6C string=0x0000000000545D70 "c"
 *   insn=0x0000000000545D74 string=0x0000000000545D78 "A"
 *   insn=0x0000000000545D78 string=0x0000000000545D7C "tB"
 *   insn=0x0000000000545D80 string=0x0000000000545D84 "a&@"
 *   insn=0x0000000000545D88 string=0x0000000000545D8C "T"
 *   insn=0x0000000000545D8C string=0x0000000000545D90 "#"
 *   insn=0x0000000000545D98 string=0x0000000000545D9C "|"
 *   insn=0x0000000000545DBC string=0x0000000000545DC0 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545D04(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x3
  char v11; // [xsp+48h] [xbp+48h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7710;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  v5 = *a2;
  *(_DWORD *)(a1 + 64) = 0;
  v6 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)a1 = off_6DA7B0;
  sub_566A7C(a1 + 72, v5, v6, &v11);
  *(_DWORD *)(a1 + 64) = a3;
  v7 = *(_QWORD *)(a1 + 72);
  v8 = 0;
  if ( (a3 & 3) != 0 )
    v8 = *(_QWORD *)(v7 - 24);
  return sub_545B8C(a1, v7, 0, v8);
}

