/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D380
 * Mangled: _ZSt18uncaught_exceptionv
 * Demangled: std::uncaught_exception(void)
 *
 * Callers: 1
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *
 * Callees: 1
 *   0x00000000001FE3A0  .__cxa_get_globals
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool std::uncaught_exception(void)
{
  return *(_DWORD *)(__cxa_get_globals() + 8) != 0;
}

