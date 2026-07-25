/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569D84
 * Mangled: sub_569D84
 * Demangled: sub_569D84
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 8
 *   insn=0x0000000000569D98 string=0x0000000000569D9C "$"
 *   insn=0x0000000000569D9C string=0x0000000000569DA0 "4"
 *   insn=0x0000000000569DA0 string=0x0000000000569DA4 "A"
 *   insn=0x0000000000569DB4 string=0x0000000000569DB8 "v"
 *   insn=0x0000000000569DD8 string=0x0000000000569DDC " "
 *   insn=0x0000000000569DE0 string=0x0000000000569DFC "6h48"
 *   insn=0x0000000000569DF8 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000569E10 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall sub_569D84(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  size_t v5; // x20
  int v7; // w22
  int *result; // x0

  v5 = a2 - *a1;
  v7 = a4;
  if ( a3 > 0x3FFFFFFFFFFFFFF9LL - *(_QWORD *)(*a1 - 24) )
    sub_56554C("basic_string::_M_replace_aux");
  result = sub_568CB8(a1, v5, 0, a3);
  if ( a3 )
  {
    result = (int *)(*a1 + v5);
    if ( a3 == 1 )
      *(_BYTE *)(*a1 + v5) = v7;
    else
      return (int *)memset(result, v7, a3);
  }
  return result;
}

