/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F77C0
 * Mangled: .__ctype_get_mb_cur_max
 * Demangled: .__ctype_get_mb_cur_max
 *
 * Callers: 3
 *   0x0000000000570AB4  sub_570AB4
 *   0x0000000000570CFC  sub_570CFC
 *   0x0000000000570D28  sub_570D28
 *
 * Callees: 1
 *   0x00000000006FE7A0  __ctype_get_mb_cur_max
 *
 * Referenced strings: 1
 *   insn=0x00000000001F77C8 string=0x00000000001F77CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t __ctype_get_mb_cur_max(void)
{
  return _ctype_get_mb_cur_max();
}

