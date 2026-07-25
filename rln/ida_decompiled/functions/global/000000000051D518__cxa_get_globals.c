/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D518
 * Mangled: __cxa_get_globals
 * Demangled: __cxa_get_globals
 *
 * Callers: 1
 *   0x00000000001FE3A0  .__cxa_get_globals
 *
 * Callees: 4
 *   0x00000000001F48D0  .pthread_getspecific
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FAE90  .pthread_setspecific
 *   0x0000000000203770  std::terminate(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000051D550 string=0x00000000001F48D0 "P'"
 *   insn=0x000000000051D554 string=0x000000000051D558 " "
 *   insn=0x000000000051D55C string=0x000000000051D560 "Db"
 *   insn=0x000000000051D560 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051D568 string=0x000000000051D57C "}"
 *   insn=0x000000000051D570 string=0x000000000051D574 "Gv"
 *   insn=0x000000000051D574 string=0x000000000051D578 "@"
 *   insn=0x000000000051D574 string=0x00000000001FAE90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *_cxa_get_globals()
{
  _DWORD *v0; // x19

  if ( !byte_6FBD0C )
    return &unk_6FBD10;
  v0 = pthread_getspecific(dword_6FBD08);
  if ( !v0 )
  {
    v0 = malloc(0x10u);
    if ( !v0 || pthread_setspecific(dword_6FBD08, v0) )
      std::terminate();
    *(_QWORD *)v0 = 0;
    v0[2] = 0;
  }
  return v0;
}

