/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3460
 * Mangled: .__cxa_allocate_dependent_exception
 * Demangled: .__cxa_allocate_dependent_exception
 *
 * Callers: 1
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callees: 1
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3468 string=0x00000000001F346C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __cxa_allocate_dependent_exception()
{
  return _cxa_allocate_dependent_exception();
}

