/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542ACC
 * Mangled: sub_542ACC
 * Demangled: sub_542ACC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000542ACC string=0x0000000000542AD0 "? "
 *   insn=0x0000000000542AD0 string=0x0000000000542AD4 "B"
 *   insn=0x0000000000542AD8 string=0x0000000000542ADC "`"
 *   insn=0x0000000000542ADC string=0x0000000000542AE0 "?("
 *   insn=0x0000000000542ADC string=0x0000000000542B28 "D"
 *   insn=0x0000000000542AE0 string=0x0000000000542AE4 "@"
 *   insn=0x0000000000542AE4 string=0x0000000000542AE8 "D"
 *   insn=0x0000000000542AE4 string=0x0000000000542B0C "D"
 *   insn=0x0000000000542AE8 string=0x0000000000542AEC "?@"
 *   insn=0x0000000000542AF0 string=0x0000000000542AF4 "A\t"
 *   insn=0x0000000000542AF4 string=0x0000000000542AF8 "c"
 *   insn=0x0000000000542AFC string=0x0000000000542B00 "a"
 *   insn=0x0000000000542B00 string=0x0000000000542B04 "A"
 *   insn=0x0000000000542B0C string=0x0000000000542B10 "A\t"
 *   insn=0x0000000000542B10 string=0x0000000000542B14 "C"
 *   insn=0x0000000000542B18 string=0x0000000000542B1C "a"
 *   insn=0x0000000000542B1C string=0x0000000000542B20 "A"
 *   insn=0x0000000000542B28 string=0x0000000000542B2C "A\t"
 *   insn=0x0000000000542B34 string=0x0000000000542B38 "a"
 *   insn=0x0000000000542B38 string=0x0000000000542B3C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_542ACC(_QWORD *result, int a2)
{
  char *v2; // x2
  int v3; // w3

  v2 = (char *)result + *(_QWORD *)(*result - 24LL);
  if ( a2 == 8 )
  {
    *((_DWORD *)v2 + 6) = *((_DWORD *)v2 + 6) & 0xFFFFFFB5 | 0x40;
  }
  else if ( a2 == 10 )
  {
    *((_DWORD *)v2 + 6) = *((_DWORD *)v2 + 6) & 0xFFFFFFB5 | 2;
  }
  else
  {
    if ( a2 == 16 )
      v3 = 8;
    else
      v3 = 0;
    *((_DWORD *)v2 + 6) = v3 | *((_DWORD *)v2 + 6) & 0xFFFFFFB5;
  }
  return result;
}

