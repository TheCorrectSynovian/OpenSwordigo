/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D5F4
 * Mangled: sub_56D5F4
 * Demangled: sub_56D5F4
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 11
 *   insn=0x000000000056D614 string=0x000000000056D618 "?"
 *   insn=0x000000000056D618 string=0x000000000056D61C "H"
 *   insn=0x000000000056D644 string=0x000000000056D648 "3"
 *   insn=0x000000000056D654 string=0x000000000056D658 " "
 *   insn=0x000000000056D658 string=0x000000000056D65C " "
 *   insn=0x000000000056D65C string=0x000000000056D680 "$x4"
 *   insn=0x000000000056D668 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056D698 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *   insn=0x000000000056D6A4 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056D6A8 string=0x000000000059FAA8 "basic_string::replace"
 *   insn=0x000000000056D6AC string=0x000000000056D6B0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56D5F4(
        const wchar_t **a1,
        size_t a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        wchar_t a5)
{
  size_t v6; // x7

  v6 = *((_QWORD *)*a1 - 3);
  if ( a2 > v6 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v6);
  if ( v6 - a2 <= a3 )
    a3 = v6 - a2;
  if ( a4 > 0xFFFFFFFFFFFFFFELL - v6 + a3 )
    sub_56554C("basic_string::_M_replace_aux");
  sub_56C650(a1, a2, a3, a4);
  if ( !a4 )
    return a1;
  if ( a4 != 1 )
  {
    wmemset((wchar_t *)&(*a1)[a2], a5, a4);
    return a1;
  }
  (*a1)[a2] = a5;
  return a1;
}

