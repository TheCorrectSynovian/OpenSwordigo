/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BC04
 * Mangled: sub_56BC04
 * Demangled: sub_56BC04
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 7
 *   insn=0x000000000056BC1C string=0x000000000056BC20 "C"
 *   insn=0x000000000056BC48 string=0x000000000056BC4C "_"
 *   insn=0x000000000056BC50 string=0x000000000056BC54 "S"
 *   insn=0x000000000056BC58 string=0x000000000056BC5C "t"
 *   insn=0x000000000056BC64 string=0x000000000056BC68 "s"
 *   insn=0x000000000056BC78 string=0x000000000056BC7C "}R"
 *   insn=0x000000000056BC7C string=0x000000000056BC80 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BC04(__int64 *a1, wchar_t *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x4
  __int64 v5; // x20
  unsigned __int64 v6; // x19
  unsigned __int64 v8; // x20
  __int64 v12; // x20
  wchar_t v13; // w1

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( !n || !v5 )
    return -1;
  v8 = v5 - 1;
  if ( a3 > v8 )
    v6 = v8;
  else
    v6 = a3;
  v12 = 4 * v6;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v4 + v12);
    v12 -= 4;
    if ( wmemchr(s, v13, n) )
      break;
    if ( !v6 )
      return -1;
    v4 = *a1;
    --v6;
  }
  return v6;
}

