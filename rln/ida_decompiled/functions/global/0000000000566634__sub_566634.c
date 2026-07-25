/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566634
 * Mangled: sub_566634
 * Demangled: sub_566634
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000566634 string=0x0000000000566638 " "
 *   insn=0x0000000000566638 string=0x000000000056663C "?"
 *   insn=0x0000000000566640 string=0x0000000000566644 "@"
 *   insn=0x0000000000566644 string=0x0000000000566648 "B"
 *   insn=0x0000000000566648 string=0x000000000056664C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_566634(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2
  _BOOL8 result; // x0

  v2 = *a1;
  result = 1;
  if ( a2 >= v2 )
    return a2 > v2 + *(_QWORD *)(v2 - 24);
  return result;
}

