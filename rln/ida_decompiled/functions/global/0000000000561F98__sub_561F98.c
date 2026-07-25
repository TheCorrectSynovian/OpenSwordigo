/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561F98
 * Mangled: sub_561F98
 * Demangled: sub_561F98
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000561FB4 string=0x0000000000561FB8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561F98(__int64 result)
{
  __int64 v1; // x4
  __int64 v2; // x3

  if ( !*(_BYTE *)(result + 192) )
  {
    v1 = *(_QWORD *)(result + 16);
    v2 = *(_QWORD *)(result + 24);
    *(_QWORD *)(result + 8) = result + 172;
    *(_QWORD *)(result + 16) = result + 172;
    *(_QWORD *)(result + 176) = v1;
    *(_QWORD *)(result + 184) = v2;
    *(_QWORD *)(result + 24) = result + 176;
    *(_BYTE *)(result + 192) = 1;
  }
  return result;
}

