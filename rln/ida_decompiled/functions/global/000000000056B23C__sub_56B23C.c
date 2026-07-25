/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B23C
 * Mangled: sub_56B23C
 * Demangled: sub_56B23C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 4
 *   insn=0x000000000056B248 string=0x000000000056B24C "c"
 *   insn=0x000000000056B24C string=0x000000000056B250 "?"
 *   insn=0x000000000056B250 string=0x000000000056B254 "h"
 *   insn=0x000000000056B268 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56B23C(__int64 *a1, unsigned __int64 a2, const char *a3)
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

