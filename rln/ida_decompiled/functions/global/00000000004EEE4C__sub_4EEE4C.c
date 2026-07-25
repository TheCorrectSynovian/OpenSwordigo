/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEE4C
 * Mangled: sub_4EEE4C
 * Demangled: sub_4EEE4C
 *
 * Callers: 2
 *   0x00000000004F3EC8  sub_4F3EC8
 *   0x00000000004F43C0  sub_4F43C0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004EEE54 string=0x00000000004EEE70 "I"
 *   insn=0x00000000004EEE58 string=0x00000000004EEE5C " }S*}"
 *   insn=0x00000000004EEE5C string=0x00000000004EEE60 "*}"
 *   insn=0x00000000004EEE60 string=0x00000000004EEE64 "!"
 *   insn=0x00000000004EEE70 string=0x00000000004EEE78 ")I`8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EEE4C(unsigned int a1)
{
  int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w10

  v1 = -1;
  if ( a1 >= 0x100 )
  {
    v2 = a1;
    do
    {
      a1 = v2 >> 8;
      v3 = HIWORD(v2);
      v1 += 8;
      v2 >>= 8;
    }
    while ( v3 );
  }
  return v1 + (unsigned int)byte_599BD8[a1];
}

