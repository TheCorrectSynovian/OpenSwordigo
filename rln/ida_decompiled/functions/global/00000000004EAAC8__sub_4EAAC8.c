/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EAAC8
 * Mangled: sub_4EAAC8
 * Demangled: sub_4EAAC8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004EAAC8 string=0x00000000004EAACC "\t"
 *   insn=0x00000000004EAACC string=0x00000000004EAAD0 "?"
 *   insn=0x00000000004EAAD4 string=0x00000000004EAAD8 "("
 *   insn=0x00000000004EAADC string=0x00000000004EAAE0 "I!"
 *   insn=0x00000000004EAAE0 string=0x00000000004EAAE4 "\n"
 *   insn=0x00000000004EAAE4 string=0x00000000004EAAEC "?"
 *   insn=0x00000000004EAAEC string=0x00000000004EAAF0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_4EAAC8(unsigned int a1)
{
  unsigned int v2; // w9
  _BOOL8 result; // x0

  v2 = a1 & 0x3F;
  result = 0;
  if ( v2 <= 0x22 && ((1LL << v2) & 0x470000000LL) != 0 )
    return a1 < 0x800000;
  return result;
}

