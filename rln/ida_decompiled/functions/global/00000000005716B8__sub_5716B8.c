/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005716B8
 * Mangled: sub_5716B8
 * Demangled: sub_5716B8
 *
 * Callers: 2
 *   0x00000000005716D4  sub_5716D4
 *   0x00000000005716DC  sub_5716DC
 *
 * Callees: 1
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 3
 *   insn=0x00000000005716C0 string=0x00000000005716C4 "!<E"
 *   insn=0x00000000005716C4 string=0x00000000005716C8 "!@"
 *   insn=0x00000000005716C8 string=0x00000000005716CC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5716B8(__int64 a1)
{
  *(_QWORD *)(a1 + 24) = off_6B6B30;
  return sub_5221DC((_QWORD *)(a1 + 24));
}

