/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D2A4
 * Mangled: sub_54D2A4
 * Demangled: sub_54D2A4
 *
 * Callers: 1
 *   0x000000000054D404  sub_54D404
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 13
 *   insn=0x000000000054D2B4 string=0x000000000054D2B8 "@"
 *   insn=0x000000000054D2B8 string=0x000000000054D2C0 "`"
 *   insn=0x000000000054D2C0 string=0x000000000054D2C4 "A"
 *   insn=0x000000000054D2C4 string=0x000000000054D2C8 "`\n@"
 *   insn=0x000000000054D2C8 string=0x000000000054D2CC "@"
 *   insn=0x000000000054D2CC string=0x000000000054D2D0 "$"
 *   insn=0x000000000054D2CC string=0x000000000054D2D4 "`"
 *   insn=0x000000000054D2D0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054D2D4 string=0x000000000054D2D8 "@"
 *   insn=0x000000000054D2D8 string=0x000000000054D2DC "!"
 *   insn=0x000000000054D2D8 string=0x000000000054D2E0 "`"
 *   insn=0x000000000054D2E0 string=0x000000000054D2E4 "@"
 *   insn=0x000000000054D2F4 string=0x000000000054D2F8 "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D2A4(__int64 a1)
{
  int v2; // w1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = *(unsigned __int8 *)(a1 + 328);
  *(_QWORD *)a1 = off_6B7C80;
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
  nullsub_2();
}

