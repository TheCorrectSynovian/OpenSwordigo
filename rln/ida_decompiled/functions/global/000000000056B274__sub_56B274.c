/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B274
 * Mangled: sub_56B274
 * Demangled: sub_56B274
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 2
 *   insn=0x000000000056B28C string=0x000000000056B290 "?"
 *   insn=0x000000000056B290 string=0x000000000056B294 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_56B274(_QWORD *result, __int64 a2, unsigned __int64 a3, char *a4)
{
  if ( 0xFFFFFFFFFFFFFFELL - *(_QWORD *)(*result - 24LL) + a2 < a3 )
    sub_56554C(a4);
  return result;
}

