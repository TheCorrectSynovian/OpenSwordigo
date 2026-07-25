/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C918
 * Mangled: sub_56C918
 * Demangled: sub_56C918
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 9
 *   insn=0x000000000056C92C string=0x000000000056C930 "c"
 *   insn=0x000000000056C930 string=0x000000000056C934 "?"
 *   insn=0x000000000056C934 string=0x000000000056C938 "H"
 *   insn=0x000000000056C938 string=0x000000000056C93C "d"
 *   insn=0x000000000056C948 string=0x000000000056C94C "A"
 *   insn=0x000000000056C960 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056C964 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x000000000056C968 string=0x000000000056C96C "!@"
 *   insn=0x000000000056C970 string=0x000000000056C974 "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56C918(const wchar_t **a1, size_t a2, unsigned __int64 a3)
{
  size_t v4; // x3

  v4 = *((_QWORD *)*a1 - 3);
  if ( a2 > v4 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v4);
  if ( v4 - a2 <= a3 )
    a3 = v4 - a2;
  sub_56C650(a1, a2, a3, 0);
  return a1;
}

