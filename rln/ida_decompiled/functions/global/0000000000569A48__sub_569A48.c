/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569A48
 * Mangled: sub_569A48
 * Demangled: sub_569A48
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 11
 *   insn=0x0000000000569A54 string=0x0000000000569A58 "U"
 *   insn=0x0000000000569A5C string=0x0000000000569A60 "#"
 *   insn=0x0000000000569A64 string=0x0000000000569A68 "4"
 *   insn=0x0000000000569A6C string=0x0000000000569A70 "A"
 *   insn=0x0000000000569A70 string=0x0000000000569A74 "?"
 *   insn=0x0000000000569A80 string=0x0000000000569A84 "#"
 *   insn=0x0000000000569A88 string=0x0000000000569A8C "`"
 *   insn=0x0000000000569A94 string=0x0000000000569A98 "a"
 *   insn=0x0000000000569A9C string=0x0000000000569AA0 " "
 *   insn=0x0000000000569AA0 string=0x0000000000569AA4 """
 *   insn=0x0000000000569AB4 string=0x000000000059FA40 "basic_string::_M_replace_aux"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_569A48(__int64 *a1, __int64 a2, char a3)
{
  size_t v4; // x20
  size_t result; // x0

  v4 = a2 - *a1;
  if ( *(_QWORD *)(*a1 - 24) == 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_M_replace_aux");
  sub_568CB8(a1, v4, 0, 1);
  *(_BYTE *)(*a1 + v4) = a3;
  result = *a1 + v4;
  *(_DWORD *)(*a1 - 8) = -1;
  return result;
}

