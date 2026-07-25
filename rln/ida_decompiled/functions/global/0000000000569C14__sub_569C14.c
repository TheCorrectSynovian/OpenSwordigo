/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569C14
 * Mangled: sub_569C14
 * Demangled: sub_569C14
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 9
 *   insn=0x0000000000569C14 string=0x0000000000569C18 "B"
 *   insn=0x0000000000569C24 string=0x0000000000569C28 "%"
 *   insn=0x0000000000569C2C string=0x0000000000569C30 "3"
 *   insn=0x0000000000569C68 string=0x0000000000569C6C " "
 *   insn=0x0000000000569C6C string=0x0000000000569C70 " "
 *   insn=0x0000000000569C70 string=0x0000000000569C94 "6h38"
 *   insn=0x0000000000569C7C string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000569CAC string=0x0000000000569CB4 "&"
 *   insn=0x0000000000569CAC string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569C14(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // x2
  size_t v6; // x19
  int v9; // w22

  v5 = a3 - a2;
  v6 = a2 - *a1;
  v9 = a5;
  if ( a4 > 0x3FFFFFFFFFFFFFF9LL - *(_QWORD *)(*a1 - 24) + v5 )
    sub_56554C("basic_string::_M_replace_aux");
  sub_568CB8(a1, v6, v5, a4);
  if ( !a4 )
    return a1;
  if ( a4 != 1 )
  {
    memset((void *)(*a1 + v6), v9, a4);
    return a1;
  }
  *(_BYTE *)(*a1 + v6) = v9;
  return a1;
}

