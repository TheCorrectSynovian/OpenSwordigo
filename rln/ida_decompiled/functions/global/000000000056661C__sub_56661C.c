/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056661C
 * Mangled: sub_56661C
 * Demangled: sub_56661C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000566620 string=0x0000000000566624 "a"
 *   insn=0x0000000000566624 string=0x0000000000566628 "?"
 *   insn=0x0000000000566628 string=0x000000000056662C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56661C(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x1

  v3 = *(_QWORD *)(*a1 - 24LL) - a2;
  if ( v3 > a3 )
    return a3;
  else
    return v3;
}

