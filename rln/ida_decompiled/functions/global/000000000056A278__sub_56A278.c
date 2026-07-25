/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A278
 * Mangled: sub_56A278
 * Demangled: sub_56A278
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000201760  .memcpy
 *   0x0000000000568C20  sub_568C20
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x000000000056A284 string=0x000000000056A288 "S"
 *   insn=0x000000000056A2AC string=0x000000000056A2B0 "!<G"
 *   insn=0x000000000056A2B4 string=0x000000000056A348 "s"
 *   insn=0x000000000056A2B8 string=0x000000000056A2BC """
 *   insn=0x000000000056A2BC string=0x000000000056A2C0 "B"
 *   insn=0x000000000056A2C0 string=0x000000000056A2C4 """
 *   insn=0x000000000056A2D8 string=0x000000000056A2DC "a"
 *   insn=0x000000000056A2DC string=0x000000000056A2E0 "P"
 *   insn=0x000000000056A2E4 string=0x000000000056A2E8 "b"
 *   insn=0x000000000056A2F0 string=0x000000000056A2F4 "_"
 *   insn=0x000000000056A2FC string=0x000000000056A334 "ab@9"
 *   insn=0x000000000056A300 string=0x000000000056A304 "ab"
 *   insn=0x000000000056A308 string=0x000000000056A30C "b"
 *   insn=0x000000000056A318 string=0x000000000056A31C " "
 *   insn=0x000000000056A328 string=0x000000000056A32C "?`"
 *   insn=0x000000000056A33C string=0x000000000056A340 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_56A278(__int64 a1)
{
  int v1; // w19
  void *result; // x0
  unsigned int *v3; // x1
  unsigned int v4; // w2
  __int64 v6; // x20
  size_t v7; // x2

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 < 0 )
  {
    v6 = sub_568C20(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    v7 = *(_QWORD *)a1;
    result = (void *)(v6 + 24);
    if ( *(_QWORD *)a1 )
    {
      if ( v7 == 1 )
      {
        result = (void *)(v6 + 24);
        *(_BYTE *)(v6 + 24) = *(_BYTE *)(a1 + 24);
      }
      else
      {
        result = memcpy((void *)(v6 + 24), (const void *)(a1 + 24), v7);
      }
      v7 = *(_QWORD *)a1;
    }
    if ( (__int64 *)v6 != &qword_6FD2E0 )
    {
      *(_DWORD *)(v6 + 16) = 0;
      *(_QWORD *)v6 = v7;
      *(_BYTE *)(v6 + v7 + 24) = 0;
    }
  }
  else
  {
    if ( (__int64 *)a1 != &qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v3 = (unsigned int *)(a1 + 16);
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 + 1, v3) );
      }
      else
      {
        *(_DWORD *)(a1 + 16) = v1 + 1;
      }
    }
    return (void *)(a1 + 24);
  }
  return result;
}

