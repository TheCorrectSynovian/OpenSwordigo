/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000543010
 * Mangled: sub_543010
 * Demangled: sub_543010
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000202DD0  .wcslen
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000542B74  sub_542B74
 *
 * Referenced strings: 5
 *   insn=0x0000000000543028 string=0x000000000054302C "i"
 *   insn=0x0000000000543054 string=0x0000000000543058 "a"
 *   insn=0x000000000054305C string=0x0000000000543060 "! @"
 *   insn=0x0000000000543060 string=0x0000000000543064 "!"
 *   insn=0x0000000000543064 string=0x0000000000543068 "Vy"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_543010(__int64 *a1, wchar_t *s)
{
  size_t v3; // x0

  if ( s )
  {
    v3 = wcslen(s);
    sub_542B74(a1, (__int64)s, v3);
  }
  else
  {
    sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  return a1;
}

