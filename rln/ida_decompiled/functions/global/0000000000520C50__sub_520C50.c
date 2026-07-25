/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520C50
 * Mangled: sub_520C50
 * Demangled: sub_520C50
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 6
 *   insn=0x0000000000520C5C string=0x0000000000520C60 "!"
 *   insn=0x0000000000520C68 string=0x0000000000520C6C "#"
 *   insn=0x0000000000520C6C string=0x0000000000520C70 "a"
 *   insn=0x0000000000520C74 string=0x0000000000520C78 "?"
 *   insn=0x0000000000520C78 string=0x0000000000520C7C "a"
 *   insn=0x0000000000520C88 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520C50(__int64 result, int a2)
{
  int v2; // w1
  int v3; // w2

  v2 = a2 | *(_DWORD *)(result + 32);
  v3 = *(_DWORD *)(result + 28);
  if ( !*(_QWORD *)(result + 232) )
    v2 |= 1u;
  *(_DWORD *)(result + 32) = v2;
  if ( (v2 & v3) != 0 )
    sub_565AD8("basic_ios::clear");
  return result;
}

