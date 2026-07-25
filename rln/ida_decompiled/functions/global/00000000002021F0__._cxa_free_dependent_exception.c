/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002021F0
 * Mangled: .__cxa_free_dependent_exception
 * Demangled: .__cxa_free_dependent_exception
 *
 * Callers: 1
 *   0x000000000056FD44  sub_56FD44
 *
 * Callees: 1
 *   0x000000000051D15C  __cxa_free_dependent_exception
 *
 * Referenced strings: 1
 *   insn=0x00000000002021F8 string=0x00000000002021FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __cxa_free_dependent_exception()
{
  return _cxa_free_dependent_exception();
}

