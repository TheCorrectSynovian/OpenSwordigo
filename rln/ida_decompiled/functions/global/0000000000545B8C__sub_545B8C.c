/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545B8C
 * Mangled: sub_545B8C
 * Demangled: sub_545B8C
 *
 * Callers: 14
 *   0x0000000000545C34  sub_545C34
 *   0x0000000000545C54  sub_545C54
 *   0x0000000000545CA0  sub_545CA0
 *   0x0000000000545D04  sub_545D04
 *   0x0000000000545DD0  sub_545DD0
 *   0x0000000000546320  sub_546320
 *   0x00000000005464C0  sub_5464C0
 *   0x000000000054690C  sub_54690C
 *   0x0000000000546C04  sub_546C04
 *   0x0000000000546D9C  sub_546D9C
 *   0x00000000005471E4  sub_5471E4
 *   0x0000000000547574  sub_547574
 *   0x0000000000547764  sub_547764
 *   0x0000000000547C2C  sub_547C2C
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000545B90 string=0x0000000000545B94 "?"
 *   insn=0x0000000000545BA4 string=0x0000000000545BA8 "$"
 *   insn=0x0000000000545BAC string=0x0000000000545C24 "&"
 *   insn=0x0000000000545BBC string=0x0000000000545BC0 """
 *   insn=0x0000000000545BE4 string=0x0000000000545BE8 "-"
 *   insn=0x0000000000545BE8 string=0x0000000000545BEC "!"
 *   insn=0x0000000000545BF0 string=0x0000000000545BF4 "c"
 *   insn=0x0000000000545BFC string=0x0000000000545C00 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545B8C(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x6
  bool v5; // zf
  __int64 v6; // x4
  unsigned __int64 v7; // x7
  __int64 v8; // x6
  int v9; // w5
  __int64 v10; // x4
  __int64 v11; // x6
  __int64 v12; // x1
  __int64 v13; // x5

  v4 = *(_QWORD *)(result + 72);
  v5 = a2 == v4;
  v6 = *(_QWORD *)(v4 - 24);
  v7 = ((unsigned __int64)*(unsigned int *)(result + 64) >> 3) & 1;
  v8 = *(_QWORD *)(v4 - 16);
  v9 = *(_DWORD *)(result + 64) & 0x10;
  v10 = a2 + v6;
  if ( v5 )
  {
    v11 = a2 + v8;
  }
  else
  {
    v10 += a3;
    a3 = 0;
    v11 = v10;
  }
  if ( (_DWORD)v7 )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_QWORD *)(result + 16) = a2 + a3;
    *(_QWORD *)(result + 24) = v10;
  }
  if ( v9 )
  {
    *(_QWORD *)(result + 40) = a2;
    *(_QWORD *)(result + 32) = a2;
    *(_QWORD *)(result + 48) = v11;
    if ( a4 <= 0x7FFFFFFF )
    {
      v13 = a2;
    }
    else
    {
      v12 = a2 + 0x7FFFFFFF;
      do
      {
        a4 -= 0x7FFFFFFF;
        v13 = v12;
        v12 += 0x7FFFFFFF;
      }
      while ( a4 > 0x7FFFFFFF );
    }
    *(_QWORD *)(result + 40) = v13 + (int)a4;
    if ( !(_DWORD)v7 )
    {
      *(_QWORD *)(result + 8) = v10;
      *(_QWORD *)(result + 16) = v10;
      *(_QWORD *)(result + 24) = v10;
    }
  }
  return result;
}

