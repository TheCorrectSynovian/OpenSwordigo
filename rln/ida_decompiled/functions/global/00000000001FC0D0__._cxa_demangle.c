/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC0D0
 * Mangled: .__cxa_demangle
 * Demangled: .__cxa_demangle
 *
 * Callers: 1
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callees: 1
 *   0x000000000057F820  __cxa_demangle
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC0D8 string=0x00000000001FC0DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *__cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus)
{
  return _cxa_demangle(lpmangled, lpout, lpoutlen, lpstatus);
}

