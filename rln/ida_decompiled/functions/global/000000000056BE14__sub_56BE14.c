/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BE14
 * Mangled: sub_56BE14
 * Demangled: sub_56BE14
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 3
 *   insn=0x000000000056BE3C string=0x000000000056BE40 "T"
 *   insn=0x000000000056BE40 string=0x000000000056BE44 "_"
 *   insn=0x000000000056BE50 string=0x000000000056BE54 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BE14(__int64 *a1, wchar_t *s, unsigned __int64 a3, size_t n)
{
  __int64 v5; // x0
  unsigned __int64 v7; // x19
  __int64 v9; // x20
  wchar_t v10; // w1

  v5 = *a1;
  v7 = a3;
  v9 = 4 * a3;
  if ( a3 >= *(_QWORD *)(v5 - 24) )
    return -1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v5 + v9);
    v9 += 4;
    if ( !wmemchr(s, v10, n) )
      break;
    v5 = *a1;
    if ( ++v7 >= *(_QWORD *)(*a1 - 24) )
      return -1;
  }
  return v7;
}

