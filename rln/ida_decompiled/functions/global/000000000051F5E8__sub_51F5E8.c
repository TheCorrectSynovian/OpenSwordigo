/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F5E8
 * Mangled: sub_51F5E8
 * Demangled: sub_51F5E8
 *
 * Callers: 2
 *   0x000000000055F8C0  sub_55F8C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Callees: 2
 *   0x0000000000201180  .fopen
 *   0x000000000051F31C  sub_51F31C
 *
 * Referenced strings: 6
 *   insn=0x000000000051F5FC string=0x000000000051F600 "G"
 *   insn=0x000000000051F608 string=0x000000000051F60C "`"
 *   insn=0x000000000051F60C string=0x000000000051F610 "`"
 *   insn=0x000000000051F630 string=0x000000000051F634 "`"
 *   insn=0x000000000051F638 string=0x000000000051F63C "!"
 *   insn=0x000000000051F63C string=0x000000000051F640 "a""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51F5E8(__int64 a1, const char *a2, char a3)
{
  char *v4; // x2
  FILE *v6; // x0

  v4 = sub_51F31C(a3);
  if ( !v4 )
    return 0;
  if ( *(_QWORD *)a1 )
    return 0;
  v6 = fopen(a2, v4);
  *(_QWORD *)a1 = v6;
  if ( !v6 )
    return 0;
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

