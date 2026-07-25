/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BA38
 * Mangled: sub_56BA38
 * Demangled: sub_56BA38
 *
 * Callers: 2
 *   0x000000000056BAD0  sub_56BAD0
 *   0x000000000056BADC  sub_56BADC
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 4
 *   insn=0x000000000056BA58 string=0x000000000056BA5C "#"
 *   insn=0x000000000056BA64 string=0x000000000056BA68 "_"
 *   insn=0x000000000056BA6C string=0x000000000056BA70 "T"
 *   insn=0x000000000056BA8C string=0x000000000056BA90 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BA38(__int64 *a1, wchar_t *s, unsigned __int64 a3, size_t n)
{
  unsigned __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x20
  wchar_t v10; // w1

  v7 = a3;
  if ( !n )
    return -1;
  v8 = *a1;
  if ( a3 >= *(_QWORD *)(v8 - 24) )
    return -1;
  v9 = 4 * a3;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v8 + v9);
    v9 += 4;
    if ( wmemchr(s, v10, n) )
      break;
    v8 = *a1;
    if ( ++v7 >= *(_QWORD *)(*a1 - 24) )
      return -1;
  }
  return v7;
}

