/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B9CC
 * Mangled: sub_54B9CC
 * Demangled: sub_54B9CC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000054B9D8 string=0x000000000054B9DC "_"
 *   insn=0x000000000054B9E0 string=0x000000000054B9E4 "B"
 *   insn=0x000000000054B9F4 string=0x000000000054B9F8 "!(@"
 *   insn=0x000000000054B9F8 string=0x000000000054B9FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_54B9CC(_QWORD *result)
{
  unsigned __int64 v1; // x2

  v1 = result[2];
  if ( v1 >= result[3] )
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 80LL))(result);
  result[2] = v1 + 4;
  return result;
}

