/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C840
 * Mangled: sub_54C840
 * Demangled: sub_54C840
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000054C840 string=0x000000000054C844 "C"
 *   insn=0x000000000054C848 string=0x000000000054C84C "C"
 *   insn=0x000000000054C84C string=0x000000000054C850 "`"
 *   insn=0x000000000054C854 string=0x000000000054C858 "C"
 *   insn=0x000000000054C858 string=0x000000000054C85C "#"
 *   insn=0x000000000054C860 string=0x000000000054C864 " "
 *   insn=0x000000000054C864 string=0x000000000054C888 """
 *   insn=0x000000000054C868 string=0x000000000054C86C "#"
 *   insn=0x000000000054C870 string=0x000000000054C874 " "
 *   insn=0x000000000054C874 string=0x000000000054C878 """
 *   insn=0x000000000054C874 string=0x000000000054C898 """
 *   insn=0x000000000054C878 string=0x000000000054C87C "@"
 *   insn=0x000000000054C888 string=0x000000000054C88C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C840(__int64 result, _QWORD *a2)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1

  v2 = *(_QWORD *)(result + 16);
  v3 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(result + 16) = v3;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = result;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(result + 8);
  if ( result == *a2 )
  {
    *a2 = v2;
    *(_QWORD *)(v2 + 24) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  else
  {
    v4 = *(_QWORD *)(result + 8);
    if ( result == *(_QWORD *)(v4 + 24) )
      *(_QWORD *)(v4 + 24) = v2;
    else
      *(_QWORD *)(v4 + 16) = v2;
    *(_QWORD *)(v2 + 24) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  return result;
}

