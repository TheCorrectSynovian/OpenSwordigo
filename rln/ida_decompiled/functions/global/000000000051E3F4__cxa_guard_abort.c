/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E3F4
 * Mangled: __cxa_guard_abort
 * Demangled: __cxa_guard_abort
 *
 * Callers: 1
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *
 * Callees: 2
 *   0x00000000002025A0  .syscall
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 7
 *   insn=0x000000000051E3FC string=0x000000000051E400 "B<G"
 *   insn=0x000000000051E400 string=0x000000000051E404 "B"
 *   insn=0x000000000051E404 string=0x000000000051E408 """
 *   insn=0x000000000051E40C string=0x000000000051E410 "A"
 *   insn=0x000000000051E424 string=0x000000000051E428 "a"
 *   insn=0x000000000051E438 string=0x000000000051E43C "@"
 *   insn=0x000000000051E43C string=0x000000000051E440 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void _cxa_guard_abort(__guard *a1)
{
  unsigned int v1; // w3

  if ( &pthread_create )
  {
    do
      v1 = __ldaxr((unsigned int *)a1);
    while ( __stlxr(0, (unsigned int *)a1) );
    if ( (v1 & 0x10000) != 0 )
      syscall(98, a1, 1, 0x7FFFFFFF, 0);
  }
  else
  {
    *((_BYTE *)a1 + 1) = 0;
  }
}

