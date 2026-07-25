/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005680E0
 * Mangled: sub_5680E0
 * Demangled: sub_5680E0
 *
 * Callers: 2
 *   0x000000000056816C  sub_56816C
 *   0x0000000000568178  sub_568178
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 5
 *   insn=0x0000000000568108 string=0x000000000056810C "u"
 *   insn=0x0000000000568114 string=0x0000000000568118 "I"
 *   insn=0x0000000000568128 string=0x000000000056812C "@"
 *   insn=0x000000000056812C string=0x0000000000568130 "s"
 *   insn=0x0000000000568134 string=0x0000000000568138 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_5680E0(__int64 *a1, void *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v7; // x19
  unsigned __int64 result; // x0
  __int64 v9; // x21
  unsigned __int64 v10; // x23

  v7 = a3;
  result = -1;
  if ( a4 )
  {
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 - 24);
    if ( v10 > a3 )
    {
      while ( !memchr(a2, *(unsigned __int8 *)(v9 + v7), a4) )
      {
        if ( v10 <= ++v7 )
          return -1;
      }
      return v7;
    }
  }
  return result;
}

