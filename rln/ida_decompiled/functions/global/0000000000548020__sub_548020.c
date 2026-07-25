/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000548020
 * Mangled: sub_548020
 * Demangled: sub_548020
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000547EA4  sub_547EA4
 *   0x00000000005480EC  sub_5480EC
 *   0x000000000056DF24  sub_56DF24
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000548048 string=0x000000000054804C "c@"
 *   insn=0x0000000000548050 string=0x0000000000548054 "c"
 *   insn=0x0000000000548074 string=0x000000000054807C "`""
 *   insn=0x000000000054807C string=0x0000000000548080 "!"
 *   insn=0x0000000000548084 string=0x0000000000548088 """
 *   insn=0x0000000000548088 string=0x000000000054808C "c"
 *   insn=0x0000000000548094 string=0x0000000000548098 "tB"
 *   insn=0x000000000054809C string=0x00000000005480A0 "a&@"
 *   insn=0x00000000005480A4 string=0x00000000005480A8 "T"
 *   insn=0x00000000005480A8 string=0x00000000005480AC "#"
 *   insn=0x00000000005480B4 string=0x00000000005480B8 "{"
 *   insn=0x00000000005480D8 string=0x00000000005480DC "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_548020(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x3
  char v11; // [xsp+48h] [xbp+48h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7790;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  v5 = *a2;
  *(_DWORD *)(a1 + 64) = 0;
  v6 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)a1 = off_6DA9F0;
  sub_56DF24(a1 + 72, v5, v6, &v11);
  *(_DWORD *)(a1 + 64) = a3;
  v7 = *(_QWORD *)(a1 + 72);
  v8 = 0;
  if ( (a3 & 3) != 0 )
    v8 = *(_QWORD *)(v7 - 24);
  return sub_547EA4(a1, v7, 0, v8);
}

