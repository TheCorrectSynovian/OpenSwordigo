/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BF94
 * Mangled: sub_56BF94
 * Demangled: sub_56BF94
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 9
 *   insn=0x000000000056BF9C string=0x000000000056BFA0 "6"
 *   insn=0x000000000056BFAC string=0x000000000056BFB0 "3"
 *   insn=0x000000000056BFB8 string=0x000000000056BFD4 "s"
 *   insn=0x000000000056BFD8 string=0x000000000056BFDC "_"
 *   insn=0x000000000056BFDC string=0x000000000056BFE0 "S"
 *   insn=0x000000000056BFE0 string=0x000000000056BFE4 "t"
 *   insn=0x000000000056BFE8 string=0x000000000056BFFC "!ht"
 *   insn=0x000000000056BFF0 string=0x000000000056BFF4 "@"
 *   insn=0x000000000056C010 string=0x000000000056BFEC "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56BF94(__int64 *a1, const wchar_t **a2, unsigned __int64 a3)
{
  const wchar_t *v3; // x22
  __int64 v4; // x1
  __int64 v5; // x19
  size_t v6; // x23
  unsigned __int64 v8; // x19
  __int64 v10; // x20
  wchar_t v11; // w1

  v3 = *a2;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  v6 = *((_QWORD *)v3 - 3);
  if ( !v5 )
    return -1;
  v8 = v5 - 1;
  if ( a3 <= v8 )
    v8 = a3;
  v10 = 4 * v8;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v4 + v10);
    v10 -= 4;
    if ( !wmemchr(v3, v11, v6) )
      break;
    if ( --v8 == -1 )
      return -1;
    v4 = *a1;
  }
  return v8;
}

