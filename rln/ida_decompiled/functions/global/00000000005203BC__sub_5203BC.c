/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005203BC
 * Mangled: sub_5203BC
 * Demangled: sub_5203BC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000005203C4 string=0x00000000005203C8 "!"
 *   insn=0x00000000005203C8 string=0x00000000005203CC "Aha8a"
 *   insn=0x00000000005203CC string=0x00000000005203D0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5203BC(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x2
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 48);
  result = a2;
  if ( (*(_BYTE *)(v2 + a2) & 1) != 0 )
    return (unsigned __int8)(a2 + 32);
  return result;
}

