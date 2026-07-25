/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005006C4
 * Mangled: sub_5006C4
 * Demangled: sub_5006C4
 *
 * Callers: 1
 *   0x00000000004F3230  sub_4F3230
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 4
 *   insn=0x00000000005006FC string=0x0000000000500700 "$@9"
 *   insn=0x000000000050070C string=0x0000000000500710 ""
 *   insn=0x0000000000500710 string=0x0000000000500714 "$"
 *   insn=0x0000000000500714 string=0x0000000000500718 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5006C4(__int64 a1)
{
  __int64 v2; // x21
  char *v3; // x20
  size_t v4; // x0
  __int64 result; // x0
  char v6; // w8

  v2 = 0;
  do
  {
    v3 = (char *)*(&off_6D8C98 + v2);
    v4 = strlen(v3);
    result = sub_4F356C(a1, v3, v4);
    v6 = *(_BYTE *)(result + 9);
    *(_BYTE *)(result + 10) = ++v2;
    *(_BYTE *)(result + 9) = v6 | 0x20;
  }
  while ( v2 != 21 );
  return result;
}

