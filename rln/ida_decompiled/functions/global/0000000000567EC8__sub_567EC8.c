/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567EC8
 * Mangled: sub_567EC8
 * Demangled: sub_567EC8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 7
 *   insn=0x0000000000567ED0 string=0x0000000000567ED4 "5"
 *   insn=0x0000000000567EF0 string=0x0000000000567F04 " "
 *   insn=0x0000000000567F04 string=0x0000000000567F08 "_"
 *   insn=0x0000000000567F08 string=0x0000000000567F0C "S"
 *   insn=0x0000000000567F28 string=0x0000000000567F2C "a"
 *   insn=0x0000000000567F28 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000567F2C string=0x0000000000567F30 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_567EC8(__int64 *a1, const void **a2, size_t a3)
{
  const void *v3; // x21
  __int64 v4; // x22
  __int64 result; // x0
  size_t v6; // x20
  size_t v7; // x1
  size_t v8; // x19

  v3 = *a2;
  v4 = *a1;
  result = -1;
  v6 = *((_QWORD *)*a2 - 3);
  v7 = *(_QWORD *)(v4 - 24);
  if ( v6 <= v7 )
  {
    if ( a3 > v7 - v6 )
      v8 = v7 - v6;
    else
      v8 = a3;
    while ( 1 )
    {
      if ( !memcmp((const void *)(v4 + v8), v3, v6) )
        return v8;
      if ( !v8 )
        break;
      --v8;
    }
    return -1;
  }
  return result;
}

