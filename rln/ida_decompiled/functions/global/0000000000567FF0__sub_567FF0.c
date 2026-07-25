/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567FF0
 * Mangled: sub_567FF0
 * Demangled: sub_567FF0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 7
 *   insn=0x000000000056802C string=0x0000000000568040 "!"
 *   insn=0x0000000000568040 string=0x0000000000568044 "?"
 *   insn=0x0000000000568044 string=0x0000000000568048 "3"
 *   insn=0x0000000000568060 string=0x0000000000568064 "K4"
 *   insn=0x0000000000568064 string=0x0000000000568068 "a"
 *   insn=0x0000000000568064 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000568068 string=0x000000000056806C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_567FF0(__int64 *a1, char *a2, size_t a3)
{
  size_t v5; // x0
  __int64 v6; // x21
  size_t v7; // x20
  size_t result; // x0
  size_t v9; // x1
  size_t v10; // x1
  size_t v11; // x19

  v5 = strlen(a2);
  v6 = *a1;
  v7 = v5;
  result = -1;
  v9 = *(_QWORD *)(v6 - 24);
  if ( v7 <= v9 )
  {
    v10 = v9 - v7;
    if ( v10 > a3 )
      v11 = a3;
    else
      v11 = v10;
    while ( 1 )
    {
      if ( !memcmp((const void *)(v6 + v11), a2, v7) )
        return v11;
      if ( !v11 )
        break;
      --v11;
    }
    return -1;
  }
  return result;
}

