/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562DAC
 * Mangled: sub_562DAC
 * Demangled: sub_562DAC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000562DAC string=0x0000000000562DB0 "#"
 *   insn=0x0000000000562DB0 string=0x0000000000562DB4 "_"
 *   insn=0x0000000000562DBC string=0x0000000000562DC0 "?"
 *   insn=0x0000000000562DCC string=0x0000000000562DD0 "D"
 *   insn=0x0000000000562DD8 string=0x0000000000562DDC "a"
 *   insn=0x0000000000562DDC string=0x0000000000562DE0 "C"
 *   insn=0x0000000000562DE4 string=0x0000000000562DE8 "?"
 *   insn=0x0000000000562DEC string=0x0000000000562DF0 "A"
 *   insn=0x0000000000562DF4 string=0x0000000000562DF8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_562DAC(__int64 result, __int64 a2)
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
    *(_QWORD *)(result + 24) = v3 + 4 * a2;
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
    *(_QWORD *)(result + 48) = v3 + 4 * v4 - 4;
  }
  return result;
}

