/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D6C0
 * Mangled: sub_56D6C0
 * Demangled: sub_56D6C0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056D6D8 string=0x000000000056D6DC "4"
 *   insn=0x000000000056D6DC string=0x000000000056D6E0 "C"
 *   insn=0x000000000056D6EC string=0x000000000056D6F0 "B"
 *   insn=0x000000000056D710 string=0x000000000056D714 " "
 *   insn=0x000000000056D718 string=0x000000000056D734 "6h4"
 *   insn=0x000000000056D730 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056D748 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56D6C0(const wchar_t **a1, __int64 a2, unsigned __int64 a3, wchar_t a4)
{
  __int64 v6; // x20
  wchar_t *result; // x0

  v6 = a2 - (_QWORD)*a1;
  if ( a3 > 0xFFFFFFFFFFFFFFELL - *((_QWORD *)*a1 - 3) )
    sub_56554C("basic_string::_M_replace_aux");
  result = (wchar_t *)sub_56C650(a1, v6 >> 2, 0, a3);
  if ( a3 )
  {
    result = (wchar_t *)((char *)*a1 + v6);
    if ( a3 == 1 )
      *(const wchar_t *)((char *)*a1 + v6) = a4;
    else
      return wmemset(result, a4, a3);
  }
  return result;
}

