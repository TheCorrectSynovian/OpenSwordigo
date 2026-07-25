/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A90
 * Mangled: .__cxa_current_exception_type
 * Demangled: .__cxa_current_exception_type
 *
 * Callers: 1
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callees: 1
 *   0x000000000057F9AC  __cxa_current_exception_type
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7A98 string=0x00000000001F7A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
struct type_info *__cxa_current_exception_type(void)
{
  return _cxa_current_exception_type();
}

