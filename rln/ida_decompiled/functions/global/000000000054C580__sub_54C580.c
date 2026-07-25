/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C580
 * Mangled: sub_54C580
 * Demangled: sub_54C580
 *
 * Callers: 2
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000054CA60  sub_54CA60
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000054C580 string=0x000000000054C584 "C@"
 *   insn=0x000000000054C588 string=0x000000000054C58C "C"
 *   insn=0x000000000054C58C string=0x000000000054C590 "`"
 *   insn=0x000000000054C594 string=0x000000000054C598 "C"
 *   insn=0x000000000054C598 string=0x000000000054C59C "#"
 *   insn=0x000000000054C5A0 string=0x000000000054C5A4 " "
 *   insn=0x000000000054C5A4 string=0x000000000054C5C8 """
 *   insn=0x000000000054C5A8 string=0x000000000054C5AC "#@"
 *   insn=0x000000000054C5B0 string=0x000000000054C5B4 " "
 *   insn=0x000000000054C5B4 string=0x000000000054C5B8 """
 *   insn=0x000000000054C5B4 string=0x000000000054C5D8 """
 *   insn=0x000000000054C5B8 string=0x000000000054C5BC "@"
 *   insn=0x000000000054C5C8 string=0x000000000054C5CC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C580(__int64 result, _QWORD *a2)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1

  v2 = *(_QWORD *)(result + 24);
  v3 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(result + 24) = v3;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = result;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(result + 8);
  if ( *a2 == result )
  {
    *a2 = v2;
    *(_QWORD *)(v2 + 16) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  else
  {
    v4 = *(_QWORD *)(result + 8);
    if ( *(_QWORD *)(v4 + 16) == result )
      *(_QWORD *)(v4 + 16) = v2;
    else
      *(_QWORD *)(v4 + 24) = v2;
    *(_QWORD *)(v2 + 16) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  return result;
}

