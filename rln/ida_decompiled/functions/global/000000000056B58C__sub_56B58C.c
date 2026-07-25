/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B58C
 * Mangled: sub_56B58C
 * Demangled: sub_56B58C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 3
 *   insn=0x000000000056B598 string=0x000000000056B59C "?"
 *   insn=0x000000000056B5B0 string=0x000000000056B5B8 "?"
 *   insn=0x000000000056B5B0 string=0x000000000059F9B0 "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B58C(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // x0
  unsigned __int64 v3; // x2

  v2 = *a1;
  v3 = *(_QWORD *)(v2 - 24);
  if ( a2 >= v3 )
    sub_5656B4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  return v2 + 4 * a2;
}

