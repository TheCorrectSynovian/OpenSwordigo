/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524FE8
 * Mangled: sub_524FE8
 * Demangled: sub_524FE8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000524FE8 string=0x0000000000524FEC "!|@"
 *   insn=0x0000000000524FEC string=0x0000000000524FF0 "B"
 *   insn=0x0000000000524FF4 string=0x0000000000524FF8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524FE8(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 16) = a2;
  return result;
}

