/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581368
 * Mangled: sub_581368
 * Demangled: sub_581368
 *
 * Callers: 4
 *   0x00000000005813B4  sub_5813B4
 *   0x0000000000581474  sub_581474
 *   0x0000000000581658  sub_581658
 *   0x0000000000581ADC  sub_581ADC
 *
 * Callees: 2
 *   0x000000000057FF08  sub_57FF08
 *   0x0000000000581080  sub_581080
 *
 * Referenced strings: 5
 *   insn=0x0000000000581378 string=0x000000000058137C "A"
 *   insn=0x000000000058137C string=0x0000000000581380 "a6C"
 *   insn=0x0000000000581380 string=0x0000000000581384 "s"
 *   insn=0x0000000000581384 string=0x0000000000581388 "`\n@"
 *   insn=0x000000000058138C string=0x0000000000581390 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581368(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x1
  __int64 result; // x0

  sub_581080(a1, a2);
  v4 = a2[205];
  result = LODWORD(a2[2 * v4 + 1]);
  if ( (_DWORD)result == 6 )
  {
    a1[99] = 0;
  }
  else
  {
    result = sub_57FF08((__int64)a1, v4);
    a1[99] = result;
  }
  return result;
}

