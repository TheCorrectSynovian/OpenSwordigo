/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D4D0
 * Mangled: __cxa_get_globals_fast
 * Demangled: __cxa_get_globals_fast
 *
 * Callers: 1
 *   0x00000000001F8AB0  .__cxa_get_globals_fast
 *
 * Callees: 1
 *   0x00000000001F48D0  .pthread_getspecific
 *
 * Referenced strings: 2
 *   insn=0x000000000051D4DC string=0x000000000051D4E0 "!"
 *   insn=0x000000000051D4FC string=0x00000000001F48D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *_cxa_get_globals_fast()
{
  if ( byte_6FBD0C )
    return pthread_getspecific(dword_6FBD08);
  else
    return &unk_6FBD10;
}

