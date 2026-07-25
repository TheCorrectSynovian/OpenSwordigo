/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203480
 * Mangled: .pthread_key_create
 * Demangled: .pthread_key_create
 *
 * Callers: 1
 *   0x000000000020DEE0  sub_20DEE0
 *
 * Callees: 1
 *   0x00000000006FECB8  pthread_key_create
 *
 * Referenced strings: 1
 *   insn=0x0000000000203488 string=0x000000000020348C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_key_create(pthread_key_t *key, void (*destr_function)(void *))
{
  return pthread_key_create(key, destr_function);
}

