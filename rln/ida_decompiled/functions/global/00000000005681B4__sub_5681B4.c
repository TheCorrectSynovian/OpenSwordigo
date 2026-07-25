/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005681B4
 * Mangled: sub_5681B4
 * Demangled: sub_5681B4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 6
 *   insn=0x00000000005681B4 string=0x00000000005681B8 "!"
 *   insn=0x00000000005681C8 string=0x00000000005681CC "c"
 *   insn=0x00000000005681CC string=0x00000000005681D0 "_"
 *   insn=0x00000000005681D4 string=0x00000000005681E4 "`"
 *   insn=0x00000000005681E4 string=0x00000000005681E8 "b"
 *   insn=0x00000000005681F8 string=0x00000000005681FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5681B4(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x19
  __int64 result; // x0
  unsigned __int64 v5; // x3
  void *v6; // x0

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( a3 < v5 )
  {
    v6 = memchr((const void *)(v3 + a3), a2, v5 - a3);
    if ( v6 )
      return (__int64)v6 - v3;
    else
      return -1;
  }
  return result;
}

