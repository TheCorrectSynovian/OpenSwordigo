/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D918
 * Mangled: sub_56D918
 * Demangled: sub_56D918
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056D7F4  sub_56D7F4
 *
 * Referenced strings: 6
 *   insn=0x000000000056D930 string=0x000000000056D934 "?"
 *   insn=0x000000000056D934 string=0x000000000056D938 "H"
 *   insn=0x000000000056D960 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056D964 string=0x000000000059FA10 "basic_string::substr"
 *   insn=0x000000000056D968 string=0x000000000056D96C "!@("
 *   insn=0x000000000056D974 string=0x000000000056D978 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__usercall sub_56D918@<X0>(
        __int64 *a1@<X0>,
        unsigned __int64 a2@<X1>,
        unsigned __int64 a3@<X2>,
        wchar_t *a4@<X8>)
{
  unsigned __int64 v4; // x6

  v4 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v4 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", a2, v4);
  sub_56D7F4(a4, a1, a2, a3);
  return a4;
}

