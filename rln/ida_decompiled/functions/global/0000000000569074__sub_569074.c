/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569074
 * Mangled: sub_569074
 * Demangled: sub_569074
 *
 * Callers: 7
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x000000000053B81C  sub_53B81C
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x0000000000569088 string=0x000000000056908C "%"
 *   insn=0x00000000005690C0 string=0x00000000005690C4 " "
 *   insn=0x00000000005690C4 string=0x00000000005690C8 " "
 *   insn=0x00000000005690C8 string=0x00000000005690EC "6h58"
 *   insn=0x00000000005690D4 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000569104 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569074(__int64 *a1, size_t a2, __int64 a3, unsigned __int64 a4, unsigned __int8 a5)
{
  int v5; // w22

  v5 = a5;
  if ( a4 > 0x3FFFFFFFFFFFFFF9LL - *(_QWORD *)(*a1 - 24) + a3 )
    sub_56554C("basic_string::_M_replace_aux");
  sub_568CB8(a1, a2, a3, a4);
  if ( !a4 )
    return a1;
  if ( a4 != 1 )
  {
    memset((void *)(*a1 + a2), v5, a4);
    return a1;
  }
  *(_BYTE *)(*a1 + a2) = v5;
  return a1;
}

