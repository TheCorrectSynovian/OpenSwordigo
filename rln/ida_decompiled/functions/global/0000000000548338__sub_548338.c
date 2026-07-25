/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000548338
 * Mangled: sub_548338
 * Demangled: sub_548338
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000548348 string=0x000000000054834C ""
 *   insn=0x000000000054834C string=0x000000000054836C "#"
 *   insn=0x0000000000548358 string=0x000000000054835C "c"
 *   insn=0x000000000054835C string=0x0000000000548360 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_548338(_QWORD *result, __int64 a2, __int64 a3, __int64 a4)
{
  result[5] = a2;
  result[4] = a2;
  for ( result[6] = a3; a4 > 0x7FFFFFFF; a2 += 0x1FFFFFFFCLL )
    a4 -= 0x7FFFFFFF;
  result[5] = a2 + 4LL * (int)a4;
  return result;
}

