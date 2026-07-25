/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520D04
 * Mangled: sub_520D04
 * Demangled: sub_520D04
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 4
 *   insn=0x0000000000520D18 string=0x0000000000520D1C "_"
 *   insn=0x0000000000520D18 string=0x0000000000520D2C "B"
 *   insn=0x0000000000520D38 string=0x0000000000520D40 "f"
 *   insn=0x0000000000520D38 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520D04(__int64 result, int a2)
{
  __int64 v2; // x3
  int v3; // w2

  v2 = *(_QWORD *)(result + 232);
  *(_DWORD *)(result + 28) = a2;
  v3 = *(_DWORD *)(result + 32);
  if ( !v2 )
  {
    v3 |= 1u;
    *(_DWORD *)(result + 32) = v3;
  }
  if ( (v3 & a2) != 0 )
    sub_565AD8("basic_ios::clear");
  return result;
}

