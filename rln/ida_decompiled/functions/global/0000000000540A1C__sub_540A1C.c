/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540A1C
 * Mangled: sub_540A1C
 * Demangled: sub_540A1C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203230  .strlen
 *   0x0000000000520C14  sub_520C14
 *   0x0000000000540490  sub_540490
 *
 * Referenced strings: 4
 *   insn=0x0000000000540A60 string=0x0000000000540A64 "a"
 *   insn=0x0000000000540A68 string=0x0000000000540A6C "! @"
 *   insn=0x0000000000540A6C string=0x0000000000540A70 "!"
 *   insn=0x0000000000540A70 string=0x0000000000540A74 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_540A1C(__int64 *a1, char *a2)
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

