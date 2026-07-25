/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562AD0
 * Mangled: sub_562AD0
 * Demangled: sub_562AD0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051F654  sub_51F654
 *   0x00000000005625D4  sub_5625D4
 *
 * Referenced strings: 27
 *   insn=0x0000000000562AF4 string=0x0000000000562AF8 "`"
 *   insn=0x0000000000562AFC string=0x0000000000562B00 "`"
 *   insn=0x0000000000562B00 string=0x0000000000562B8C "b\n@"
 *   insn=0x0000000000562B10 string=0x0000000000562B14 ")"
 *   insn=0x0000000000562B14 string=0x0000000000562B18 "(<H"
 *   insn=0x0000000000562B18 string=0x0000000000562B1C "'\P"
 *   insn=0x0000000000562B1C string=0x0000000000562B20 "&|X"
 *   insn=0x0000000000562B20 string=0x0000000000562B24 "%"
 *   insn=0x0000000000562B24 string=0x0000000000562B28 "$"
 *   insn=0x0000000000562B28 string=0x0000000000562B2C "#"
 *   insn=0x0000000000562B2C string=0x0000000000562B30 """
 *   insn=0x0000000000562B34 string=0x0000000000562B38 "!"
 *   insn=0x0000000000562B4C string=0x0000000000562B50 "a"
 *   insn=0x0000000000562B54 string=0x0000000000562B58 "A"
 *   insn=0x0000000000562B74 string=0x0000000000562B78 ""
 *   insn=0x0000000000562B78 string=0x0000000000562B7C ""
 *   insn=0x0000000000562B7C string=0x0000000000562B80 "\t"
 *   insn=0x0000000000562B8C string=0x0000000000562B90 "`"
 *   insn=0x0000000000562B90 string=0x0000000000562B94 "cZ@"
 *   insn=0x0000000000562B94 string=0x0000000000562B98 "_"
 *   insn=0x0000000000562B98 string=0x0000000000562B9C "dN@"
 *   insn=0x0000000000562BA0 string=0x0000000000562BA4 "b^@"
 *   insn=0x0000000000562BA4 string=0x0000000000562BA8 "d"
 *   insn=0x0000000000562BA8 string=0x0000000000562BAC "`"
 *   insn=0x0000000000562BAC string=0x0000000000562BB0 "b"
 *   insn=0x0000000000562BB0 string=0x0000000000562BB4 "`Z"
 *   insn=0x0000000000562BB4 string=0x0000000000562BB8 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_562AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  __int64 v10; // x3
  _BOOL8 v11; // x0
  __int64 v12; // x2
  __int64 v13; // x0

  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
    return -1;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v10 = *(_QWORD *)(a1 + 176);
    v5 = *(_QWORD *)(a1 + 152);
    v11 = *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 8) = v5;
    v13 = v10 + 4 * v11;
    *(_QWORD *)(a1 + 24) = v12;
    *(_QWORD *)(a1 + 176) = v13;
    *(_QWORD *)(a1 + 16) = v13;
    *(_BYTE *)(a1 + 192) = 0;
  }
  return sub_5625D4(a1, a2, 0, a3, v5, v6, v7, v8);
}

