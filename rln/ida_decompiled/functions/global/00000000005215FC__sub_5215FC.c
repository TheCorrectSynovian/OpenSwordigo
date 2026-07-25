/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005215FC
 * Mangled: sub_5215FC
 * Demangled: sub_5215FC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 7
 *   insn=0x0000000000521608 string=0x000000000052160C "!"
 *   insn=0x0000000000521614 string=0x0000000000521618 "#"
 *   insn=0x0000000000521618 string=0x000000000052161C "a"
 *   insn=0x0000000000521620 string=0x0000000000521624 "?"
 *   insn=0x0000000000521624 string=0x0000000000521628 "a"
 *   insn=0x0000000000521634 string=0x000000000052163C "'"
 *   insn=0x0000000000521634 string=0x000000000059DC50 "basic_ios::clear"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5215FC(__int64 result, int a2)
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

