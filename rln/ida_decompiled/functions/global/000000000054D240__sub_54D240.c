/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D240
 * Mangled: sub_54D240
 * Demangled: sub_54D240
 *
 * Callers: 1
 *   0x000000000054D320  sub_54D320
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 16
 *   insn=0x000000000054D250 string=0x000000000054D254 "@"
 *   insn=0x000000000054D254 string=0x000000000054D25C "`"
 *   insn=0x000000000054D260 string=0x000000000054D264 "`\n@"
 *   insn=0x000000000054D264 string=0x000000000054D268 "@"
 *   insn=0x000000000054D268 string=0x000000000054D26C "="
 *   insn=0x000000000054D268 string=0x000000000054D270 "`"
 *   insn=0x000000000054D26C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054D270 string=0x000000000054D274 "@"
 *   insn=0x000000000054D274 string=0x000000000054D278 ":"
 *   insn=0x000000000054D274 string=0x000000000054D27C "`"@"
 *   insn=0x000000000054D27C string=0x000000000054D280 "@"
 *   insn=0x000000000054D280 string=0x000000000054D284 "7"
 *   insn=0x000000000054D280 string=0x000000000054D288 "`*@"
 *   insn=0x000000000054D288 string=0x000000000054D28C "@"
 *   insn=0x000000000054D28C string=0x000000000054D290 "4"
 *   insn=0x000000000054D29C string=0x000000000054D2A0 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D240(__int64 a1)
{
  int v2; // w1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0

  v2 = *(unsigned __int8 *)(a1 + 152);
  *(_QWORD *)a1 = off_6B7C60;
  if ( v2 )
  {
    v3 = *(void **)(a1 + 16);
    if ( v3 )
      operator delete[](v3);
    v4 = *(void **)(a1 + 48);
    if ( v4 )
      operator delete[](v4);
    v5 = *(void **)(a1 + 64);
    if ( v5 )
      operator delete[](v5);
    v6 = *(void **)(a1 + 80);
    if ( v6 )
      operator delete[](v6);
  }
  nullsub_2();
}

