/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE90
 * Mangled: .pthread_setspecific
 * Demangled: .pthread_setspecific
 *
 * Callers: 1
 *   0x000000000051D518  __cxa_get_globals
 *
 * Callees: 1
 *   0x00000000006FE8D8  pthread_setspecific
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE98 string=0x00000000001FAE9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_setspecific(pthread_key_t key, const void *pointer)
{
  return pthread_setspecific(key, pointer);
}

