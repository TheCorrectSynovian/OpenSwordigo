/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D484
 * Mangled: sub_51D484
 * Demangled: sub_51D484
 *
 * Callers: 2
 *   0x000000000020DEE0  sub_20DEE0
 *   0x000000000051D468  sub_51D468
 *
 * Callees: 2
 *   0x00000000001F89E0  .free
 *   0x0000000000581AB8  sub_581AB8
 *
 * Referenced strings: 2
 *   insn=0x000000000051D4BC string=0x000000000051D4C0 "Hm"
 *   insn=0x000000000051D4C0 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51D484(__int64 *p)
{
  __int64 v2; // x0
  __int64 v3; // x19

  if ( p )
  {
    v2 = *p;
    if ( v2 )
    {
      do
      {
        v3 = *(_QWORD *)(v2 + 32);
        sub_581AB8(v2 + 80);
        v2 = v3;
      }
      while ( v3 );
    }
    free(p);
  }
}

