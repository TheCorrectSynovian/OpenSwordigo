/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566690
 * Mangled: sub_566690
 * Demangled: sub_566690
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 4
 *   insn=0x0000000000566694 string=0x0000000000566698 "A"
 *   insn=0x0000000000566698 string=0x000000000056669C "`"
 *   insn=0x00000000005666A0 string=0x00000000005666A4 "gU"
 *   insn=0x00000000005666A4 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int8 *__fastcall sub_566690(unsigned __int8 *result, size_t a2, unsigned __int8 a3)
{
  if ( a2 != 1 )
    return (unsigned __int8 *)memset(result, a3, a2);
  *result = a3;
  return result;
}

