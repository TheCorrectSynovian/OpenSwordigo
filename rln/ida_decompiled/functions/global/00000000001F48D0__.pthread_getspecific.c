/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F48D0
 * Mangled: .pthread_getspecific
 * Demangled: .pthread_getspecific
 *
 * Callers: 2
 *   0x000000000051D4D0  __cxa_get_globals_fast
 *   0x000000000051D518  __cxa_get_globals
 *
 * Callees: 1
 *   0x00000000006FE618  pthread_getspecific
 *
 * Referenced strings: 1
 *   insn=0x00000000001F48D8 string=0x00000000001F48DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *pthread_getspecific(pthread_key_t key)
{
  return pthread_getspecific(key);
}

