/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B2A8
 * Mangled: sub_56B2A8
 * Demangled: sub_56B2A8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000056B2AC string=0x000000000056B2B0 "a"
 *   insn=0x000000000056B2B0 string=0x000000000056B2B4 "?"
 *   insn=0x000000000056B2B4 string=0x000000000056B2B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56B2A8(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x1

  v3 = *(_QWORD *)(*a1 - 24LL) - a2;
  if ( v3 > a3 )
    return a3;
  else
    return v3;
}

