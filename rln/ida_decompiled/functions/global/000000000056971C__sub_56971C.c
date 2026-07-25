/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056971C
 * Mangled: sub_56971C
 * Demangled: sub_56971C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x0000000000569728 string=0x000000000056972C "%`"
 *   insn=0x000000000056972C string=0x0000000000569730 "$"
 *   insn=0x0000000000569740 string=0x0000000000569744 "@"
 *   insn=0x0000000000569758 string=0x000000000056975C "W"
 *   insn=0x000000000056975C string=0x0000000000569760 "a"
 *   insn=0x0000000000569764 string=0x0000000000569768 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56971C(__int64 *a1)
{
  __int64 v1; // x1
  int v2; // w4

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 8);
  if ( (v2 & 0x80000000) == 0 && (__int64 *)(*a1 - 24) != &qword_6FD2E0 )
  {
    if ( v2 )
    {
      sub_568CB8(a1, 0, 0, 0);
      v1 = *a1;
    }
    *(_DWORD *)(v1 - 8) = -1;
  }
  return v1;
}

