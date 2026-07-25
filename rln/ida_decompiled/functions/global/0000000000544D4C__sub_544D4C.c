/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544D4C
 * Mangled: sub_544D4C
 * Demangled: sub_544D4C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 19
 *   insn=0x0000000000544D60 string=0x0000000000544D68 "`"
 *   insn=0x0000000000544D68 string=0x0000000000544D6C "b&@"
 *   insn=0x0000000000544D6C string=0x0000000000544D70 "!"
 *   insn=0x0000000000544D70 string=0x0000000000544D74 "@`"
 *   insn=0x0000000000544D84 string=0x0000000000544D88 "!$E"
 *   insn=0x0000000000544D88 string=0x0000000000544D8C "!@"
 *   insn=0x0000000000544D98 string=0x0000000000544D9C "E"
 *   insn=0x0000000000544D9C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000544DAC string=0x0000000000544DB0 "!<G"
 *   insn=0x0000000000544DB0 string=0x0000000000544DB4 "a"
 *   insn=0x0000000000544DB4 string=0x0000000000544DB8 "B "
 *   insn=0x0000000000544DB4 string=0x0000000000544DE0 "A"
 *   insn=0x0000000000544DB8 string=0x0000000000544DBC "A"
 *   insn=0x0000000000544DBC string=0x0000000000544DC0 "#"
 *   insn=0x0000000000544DC0 string=0x0000000000544DC4 "C"
 *   insn=0x0000000000544DC8 string=0x0000000000544DCC "?"
 *   insn=0x0000000000544DD4 string=0x0000000000544DD8 "s"
 *   insn=0x0000000000544DE0 string=0x0000000000544DE4 "#"
 *   insn=0x0000000000544DE4 string=0x0000000000544DE8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_544D4C(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6DA7B0;
  v2 = *((_QWORD *)a1 + 9);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  *(_QWORD *)a1 = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 7);
  operator delete(a1);
}

