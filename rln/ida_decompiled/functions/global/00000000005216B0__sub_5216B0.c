/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005216B0
 * Mangled: sub_5216B0
 * Demangled: sub_5216B0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 3
 *   insn=0x00000000005216C4 string=0x00000000005216C8 "_"
 *   insn=0x00000000005216C4 string=0x00000000005216D8 "B"
 *   insn=0x00000000005216E4 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5216B0(__int64 result, int a2)
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

