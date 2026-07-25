/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED96C
 * Mangled: sub_4ED96C
 * Demangled: sub_4ED96C
 *
 * Callers: 1
 *   0x00000000004F3460  sub_4F3460
 *
 * Callees: 1
 *   0x00000000004ED9A0  sub_4ED9A0
 *
 * Referenced strings: 3
 *   insn=0x00000000004ED97C string=0x00000000004ED988 "h"
 *   insn=0x00000000004ED980 string=0x00000000004ED984 ""
 *   insn=0x00000000004ED988 string=0x00000000004ED98C ")@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED96C(__int64 result)
{
  __int64 i; // x19

  for ( i = result; *(_QWORD *)(*(_QWORD *)(i + 32) + 80LL); result = sub_4ED9A0(i) )
    ;
  return result;
}

