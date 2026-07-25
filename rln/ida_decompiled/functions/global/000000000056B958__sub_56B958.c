/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B958
 * Mangled: sub_56B958
 * Demangled: sub_56B958
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F45F0  .wmemcmp
 *   0x0000000000202DD0  .wcslen
 *
 * Referenced strings: 3
 *   insn=0x000000000056B9D0 string=0x000000000056B9D4 "#"
 *   insn=0x000000000056B9D4 string=0x000000000056B9D8 "a"
 *   insn=0x000000000056B9D4 string=0x00000000001F45F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_56B958(__int64 *a1, wchar_t *s, size_t a3)
{
  size_t v5; // x0
  __int64 v6; // x20
  size_t v7; // x21
  size_t v8; // x0
  size_t v10; // x0
  size_t v11; // x19
  const wchar_t *v12; // x20
  const wchar_t *v13; // x0

  v5 = wcslen(s);
  v6 = *a1;
  v7 = v5;
  v8 = *(_QWORD *)(v6 - 24);
  if ( v7 > v8 )
    return -1;
  v10 = v8 - v7;
  if ( v10 > a3 )
    v11 = a3;
  else
    v11 = v10;
  v12 = (const wchar_t *)(v6 + 4 * v11);
  while ( 1 )
  {
    v13 = v12--;
    if ( !wmemcmp(v13, s, v7) )
      break;
    if ( !v11 )
      return -1;
    --v11;
  }
  return v11;
}

