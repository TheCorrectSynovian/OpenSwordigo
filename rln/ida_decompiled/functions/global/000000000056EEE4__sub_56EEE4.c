/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056EEE4
 * Mangled: sub_56EEE4
 * Demangled: sub_56EEE4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056ECAC  sub_56ECAC
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x000000000056EEF4 string=0x000000000056EEF8 "3"
 *   insn=0x000000000056EEF8 string=0x000000000056EEFC "_"
 *   insn=0x000000000056EF00 string=0x000000000056EF04 "c"
 *   insn=0x000000000056EF04 string=0x000000000056EF08 "`b"
 *   insn=0x000000000056EF08 string=0x000000000056EF0C "C"
 *   insn=0x000000000056EF0C string=0x000000000056EF10 "a"
 *   insn=0x000000000056EF10 string=0x000000000056EF14 "$"
 *   insn=0x000000000056EF1C string=0x000000000056EF20 "@`"
 *   insn=0x000000000056EF20 string=0x000000000056EF24 "!"
 *   insn=0x000000000056EF44 string=0x000000000056EF48 "!<G"
 *   insn=0x000000000056EF4C string=0x000000000056EF50 "B "
 *   insn=0x000000000056EF4C string=0x000000000056EFC4 "A"
 *   insn=0x000000000056EF50 string=0x000000000056EF54 "A"
 *   insn=0x000000000056EF54 string=0x000000000056EF58 "#"
 *   insn=0x000000000056EF58 string=0x000000000056EF5C "C"
 *   insn=0x000000000056EF60 string=0x000000000056EF64 "?"
 *   insn=0x000000000056EF64 string=0x000000000056EF68 "L"
 *   insn=0x000000000056EF6C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056EF78 string=0x000000000056EF7C "L"
 *   insn=0x000000000056EF84 string=0x000000000056EF88 "a"
 *   insn=0x000000000056EF98 string=0x000000000056EF9C "`""
 *   insn=0x000000000056EF98 string=0x000000000056EFB8 "c"
 *   insn=0x000000000056EFA0 string=0x000000000056EFA4 "B"
 *   insn=0x000000000056EFB8 string=0x000000000056EFBC "c"
 *   insn=0x000000000056EFC4 string=0x000000000056EFC8 "#"
 *   insn=0x000000000056EFC8 string=0x000000000056EFCC "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56EEE4(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x2
  __int64 v4; // x19
  int v5; // w3
  __int64 *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x2
  int v10; // w1
  unsigned int *v11; // x0
  unsigned int v12; // w2
  char v13; // [xsp+28h] [xbp+28h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *(_DWORD *)(v4 - 8);
    v6 = (__int64 *)(v4 - 24);
    if ( v5 < 0 )
    {
      v4 = sub_56ECAC((__int64)v6, (__int64)&v13, 0);
      v2 = *a1;
    }
    else if ( v6 != &qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v11 = (unsigned int *)(v4 - 8);
        do
          v12 = __ldaxr(v11);
        while ( __stlxr(v12 + 1, v11) );
        v2 = *a1;
      }
      else
      {
        *(_DWORD *)(v4 - 8) = v5 + 1;
      }
    }
    v7 = (void *)(v2 - 24);
    if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v9 = (unsigned int *)(v2 - 8);
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = *(_DWORD *)(v2 - 8);
        *(_DWORD *)(v2 - 8) = v10 - 1;
      }
      if ( v10 <= 0 )
        operator delete(v7);
    }
    *a1 = v4;
  }
  return a1;
}

