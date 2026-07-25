/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8AB0
 * Mangled: .__cxa_get_globals_fast
 * Demangled: .__cxa_get_globals_fast
 *
 * Callers: 2
 *   0x000000000051D2E4  __cxa_end_catch
 *   0x000000000051DEF0  __cxa_call_unexpected
 *
 * Callees: 1
 *   0x000000000051D4D0  __cxa_get_globals_fast
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8AB8 string=0x00000000001F8ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __cxa_get_globals_fast()
{
  return _cxa_get_globals_fast();
}

