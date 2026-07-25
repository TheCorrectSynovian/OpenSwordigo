/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE294
 * Mangled: sub_4EE294
 * Demangled: sub_4EE294
 *
 * Callers: 2
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004EE1F0  sub_4EE1F0
 *
 * Callees: 2
 *   0x00000000004EE364  sub_4EE364
 *   0x00000000004EEB50  sub_4EEB50
 *
 * Referenced strings: 14
 *   insn=0x00000000004EE2A4 string=0x00000000004EE2A8 "aZ@"
 *   insn=0x00000000004EE2B0 string=0x00000000004EE2B4 "($@9"
 *   insn=0x00000000004EE2BC string=0x00000000004EE2CC "("
 *   insn=0x00000000004EE2C0 string=0x00000000004EE2C4 "("
 *   insn=0x00000000004EE2C4 string=0x00000000004EE2C8 "aZ@"
 *   insn=0x00000000004EE2D4 string=0x00000000004EE2D8 "!<@"
 *   insn=0x00000000004EE2D8 string=0x00000000004EE2DC "($@9"
 *   insn=0x00000000004EE2E0 string=0x00000000004EE2E4 "`"
 *   insn=0x00000000004EE2F0 string=0x00000000004EE2F4 "\t"
 *   insn=0x00000000004EE2F4 string=0x00000000004EE2F8 "?"
 *   insn=0x00000000004EE300 string=0x00000000004EE304 "($@9"
 *   insn=0x00000000004EE308 string=0x00000000004EE30C "`"
 *   insn=0x00000000004EE318 string=0x00000000004EE31C ""
 *   insn=0x00000000004EE320 string=0x00000000004EE324 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE294(__int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v2 + 176);
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  if ( (*(_BYTE *)(v3 + 9) & 3) != 0 )
  {
    sub_4EE364(v2);
    v3 = *(_QWORD *)(v2 + 176);
  }
  if ( *(int *)(v3 + 128) >= 4 && (*(_BYTE *)(*(_QWORD *)(v3 + 120) + 9LL) & 3) != 0 )
    sub_4EE364(v2);
  v4 = *(_QWORD *)(a1 + 32);
  if ( *(int *)(v4 + 168) >= 4 && (*(_BYTE *)(*(_QWORD *)(v4 + 160) + 9LL) & 3) != 0 )
    sub_4EE364(v2);
  result = sub_4EEB50(v2);
  *(_BYTE *)(v2 + 33) = 1;
  return result;
}

