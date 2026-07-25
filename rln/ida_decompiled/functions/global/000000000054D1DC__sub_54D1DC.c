/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D1DC
 * Mangled: sub_54D1DC
 * Demangled: sub_54D1DC
 *
 * Callers: 1
 *   0x000000000054D2FC  sub_54D2FC
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *
 * Referenced strings: 16
 *   insn=0x000000000054D1EC string=0x000000000054D1F0 "@"
 *   insn=0x000000000054D1F0 string=0x000000000054D1F8 "`"
 *   insn=0x000000000054D1FC string=0x000000000054D200 "`\n@"
 *   insn=0x000000000054D200 string=0x000000000054D204 "@"
 *   insn=0x000000000054D204 string=0x000000000054D208 "V"
 *   insn=0x000000000054D204 string=0x000000000054D20C "`"
 *   insn=0x000000000054D208 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054D20C string=0x000000000054D210 "@"
 *   insn=0x000000000054D210 string=0x000000000054D214 "S"
 *   insn=0x000000000054D210 string=0x000000000054D218 "`"@"
 *   insn=0x000000000054D218 string=0x000000000054D21C "@"
 *   insn=0x000000000054D21C string=0x000000000054D220 "P"
 *   insn=0x000000000054D21C string=0x000000000054D224 "`*@"
 *   insn=0x000000000054D224 string=0x000000000054D228 "@"
 *   insn=0x000000000054D228 string=0x000000000054D22C "M"
 *   insn=0x000000000054D238 string=0x000000000054D23C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D1DC(__int64 a1)
{
  int v2; // w1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0

  v2 = *(unsigned __int8 *)(a1 + 152);
  *(_QWORD *)a1 = off_6B7C40;
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

