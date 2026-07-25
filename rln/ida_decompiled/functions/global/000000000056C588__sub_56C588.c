/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C588
 * Mangled: sub_56C588
 * Demangled: sub_56C588
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000056C590 string=0x000000000056C594 "A"
 *   insn=0x000000000056C5A4 string=0x000000000056C5A8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C588(__int64 result, __int64 a2)
{
  if ( (__int64 *)result != &qword_6FD300 )
  {
    *(_DWORD *)(result + 16) = 0;
    *(_QWORD *)result = a2;
    *(_DWORD *)(result + 4 * a2 + 24) = 0;
  }
  return result;
}

