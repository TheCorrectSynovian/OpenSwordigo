/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B438
 * Mangled: sub_56B438
 * Demangled: sub_56B438
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 13
 *   insn=0x000000000056B43C string=0x000000000056B444 "@`"
 *   insn=0x000000000056B448 string=0x000000000056B44C "A"
 *   insn=0x000000000056B454 string=0x000000000056B458 "!<G"
 *   insn=0x000000000056B458 string=0x000000000056B45C "!"
 *   insn=0x000000000056B45C string=0x000000000056B460 "B "
 *   insn=0x000000000056B45C string=0x000000000056B480 "A"
 *   insn=0x000000000056B460 string=0x000000000056B464 "A"
 *   insn=0x000000000056B464 string=0x000000000056B468 "#"
 *   insn=0x000000000056B468 string=0x000000000056B46C "C"
 *   insn=0x000000000056B470 string=0x000000000056B474 "?"
 *   insn=0x000000000056B47C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056B480 string=0x000000000056B484 "#"
 *   insn=0x000000000056B484 string=0x000000000056B488 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56B438(__int64 *a1)
{
  __int64 v1; // x2
  __int64 *v2; // x0
  unsigned int *v3; // x2
  int v4; // w1

  v1 = *a1;
  v2 = (__int64 *)(*a1 - 24);
  if ( v2 != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v3 = (unsigned int *)(v1 - 8);
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v4 - 1;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

