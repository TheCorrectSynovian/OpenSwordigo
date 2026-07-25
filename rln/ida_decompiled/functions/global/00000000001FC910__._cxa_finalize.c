/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC910
 * Mangled: .__cxa_finalize
 * Demangled: .__cxa_finalize
 *
 * Callers: 1
 *   0x0000000000203F50  sub_203F50
 *
 * Callees: 1
 *   0x00000000006FE9C0  __cxa_finalize
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC918 string=0x00000000001FC91C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int __cxa_finalize(void *a1)
{
  return _cxa_finalize(a1);
}

