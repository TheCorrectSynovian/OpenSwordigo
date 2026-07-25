/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055EDB0
 * Mangled: sub_55EDB0
 * Demangled: sub_55EDB0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000055EDCC string=0x000000000055EDD0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55EDB0(__int64 result)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( *(_BYTE *)(result + 192) )
  {
    v1 = *(_QWORD *)(result + 176);
    v2 = *(_QWORD *)(result + 184);
    if ( *(_QWORD *)(result + 16) != *(_QWORD *)(result + 8) )
      ++v1;
    *(_QWORD *)(result + 8) = *(_QWORD *)(result + 152);
    *(_QWORD *)(result + 176) = v1;
    *(_QWORD *)(result + 16) = v1;
    *(_QWORD *)(result + 24) = v2;
    *(_BYTE *)(result + 192) = 0;
  }
  return result;
}

