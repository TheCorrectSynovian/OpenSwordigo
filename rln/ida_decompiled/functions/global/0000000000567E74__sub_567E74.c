/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567E74
 * Mangled: sub_567E74
 * Demangled: sub_567E74
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 7
 *   insn=0x0000000000567E74 string=0x0000000000567E78 "!"
 *   insn=0x0000000000567E88 string=0x0000000000567E8C "c"
 *   insn=0x0000000000567E8C string=0x0000000000567E90 "_"
 *   insn=0x0000000000567E94 string=0x0000000000567EA4 "`"
 *   insn=0x0000000000567EA4 string=0x0000000000567EA8 "b"
 *   insn=0x0000000000567EA8 string=0x0000000000567EAC "]l"
 *   insn=0x0000000000567EB8 string=0x0000000000567EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_567E74(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
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

