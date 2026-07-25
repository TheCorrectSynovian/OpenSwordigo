/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EF720
 * Mangled: sub_4EF720
 * Demangled: sub_4EF720
 *
 * Callers: 2
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004F17E0  sub_4F17E0
 *
 * Callees: 3
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004ED6C8  sub_4ED6C8
 *   0x00000000004F3DB4  sub_4F3DB4
 *
 * Referenced strings: 20
 *   insn=0x00000000004EF750 string=0x00000000004EF754 "\t"
 *   insn=0x00000000004EF798 string=0x00000000004EF79C "h\n@"
 *   insn=0x00000000004EF7A4 string=0x00000000004EF7A8 "\t\t"
 *   insn=0x00000000004EF7A8 string=0x00000000004EF7AC "i"
 *   insn=0x00000000004EF7AC string=0x00000000004EF7B0 "h\n@"
 *   insn=0x00000000004EF7B0 string=0x00000000004EF7B4 ")"
 *   insn=0x00000000004EF7B4 string=0x00000000004EF7B8 "?A"
 *   insn=0x00000000004EF7BC string=0x00000000004EF7D0 "\tA"
 *   insn=0x00000000004EF7C8 string=0x00000000004EF7CC "h\n@"
 *   insn=0x00000000004EF7C8 string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004EF7D0 string=0x00000000004EF7D4 "*"
 *   insn=0x00000000004EF7D4 string=0x00000000004EF7D8 "i\n"
 *   insn=0x00000000004EF7DC string=0x00000000004EF7E0 "\n"
 *   insn=0x00000000004EF7E0 string=0x00000000004EF7E4 "i"
 *   insn=0x00000000004EF7E4 string=0x00000000004EF7E8 "h\n@"
 *   insn=0x00000000004EF7E8 string=0x00000000004EF7EC ")"
 *   insn=0x00000000004EF7EC string=0x00000000004EF7F0 "?A"
 *   insn=0x00000000004EF7F4 string=0x00000000004EF808 "A"
 *   insn=0x00000000004EF800 string=0x00000000004EF804 "h\n@"
 *   insn=0x00000000004EF808 string=0x00000000004EF80C "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EF720(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x19
  __int64 v5; // x20
  __int64 v6; // x8
  __int64 result; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8

  v3 = a1[7];
  v5 = sub_4ED6C8(v3);
  *(_QWORD *)a2 = v5;
  v6 = a1[6];
  *(_QWORD *)(a2 + 24) = a1;
  *(_QWORD *)(a2 + 32) = v3;
  *(_QWORD *)(a2 + 16) = v6;
  a1[6] = a2;
  *(_QWORD *)(a2 + 48) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(a2 + 56) = -1;
  *(_QWORD *)(a2 + 40) = 0;
  *(_QWORD *)(a2 + 67) = 0;
  *(_QWORD *)(a2 + 60) = 0;
  *(_QWORD *)(v5 + 64) = a1[10];
  *(_BYTE *)(v5 + 115) = 2;
  result = sub_4F3DB4(v3, 0, 0);
  *(_QWORD *)(a2 + 8) = result;
  v8 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)v8 = result;
  *(_DWORD *)(v8 + 8) = 5;
  v9 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v3 + 56) - v9 <= 16 )
  {
    result = sub_4EBBB8(v3, 1);
    v9 = *(_QWORD *)(v3 + 16);
  }
  *(_QWORD *)(v3 + 16) = v9 + 16;
  *(_QWORD *)(v9 + 16) = v5;
  *(_DWORD *)(v9 + 24) = 9;
  v10 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v3 + 56) - v10 <= 16 )
  {
    result = sub_4EBBB8(v3, 1);
    v10 = *(_QWORD *)(v3 + 16);
  }
  *(_QWORD *)(v3 + 16) = v10 + 16;
  return result;
}

