/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568468
 * Mangled: sub_568468
 * Demangled: sub_568468
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 3
 *   insn=0x000000000056848C string=0x0000000000568490 "_"
 *   insn=0x00000000005684B4 string=0x00000000005684B8 " "
 *   insn=0x00000000005684B8 string=0x000000000056849C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_568468(__int64 *a1, void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x20
  unsigned __int64 v5; // x19
  unsigned __int64 v7; // x21

  v4 = *a1;
  v5 = a3;
  v7 = *(_QWORD *)(*a1 - 24);
  if ( a3 >= v7 )
    return -1;
  while ( memchr(a2, *(unsigned __int8 *)(v4 + v5), a4) )
  {
    if ( ++v5 >= v7 )
      return -1;
  }
  return v5;
}

