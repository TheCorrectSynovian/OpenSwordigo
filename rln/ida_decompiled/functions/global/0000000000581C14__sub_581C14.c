/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581C14
 * Mangled: sub_581C14
 * Demangled: sub_581C14
 *
 * Callers: 1
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000581C14 string=0x0000000000581C18 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581C14(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x3
  unsigned __int64 v4; // x1
  __int64 result; // x0

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a3 + 8);
  if ( v3 >= v4 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v3 > v4 )
    return 1;
  else
    return (unsigned int)result;
}

