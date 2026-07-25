/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547EA4
 * Mangled: sub_547EA4
 * Demangled: sub_547EA4
 *
 * Callers: 14
 *   0x0000000000547F50  sub_547F50
 *   0x0000000000547F70  sub_547F70
 *   0x0000000000547FBC  sub_547FBC
 *   0x0000000000548020  sub_548020
 *   0x00000000005480EC  sub_5480EC
 *   0x000000000054862C  sub_54862C
 *   0x00000000005487CC  sub_5487CC
 *   0x0000000000548C18  sub_548C18
 *   0x0000000000548F10  sub_548F10
 *   0x00000000005490A8  sub_5490A8
 *   0x00000000005494F0  sub_5494F0
 *   0x0000000000549880  sub_549880
 *   0x0000000000549A70  sub_549A70
 *   0x0000000000549F38  sub_549F38
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000547EA8 string=0x0000000000547EAC "?"
 *   insn=0x0000000000547EBC string=0x0000000000547EC0 "%"
 *   insn=0x0000000000547EC4 string=0x0000000000547F40 "&"
 *   insn=0x0000000000547ED4 string=0x0000000000547ED8 """
 *   insn=0x0000000000547EFC string=0x0000000000547F00 "M"
 *   insn=0x0000000000547F08 string=0x0000000000547F0C "!"
 *   insn=0x0000000000547F0C string=0x0000000000547F10 "c"
 *   insn=0x0000000000547F18 string=0x0000000000547F1C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_547EA4(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x6
  bool v5; // zf
  __int64 v6; // x5
  unsigned __int64 v7; // x8
  __int64 v8; // x6
  int v9; // w4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x1
  __int64 v13; // x6

  v4 = *(_QWORD *)(result + 72);
  v5 = a2 == v4;
  v6 = *(_QWORD *)(v4 - 24);
  v7 = ((unsigned __int64)*(unsigned int *)(result + 64) >> 3) & 1;
  v8 = *(_QWORD *)(v4 - 16);
  v9 = *(_DWORD *)(result + 64) & 0x10;
  v10 = a2 + 4 * v6;
  if ( v5 )
  {
    v11 = a2 + 4 * v8;
  }
  else
  {
    v10 += 4 * a3;
    a3 = 0;
    v11 = v10;
  }
  if ( (_DWORD)v7 )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_QWORD *)(result + 16) = a2 + 4 * a3;
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
      v12 = a2 + 0x1FFFFFFFCLL;
      do
      {
        a4 -= 0x7FFFFFFF;
        v13 = v12;
        v12 += 0x1FFFFFFFCLL;
      }
      while ( a4 > 0x7FFFFFFF );
    }
    *(_QWORD *)(result + 40) = v13 + 4LL * (int)a4;
    if ( !(_DWORD)v7 )
    {
      *(_QWORD *)(result + 8) = v10;
      *(_QWORD *)(result + 16) = v10;
      *(_QWORD *)(result + 24) = v10;
    }
  }
  return result;
}

