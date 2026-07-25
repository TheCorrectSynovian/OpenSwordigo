/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568814
 * Mangled: sub_568814
 * Demangled: sub_568814
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 6
 *   insn=0x0000000000568818 string=0x000000000056881C """
 *   insn=0x0000000000568824 string=0x0000000000568828 "T"
 *   insn=0x000000000056882C string=0x0000000000568830 "s"
 *   insn=0x000000000056883C string=0x0000000000568840 "T2"
 *   insn=0x0000000000568840 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000568848 string=0x000000000056884C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568814(const void **a1, const void **a2)
{
  size_t v2; // x20
  const void *v3; // x1
  size_t v4; // x19
  const void *v5; // x0
  size_t v6; // x2
  __int64 result; // x0
  __int64 v8; // x19

  v2 = *((_QWORD *)*a2 - 3);
  v3 = *a2;
  v4 = *((_QWORD *)*a1 - 3);
  v5 = *a1;
  if ( v2 > v4 )
    v6 = v4;
  else
    v6 = v2;
  result = memcmp(v5, v3, v6);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v8 = v4 - v2;
    if ( v8 <= 0x7FFFFFFF )
    {
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v8;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

