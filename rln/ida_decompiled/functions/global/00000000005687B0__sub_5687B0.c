/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005687B0
 * Mangled: sub_5687B0
 * Demangled: sub_5687B0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566784  sub_566784
 *
 * Referenced strings: 5
 *   insn=0x00000000005687C8 string=0x00000000005687CC "?"
 *   insn=0x00000000005687CC string=0x00000000005687D0 "H"
 *   insn=0x00000000005687F8 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005687FC string=0x000000000059FA10 "basic_string::substr"
 *   insn=0x0000000000568800 string=0x0000000000568804 "!@("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_5687B0@<X0>(
        __int64 *a1@<X0>,
        unsigned __int64 a2@<X1>,
        unsigned __int64 a3@<X2>,
        _QWORD *a4@<X8>)
{
  unsigned __int64 v4; // x6

  v4 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v4 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", a2, v4);
  sub_566784(a4, a1, a2, a3);
  return a4;
}

