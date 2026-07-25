/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203F50
 * Mangled: sub_203F50
 * Demangled: sub_203F50
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC910  .__cxa_finalize
 *
 * Referenced strings: 2
 *   insn=0x0000000000203F50 string=0x0000000000203F58 "n"
 *   insn=0x0000000000203F58 string=0x00000000001FC910 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_203F50()
{
  return __cxa_finalize(&off_6E8000);
}

