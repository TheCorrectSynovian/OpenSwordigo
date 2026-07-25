/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005409B0
 * Mangled: sub_5409B0
 * Demangled: sub_5409B0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203230  .strlen
 *   0x0000000000520C14  sub_520C14
 *   0x0000000000540490  sub_540490
 *
 * Referenced strings: 3
 *   insn=0x00000000005409F4 string=0x00000000005409F8 "a"
 *   insn=0x00000000005409FC string=0x0000000000540A00 "! @"
 *   insn=0x0000000000540A00 string=0x0000000000540A04 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5409B0(__int64 *a1, char *a2)
{
  size_t v3; // x0

  if ( a2 )
  {
    v3 = strlen(a2);
    sub_540490(a1, (__int64)a2, v3);
  }
  else
  {
    sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  return a1;
}

