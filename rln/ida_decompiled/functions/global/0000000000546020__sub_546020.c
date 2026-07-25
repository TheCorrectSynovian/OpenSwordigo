/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546020
 * Mangled: sub_546020
 * Demangled: sub_546020
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000546034 string=0x0000000000546038 "!"
 *   insn=0x0000000000546040 string=0x0000000000546044 "c"
 *   insn=0x000000000054604C string=0x0000000000546050 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_546020(_QWORD *result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x1
  __int64 v5; // x4

  result[5] = a2;
  result[4] = a2;
  result[6] = a3;
  if ( a4 <= 0x7FFFFFFF )
  {
    v5 = a2;
  }
  else
  {
    v4 = a2 + 0x7FFFFFFF;
    do
    {
      a4 -= 0x7FFFFFFF;
      v5 = v4;
      v4 += 0x7FFFFFFF;
    }
    while ( a4 > 0x7FFFFFFF );
  }
  result[5] = v5 + (int)a4;
  return result;
}

