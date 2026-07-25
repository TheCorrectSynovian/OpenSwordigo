/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005665E4
 * Mangled: sub_5665E4
 * Demangled: sub_5665E4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 3
 *   insn=0x00000000005665F0 string=0x00000000005665F4 "$"
 *   insn=0x0000000000566600 string=0x0000000000566604 "?"
 *   insn=0x0000000000566604 string=0x0000000000566608 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5665E4(_QWORD *result, __int64 a2, unsigned __int64 a3, char *a4)
{
  if ( 0x3FFFFFFFFFFFFFF9LL - *(_QWORD *)(*result - 24LL) + a2 < a3 )
    sub_56554C(a4);
  return result;
}

