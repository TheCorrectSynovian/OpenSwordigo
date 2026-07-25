/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056857C
 * Mangled: sub_56857C
 * Demangled: sub_56857C
 *
 * Callers: 4
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000056857C string=0x0000000000568580 "!"
 *   insn=0x0000000000568580 string=0x0000000000568584 "d"
 *   insn=0x0000000000568584 string=0x0000000000568588 "_"
 *   insn=0x0000000000568588 string=0x000000000056858C "b"
 *   insn=0x000000000056858C string=0x0000000000568590 "ehb8"
 *   insn=0x0000000000568598 string=0x000000000056859C "\t"
 *   insn=0x0000000000568598 string=0x00000000005685AC "B"
 *   insn=0x00000000005685AC string=0x00000000005685B0 "_"
 *   insn=0x00000000005685B0 string=0x00000000005685B4 "c"
 *   insn=0x00000000005685B4 string=0x00000000005685A0 "`hb8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56857C(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x3
  unsigned __int64 v4; // x4
  int v5; // w5

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 - 24);
  if ( a3 >= v4 )
    return -1;
  v5 = *(unsigned __int8 *)(v3 + a3);
  if ( v5 == a2 )
  {
    while ( ++a3 < v4 )
    {
      if ( *(unsigned __int8 *)(v3 + a3) != v5 )
        return a3;
    }
    return -1;
  }
  return a3;
}

