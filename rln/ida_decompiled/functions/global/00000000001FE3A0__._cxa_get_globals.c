/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE3A0
 * Mangled: .__cxa_get_globals
 * Demangled: .__cxa_get_globals
 *
 * Callers: 6
 *   0x000000000051D244  __cxa_begin_catch
 *   0x000000000051D380  std::uncaught_exception(void)
 *   0x000000000051E108  __cxa_throw
 *   0x000000000051E194  __cxa_rethrow
 *   0x000000000056FF1C  std::current_exception(void)
 *   0x000000000057F9AC  __cxa_current_exception_type
 *
 * Callees: 1
 *   0x000000000051D518  __cxa_get_globals
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE3A8 string=0x00000000001FE3AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __cxa_get_globals()
{
  return _cxa_get_globals();
}

