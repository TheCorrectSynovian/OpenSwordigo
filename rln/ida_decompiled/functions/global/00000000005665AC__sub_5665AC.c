/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005665AC
 * Mangled: sub_5665AC
 * Demangled: sub_5665AC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 5
 *   insn=0x00000000005665B8 string=0x00000000005665BC "c"
 *   insn=0x00000000005665BC string=0x00000000005665C0 "?"
 *   insn=0x00000000005665C0 string=0x00000000005665C4 "h"
 *   insn=0x00000000005665D8 string=0x00000000005665E0 "5"
 *   insn=0x00000000005665D8 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_5665AC(__int64 *a1, unsigned __int64 a2, const char *a3)
{
  __int64 v3; // x3
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x3

  v3 = *a1;
  result = a2;
  v5 = *(_QWORD *)(v3 - 24);
  if ( a2 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v5);
  return result;
}

