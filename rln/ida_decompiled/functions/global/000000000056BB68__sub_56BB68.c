/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BB68
 * Mangled: sub_56BB68
 * Demangled: sub_56BB68
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 10
 *   insn=0x000000000056BB70 string=0x000000000056BB74 "6"
 *   insn=0x000000000056BB84 string=0x000000000056BB88 "3"
 *   insn=0x000000000056BB88 string=0x000000000056BB8C "W"
 *   insn=0x000000000056BB90 string=0x000000000056BBAC "s"
 *   insn=0x000000000056BBB0 string=0x000000000056BBB4 "_"
 *   insn=0x000000000056BBB4 string=0x000000000056BBB8 "S"
 *   insn=0x000000000056BBB8 string=0x000000000056BBBC "t"
 *   insn=0x000000000056BBC0 string=0x000000000056BBD4 "!ht"
 *   insn=0x000000000056BBC8 string=0x000000000056BBCC "@"
 *   insn=0x000000000056BBE8 string=0x000000000056BBC4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56BB68(__int64 *a1, const wchar_t **a2, unsigned __int64 a3)
{
  const wchar_t *v3; // x22
  __int64 v4; // x1
  size_t v5; // x23
  __int64 v6; // x19
  unsigned __int64 v8; // x19
  __int64 v10; // x20
  wchar_t v11; // w1

  v3 = *a2;
  v4 = *a1;
  v5 = *((_QWORD *)v3 - 3);
  v6 = *(_QWORD *)(*a1 - 24);
  if ( !v5 || !v6 )
    return -1;
  v8 = v6 - 1;
  if ( a3 <= v8 )
    v8 = a3;
  v10 = 4 * v8;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v4 + v10);
    v10 -= 4;
    if ( wmemchr(v3, v11, v5) )
      break;
    if ( --v8 == -1 )
      return -1;
    v4 = *a1;
  }
  return v8;
}

