/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CA1C
 * Mangled: sub_56CA1C
 * Demangled: sub_56CA1C
 *
 * Callers: 2
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *
 * Callees: 3
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 6
 *   insn=0x000000000056CA58 string=0x000000000056CA5C "3"
 *   insn=0x000000000056CA68 string=0x000000000056CA6C " "
 *   insn=0x000000000056CA6C string=0x000000000056CA70 " "
 *   insn=0x000000000056CA70 string=0x000000000056CA94 "$x5"
 *   insn=0x000000000056CA7C string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056CAAC string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CA1C(const wchar_t **a1, size_t a2, __int64 a3, unsigned __int64 a4, wchar_t a5)
{
  if ( a4 > 0xFFFFFFFFFFFFFFELL - *((_QWORD *)*a1 - 3) + a3 )
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

