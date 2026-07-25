/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560260
 * Mangled: sub_560260
 * Demangled: sub_560260
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000560260 string=0x0000000000560264 "#"
 *   insn=0x0000000000560264 string=0x0000000000560268 "_"
 *   insn=0x0000000000560270 string=0x0000000000560274 "?"
 *   insn=0x0000000000560280 string=0x0000000000560284 "D"
 *   insn=0x000000000056028C string=0x0000000000560290 "a"
 *   insn=0x0000000000560290 string=0x0000000000560294 "C"
 *   insn=0x0000000000560298 string=0x000000000056029C "?"
 *   insn=0x00000000005602A0 string=0x00000000005602A4 "!"
 *   insn=0x00000000005602A8 string=0x00000000005602AC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560260(__int64 result, __int64 a2)
{
  _BOOL4 v2; // w3
  __int64 v3; // x2
  unsigned __int64 v4; // x1

  v2 = (*(_DWORD *)(result + 120) & 0x11) != 0;
  if ( (*(_DWORD *)(result + 120) & 8) != 0 && a2 > 0 )
  {
    v3 = *(_QWORD *)(result + 152);
    *(_QWORD *)(result + 8) = v3;
    *(_QWORD *)(result + 16) = v3;
    *(_QWORD *)(result + 24) = v3 + a2;
  }
  else
  {
    v3 = *(_QWORD *)(result + 152);
    *(_QWORD *)(result + 8) = v3;
    *(_QWORD *)(result + 16) = v3;
    *(_QWORD *)(result + 24) = v3;
  }
  if ( a2 || !v2 || (v4 = *(_QWORD *)(result + 160), v4 <= 1) )
  {
    *(_QWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 32) = 0;
    *(_QWORD *)(result + 48) = 0;
  }
  else
  {
    *(_QWORD *)(result + 40) = v3;
    *(_QWORD *)(result + 32) = v3;
    *(_QWORD *)(result + 48) = v3 + v4 - 1;
  }
  return result;
}

