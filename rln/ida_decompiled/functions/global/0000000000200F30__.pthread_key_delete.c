/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F30
 * Mangled: .pthread_key_delete
 * Demangled: .pthread_key_delete
 *
 * Callers: 1
 *   0x000000000051D468  sub_51D468
 *
 * Callees: 1
 *   0x00000000006FEB98  pthread_key_delete
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F38 string=0x0000000000200F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_key_delete(pthread_key_t key)
{
  return pthread_key_delete(key);
}

