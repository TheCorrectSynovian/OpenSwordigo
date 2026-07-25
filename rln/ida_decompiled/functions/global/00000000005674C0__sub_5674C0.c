/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005674C0
 * Mangled: sub_5674C0
 * Demangled: sub_5674C0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 5
 *   insn=0x00000000005674C8 string=0x00000000005674CC "b"
 *   insn=0x00000000005674CC string=0x00000000005674D0 "?"
 *   insn=0x00000000005674D4 string=0x00000000005674D8 "`"
 *   insn=0x00000000005674E4 string=0x00000000005674EC "r"
 *   insn=0x00000000005674E4 string=0x000000000059F9B0 "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_5674C0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2

  v2 = *(_QWORD *)(*a1 - 24LL);
  if ( a2 >= v2 )
    sub_5656B4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v2);
  return *a1 + a2;
}

