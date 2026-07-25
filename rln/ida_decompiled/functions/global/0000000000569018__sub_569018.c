/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569018
 * Mangled: sub_569018
 * Demangled: sub_569018
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 2
 *   insn=0x0000000000569018 string=0x000000000056901C "B"
 *   insn=0x0000000000569044 string=0x0000000000569048 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_569018(__int64 *a1, size_t a2, __int64 a3)
{
  __int64 v3; // x2
  size_t v6; // x19

  v3 = a3 - a2;
  if ( v3 )
  {
    v6 = a2 - *a1;
    sub_568CB8(a1, v6, v3, 0);
    a2 = *a1 + v6;
    *(_DWORD *)(*a1 - 8) = -1;
  }
  return a2;
}

