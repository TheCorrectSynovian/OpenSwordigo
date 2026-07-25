/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056984C
 * Mangled: sub_56984C
 * Demangled: sub_56984C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 8
 *   insn=0x0000000000569858 string=0x000000000056985C "%`"
 *   insn=0x000000000056985C string=0x0000000000569860 "$"
 *   insn=0x0000000000569864 string=0x000000000056989C " "
 *   insn=0x0000000000569870 string=0x0000000000569874 "@"
 *   insn=0x0000000000569888 string=0x000000000056988C ""
 *   insn=0x000000000056988C string=0x0000000000569890 "a"
 *   insn=0x0000000000569894 string=0x0000000000569898 " "
 *   insn=0x00000000005698A0 string=0x00000000005698A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56984C(__int64 *a1)
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
  return v1 + *(_QWORD *)(v1 - 24);
}

