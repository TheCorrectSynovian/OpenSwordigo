/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545CA0
 * Mangled: sub_545CA0
 * Demangled: sub_545CA0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000545B8C  sub_545B8C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 3
 *   insn=0x0000000000545CC0 string=0x0000000000545CC4 "b&@"
 *   insn=0x0000000000545CC8 string=0x0000000000545CCC "`""
 *   insn=0x0000000000545CD0 string=0x0000000000545CD4 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545CA0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 && (a3 & 0x8000000000000000LL) == 0 )
  {
    sub_568CB8(a1 + 72, 0, *(_QWORD *)(*(_QWORD *)(a1 + 72) - 24LL), 0);
    sub_545B8C(a1, a2, a3, 0);
  }
  return a1;
}

