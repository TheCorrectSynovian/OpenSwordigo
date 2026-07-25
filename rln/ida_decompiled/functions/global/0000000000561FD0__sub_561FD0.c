/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561FD0
 * Mangled: sub_561FD0
 * Demangled: sub_561FD0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000561FE0 string=0x0000000000561FE4 "_"
 *   insn=0x0000000000561FF4 string=0x0000000000561FF8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561FD0(__int64 result)
{
  __int64 v1; // x3
  _BOOL8 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x1

  if ( *(_BYTE *)(result + 192) )
  {
    v1 = *(_QWORD *)(result + 176);
    v2 = *(_QWORD *)(result + 16) != *(_QWORD *)(result + 8);
    v3 = *(_QWORD *)(result + 184);
    *(_QWORD *)(result + 8) = *(_QWORD *)(result + 152);
    v4 = v1 + 4 * v2;
    *(_QWORD *)(result + 24) = v3;
    *(_QWORD *)(result + 176) = v4;
    *(_QWORD *)(result + 16) = v4;
    *(_BYTE *)(result + 192) = 0;
  }
  return result;
}

