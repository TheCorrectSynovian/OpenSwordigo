/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545C34
 * Mangled: sub_545C34
 * Demangled: sub_545C34
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000545B8C  sub_545B8C
 *
 * Referenced strings: 2
 *   insn=0x0000000000545C40 string=0x0000000000545C44 "B"
 *   insn=0x0000000000545C44 string=0x0000000000545C48 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545C34(__int64 a1, int a2)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v4; // x1

  v2 = a2 & 3;
  *(_DWORD *)(a1 + 64) = a2;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    v3 = *(_QWORD *)(v4 - 24);
  return sub_545B8C(a1, v4, 0, v3);
}

