/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545204
 * Mangled: sub_545204
 * Demangled: sub_545204
 *
 * Callers: 1
 *   0x00000000005452D8  sub_5452D8
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x0000000000545218 string=0x0000000000545220 "`"
 *   insn=0x0000000000545224 string=0x000000000054522C "`."
 *   insn=0x0000000000545230 string=0x0000000000545234 "b*@"
 *   insn=0x0000000000545238 string=0x000000000054523C "`"
 *   insn=0x000000000054523C string=0x0000000000545240 "@`"
 *   insn=0x0000000000545240 string=0x0000000000545244 "!"
 *   insn=0x0000000000545248 string=0x000000000054524C "A"
 *   insn=0x0000000000545250 string=0x0000000000545254 "`"
 *   insn=0x0000000000545254 string=0x0000000000545258 "!"
 *   insn=0x0000000000545258 string=0x000000000054525C "!@"
 *   insn=0x000000000054525C string=0x0000000000545260 "a"
 *   insn=0x0000000000545268 string=0x000000000054526C "`b"
 *   insn=0x000000000054526C string=0x0000000000545270 "!$E"
 *   insn=0x0000000000545270 string=0x0000000000545274 "!@"
 *   insn=0x0000000000545274 string=0x0000000000545278 "a."
 *   insn=0x0000000000545280 string=0x0000000000545284 ""
 *   insn=0x0000000000545284 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000545294 string=0x0000000000545298 "!<G"
 *   insn=0x0000000000545298 string=0x000000000054529C "a"
 *   insn=0x000000000054529C string=0x00000000005452A0 "B "
 *   insn=0x000000000054529C string=0x00000000005452C8 "A"
 *   insn=0x00000000005452A0 string=0x00000000005452A4 "A"
 *   insn=0x00000000005452A4 string=0x00000000005452A8 "#"
 *   insn=0x00000000005452A8 string=0x00000000005452AC "C"
 *   insn=0x00000000005452B0 string=0x00000000005452B4 "?"
 *   insn=0x00000000005452BC string=0x00000000005452C0 "g"
 *   insn=0x00000000005452C8 string=0x00000000005452CC "#"
 *   insn=0x00000000005452CC string=0x00000000005452D0 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_545204(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6B7448;
  *((_QWORD *)a1 + 11) = off_6B7470;
  v2 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 1) = off_6DA9F0;
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
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
  *((_QWORD *)a1 + 1) = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 8);
  *((_QWORD *)a1 + 11) = off_6B6B50;
  sub_5221DC((_QWORD *)a1 + 11);
  operator delete(a1);
}

