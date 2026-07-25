/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056EB28
 * Mangled: sub_56EB28
 * Demangled: sub_56EB28
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x000000000056EB38 string=0x000000000056EB3C "s"
 *   insn=0x000000000056EB3C string=0x000000000056EB40 "a"
 *   insn=0x000000000056EB64 string=0x000000000056EB68 "!<G"
 *   insn=0x000000000056EB6C string=0x000000000056EC00 "s"
 *   insn=0x000000000056EB70 string=0x000000000056EB74 """
 *   insn=0x000000000056EB74 string=0x000000000056EB78 "B"
 *   insn=0x000000000056EB78 string=0x000000000056EB7C """
 *   insn=0x000000000056EB90 string=0x000000000056EB94 "a"
 *   insn=0x000000000056EB9C string=0x000000000056EBA0 "b"
 *   insn=0x000000000056EBA4 string=0x000000000056EBA8 """
 *   insn=0x000000000056EBA8 string=0x000000000056EBAC "_"
 *   insn=0x000000000056EBA8 string=0x000000000056EBCC "a"
 *   insn=0x000000000056EBB4 string=0x000000000056EBF0 "a"
 *   insn=0x000000000056EBB8 string=0x000000000056EBBC "ab"
 *   insn=0x000000000056EBC0 string=0x000000000056EBC4 "b"
 *   insn=0x000000000056EBE4 string=0x000000000056EBE8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56EB28(__int64 a1)
{
  int v1; // w19
  __int64 result; // x0
  unsigned int *v3; // x1
  unsigned int v4; // w2
  __int64 v6; // x20
  size_t v7; // x2

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 < 0 )
  {
    v6 = sub_56C5B8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    v7 = *(_QWORD *)a1;
    result = v6 + 24;
    if ( *(_QWORD *)a1 )
    {
      if ( v7 == 1 )
      {
        result = v6 + 24;
        *(_DWORD *)(v6 + 24) = *(_DWORD *)(a1 + 24);
      }
      else
      {
        wmemcpy((wchar_t *)(v6 + 24), (const wchar_t *)(a1 + 24), v7);
        v7 = *(_QWORD *)a1;
        result = v6 + 24;
      }
    }
    if ( (__int64 *)v6 != &qword_6FD300 )
    {
      *(_DWORD *)(v6 + 16) = 0;
      *(_QWORD *)v6 = v7;
      *(_DWORD *)(v6 + 4 * v7 + 24) = 0;
    }
  }
  else
  {
    if ( (__int64 *)a1 != &qword_6FD300 )
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
    return a1 + 24;
  }
  return result;
}

