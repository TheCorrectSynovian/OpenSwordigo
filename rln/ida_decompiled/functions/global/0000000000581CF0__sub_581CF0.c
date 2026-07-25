/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581CF0
 * Mangled: sub_581CF0
 * Demangled: sub_581CF0
 *
 * Callers: 1
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 1
 *   0x0000000000581C30  sub_581C30
 *
 * Referenced strings: 5
 *   insn=0x0000000000581CF8 string=0x0000000000581CFC "S"
 *   insn=0x0000000000581D14 string=0x0000000000581D18 "V@"
 *   insn=0x0000000000581D18 string=0x0000000000581D1C "t"
 *   insn=0x0000000000581D44 string=0x0000000000581D48 "s"
 *   insn=0x0000000000581D78 string=0x0000000000581D7C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581CF0(__int64 result, __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD), __int64 a3)
{
  unsigned __int64 v3; // x19
  __int64 v4; // x24
  __int64 v7; // x22
  unsigned __int64 i; // x20
  __int64 v9; // x20
  int v10; // w19
  __int64 v11; // x23
  int v12; // w4
  __int64 v13; // x0

  v3 = *(_QWORD *)(a3 + 8);
  v4 = result;
  v7 = a3 + 16;
  for ( i = v3 >> 1; ; result = sub_581C30(v4, a2, v7, i, v3) )
  {
    LODWORD(i) = i - 1;
    if ( (i & 0x80000000) != 0 )
      break;
  }
  v9 = 0;
  v10 = v3 - 1;
  v11 = v7 + 8LL * v10;
  while ( v10 > 0 )
  {
    v12 = v10;
    v13 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(v11 + v9);
    *(_QWORD *)(v11 + v9) = v13;
    --v10;
    v9 -= 8;
    result = sub_581C30(v4, a2, v7, 0, v12);
  }
  return result;
}

