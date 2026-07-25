/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540944
 * Mangled: sub_540944
 * Demangled: sub_540944
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203230  .strlen
 *   0x0000000000520C14  sub_520C14
 *   0x0000000000540490  sub_540490
 *
 * Referenced strings: 4
 *   insn=0x000000000054095C string=0x0000000000540960 "4\n"
 *   insn=0x0000000000540988 string=0x000000000054098C "a"
 *   insn=0x0000000000540990 string=0x0000000000540994 "! @"
 *   insn=0x0000000000540994 string=0x0000000000540998 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_540944(__int64 *a1, char *a2)
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

