/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567B48
 * Mangled: sub_567B48
 * Demangled: sub_567B48
 *
 * Callers: 6
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052E854  sub_52E854
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *
 * Callees: 2
 *   0x0000000000201760  .memcpy
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 5
 *   insn=0x0000000000567B78 string=0x0000000000567B7C " "
 *   insn=0x0000000000567BA0 string=0x0000000000567BA4 " "
 *   insn=0x0000000000567BB8 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000567BBC string=0x000000000059F9F8 "basic_string::copy"
 *   insn=0x0000000000567BC4 string=0x0000000000567BC8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_567B48(__int64 *a1, _BYTE *a2, size_t a3, unsigned __int64 a4)
{
  __int64 v4; // x5
  unsigned __int64 v5; // x4
  size_t v6; // x4
  size_t v7; // x19

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( a4 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v5);
  v6 = v5 - a4;
  if ( v6 > a3 )
    v7 = a3;
  else
    v7 = v6;
  if ( !v7 )
    return v7;
  if ( v7 != 1 )
  {
    memcpy(a2, (const void *)(v4 + a4), v7);
    return v7;
  }
  *a2 = *(_BYTE *)(v4 + a4);
  return 1;
}

