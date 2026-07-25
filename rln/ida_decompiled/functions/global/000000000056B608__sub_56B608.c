/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B608
 * Mangled: sub_56B608
 * Demangled: sub_56B608
 *
 * Callers: 3
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 6
 *   insn=0x000000000056B638 string=0x000000000056B63C " "
 *   insn=0x000000000056B660 string=0x000000000056B664 " "
 *   insn=0x000000000056B678 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056B67C string=0x000000000059F9F8 "basic_string::copy"
 *   insn=0x000000000056B684 string=0x000000000056B688 "!"
 *   insn=0x000000000056B68C string=0x000000000056B690 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_56B608(__int64 *a1, wchar_t *s1, size_t a3, unsigned __int64 a4)
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
    wmemcpy(s1, (const wchar_t *)(v4 + 4 * a4), v7);
    return v7;
  }
  *s1 = *(_DWORD *)(v4 + 4 * a4);
  return 1;
}

