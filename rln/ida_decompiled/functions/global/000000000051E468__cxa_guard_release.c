/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E468
 * Mangled: __cxa_guard_release
 * Demangled: __cxa_guard_release
 *
 * Callers: 1
 *   0x00000000001F7040  .__cxa_guard_release
 *
 * Callees: 2
 *   0x00000000002025A0  .syscall
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 9
 *   insn=0x000000000051E470 string=0x000000000051E474 "B<G"
 *   insn=0x000000000051E474 string=0x000000000051E478 "b"
 *   insn=0x000000000051E478 string=0x000000000051E47C """
 *   insn=0x000000000051E484 string=0x000000000051E488 "C"
 *   insn=0x000000000051E488 string=0x000000000051E48C "A"
 *   insn=0x000000000051E49C string=0x000000000051E4A0 "a"
 *   insn=0x000000000051E4B0 string=0x000000000051E4B4 "@"
 *   insn=0x000000000051E4B4 string=0x000000000051E4B8 ":"
 *   insn=0x000000000051E4C4 string=0x000000000051E4C8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void _cxa_guard_release(__guard *a1)
{
  unsigned int v1; // w4

  if ( &pthread_create )
  {
    do
      v1 = __ldaxr((unsigned int *)a1);
    while ( __stlxr(1u, (unsigned int *)a1) );
    if ( (v1 & 0x10000) != 0 )
      syscall(98, a1, 1, 0x7FFFFFFF);
  }
  else
  {
    *((_BYTE *)a1 + 1) = 0;
    *(_BYTE *)a1 = 1;
  }
}

