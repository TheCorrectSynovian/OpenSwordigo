/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569AC0
 * Mangled: sub_569AC0
 * Demangled: sub_569AC0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 9
 *   insn=0x0000000000569AC8 string=0x0000000000569ACC "#"
 *   insn=0x0000000000569ACC string=0x0000000000569AD0 "?"
 *   insn=0x0000000000569AE4 string=0x0000000000569AE8 "U"
 *   insn=0x0000000000569AE8 string=0x0000000000569AEC """
 *   insn=0x0000000000569AF8 string=0x0000000000569AFC "o"
 *   insn=0x0000000000569B08 string=0x0000000000569B0C " "
 *   insn=0x0000000000569B14 string=0x0000000000569B18 "JH"
 *   insn=0x0000000000569B18 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000569B48 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569AC0(__int64 *a1, size_t a2, unsigned __int8 a3)
{
  int v5; // w21
  _BYTE *v6; // x0

  v5 = a3;
  if ( a2 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_M_replace_aux");
  sub_568CB8(a1, 0, *(_QWORD *)(*a1 - 24), a2);
  if ( !a2 )
    return a1;
  v6 = (_BYTE *)*a1;
  if ( a2 != 1 )
  {
    memset(v6, v5, a2);
    return a1;
  }
  *v6 = v5;
  return a1;
}

