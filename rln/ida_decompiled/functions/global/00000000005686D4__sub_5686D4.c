/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005686D4
 * Mangled: sub_5686D4
 * Demangled: sub_5686D4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203020  .memchr
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 6
 *   insn=0x000000000056870C string=0x0000000000568720 "!"
 *   insn=0x0000000000568720 string=0x0000000000568724 "_"
 *   insn=0x0000000000568724 string=0x0000000000568728 "S"
 *   insn=0x0000000000568744 string=0x0000000000568748 "6j"
 *   insn=0x0000000000568748 string=0x000000000056874C " "
 *   insn=0x000000000056874C string=0x0000000000568730 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_5686D4(__int64 *a1, char *a2, unsigned __int64 a3)
{
  size_t v5; // x0
  __int64 v6; // x20
  size_t v7; // x22
  unsigned __int64 result; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x1
  unsigned __int64 v11; // x19

  v5 = strlen(a2);
  v6 = *a1;
  v7 = v5;
  result = -1;
  v9 = *(_QWORD *)(v6 - 24);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( a3 > v10 )
      v11 = v10;
    else
      v11 = a3;
    do
    {
      if ( !memchr(a2, *(unsigned __int8 *)(v6 + v11), v7) )
        break;
      --v11;
    }
    while ( v11 != -1 );
    return v11;
  }
  return result;
}

