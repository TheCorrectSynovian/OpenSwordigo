/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C7E0
 * Mangled: sub_54C7E0
 * Demangled: sub_54C7E0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000054C7E0 string=0x000000000054C7E4 "C@"
 *   insn=0x000000000054C7E8 string=0x000000000054C7EC "C"
 *   insn=0x000000000054C7EC string=0x000000000054C7F0 "`"
 *   insn=0x000000000054C7F4 string=0x000000000054C7F8 "C"
 *   insn=0x000000000054C7F8 string=0x000000000054C7FC "#"
 *   insn=0x000000000054C800 string=0x000000000054C804 " "
 *   insn=0x000000000054C804 string=0x000000000054C828 """
 *   insn=0x000000000054C808 string=0x000000000054C80C "#@"
 *   insn=0x000000000054C810 string=0x000000000054C814 " "
 *   insn=0x000000000054C814 string=0x000000000054C818 """
 *   insn=0x000000000054C814 string=0x000000000054C838 """
 *   insn=0x000000000054C818 string=0x000000000054C81C "@"
 *   insn=0x000000000054C828 string=0x000000000054C82C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C7E0(__int64 result, _QWORD *a2)
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
  if ( result == *a2 )
  {
    *a2 = v2;
    *(_QWORD *)(v2 + 16) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  else
  {
    v4 = *(_QWORD *)(result + 8);
    if ( result == *(_QWORD *)(v4 + 16) )
      *(_QWORD *)(v4 + 16) = v2;
    else
      *(_QWORD *)(v4 + 24) = v2;
    *(_QWORD *)(v2 + 16) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  return result;
}

