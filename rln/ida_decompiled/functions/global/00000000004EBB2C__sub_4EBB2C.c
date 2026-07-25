/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EBB2C
 * Mangled: sub_4EBB2C
 * Demangled: sub_4EBB2C
 *
 * Callers: 1
 *   0x00000000004EE534  sub_4EE534
 *
 * Callees: 2
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *
 * Referenced strings: 13
 *   insn=0x00000000004EBB3C string=0x00000000004EBB40 "t*@"
 *   insn=0x00000000004EBB48 string=0x00000000004EBB4C "k"
 *   insn=0x00000000004EBB4C string=0x00000000004EBB50 "h^"
 *   insn=0x00000000004EBB58 string=0x00000000004EBB5C "#"
 *   insn=0x00000000004EBB5C string=0x00000000004EBB60 "\t"
 *   insn=0x00000000004EBB74 string=0x00000000004EBB84 "h"
 *   insn=0x00000000004EBB84 string=0x00000000004EBB88 "\t"
 *   insn=0x00000000004EBB8C string=0x00000000004EBB90 ")"
 *   insn=0x00000000004EBB90 string=0x00000000004EBB94 ""
 *   insn=0x00000000004EBB94 string=0x00000000004EBB98 ""
 *   insn=0x00000000004EBB98 string=0x00000000004EBB9C "i"
 *   insn=0x00000000004EBB9C string=0x00000000004EBBA0 "u^"
 *   insn=0x00000000004EBBA0 string=0x00000000004EBBA4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EBB2C(__int64 a1, int a2)
{
  __int64 v3; // x20
  __int64 result; // x0
  __int64 v6; // x8

  v3 = *(_QWORD *)(a1 + 80);
  if ( a2 < -1 )
    sub_4EEDE0(a1);
  result = sub_4EED74(a1, *(_QWORD *)(a1 + 80), 40LL * *(int *)(a1 + 92), 40LL * a2);
  v6 = result + *(_QWORD *)(a1 + 40) - v3;
  *(_QWORD *)(a1 + 72) = result + 40LL * a2 - 40;
  *(_QWORD *)(a1 + 80) = result;
  *(_DWORD *)(a1 + 92) = a2;
  *(_QWORD *)(a1 + 40) = v6;
  return result;
}

