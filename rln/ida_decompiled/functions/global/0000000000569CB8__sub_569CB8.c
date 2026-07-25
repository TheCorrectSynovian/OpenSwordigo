/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569CB8
 * Mangled: sub_569CB8
 * Demangled: sub_569CB8
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 12
 *   insn=0x0000000000569CDC string=0x0000000000569CE0 "?"
 *   insn=0x0000000000569CE0 string=0x0000000000569CE4 "("
 *   insn=0x0000000000569CF0 string=0x0000000000569CF4 "$"
 *   insn=0x0000000000569D18 string=0x0000000000569D1C " "
 *   insn=0x0000000000569D1C string=0x0000000000569D20 " "
 *   insn=0x0000000000569D20 string=0x0000000000569D44 "6h48"
 *   insn=0x0000000000569D2C string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000569D5C string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *   insn=0x0000000000569D68 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000569D6C string=0x000000000059FAA8 "basic_string::replace"
 *   insn=0x0000000000569D70 string=0x0000000000569D74 "!"
 *   insn=0x0000000000569D7C string=0x0000000000569D80 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569CB8(__int64 *a1, size_t a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int8 a5)
{
  int v5; // w22
  size_t v8; // x6

  v5 = a5;
  v8 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v8 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v8);
  if ( v8 - a2 <= a3 )
    a3 = v8 - a2;
  if ( a4 > 0x3FFFFFFFFFFFFFF9LL - v8 + a3 )
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

