/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520E7C
 * Mangled: sub_520E7C
 * Demangled: sub_520E7C
 *
 * Callers: 1
 *   0x0000000000522A18  sub_522A18
 *
 * Callees: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 4
 *   insn=0x0000000000520E7C string=0x0000000000520E80 "?"
 *   insn=0x0000000000520E94 string=0x0000000000520E98 "_"
 *   insn=0x0000000000520EB0 string=0x0000000000520EB8 ""
 *   insn=0x0000000000520EB0 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520E7C(__int64 a1, __int64 a2)
{
  int v2; // w3
  _BOOL4 v3; // w2
  __int64 v4; // x4

  v2 = *(_DWORD *)(a1 + 28);
  v3 = a2 == 0;
  v4 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 232) = a2;
  if ( (v3 & v2) != 0 )
    sub_565AD8("basic_ios::clear");
  return v4;
}

