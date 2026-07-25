/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566F50
 * Mangled: sub_566F50
 * Demangled: sub_566F50
 *
 * Callers: 8
 *   0x0000000000206B28  sub_206B28
 *   0x0000000000206C84  sub_206C84
 *   0x0000000000206D08  sub_206D08
 *   0x0000000000206FB4  sub_206FB4
 *   0x0000000000207278  sub_207278
 *   0x000000000020BCE8  sub_20BCE8
 *   0x000000000020C138  sub_20C138
 *   0x000000000020CE6C  sub_20CE6C
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 13
 *   insn=0x0000000000566F54 string=0x0000000000566F5C "@`"
 *   insn=0x0000000000566F60 string=0x0000000000566F64 "A"
 *   insn=0x0000000000566F6C string=0x0000000000566F70 "!<G"
 *   insn=0x0000000000566F70 string=0x0000000000566F74 "!"
 *   insn=0x0000000000566F74 string=0x0000000000566F78 "B "
 *   insn=0x0000000000566F74 string=0x0000000000566F98 "A"
 *   insn=0x0000000000566F78 string=0x0000000000566F7C "A"
 *   insn=0x0000000000566F7C string=0x0000000000566F80 "#"
 *   insn=0x0000000000566F80 string=0x0000000000566F84 "C"
 *   insn=0x0000000000566F88 string=0x0000000000566F8C "?"
 *   insn=0x0000000000566F94 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000566F98 string=0x0000000000566F9C "#"
 *   insn=0x0000000000566F9C string=0x0000000000566FA0 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_566F50(__int64 *a1)
{
  __int64 v1; // x2
  __int64 *v2; // x0
  unsigned int *v3; // x2
  int v4; // w1

  v1 = *a1;
  v2 = (__int64 *)(*a1 - 24);
  if ( v2 != &qword_6FD2E0 )
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

