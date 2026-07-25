/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4E10
 * Mangled: sub_4F4E10
 * Demangled: sub_4F4E10
 *
 * Callers: 1
 *   0x00000000004F3230  sub_4F3230
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 8
 *   insn=0x00000000004F4E1C string=0x00000000004F4E20 "6"
 *   insn=0x00000000004F4E30 string=0x00000000004F4E34 ""
 *   insn=0x00000000004F4E50 string=0x00000000004F4E54 "h"
 *   insn=0x00000000004F4E58 string=0x00000000004F4E5C "h"
 *   insn=0x00000000004F4E5C string=0x00000000004F4E60 "iu"
 *   insn=0x00000000004F4E68 string=0x00000000004F4E6C "\t%@9)"
 *   insn=0x00000000004F4E6C string=0x00000000004F4E70 ")"
 *   insn=0x00000000004F4E70 string=0x00000000004F4E74 "\t%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F4E10(__int64 a1)
{
  __int64 i; // x21
  char *v3; // x20
  size_t v4; // x0
  __int64 result; // x0
  __int64 v6; // x8

  for ( i = 37; i != 54; ++i )
  {
    v3 = off_6D88B0[i - 37];
    v4 = strlen(v3);
    result = sub_4F356C(a1, v3, v4);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + i * 8) = result;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + i * 8);
    *(_BYTE *)(v6 + 9) |= 0x20u;
  }
  return result;
}

