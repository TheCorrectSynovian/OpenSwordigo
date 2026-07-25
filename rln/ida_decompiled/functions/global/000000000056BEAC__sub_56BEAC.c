/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BEAC
 * Mangled: sub_56BEAC
 * Demangled: sub_56BEAC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000200670  .wmemchr
 *   0x0000000000202DD0  .wcslen
 *
 * Referenced strings: 2
 *   insn=0x000000000056BECC string=0x000000000056BED0 "T"
 *   insn=0x000000000056BEF0 string=0x000000000056BEF4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BEAC(__int64 *a1, wchar_t *s, unsigned __int64 a3)
{
  unsigned __int64 v5; // x19
  __int64 v6; // x20
  size_t v7; // x23
  __int64 v8; // x0
  wchar_t v9; // w1

  v5 = a3;
  v6 = 4 * a3;
  v7 = wcslen(s);
  v8 = *a1;
  if ( v5 >= *(_QWORD *)(*a1 - 24) )
    return -1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v8 + v6);
    v6 += 4;
    if ( !wmemchr(s, v9, v7) )
      break;
    v8 = *a1;
    if ( ++v5 >= *(_QWORD *)(*a1 - 24) )
      return -1;
  }
  return v5;
}

