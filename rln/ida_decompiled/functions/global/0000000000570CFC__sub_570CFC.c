/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570CFC
 * Mangled: sub_570CFC
 * Demangled: sub_570CFC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F77C0  .__ctype_get_mb_cur_max
 *
 * Referenced strings: 1
 *   insn=0x0000000000570D04 string=0x00000000001F77C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool sub_570CFC()
{
  return __ctype_get_mb_cur_max() == 1;
}

