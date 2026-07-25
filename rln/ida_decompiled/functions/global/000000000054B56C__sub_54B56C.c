/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B56C
 * Mangled: sub_54B56C
 * Demangled: sub_54B56C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053B7DC  sub_53B7DC
 *
 * Referenced strings: 16
 *   insn=0x000000000054B570 string=0x000000000054B574 "!"
 *   insn=0x000000000054B578 string=0x000000000054B57C "d"
 *   insn=0x000000000054B57C string=0x000000000054B580 "h"
 *   insn=0x000000000054B580 string=0x000000000054B584 "g@"
 *   insn=0x000000000054B584 string=0x000000000054B588 "f"
 *   insn=0x000000000054B588 string=0x000000000054B58C "e"
 *   insn=0x000000000054B58C string=0x000000000054B590 "D"
 *   insn=0x000000000054B590 string=0x000000000054B594 "d"
 *   insn=0x000000000054B594 string=0x000000000054B59C "D"
 *   insn=0x000000000054B59C string=0x000000000054B5A0 "c"
 *   insn=0x000000000054B5A0 string=0x000000000054B5A4 "C"
 *   insn=0x000000000054B5A4 string=0x000000000054B5A8 "H"
 *   insn=0x000000000054B5A8 string=0x000000000054B5AC "G"
 *   insn=0x000000000054B5AC string=0x000000000054B5B0 "F"
 *   insn=0x000000000054B5B0 string=0x000000000054B5B4 "E"
 *   insn=0x000000000054B5B8 string=0x000000000053B7DC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B56C(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x7
  __int64 v4; // x6
  __int64 v5; // x5

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)a1 = off_6B7710;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = v5;
  return sub_53B7DC((unsigned int **)(a1 + 56), (unsigned int **)(a2 + 56));
}

