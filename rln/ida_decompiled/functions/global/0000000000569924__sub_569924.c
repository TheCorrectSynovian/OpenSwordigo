/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569924
 * Mangled: sub_569924
 * Demangled: sub_569924
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000569930 string=0x0000000000569934 "%`"
 *   insn=0x0000000000569934 string=0x0000000000569938 "$"
 *   insn=0x0000000000569938 string=0x000000000056993C "3"
 *   insn=0x000000000056993C string=0x0000000000569940 "s"
 *   insn=0x0000000000569944 string=0x000000000056997C " "
 *   insn=0x0000000000569950 string=0x0000000000569954 "@"
 *   insn=0x0000000000569974 string=0x0000000000569978 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_569924(__int64 *a1)
{
  __int64 v1; // x1
  int v2; // w4
  __int64 v3; // x19

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 8);
  v3 = *(_QWORD *)(*a1 - 24) - 1LL;
  if ( (v2 & 0x80000000) == 0 && (__int64 *)(*a1 - 24) != &qword_6FD2E0 )
  {
    if ( v2 )
    {
      sub_568CB8(a1, 0, 0, 0);
      v1 = *a1;
    }
    *(_DWORD *)(v1 - 8) = -1;
  }
  return v1 + v3;
}

