/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D490
 * Mangled: sub_56D490
 * Demangled: sub_56D490
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 15
 *   insn=0x000000000056D4AC string=0x000000000056D4B0 "C"
 *   insn=0x000000000056D4B4 string=0x000000000056D4B8 "?"
 *   insn=0x000000000056D4C0 string=0x000000000056D4C4 "C"
 *   insn=0x000000000056D4D4 string=0x000000000056D4D8 "^"
 *   insn=0x000000000056D4E4 string=0x000000000056D4E8 " "
 *   insn=0x000000000056D4E8 string=0x000000000056D4EC " "
 *   insn=0x000000000056D4EC string=0x000000000056D510 "6x5"
 *   insn=0x000000000056D4F4 string=0x000000000056D4F8 "N%"
 *   insn=0x000000000056D4F8 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056D528 string=0x000000000056D530 ""
 *   insn=0x000000000056D528 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *   insn=0x000000000056D534 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056D538 string=0x000000000059FA78 "basic_string::insert"
 *   insn=0x000000000056D53C string=0x000000000056D540 "!"
 *   insn=0x000000000056D544 string=0x000000000056D548 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56D490(const wchar_t **a1, size_t a2, unsigned __int64 a3, wchar_t a4)
{
  size_t v7; // x3

  v7 = *((_QWORD *)*a1 - 3);
  if ( a2 > v7 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v7);
  if ( a3 > 0xFFFFFFFFFFFFFFELL - v7 )
    sub_56554C("basic_string::_M_replace_aux");
  sub_56C650(a1, a2, 0, a3);
  if ( !a3 )
    return a1;
  if ( a3 != 1 )
  {
    wmemset((wchar_t *)&(*a1)[a2], a4, a3);
    return a1;
  }
  (*a1)[a2] = a4;
  return a1;
}

