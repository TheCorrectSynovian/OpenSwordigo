/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C5E0
 * Mangled: sub_54C5E0
 * Demangled: sub_54C5E0
 *
 * Callers: 2
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000054CA60  sub_54CA60
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000054C5E0 string=0x000000000054C5E4 "C"
 *   insn=0x000000000054C5E8 string=0x000000000054C5EC "C"
 *   insn=0x000000000054C5EC string=0x000000000054C5F0 "`"
 *   insn=0x000000000054C5F4 string=0x000000000054C5F8 "C"
 *   insn=0x000000000054C5F8 string=0x000000000054C5FC "#"
 *   insn=0x000000000054C600 string=0x000000000054C604 " "
 *   insn=0x000000000054C604 string=0x000000000054C628 """
 *   insn=0x000000000054C608 string=0x000000000054C60C "#"
 *   insn=0x000000000054C610 string=0x000000000054C614 " "
 *   insn=0x000000000054C614 string=0x000000000054C618 """
 *   insn=0x000000000054C614 string=0x000000000054C638 """
 *   insn=0x000000000054C618 string=0x000000000054C61C "@"
 *   insn=0x000000000054C628 string=0x000000000054C62C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C5E0(__int64 result, _QWORD *a2)
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
  if ( *a2 == result )
  {
    *a2 = v2;
    *(_QWORD *)(v2 + 24) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  else
  {
    v4 = *(_QWORD *)(result + 8);
    if ( *(_QWORD *)(v4 + 24) == result )
      *(_QWORD *)(v4 + 24) = v2;
    else
      *(_QWORD *)(v4 + 16) = v2;
    *(_QWORD *)(v2 + 24) = result;
    *(_QWORD *)(result + 8) = v2;
  }
  return result;
}

