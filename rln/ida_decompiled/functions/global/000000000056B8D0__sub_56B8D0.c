/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B8D0
 * Mangled: sub_56B8D0
 * Demangled: sub_56B8D0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F45F0  .wmemcmp
 *
 * Referenced strings: 5
 *   insn=0x000000000056B8EC string=0x000000000056B904 "s"
 *   insn=0x000000000056B910 string=0x000000000056B914 "s"
 *   insn=0x000000000056B934 string=0x000000000056B938 ".#"
 *   insn=0x000000000056B938 string=0x000000000056B93C "b"
 *   insn=0x000000000056B938 string=0x00000000001F45F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_56B8D0(_QWORD *a1, wchar_t *s2, size_t a3, size_t n)
{
  size_t v4; // x19
  size_t v6; // x19
  __int64 v9; // x20
  const wchar_t *v10; // x0

  v4 = *(_QWORD *)(*a1 - 24LL);
  if ( n > v4 )
    return -1;
  v6 = v4 - n;
  if ( v6 > a3 )
    v6 = a3;
  v9 = *a1 + 4 * v6;
  while ( 1 )
  {
    v10 = (const wchar_t *)v9;
    v9 -= 4;
    if ( !wmemcmp(v10, s2, n) )
      break;
    if ( !v6 )
      return -1;
    --v6;
  }
  return v6;
}

