/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052ADD8
 * Mangled: sub_52ADD8
 * Demangled: sub_52ADD8
 *
 * Callers: 1
 *   0x000000000052AEB8  sub_52AEB8
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 16
 *   insn=0x000000000052ADE8 string=0x000000000052ADEC "`"
 *   insn=0x000000000052ADEC string=0x000000000052ADF4 "`"
 *   insn=0x000000000052ADF8 string=0x000000000052ADFC "`\n@"
 *   insn=0x000000000052ADFC string=0x000000000052AE00 "@"
 *   insn=0x000000000052AE00 string=0x000000000052AE04 "W("
 *   insn=0x000000000052AE00 string=0x000000000052AE08 "`"
 *   insn=0x000000000052AE04 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052AE08 string=0x000000000052AE0C "@"
 *   insn=0x000000000052AE0C string=0x000000000052AE10 "T("
 *   insn=0x000000000052AE0C string=0x000000000052AE14 "`"
 *   insn=0x000000000052AE14 string=0x000000000052AE18 "@"
 *   insn=0x000000000052AE18 string=0x000000000052AE1C "Q("
 *   insn=0x000000000052AE18 string=0x000000000052AE20 "`&@"
 *   insn=0x000000000052AE20 string=0x000000000052AE24 "@"
 *   insn=0x000000000052AE24 string=0x000000000052AE28 "N("
 *   insn=0x000000000052AE34 string=0x000000000052AE38 "aB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52ADD8(__int64 a1)
{
  int v2; // w1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0

  v2 = *(unsigned __int8 *)(a1 + 111);
  *(_QWORD *)a1 = off_6B70A0;
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
    v6 = *(void **)(a1 + 72);
    if ( v6 )
      operator delete[](v6);
  }
  return nullsub_2(a1);
}

