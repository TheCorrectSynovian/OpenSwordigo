/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED7DC
 * Mangled: sub_4ED7DC
 * Demangled: sub_4ED7DC
 *
 * Callers: 1
 *   0x00000000004EDB10  sub_4EDB10
 *
 * Callees: 1
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 5
 *   insn=0x00000000004ED7EC string=0x00000000004ED7F0 "(,@9I"
 *   insn=0x00000000004ED7F0 string=0x00000000004ED7F4 "I"
 *   insn=0x00000000004ED7F8 string=0x00000000004ED7FC "J"
 *   insn=0x00000000004ED7FC string=0x00000000004ED800 ""
 *   insn=0x00000000004ED808 string=0x00000000004ED80C "Z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED7DC(__int64 a1, __int64 a2)
{
  __int64 v2; // x9
  __int64 v3; // x10

  v2 = 8;
  if ( *(_BYTE *)(a2 + 10) )
    v2 = 16;
  v3 = 56;
  if ( !*(_BYTE *)(a2 + 10) )
    v3 = 48;
  return sub_4EED74(a1, a2, v3 + (*(unsigned __int8 *)(a2 + 11) - 1LL) * v2, 0);
}

