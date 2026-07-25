/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CC78
 * Mangled: sub_56CC78
 * Demangled: sub_56CC78
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056CB34  sub_56CB34
 *
 * Referenced strings: 8
 *   insn=0x000000000056CC7C string=0x000000000056CC80 "%"
 *   insn=0x000000000056CC88 string=0x000000000056CC8C "_"
 *   insn=0x000000000056CC98 string=0x000000000056CC9C "_"
 *   insn=0x000000000056CCA0 string=0x000000000056CCA4 "B"
 *   insn=0x000000000056CCAC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056CCB0 string=0x000000000059FA60 "basic_string::assign"
 *   insn=0x000000000056CCB4 string=0x000000000056CCB8 "!"
 *   insn=0x000000000056CCBC string=0x000000000056CCC0 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CC78(const wchar_t **a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x5
  unsigned __int64 v6; // x4
  size_t v7; // x2
  const wchar_t *v8; // x1

  v4 = *a2;
  v6 = *(_QWORD *)(v4 - 24);
  if ( a3 > v6 )
    sub_5656B4(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::assign",
      a3,
      *(_QWORD *)(v4 - 24));
  v7 = v6 - a3;
  v8 = (const wchar_t *)(v4 + 4 * a3);
  if ( v7 > a4 )
    v7 = a4;
  return sub_56CB34(a1, v8, v7);
}

