/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005683E4
 * Mangled: sub_5683E4
 * Demangled: sub_5683E4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 4
 *   insn=0x00000000005683F4 string=0x00000000005683F8 "4"
 *   insn=0x0000000000568404 string=0x0000000000568408 "_"
 *   insn=0x0000000000568430 string=0x0000000000568434 " "
 *   insn=0x0000000000568434 string=0x0000000000568418 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5683E4(__int64 *a1, const void **a2, unsigned __int64 a3)
{
  __int64 v3; // x21
  const void *v4; // x20
  unsigned __int64 v5; // x19
  unsigned __int64 v6; // x22
  size_t v7; // x23

  v3 = *a1;
  v4 = *a2;
  v5 = a3;
  v6 = *(_QWORD *)(*a1 - 24);
  v7 = *((_QWORD *)*a2 - 3);
  if ( a3 >= v6 )
    return -1;
  while ( memchr(v4, *(unsigned __int8 *)(v3 + v5), v7) )
  {
    if ( ++v5 >= v6 )
      return -1;
  }
  return v5;
}

