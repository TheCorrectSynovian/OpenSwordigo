/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055ED78
 * Mangled: sub_55ED78
 * Demangled: sub_55ED78
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000055ED94 string=0x000000000055ED98 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55ED78(__int64 result)
{
  __int64 v1; // x4
  __int64 v2; // x3

  if ( !*(_BYTE *)(result + 192) )
  {
    v1 = *(_QWORD *)(result + 16);
    v2 = *(_QWORD *)(result + 24);
    *(_QWORD *)(result + 8) = result + 171;
    *(_QWORD *)(result + 16) = result + 171;
    *(_QWORD *)(result + 176) = v1;
    *(_QWORD *)(result + 184) = v2;
    *(_QWORD *)(result + 24) = result + 172;
    *(_BYTE *)(result + 192) = 1;
  }
  return result;
}

