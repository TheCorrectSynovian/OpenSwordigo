/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568F74
 * Mangled: sub_568F74
 * Demangled: sub_568F74
 *
 * Callers: 4
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 8
 *   insn=0x0000000000568F88 string=0x0000000000568F8C "c"
 *   insn=0x0000000000568F8C string=0x0000000000568F90 "?"
 *   insn=0x0000000000568F90 string=0x0000000000568F94 "H"
 *   insn=0x0000000000568F94 string=0x0000000000568F98 "d"
 *   insn=0x0000000000568FA4 string=0x0000000000568FA8 "D"
 *   insn=0x0000000000568FBC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000568FC0 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x0000000000568FC4 string=0x0000000000568FC8 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_568F74(__int64 *a1, size_t a2, unsigned __int64 a3)
{
  size_t v4; // x3

  v4 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v4 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v4);
  if ( v4 - a2 <= a3 )
    a3 = v4 - a2;
  sub_568CB8(a1, a2, a3, 0);
  return a1;
}

