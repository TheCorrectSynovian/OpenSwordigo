/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B510
 * Mangled: sub_54B510
 * Demangled: sub_54B510
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000054B51C string=0x000000000054B520 "_"
 *   insn=0x000000000054B524 string=0x000000000054B528 "B"
 *   insn=0x000000000054B538 string=0x000000000054B53C "!(@"
 *   insn=0x000000000054B53C string=0x000000000054B540 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_54B510(_QWORD *result)
{
  unsigned __int64 v1; // x2

  v1 = result[2];
  if ( v1 >= result[3] )
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 80LL))(result);
  result[2] = v1 + 1;
  return result;
}

