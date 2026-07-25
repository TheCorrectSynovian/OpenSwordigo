/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEE00
 * Mangled: sub_4EEE00
 * Demangled: sub_4EEE00
 *
 * Callers: 1
 *   0x00000000004F14B4  sub_4F14B4
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004EEE08 string=0x00000000004EEE0C "\t"
 *   insn=0x00000000004EEE08 string=0x00000000004EEE20 "\t "
 *   insn=0x00000000004EEE0C string=0x00000000004EEE10 " }"
 *   insn=0x00000000004EEE10 string=0x00000000004EEE14 "?}"
 *   insn=0x00000000004EEE14 string=0x00000000004EEE18 "!"
 *   insn=0x00000000004EEE20 string=0x00000000004EEE24 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EEE00(__int64 result)
{
  int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w8

  v1 = 8;
  if ( (unsigned int)result >= 0x10 )
  {
    do
    {
      v2 = result + 1;
      LODWORD(result) = (unsigned int)(result + 1) >> 1;
      v1 += 8;
    }
    while ( v2 > 0x1F );
  }
  v3 = v1 | (result - 8);
  if ( (unsigned int)result >= 8 )
    return v3;
  else
    return (unsigned int)result;
}

