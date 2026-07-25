/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567F5C
 * Mangled: sub_567F5C
 * Demangled: sub_567F5C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 4
 *   insn=0x0000000000567FB8 string=0x0000000000567FBC "u4"
 *   insn=0x0000000000567FBC string=0x0000000000567FC0 "b"
 *   insn=0x0000000000567FBC string=0x00000000001F5190 "P'"
 *   insn=0x0000000000567FC0 string=0x0000000000567FC4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_567F5C(__int64 *a1, void *a2, size_t a3, size_t a4)
{
  __int64 v4; // x21
  size_t result; // x0
  size_t v6; // x4
  size_t v9; // x19

  v4 = *a1;
  result = -1;
  v6 = *(_QWORD *)(v4 - 24);
  if ( a4 <= v6 )
  {
    if ( v6 - a4 > a3 )
      v9 = a3;
    else
      v9 = v6 - a4;
    while ( 1 )
    {
      if ( !memcmp((const void *)(v4 + v9), a2, a4) )
        return v9;
      if ( !v9 )
        break;
      --v9;
    }
    return -1;
  }
  return result;
}

