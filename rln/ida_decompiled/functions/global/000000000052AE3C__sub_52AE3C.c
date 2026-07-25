/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AE3C
 * Mangled: sub_52AE3C
 * Demangled: sub_52AE3C
 *
 * Callers: 1
 *   0x000000000052AF9C  sub_52AF9C
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 14
 *   insn=0x000000000052AE4C string=0x000000000052AE50 "`"
 *   insn=0x000000000052AE50 string=0x000000000052AE58 "`"
 *   insn=0x000000000052AE58 string=0x000000000052AE5C "A"
 *   insn=0x000000000052AE5C string=0x000000000052AE60 "`\n@"
 *   insn=0x000000000052AE60 string=0x000000000052AE64 "@"
 *   insn=0x000000000052AE64 string=0x000000000052AE68 ">("
 *   insn=0x000000000052AE64 string=0x000000000052AE6C "`"
 *   insn=0x000000000052AE68 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052AE6C string=0x000000000052AE70 "@"
 *   insn=0x000000000052AE70 string=0x000000000052AE74 ";("
 *   insn=0x000000000052AE70 string=0x000000000052AE78 "`"
 *   insn=0x000000000052AE78 string=0x000000000052AE7C "@"
 *   insn=0x000000000052AE7C string=0x000000000052AE80 "8("
 *   insn=0x000000000052AE8C string=0x000000000052AE90 "KB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52AE3C(__int64 a1)
{
  int v2; // w1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = *(unsigned __int8 *)(a1 + 136);
  *(_QWORD *)a1 = off_6B70C0;
  if ( v2 )
  {
    v3 = *(void **)(a1 + 16);
    if ( v3 )
      operator delete[](v3);
    v4 = *(void **)(a1 + 40);
    if ( v4 )
      operator delete[](v4);
    v5 = *(void **)(a1 + 56);
    if ( v5 )
      operator delete[](v5);
  }
  return nullsub_2(a1);
}

