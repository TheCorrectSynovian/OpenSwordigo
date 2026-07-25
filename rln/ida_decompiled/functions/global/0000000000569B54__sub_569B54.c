/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569B54
 * Mangled: sub_569B54
 * Demangled: sub_569B54
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 15
 *   insn=0x0000000000569B68 string=0x0000000000569B6C "v"
 *   insn=0x0000000000569B70 string=0x0000000000569B74 "C"
 *   insn=0x0000000000569B78 string=0x0000000000569B7C "?"
 *   insn=0x0000000000569B84 string=0x0000000000569B8C "B"
 *   insn=0x0000000000569B9C string=0x0000000000569BA0 "F"
 *   insn=0x0000000000569BAC string=0x0000000000569BB0 " "
 *   insn=0x0000000000569BB0 string=0x0000000000569BB4 " "
 *   insn=0x0000000000569BB4 string=0x0000000000569BD8 "6h58"
 *   insn=0x0000000000569BBC string=0x0000000000569BC0 " H"
 *   insn=0x0000000000569BC0 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000569BF0 string=0x0000000000569BF8 "U"
 *   insn=0x0000000000569BF0 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *   insn=0x0000000000569BFC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000569C00 string=0x000000000059FA78 "basic_string::insert"
 *   insn=0x0000000000569C04 string=0x0000000000569C08 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569B54(__int64 *a1, size_t a2, unsigned __int64 a3, unsigned __int8 a4)
{
  int v5; // w22
  size_t v7; // x3

  v5 = a4;
  v7 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v7 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v7);
  if ( a3 > 0x3FFFFFFFFFFFFFF9LL - v7 )
    sub_56554C("basic_string::_M_replace_aux");
  sub_568CB8(a1, a2, 0, a3);
  if ( !a3 )
    return a1;
  if ( a3 != 1 )
  {
    memset((void *)(*a1 + a2), v5, a3);
    return a1;
  }
  *(_BYTE *)(*a1 + a2) = v5;
  return a1;
}

