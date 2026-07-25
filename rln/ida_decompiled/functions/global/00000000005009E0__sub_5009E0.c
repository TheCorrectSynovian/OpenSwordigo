/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005009E0
 * Mangled: sub_5009E0
 * Demangled: sub_5009E0
 *
 * Callers: 1
 *   0x00000000004EF598  sub_4EF598
 *
 * Callees: 2
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004F8650  sub_4F8650
 *
 * Referenced strings: 18
 *   insn=0x00000000005009EC string=0x00000000005009F0 "j&@"
 *   insn=0x00000000005009F8 string=0x00000000005009FC " "
 *   insn=0x0000000000500A00 string=0x0000000000500A04 "b""
 *   insn=0x0000000000500A04 string=0x0000000000500A08 "c*"
 *   insn=0x0000000000500A08 string=0x0000000000500A0C "hb"
 *   insn=0x0000000000500A0C string=0x0000000000500A10 "i""
 *   insn=0x0000000000500A10 string=0x0000000000500A14 "`B"
 *   insn=0x0000000000500A14 string=0x0000000000500A18 "A"
 *   insn=0x0000000000500A18 string=0x0000000000500A1C "B\t@"
 *   insn=0x0000000000500A28 string=0x0000000000500A2C "h&@"
 *   insn=0x0000000000500A34 string=0x0000000000500A38 "`"@"
 *   insn=0x0000000000500A38 string=0x0000000000500A3C ""
 *   insn=0x0000000000500A3C string=0x0000000000500A40 "\t"
 *   insn=0x0000000000500A40 string=0x0000000000500A44 "\t"
 *   insn=0x0000000000500A48 string=0x0000000000500A4C ""
 *   insn=0x0000000000500A4C string=0x0000000000500A50 "\t"
 *   insn=0x0000000000500A50 string=0x0000000000500A54 "\t"
 *   insn=0x0000000000500A5C string=0x0000000000500A64 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5009E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // x10
  __int64 v6; // x0
  __int64 *v7; // x8
  _QWORD *v8; // x0
  unsigned __int8 *v10; // x8
  __int64 result; // x0

  v5 = *(__int64 **)(a2 + 72);
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = a1;
  *(_QWORD *)(a2 + 64) = a3;
  *(_QWORD *)(a2 + 80) = a4;
  *(_BYTE *)(a2 + 88) = 46;
  *(_DWORD *)(a2 + 32) = 287;
  *(_QWORD *)(a2 + 4) = 0x100000001LL;
  v6 = sub_4EED74(a1, *v5, v5[2], 32);
  v7 = *(__int64 **)(a2 + 72);
  *v7 = v6;
  v7[2] = 32;
  v8 = *(_QWORD **)(a2 + 64);
  if ( (*v8)-- )
  {
    v10 = (unsigned __int8 *)v8[1];
    v8[1] = v10 + 1;
    result = *v10;
  }
  else
  {
    result = sub_4F8650((__int64)v8);
  }
  *(_DWORD *)a2 = result;
  return result;
}

