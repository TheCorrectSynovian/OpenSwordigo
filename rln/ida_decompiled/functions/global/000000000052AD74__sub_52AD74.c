/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AD74
 * Mangled: sub_52AD74
 * Demangled: sub_52AD74
 *
 * Callers: 1
 *   0x000000000052AE94  sub_52AE94
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 16
 *   insn=0x000000000052AD84 string=0x000000000052AD88 "`"
 *   insn=0x000000000052AD88 string=0x000000000052AD90 "`"
 *   insn=0x000000000052AD94 string=0x000000000052AD98 "`\n@"
 *   insn=0x000000000052AD98 string=0x000000000052AD9C "@"
 *   insn=0x000000000052AD9C string=0x000000000052ADA0 "p("
 *   insn=0x000000000052AD9C string=0x000000000052ADA4 "`"
 *   insn=0x000000000052ADA0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052ADA4 string=0x000000000052ADA8 "@"
 *   insn=0x000000000052ADA8 string=0x000000000052ADAC "m("
 *   insn=0x000000000052ADA8 string=0x000000000052ADB0 "`"
 *   insn=0x000000000052ADB0 string=0x000000000052ADB4 "@"
 *   insn=0x000000000052ADB4 string=0x000000000052ADB8 "j("
 *   insn=0x000000000052ADB4 string=0x000000000052ADBC "`&@"
 *   insn=0x000000000052ADBC string=0x000000000052ADC0 "@"
 *   insn=0x000000000052ADC0 string=0x000000000052ADC4 "g("
 *   insn=0x000000000052ADD0 string=0x000000000052ADD4 "zB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52AD74(__int64 a1)
{
  int v2; // w1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0

  v2 = *(unsigned __int8 *)(a1 + 111);
  *(_QWORD *)a1 = off_6B7080;
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

