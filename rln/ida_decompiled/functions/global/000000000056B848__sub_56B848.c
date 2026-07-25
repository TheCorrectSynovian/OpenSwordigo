/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B848
 * Mangled: sub_56B848
 * Demangled: sub_56B848
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F45F0  .wmemcmp
 *
 * Referenced strings: 7
 *   insn=0x000000000056B858 string=0x000000000056B85C "6"
 *   insn=0x000000000056B86C string=0x000000000056B884 "s"
 *   insn=0x000000000056B884 string=0x000000000056B888 "_"
 *   insn=0x000000000056B888 string=0x000000000056B88C "S"
 *   insn=0x000000000056B8AC string=0x000000000056B8B0 "P#"
 *   insn=0x000000000056B8B0 string=0x000000000056B8B4 "a"
 *   insn=0x000000000056B8B0 string=0x00000000001F45F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B848(_QWORD *a1, const wchar_t **a2, size_t a3)
{
  const wchar_t *v3; // x22
  size_t v4; // x19
  size_t v5; // x21
  size_t v7; // x19
  __int64 v8; // x20
  const wchar_t *v9; // x0

  v3 = *a2;
  v4 = *(_QWORD *)(*a1 - 24LL);
  v5 = *((_QWORD *)*a2 - 3);
  if ( v5 > v4 )
    return -1;
  v7 = v4 - v5;
  if ( a3 <= v7 )
    v7 = a3;
  v8 = *a1 + 4 * v7;
  while ( 1 )
  {
    v9 = (const wchar_t *)v8;
    v8 -= 4;
    if ( !wmemcmp(v9, v3, v5) )
      break;
    if ( !v7 )
      return -1;
    --v7;
  }
  return v7;
}

